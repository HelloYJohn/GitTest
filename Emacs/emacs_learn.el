* 简介
** 1.1
; Lisp
(defun sum (n)
  (let ((s 0) )
    (dotimes (i n s)
      (incf s i))
    )
  )
(sum 100)

; Lisp
(defun addn (n)
  #'(lambda (x)
      (+ x n))
  )
(addn 10)1

