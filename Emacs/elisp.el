<<<<<<< HEAD
1. define function
(defun hello-world (name)
  "Say Hello to user whose name is NAME."
  (message "Hello, %s" name))
(hello-world "John")
2. define variable
(defvar  foo "Did I have value?" "A demo variable")
foo
(defvar foo "I'm bar" "A demo variable named \"bar\"")
foo
3. local variable
(defun circle-area (radix)
  (let ((PI 3.1415926) area)
  (setq area (* pi radix radix) )
  (message "直径为%.2f的圆面积是%.2f" radix area)
    )
  )
(defun circle-area2 (radix)
  (let* ((PI 3.1415926) (area (* PI radix radix)) )
    (message "直径为%.2f 的圆面积是%.2f" radix area)
    )
  )
(circle-area2 100)
4. 
=======
(defun our-copy-list (lst)
  (if (atom lst)
      lst
    (cons (car lst) (our-copy-list (cdr lst))))
  )
(our-copy-list x)
(setf x '(a b c)
      y (our-copy-list x))
(eql x y)
(defun n-elts (elt n)
     (if (> n 1)
         (list n elt)
       elt))

(defun compr (elt n lst)
  (if (null lst)
      (list (n-elts elt n))
    (let ((next (car lst)))
      (if (eql next elt)
          (compr elt (+ n 1) (cdr lst))
        (cons (n-elts elt n)
              (compr next 1 (cdr lst))))))
  )

(defun compress (x)
  (if (consp x)
      (compr (car x) 1 (cdr x))
    x)
  )

(compress '(1 1 1 0 1 0 0 0 0 1))
>>>>>>> bd03c3941b06f59a2e777581ccaadb6002c83357
(defun enigma (x)
      (and (not (null x))
           (or (null (car x))
               (enigma (cdr x)))))
(enigma '(1))