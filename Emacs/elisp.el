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