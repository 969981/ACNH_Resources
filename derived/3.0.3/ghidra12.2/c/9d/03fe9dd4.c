
uint FUN_03fe9dd4(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x34e10e) == '\0') {
    uVar1 = 3;
  }
  else {
    uVar1 = ((*(byte *)(param_1 + 0x34e10d) >> 6 ^ 0xffffffff) & 2) + 2;
  }
  if (*(uint *)(param_1 + 0x34e114) < uVar1) {
    uVar1 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x34e100);
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
    plVar2 = *(long **)(param_1 + 0x34e100);
    if ((uVar3 & 1) == 0) {
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar1);
      uVar1 = uVar1 >> 8 & 0xff;
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
      uVar1 = 0;
    }
  }
  return uVar1;
}

