
void FUN_00183c10(long param_1,void *param_2,size_t param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x1734);
  if ((int)uVar2 < 0xe) {
    iVar3 = uVar2 + 3;
    uVar2 = (uint)*(ushort *)(param_1 + 0x1730) | param_4 << (ulong)(uVar2 & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar2;
    if (iVar3 < 9) goto LAB_00183c98;
LAB_00183cc0:
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar2;
    uVar1 = *(undefined1 *)(param_1 + 0x1731);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar2 = (uint)*(ushort *)(param_1 + 0x1730) | param_4 << (ulong)(uVar2 & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar2;
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar2;
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
    iVar3 = *(int *)(param_1 + 0x1734) + -0xd;
    uVar2 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar2;
    if (8 < iVar3) goto LAB_00183cc0;
LAB_00183c98:
    uVar1 = (undefined1)uVar2;
    if (iVar3 < 1) goto LAB_00183cf0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = uVar1;
LAB_00183cf0:
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)param_3;
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)(param_3 >> 8);
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)~(uint)param_3;
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)(~(uint)param_3 >> 8);
  if (param_3 != 0) {
    memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  }
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}

