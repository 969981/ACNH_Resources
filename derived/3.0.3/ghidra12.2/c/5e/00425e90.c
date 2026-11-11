
undefined8 FUN_00425e90(long *param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  
  iVar6 = (int)param_1[1];
  lVar5 = *param_1;
  uVar3 = iVar6 - 2;
  pcVar8 = (char *)(lVar5 + (int)uVar3);
  uVar9 = uVar3;
  for (lVar7 = 0; bVar2 = *(byte *)(lVar5 + (int)(uVar9 + 1)),
      (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) &&
      lVar7 < (long)iVar6 + -1; lVar7 = lVar7 + 1) {
    uVar9 = uVar9 - 1;
    pcVar8 = pcVar8 + -1;
  }
  uVar4 = 0x80040200;
  if (((int)lVar7 < (int)uVar3) && (*pcVar8 == param_2)) {
    uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    iVar1 = uVar9 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar9) {
      lVar5 = FUN_00426720(PTR_DAT_048607c0,iVar1,1);
      iVar6 = (int)param_1[1];
      *param_1 = lVar5;
    }
    if ((iVar6 <= (int)uVar9) || (iVar1 < iVar6)) {
      *(int *)(param_1 + 1) = iVar1;
    }
    uVar4 = 0;
    *(undefined1 *)(lVar5 + (ulong)uVar9) = 0;
  }
  return uVar4;
}

