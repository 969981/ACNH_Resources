
void FUN_0349b820(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  lVar14 = 0;
  lVar15 = *(long *)PTR_DAT_04bb27f8;
  plVar2 = (long *)(param_1 + 0x1ce08);
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (lVar14 < *(int *)(*plVar2 + 0xe2b0)) {
      puVar8 = (ushort *)
               (**(code **)(**(long **)(*(long *)(*plVar2 + 0xe2b8) + lVar14 * 8) + 0xf0))();
      uVar5 = *puVar8;
      if (uVar5 == 99) {
        pcStack_70 = "CompleteAppearanceSchool";
        local_78 = puVar3;
        iVar7 = FUN_02758850(&local_78);
        if (iVar7 == 0) {
          if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             (uVar5 = **(ushort **)PTR_DAT_04bc3a48, (uVar5 & 1) == 0)) {
            bVar6 = *(int *)(lVar15 + 0x10) == 2;
          }
          else {
            bVar6 = ((uVar5 ^ 0xffff) & 5) == 0;
          }
          iVar7 = 0;
          if (!bVar6) {
            iVar7 = 2;
          }
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        if (0x2f < uVar5) goto LAB_0349b940;
        iVar7 = (uint)(*(int *)(*plVar2 + (ulong)uVar5 * 0x18 + 0xdd48) == 0) << 1;
      }
    }
    else {
LAB_0349b940:
      iVar7 = 2;
    }
    lVar4 = *(long *)(*plVar2 + 0x210) + 0x300;
    lVar9 = *(long *)(lVar4 + lVar14 * 8);
    if (lVar9 != 0) {
      uVar11 = 0;
      while( true ) {
        iVar10 = (int)uVar11;
        local_64 = iVar7;
        if (*(long *)(lVar4 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) == lVar9)
        break;
        uVar1 = iVar10 + 1;
        if (uVar1 == 0x31) goto LAB_0349b8b0;
        if (*(long *)(lVar4 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)) ==
            lVar9) {
          lVar12 = (long)(int)uVar1;
          goto LAB_0349b9d4;
        }
        lVar12 = (uVar11 << 0x20) + 0x200000000;
        if ((*(long *)(lVar4 + (lVar12 >> 0x1d)) == lVar9) ||
           (lVar12 = (uVar11 << 0x20) + 0x300000000, *(long *)(lVar4 + (lVar12 >> 0x1d)) == lVar9))
        {
          lVar12 = lVar12 >> 0x20;
          goto LAB_0349b9d4;
        }
        uVar11 = (ulong)(iVar10 + 4);
      }
      lVar12 = (long)iVar10;
LAB_0349b9d4:
      local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar7);
      switch(iVar7) {
      case 0:
        bVar13 = *(byte *)(lVar9 + 0x2c0) & 0xf8 | 2;
        break;
      case 2:
        bVar13 = *(byte *)(lVar9 + 0x2c0) & 0xf8 | 1;
        break;
      default:
        goto switchD_0349b9f0_default;
      }
      *(byte *)(lVar9 + 0x2c0) = bVar13;
switchD_0349b9f0_default:
      *(int *)(lVar9 + 0x2b0) = iVar7;
      *(bool *)(*(long *)(lVar4 + lVar12 * 8) + 0x315) = iVar7 == 2;
    }
LAB_0349b8b0:
    lVar14 = lVar14 + 1;
    if (lVar14 == 0x31) {
      return;
    }
  } while( true );
}

