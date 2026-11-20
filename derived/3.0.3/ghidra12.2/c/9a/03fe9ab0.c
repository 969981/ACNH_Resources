
ulong FUN_03fe9ab0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x34e10e) == '\0') {
    uVar4 = 1;
  }
  else {
    uVar4 = *(byte *)(param_1 + 0x34e10d) >> 6 & 2 ^ 3;
  }
  if (*(uint *)(param_1 + 0x34e114) < uVar4) {
    uVar2 = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x34e100);
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
    plVar3 = *(long **)(param_1 + 0x34e100);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar4);
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar4);
      uVar2 = (ulong)(iVar1 << 6 | (*(byte *)(param_1 + (ulong)uVar4 + 0x34e10f) & 3) << 4 | 1);
    }
  }
  return uVar2;
}

