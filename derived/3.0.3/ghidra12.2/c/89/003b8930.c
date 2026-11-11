
uint FUN_003b8930(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = FUN_003b9c9c(*(undefined8 *)(param_1 + 8),param_3,param_2);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    if ((char)plVar3[1] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_3,param_2);
    }
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}

