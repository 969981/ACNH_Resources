
uint FUN_003b8780(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = FUN_003b9df8(*(undefined8 *)(param_1 + 8));
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    if ((char)plVar3[1] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    }
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}

