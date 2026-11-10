
void FUN_0022c710(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 auStack_50 [32];
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 1,0x40);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_3,param_4);
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,auStack_50);
    (*(code *)**(undefined8 **)*param_1)();
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 9,0x40);
    plVar2 = (long *)*param_1;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 8))(plVar2,auStack_50,uVar1);
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,param_2);
  }
  return;
}

