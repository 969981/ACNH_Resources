
uint FUN_003b8698(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = FUN_003ba228(*(undefined8 *)(param_1 + 8));
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    if ((char)plVar3[1] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,param_2,param_3);
    }
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}

