## Valatest Framework

## Installation

    #cmake .
    #sudo make install

## Requirements

Vala-0.18.1

CMake 2.8.4

GCC 4.6.3 or Clang 3.2


### Assertions
* `assert_true(bool)`
* `assert_false(bool)`
* `assert_null(Object)`
* `assert_not_null(Object)`
* `fail()`

Usage:

    using Valatest;

    public void main(string[] args) {
         assert_true(true);
         assert_true(1 == 1, "message");
         assert_false(false);
         assert_false(1 > 1, "message");
         assert_null(null);
         assert_null(null, "message");
         assert_not_null(new Object());
         assert_not_null(new Object(), "message");
         fail();
         fail("message");
    }


### TestCase class

Usage:

    public MyTest () {
        // assign a name for this class
        base ("MyTest");
        // add test methods
        add_test ("test_example", test_example);
        add_test ("another_test_example", another_test_example);
        }
        public override void set_up ()  {
            // setup your tests 
        }
        public void test_example () {
            // test code goes here
        }
        public void another_test_example () {
            // test code goes here
        }
        
        public override void tear_down ()  {
            // tear down your test
        }
    }
    public static int main(string[] args) {
        Test.init (ref args);
        TestSuite.get_root ().add_suite (new MyTest ().get_suite ());
        return Test.run ();
    }

#### Planned options for future
* DBUnit
* Hamcrest Matchers