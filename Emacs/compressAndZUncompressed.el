#!/usr/bin/emacs --script
;;; compress
(defun compress (lst)
  (if (null (car lst))
      nil
    (compress-d 1 lst)
      )
  )
(defun compress-d (n lst)
  (if (not (equal (car lst) (car (cdr lst))) )
      (if (= 1 n)
          (cons (car lst) (compress (cdr lst)))
        (cons (cons n (car lst)) (compress (cdr lst)))
        )
    (compress-d (+ n 1) (cdr lst))
    )
  )

(compress nil)
(compress '(1))
(compress '(1 1))
(compress '(1 3 4 4 1 2 3 33 33 33 4 nil))

;;; uncompressed
(defun uncompressed (lst)
  (if (null (car lst))
      nil
    (if (not (consp (car lst)))
        (cons (car lst) (uncompressed (cdr lst)))
      (cons (uncompressed-d (car (car lst)) (cdr (car lst))) (uncompressed (cdr lst)))
      )
    )
  )
(defun uncompressed-d (n lst)
  (if (= 0 n)
      nil
    (cons (car lst) (uncompressed-d (- n 1) lst))
    )
  )
(uncompressed nil)
(uncompressed '(1))
(uncompressed '(1 2))
(uncompressed '((4 2) 3))
(uncompressed '((3 44) (8 1) (9 100) nil))