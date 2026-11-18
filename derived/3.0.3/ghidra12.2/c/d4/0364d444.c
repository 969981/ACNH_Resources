
bool FUN_0364d444(long *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if ((*(char *)((long)param_1 + 0x24) == '\0') && (*(int *)((long)param_1 + 0x1c) != 0)) {
    iVar2 = *(int *)((long)param_1 + 0x1c) + -1;
    bVar3 = iVar2 == 0;
    *(int *)((long)param_1 + 0x1c) = iVar2;
    uVar1 = *(uint *)(param_1 + 5);
  }
  else {
    bVar3 = (int)param_1[4] == 0;
    uVar1 = *(uint *)(param_1 + 5);
    if ((uVar1 & 0xfffffffd) == 0) {
      bVar3 = bVar3 && *(int *)((long)param_1 + 0x1c) != 0;
    }
    *(int *)((long)param_1 + 0x1c) = (int)param_1[4];
    *(undefined1 *)((long)param_1 + 0x24) = 0;
  }
  if (((uVar1 & 0xfffffffd) == 0) && (*(char *)((long)param_1 + 0x25) != '\0')) {
    bVar3 = true;
    *(undefined1 *)((long)param_1 + 0x25) = 0;
  }
  if ((*(char *)((long)param_1 + 0x26) != '\0') && (bVar3 != false)) {
    **(uint **)(*param_1 + 0x1c08) = **(uint **)(*param_1 + 0x1c08) | 4;
  }
  return bVar3;
}

