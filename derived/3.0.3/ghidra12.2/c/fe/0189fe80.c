
undefined8 FUN_0189fe80(long param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  uVar7 = (ulong)(short)uVar3;
  if (uVar7 == 0xffffffffffffffff) {
    iVar8 = *param_2;
    iVar10 = param_2[1];
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
    if (0xff < (uint)(int)(short)uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar7 & 0xffffffff) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar2 >> 0x19 & 1) != 0) && ((*puVar2 >> 0x1a & 1) == 0)) && ((*puVar2 >> 1 & 1) != 0))
    {
      return 0;
    }
    iVar8 = *param_2;
    iVar10 = param_2[1];
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar7 & 0xffffffff) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar2 >> 0x1a & 1) != 0) && ((*puVar2 >> 1 & 1) != 0)) &&
       ((param_3 != 0x1b && (param_3 != 0x1c)))) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 8) - iVar8;
  iVar8 = *(int *)(param_1 + 8) + iVar8;
  iVar15 = *(int *)(param_1 + 0xc) - iVar10;
  iVar10 = *(int *)(param_1 + 0xc) + iVar10;
  iVar1 = iVar4;
  if (iVar8 <= iVar4) {
    iVar1 = iVar8;
  }
  if (iVar4 <= iVar8) {
    iVar4 = iVar8;
  }
  iVar8 = iVar15;
  if (iVar15 <= iVar10) {
    iVar8 = iVar10;
  }
  if (iVar10 <= iVar15) {
    iVar15 = iVar10;
  }
  if (iVar8 + 1 != iVar15) {
    iVar10 = 0;
    uVar14 = *(undefined8 *)PTR_DAT_04bb4008;
    iVar11 = DAT_052ae7d8;
    iVar12 = DAT_052ae7dc;
    iVar16 = iVar1;
    iVar6 = DAT_052ae7c8;
    iVar9 = DAT_052ae7cc;
    do {
      if (((iVar6 <= iVar16) && (iVar16 <= iVar11)) && ((iVar9 <= iVar15 && (iVar15 <= iVar12)))) {
        lVar13 = (long)(int)((iVar16 - iVar6) + DAT_052ae7a8 * (iVar15 - iVar9));
        if (DAT_052ae7ac <= (uint)(iVar15 - iVar9) || DAT_052ae7a8 <= (uint)(iVar16 - iVar6)) {
          lVar13 = 0;
        }
        if (((*(char *)(DAT_052ae7b0 + lVar13 * 8 + 4) != '\0') &&
            (iVar5 = FUN_01a1159c(uVar14,*(undefined4 *)(DAT_052ae7b0 + lVar13 * 8)),
            iVar11 = DAT_052ae7d8, iVar12 = DAT_052ae7dc, iVar6 = DAT_052ae7c8, iVar9 = DAT_052ae7cc
            , iVar5 == param_3)) && (iVar10 = iVar10 + 1, param_4 <= iVar10)) {
          return 1;
        }
      }
      if (iVar16 < iVar4) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
        iVar16 = iVar1;
      }
    } while ((iVar1 != iVar16) || (iVar8 + 1 != iVar15));
  }
  return 0;
}

