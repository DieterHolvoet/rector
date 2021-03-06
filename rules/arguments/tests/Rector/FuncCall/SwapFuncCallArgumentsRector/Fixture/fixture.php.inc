<?php

namespace Rector\Arguments\Tests\Rector\FuncCall\SwapFuncCallArgumentsRector\Fixture;

final class Fixture
{
    public function run($one, $two)
    {
        return some_function($one, $two);
    }
}

?>
-----
<?php

namespace Rector\Arguments\Tests\Rector\FuncCall\SwapFuncCallArgumentsRector\Fixture;

final class Fixture
{
    public function run($one, $two)
    {
        return some_function($two, $one);
    }
}

?>
