* function and variable
(defun NAME ARGLIST [DOCSTRING] BODY...)
(defvar SYMBOL &optional INITVALUE DOCSTRING)
(setq SYM VAL SYM VAL ...)
(let VARLIST BODY...)
(let* VARLIST BODY...)
(lambda ARGS [DOCSTRING] [INTERACTIVE] BODY)
(progn BODY ...)
(if COND THEN ELSE...)
(cond CLAUSES...)
(when COND BODY ...)
(unless COND BODY ...)
(when COND BODY ...)
(or CONDITIONS ...)
(and CONDITIONS ...)
(not OBJECT)

* number
;; 测试函数
(integerp OBJECT)
(floatp OBJECT)
(numberp OBJECT)
(zerop NUMBER)
(wholenump OBJECT)
;; 比较函数
(> NUM1 NUM2)
(< NUM1 NUM2)
(>= NUM1 NUM2)
(<= NUM1 NUM2)
(= NUM1 NUM2)
(eql OBJ1 OBJ2)
(/= NUM1 NUM2)
;; 转换函数
(float ARG)
(truncate ARG &optional DIVISOR)
(floor ARG &optional DIVISOR)
(ceiling ARG &optional DIVISOR)
(round ARG &optional DIVISOR)
;; 运算
(+ &rest NUMBERS-OR-MARKERS)
(- &optional NUMBER-OR-MARKER &rest MORE-NUMBERS-OR-MARKERS)
(* &rest NUMBERS-OR-MARKERS)
(/ DIVIDEND DIVISOR &rest DIVISORS)
(1+ NUMBER)
(1- NUMBER)
(abs ARG)
(% X Y)
(mod X Y)
(sin ARG)
(cos ARG)
(tan ARG)
(asin ARG)
(acos ARG)
(atan Y &optional X)
(sqrt ARG)
(exp ARG)
(expt ARG1 ARG2)
(log ARG &optional BASE)
(log10 ARG)
(logb ARG)
;; 随机数
(random &optional N)

* string
;; 测试函数
(stringp OBJECT)
(string-or-null-p OBJECT)
(char-or-string-p OBJECT)
;; 构建函数
(make-string LENGTH INIT)
(string &rest CHARACTERS)
(substring STRING FROM &optional TO)
(concat &rest SEQUENCES)
;; 比较函数
(char-equal C1 C2)
(string= S1 S2)
(string-equal S1 S2)
(string< S1 S2)
;; 转换函数
(char-to-string CHAR)
(string-to-char STRING)
(number-to-string NUMBER)
(string-to-number STRING &optional BASE)
(downcase OBJ)
(upcase OBJ)
(capitalize OBJ)
(upcase-initials OBJ)
(format STRING &rest OBJECTS)
;; 查找与替换
(string-match REGEXP STRING &optional START)
(replace-match NEWTEXT &optional FIXEDCASE LITERAL STRING SUBEXP)
(replace-regexp-in-string REGEXP REP STRING &optional FIXEDCASE LITERAL SUBEXP START)
(subst-char-in-string FROMCHAR TOCHAR STRING &optional INPLACE)

* cons and list
;; 列表测试
(consp OBJECT)
(listp OBJECT)
(null OBJECT)
;; 列表构造
(cons CAR CDR)
(list &rest OBJECTS)
(append &rest SEQUENCES)
;; 访问列表元素
(car LIST)
(cdr LIST)
(cadr X)
(caar X)
(cddr X)
(cdar X)
(nth N LIST)
(nthcdr N LIST)
(last LIST &optional N)
(butlast LIST &optional N)
;; 修改 cons cell
(setcar CELL NEWCAR)
(setcdr CELL NEWCDR)
;; 列表操作
(push NEWELT LISTNAME)
(pop LISTNAME)
(reverse LIST)
(nreverse LIST)
(sort LIST PREDICATE)
(copy-sequence ARG)
(nconc &rest LISTS)
(nbutlast LIST &optional N)
;; 集合函数
(delete-dups LIST)
(memq ELT LIST)
(member ELT LIST)
(delq ELT LIST)
(delete ELT SEQ)
(remq ELT LIST)
(remove ELT SEQ)
;; 关联列表
(assoc KEY LIST)
(assq KEY LIST)
(assoc-default KEY ALIST &optional TEST DEFAULT)
(rassoc KEY LIST)
(rassq KEY LIST)
;; 遍历函数
(mapc FUNCTION SEQUENCE)
(mapcar FUNCTION SEQUENCE)
(dolist (VAR LIST [RESULT]) BODY...)
;; 其它
(number-sequence FROM &optional TO INC)
(split-string STRING &optional SEPARATORS OMIT-NULLS)
(mapconcat FUNCTION SEQUENCE SEPARATOR)
(identity ARG)

* sequence
;; 测试函数
(sequencep OBJECT)
(arrayp OBJECT)
(vectorp OBJECT)
(char-table-p OBJECT)
(bool-vector-p OBJECT)
;; 序列函数
(length SEQUENCE)
(safe-length LIST)
(elt SEQUENCE N)
(copy-sequence ARG)
(copy-tree TREE &optional VECP)
;; 数组函数
(vector &rest OBJECTS)
(make-vector LENGTH INIT)
(aref ARRAY IDX)
(aset ARRAY IDX NEWELT)
(vconcat &rest SEQUENCES)
(append &rest SEQUENCES)

;; the diff eql and equal
eql the same objects;
equal the same elements of objects.
