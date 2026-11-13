
/* WARNING: Removing unreachable block (ram,0x0102511c) */
/* WARNING: Removing unreachable block (ram,0x0102512c) */

undefined4 FUN_010250d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 local_c0;
  long lStack_b8;
  uint local_b0 [20];
  
  local_b0[0x10] = 0;
  local_b0[0x11] = 0;
  local_b0[0x12] = 0;
  local_b0[0x13] = 0;
  local_b0[0xc] = 0;
  local_b0[0xd] = 0;
  local_b0[0xe] = 0;
  local_b0[0xf] = 0;
  local_b0[8] = 0;
  local_b0[9] = 0;
  local_b0[10] = 0;
  local_b0[0xb] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[7] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_c0 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_b8 = DAT_04cfae30 + 0x28;
  if (DAT_05292338 == 0) {
    iVar10 = 0;
    iVar9 = 0;
    iVar11 = 0x10;
    iVar12 = 0x10;
  }
  else {
    iVar10 = *(int *)(DAT_05292338 + 0xd88);
    iVar9 = *(int *)(DAT_05292338 + 0xd8c);
    iVar12 = *(int *)(DAT_05292338 + 0xd98);
    iVar11 = *(int *)(DAT_05292338 + 0xd9c);
  }
  iVar1 = iVar10;
  if (iVar12 <= iVar10) {
    iVar1 = iVar12;
  }
  if (iVar10 <= iVar12) {
    iVar10 = iVar12;
  }
  iVar12 = iVar9;
  if (iVar9 <= iVar11) {
    iVar12 = iVar11;
  }
  if (iVar11 <= iVar9) {
    iVar9 = iVar11;
  }
  if (iVar12 + 1 != iVar9) {
    bVar7 = false;
    iVar11 = iVar9;
    iVar13 = iVar1;
    do {
      bVar6 = bVar7;
      if ((iVar13 != iVar10) && (iVar11 != iVar12)) {
        iVar5 = iVar11 - iVar9;
        uVar3 = local_b0[iVar5];
        if (((uVar3 >> (ulong)(iVar13 - iVar1 & 0x1f) & 1) == 0) &&
           (uVar8 = FUN_035aa210(iVar13,iVar11,&local_c0), (uVar8 & 1) != 0)) {
          uVar8 = FUN_035aa210(iVar13,iVar11 + 1,&local_c0);
          if ((uVar8 & 1) != 0) {
            uVar8 = FUN_035aa210(iVar13 + 1,iVar11,&local_c0);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = FUN_035aa210(iVar13 + 1,iVar11 + 1,&local_c0), (uVar8 & 1) != 0)) {
              uVar4 = 3 << (ulong)(iVar13 - iVar1 & 0x1f);
              uVar2 = local_b0[(long)iVar5 + 1];
              local_b0[iVar5] = uVar4 | uVar3;
              local_b0[(long)iVar5 + 1] = uVar4 | uVar2;
              bVar6 = true;
              if (bVar7) {
                return 1;
              }
            }
          }
        }
      }
      bVar7 = bVar6;
      if (iVar13 < iVar10) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar11 = iVar11 + 1;
        iVar13 = iVar1;
      }
    } while ((iVar1 != iVar13) || (iVar12 + 1 != iVar11));
  }
  return 0;
}

