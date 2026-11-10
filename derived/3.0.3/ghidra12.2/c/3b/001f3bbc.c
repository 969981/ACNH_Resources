
undefined4 FUN_001f3bbc(int *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  if (*param_1 == 3) {
    uVar2 = 4;
  }
  else {
    *param_1 = 2;
    (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
    if (*(long *)(param_1 + 0x52) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x52) + 8);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar2 = FUN_001e0d04(uVar2);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar2;
}

