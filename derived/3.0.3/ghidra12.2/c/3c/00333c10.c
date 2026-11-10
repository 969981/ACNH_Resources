
ulong FUN_00333c10(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((int)uVar1 < 1) {
    return 0xffffffff;
  }
  uVar3 = 0;
  plVar4 = (long *)(*(long *)(param_1 + 0x50) + 0x10);
  do {
    iVar2 = strcmp(param_2,(char *)(*plVar4 + 0x10));
    if (iVar2 == 0) {
      return uVar3 & 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
  } while (uVar1 != uVar3);
  return 0xffffffff;
}

