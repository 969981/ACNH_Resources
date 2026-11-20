
ulong FUN_03fe9c08(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((*(char *)(param_1 + 0x34e10e) == '\0') && (1 < *(uint *)(param_1 + 0x34e114))) {
    plVar3 = *(long **)(param_1 + 0x34e100);
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,2);
    plVar3 = *(long **)(param_1 + 0x34e100);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3,2);
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,2);
      uVar2 = (ulong)(iVar1 << 6 | (*(byte *)(param_1 + 0x34e111) & 3) << 4 | 1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

