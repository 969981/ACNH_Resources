
void FUN_002d52fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(long *)(param_2 + 0x60) != 0) {
    plVar1 = *(long **)(param_2 + 0x38);
    *(long **)(param_2 + 0x58) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
      (**(code **)**(undefined8 **)(param_2 + 0x58))();
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    plVar1 = *(long **)(param_2 + 0x40);
    *(long **)(param_2 + 0x58) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
      (**(code **)**(undefined8 **)(param_2 + 0x58))();
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar1 = *(long **)(param_2 + 0x48);
    *(long **)(param_2 + 0x58) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
      (**(code **)**(undefined8 **)(param_2 + 0x58))();
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    plVar1 = *(long **)(param_2 + 0x50);
    *(long **)(param_2 + 0x58) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
      (**(code **)**(undefined8 **)(param_2 + 0x58))();
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
    }
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

