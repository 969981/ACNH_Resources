
ulong FUN_03fe99d4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(param_1 + 0x34e100);
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0);
  plVar2 = *(long **)(param_1 + 0x34e100);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0);
    uVar3 = (ulong)(iVar1 << 6 | (*(byte *)(param_1 + 0x34e10f) & 3) << 4 | 1);
  }
  return uVar3;
}

