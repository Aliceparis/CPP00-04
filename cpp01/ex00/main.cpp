#include "Zombie.hpp"

int main(void)
{
    Zombie* heap_zombie;
    heap_zombie = newZombie("heap");
    heap_zombie->annonce();
    delete heap_zombie;

    Zombie  stack_zombie("stack");
    stack_zombie.annonce();

    randomChump("random");
    
    return (0);
}
/*
heap_zombie: 是在heap上面建立的，需要手动delete然后删除
stack_zombie: 在stack上面建立，可以在main这个fonction中随意调动使用，一旦main这个函数结束，他就会自动删除
random_zombie：实际上也是在stack上面建立的，但是一旦这个函数调动结束，执行完annonce，random这个对象就立刻删除而无法在继续使用
*/