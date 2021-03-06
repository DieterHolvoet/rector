<?php

namespace Rector\DeadCode\Tests\Rector\Class_\RemoveEmptyAbstractClassRector\Fixture;

abstract class AnotherAbstractClassMulti
{
     public function getName()
     {
        return 'name';
     }
}

abstract class SomeAbstractClassMulti1 extends AnotherAbstractClassMulti
{
}

abstract class SomeAbstractClassMulti2 extends SomeAbstractClassMulti1
{
}

class MultiExtends extends SomeAbstractClassMulti2
{
}

?>
-----
<?php

namespace Rector\DeadCode\Tests\Rector\Class_\RemoveEmptyAbstractClassRector\Fixture;

abstract class AnotherAbstractClassMulti
{
     public function getName()
     {
        return 'name';
     }
}

class MultiExtends extends \Rector\DeadCode\Tests\Rector\Class_\RemoveEmptyAbstractClassRector\Fixture\AnotherAbstractClassMulti
{
}

?>
