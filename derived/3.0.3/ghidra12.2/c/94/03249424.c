
void FUN_03249424(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
  if (lVar14 == 0) {
    return;
  }
  if (*(uint *)(lVar14 + 0x298) < 2) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar14 + 0x444) + *(int *)(lVar14 + 0x2e8) * *(int *)(lVar14 + 0x440);
  }
  lVar2 = param_1 + 0x1f8;
  uVar8 = FUN_03257d50(lVar2,iVar9);
  *(undefined4 *)(param_1 + 0x228) = uVar8;
  FUN_03257250(lVar2,uVar8);
  if (*(char *)(param_1 + 0x230) != '\0') {
    return;
  }
  if (iVar9 < *(int *)(lVar14 + 0x3d4)) {
    iVar4 = *(int *)(lVar14 + 0x2e8);
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = iVar9 / iVar4;
    }
    iVar12 = *(int *)(lVar14 + 0x430) - *(int *)(lVar14 + 0x438);
    if ((*(byte *)(lVar14 + 1000) >> 1 & 1) != 0) {
      uVar5 = *(uint *)(lVar14 + 0x434);
      uVar3 = 0;
      if ((int)uVar5 < iVar12) {
        uVar3 = ~uVar5;
      }
      if (iVar12 < 0) {
        uVar3 = uVar5 + 1;
      }
      iVar12 = uVar3 + iVar12;
    }
    uVar3 = (iVar9 - iVar6 * iVar4) + (iVar6 - iVar12) * iVar4;
    uVar5 = *(uint *)(lVar14 + 0x208);
    bVar7 = (int)uVar3 < 0;
    bVar1 = (int)uVar5 <= (int)uVar3;
    if (bVar7 || bVar1) {
      uVar3 = 0xffffffff;
    }
    if ((((!bVar7 && !bVar1) && (int)uVar3 < (int)uVar5) && uVar3 <= uVar5) &&
        (((bVar7 || bVar1) || (int)uVar5 <= (int)uVar3) || uVar5 != uVar3)) {
      puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x210) + (ulong)uVar3 * 8);
      goto LAB_03249528;
    }
  }
  puVar13 = (undefined8 *)0x0;
LAB_03249528:
  if (((*PTR_DAT_04bc83f0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc83f0), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bc83e8 = PTR_DAT_04bc4f48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc83f0);
  }
  if ((puVar13 != (undefined8 *)0x0) &&
     (uVar10 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc83e8), (uVar10 & 1) != 0)) {
    uVar10 = FUN_03256de0(lVar2,*(undefined4 *)(param_1 + 0x228));
    bVar11 = *(byte *)((long)puVar13 + 0x2c2);
    if ((uVar10 & 1) == 0) {
      if ((*(byte *)((long)puVar13 + 0x2c3) & 1) == 0) {
        bVar11 = bVar11 & 0xfe;
      }
      else {
        bVar11 = bVar11 | 2;
      }
    }
    else if ((*(byte *)((long)puVar13 + 0x2c3) & 1) == 0) {
      bVar11 = bVar11 | 1;
    }
    else {
      bVar11 = bVar11 & 0xfd;
    }
    *(byte *)((long)puVar13 + 0x2c2) = bVar11;
  }
  return;
}

