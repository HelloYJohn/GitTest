# -*- coding: utf-8 -*-
# file

import os
fr = open('test.py')
line = fr.readline()
print(line)
# keyword
import keyword
print(keyword.kwlist)

# condition
if True:
    print("True")
else:
    print("False")

# input
#input("\n\n按下enter键后退出")

# loop
import sys
#for i in (1, 2, 3, 4):
#for i in [1, 2, 3, 4]:
for i in {1, 2, 3, 4}:
    print(i)


# type isinstance
a, b, c, d = 20, 5.5, True, 4+3j
print(type(a), type(b), type(c), type(d))
print(isinstance(a, int))
print(isinstance(d, complex))

# list
list = ['abcd', 686, 2.23, 'runoob', 70.2]
print(list)
print(list[0])
print(list[0:3])
print(list*2)

# tuple
tuple = ('abcd', 686, 2.23, 'runoob', 70.2)
print(tuple)
print(tuple*2)

# set
set = {'abcd', 686, 2.23, 'runoob', 70.2}
print(set)
print(set)

# dict
dict = {}
dict['one'] = '1'
dict[2] = 100
print(dict['one'])

# id 获取地址
a = 2.23
print(id(a))
b = 2.23
if (a is b):
    print("a 和 b有相同的标识")
if (id(a) == id(b)):
    print("a 和 b有相同的标识")

a, b = 0, 1
while b < 10:
    print(b)
    a, b = b, a+b


class Employee:
    """docstring for Employee"""
    empCount = 0
    def __init__(self, name, salary):
        super(Employee, self).__init__()
        self.name = name
        self.salary = salary
        Employee.empCount += 1

    def displayCount(self):
        print("Total Employee %d" % Employee.empCount)

    def displayEmployee(self):
        print("Name: ", self.name, ", Salary: ", self.salary)

class Test:
    def prt(self):
        print(self)
        print(self.__class__)
 
t = Test()
t.prt()

"创建 Employee 类的第一个对象"
emp1 = Employee("Zara", 2000)
"创建 Employee 类的第二个对象"
emp2 = Employee("Manni", 5000)
emp1.displayEmployee()
emp2.displayEmployee()
print ("Total Employee %d" % Employee.empCount)

if (hasattr(emp1, 'age')):    # 如果存在 'age' 属性返回 True。
    print(getattr(emp1, 'age'))    # 返回 'age' 属性的值
else:
    setattr(emp1, 'age', 8) # 添加属性 'age' 值为 8
    print(getattr(emp1, 'age'))
    delattr(emp1, 'age')    # 删除属性 'age'
print ("Employee.__doc__:", Employee.__doc__)
print ("Employee.__name__:", Employee.__name__)
print ("Employee.__module__:", Employee.__module__)
print ("Employee.__bases__:", Employee.__bases__)
print ("Employee.__dict__:", Employee.__dict__)


a = 40      # 创建对象  <40>
b = a       # 增加引用， <40> 的计数
c = [b]     # 增加引用.  <40> 的计数

del a       # 减少引用 <40> 的计数
b = 100     # 减少引用 <40> 的计数
c[0] = -1   # 减少引用 <40> 的计数

class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    
    def __del__(self):
        class_name = self.__class__.__name__
        print(class_name, "del")

pt1 = Point()
pt2 = pt1
pt3 = pt1
print(id(pt1), id(pt2), id(pt3))
del pt1
del pt2
del pt3

class Parent:        # 定义父类
   parentAttr = 100
   def __init__(self):
      print ("调用父类构造函数")
 
   def parentMethod(self):
      print ('调用父类方法')
 
   def setAttr(self, attr):
      Parent.parentAttr = attr
 
   def getAttr(self):
      print ("父类属性 :", Parent.parentAttr)
 
class Child(Parent): # 定义子类
   def __init__(self):
      super(Child, self).__init__()
      print ("调用子类构造方法")
 
   def childMethod(self):
      print ('调用子类方法 child method')
 
c = Child()          # 实例化子类
c.childMethod()      # 调用子类的方法
c.parentMethod()     # 调用父类方法
c.setAttr(200)       # 再次调用父类的方法
c.getAttr()          # 再次调用父类的方法

class Vector:
   def __init__(self, a, b):
      self.a = a
      self.b = b
 
   def __str__(self):
      return 'Vector (%d, %d)' % (self.a, self.b)
   
   def __add__(self,other):
      return Vector(self.a + other.a, self.b + other.b)
 
v1 = Vector(2,10)
v2 = Vector(5,-2)
print (v1 + v2)

class JustCounter:
    __secretCount = 0  # 私有变量
    publicCount = 0    # 公开变量
 
    def count(self):
        self.__secretCount += 1
        self.publicCount += 1
        print (self.__secretCount)
 
counter = JustCounter()
counter.count()
counter.count()
print (counter.publicCount)
#print (counter.__secretCount)  # 报错，实例不能访问私有变量
print (counter._JustCounter__secretCount)

