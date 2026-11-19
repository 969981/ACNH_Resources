
undefined8 FUN_03bf60c0(uint param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_3 + 0x80);
  if (*(uint *)(param_3 + 0x78) <= param_1) {
    param_1 = 0;
  }
  lVar10 = (long)(int)param_1;
  if ((*(ushort *)(param_2 + 6) & 1) == 0) {
    if ((-1 < *(int *)(param_2 + 8)) &&
       (bVar6 = *(byte *)(lVar9 + lVar10 * 8 + 2), (bVar6 & 1) == 0)) goto LAB_03bf61d0;
    goto LAB_03bf61f0;
  }
  uVar8 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18);
  uVar2 = uVar8 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar2 = uVar8;
  }
  if (uVar2 == 0) {
LAB_03bf61bc:
    iVar5 = *(int *)(param_2 + 8);
joined_r0x03bf61ec:
    bVar3 = false;
  }
  else {
    uVar4 = *(uint *)(uVar2 + 4);
    if ((int)uVar4 < 0) {
      iVar5 = *(int *)(param_2 + 8);
      goto joined_r0x03bf61ec;
    }
    if (((int)*(uint *)(uVar2 + 8) < 0) || (*(uint *)(uVar2 + 8) < uVar4)) goto LAB_03bf61bc;
    bVar3 = false;
    lVar11 = (ulong)uVar4 << 5;
    uVar8 = (ulong)uVar4;
    do {
      uVar7 = FUN_03bf60c0(uVar8 & 0xffffffff,*(long *)(param_3 + 0x28) + lVar11,param_3,param_4);
      lVar11 = lVar11 + 0x20;
      if ((uVar7 & 1) != 0) {
        bVar3 = true;
      }
      bVar1 = (long)uVar8 < (long)*(int *)(uVar2 + 8);
      uVar8 = uVar8 + 1;
    } while (bVar1);
    iVar5 = *(int *)(param_2 + 8);
  }
  if ((-1 < iVar5) && (!bVar3)) {
    bVar6 = *(byte *)(lVar9 + lVar10 * 8 + 2);
LAB_03bf61d0:
    *(byte *)(lVar9 + lVar10 * 8 + 2) = bVar6 & 0xfd;
    return 0;
  }
LAB_03bf61f0:
  lVar9 = lVar9 + lVar10 * 8;
  *(byte *)(lVar9 + 2) = *(byte *)(lVar9 + 2) | 2;
  return 1;
}

