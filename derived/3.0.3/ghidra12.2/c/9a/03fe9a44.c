
uint FUN_03fe9a44(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x34e100) + 0x10))(*(long **)(param_1 + 0x34e100),0);
  plVar3 = *(long **)(param_1 + 0x34e100);
  if ((uVar2 & 1) == 0) {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3,0);
    uVar1 = uVar1 >> 8 & 0xff;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,0);
    uVar1 = 0;
  }
  return uVar1;
}

