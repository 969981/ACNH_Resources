
void FUN_004c5f30(long param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong local_50;
  long lStack_48;
  
  lVar8 = (long)param_2;
  puVar1 = (ulong *)(*(long *)(param_1 + 0xd8) + lVar8 * 0x20);
  uVar9 = puVar1[2];
  if ((*(byte *)(param_1 + 0x168) >> 1 & 1) == 0) {
    uVar5 = *puVar1 & 0xfffffffffffffffe;
    if ((uVar5 == 0) && (puVar1[3] == 0)) {
      uVar4 = *(uint *)(uVar9 + 0x38);
      if (uVar4 == (*(uint *)(uVar9 + 0x3c) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,uVar9 + 0x30,8);
        uVar4 = *(uint *)(uVar9 + 0x38);
      }
      *(undefined8 *)(*(long *)(uVar9 + 0x30) + (long)(int)uVar4 * 8) = 0;
      goto LAB_004c6014;
    }
    iVar2 = FUN_0043c110();
    lStack_48 = uVar5 + (long)iVar2;
    lVar6 = *(long *)(param_1 + 0xd8) + lVar8 * 0x20;
    local_50 = uVar5;
    uVar3 = FUN_004c51d0(param_1,&local_50,*(undefined4 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x18))
    ;
  }
  else {
    uVar5 = *puVar1;
    iVar2 = FUN_0043c110();
    lStack_48 = (uVar5 & 0xfffffffffffffffe) + (long)iVar2;
    lVar6 = *(long *)(param_1 + 0xd8) + lVar8 * 0x20;
    local_50 = uVar5 & 0xfffffffffffffffe;
    uVar3 = FUN_004c60d0(param_1,&local_50,*(undefined4 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x18))
    ;
  }
  uVar4 = *(uint *)(uVar9 + 0x38);
  if (uVar4 == (*(uint *)(uVar9 + 0x3c) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,uVar9 + 0x30,8);
    uVar4 = *(uint *)(uVar9 + 0x38);
  }
  *(undefined8 *)(*(long *)(uVar9 + 0x30) + (long)(int)uVar4 * 8) = uVar3;
LAB_004c6014:
  *(uint *)(uVar9 + 0x38) = uVar4 + 1;
  FUN_0043be10(*(long *)(param_1 + 0xd8) + lVar8 * 0x20);
  iVar2 = *(int *)(param_1 + 0xe0) + -1;
  uVar4 = iVar2 - param_2;
  *(int *)(param_1 + 0xe0) = iVar2;
  if (0 < (int)uVar4) {
    lVar6 = 0;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + lVar8 * 0x20 + 0x20);
    do {
      lVar6 = (lVar6 << 0x20) + 0x800000000 >> 0x20;
      puVar7[-4] = *puVar7;
      puVar7 = puVar7 + 1;
    } while (lVar6 < (long)(-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5));
  }
  return;
}

