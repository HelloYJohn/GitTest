#!/usr/bin/emacs --script
;;; compress
(defun compress (lst)
  (if (null (car lst))
      nil
      (compress-d 1 lst)
      )
  )


(defun compress-d (n lst)
  (if (not (equal (car lst) (car (cdr lst))))
      (if (= n 1)
          (cons (car lst) (compress (cdr lst)))
          (cons (cons n (car lst)) (compress (cdr lst)))
          )
     (compress-d (+ n 1) (cdr lst))
    )
  )
(compress nil)
(compress '(1))
(compress '(1 1 2))
(compress '(1 2 1 1 3 3 22 22 33 33 44 44))
;;; uncompress
(defun uncompress (lst)
  (if (null (car lst))
      nil
    (if (not (consp (car lst)))
        (cons (car lst) (uncompress (cdr lst)))
        (cons (uncompress-d (car (car lst)) (cdr (car lst))) (uncompress (cdr lst)))
      )
    )
  )
(defun uncompress-d (n lst)
  (if (= n 0)
      nil
    (cons (car lst) (uncompress-d (- n 1) lst))
    )
  )
(uncompress nil)
(uncompress '(1))
(uncompress '(1 3))
(uncompress '(1 3 (2 3)))
(uncompress '((4 1) 3 (4 5)))