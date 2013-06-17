## Valatest Framework

## Installation

    #cmake .
    #sudo make install

## Requirements

Vala-0.20.1

CMake 2.8.4


### Assertions
* `assert_true`
* `assert_false`
* `assert_null`
* `assert_not_null`
* `fail`

You can optionally add a message after the condition/object

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