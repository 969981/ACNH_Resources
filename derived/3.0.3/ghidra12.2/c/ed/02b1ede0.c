
/* WARNING: Removing unreachable block (ram,0x02b1ef34) */

bool FUN_02b1ede0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  lVar9 = DAT_04cf1b28;
  if (DAT_04c487d4 == -1) {
    return false;
  }
  puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar2 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar2 + 4) & 1) != 0) {
    lVar10 = *(long *)PTR_DAT_04bb27a8;
    if ((lVar10 == 0) || ((*(ushort *)(lVar10 + 0x4b68) & 1) == 0)) {
      iVar11 = -1;
      iVar12 = 1;
      iVar14 = 1;
      iVar13 = -1;
    }
    else {
      iVar11 = *(int *)(lVar10 + 0x4b6c);
      iVar12 = *(int *)(lVar10 + 0x4b70);
      piVar8 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 0x2c0) + 0xf0))(DAT_04cf1b28 + 0x2c0);
      iVar3 = *piVar8;
      iVar14 = piVar8[1] + iVar12 * 0x20;
      piVar8 = (int *)(**(code **)(*(long *)(lVar9 + 0x2f8) + 0xf0))(lVar9 + 0x2f8);
      iVar12 = *piVar8;
      lVar9 = (**(code **)(*(long *)(lVar9 + 0x2f8) + 0xf0))(lVar9 + 0x2f8);
      iVar3 = iVar3 + iVar11 * 0x20;
      iVar13 = iVar14 + -1;
      iVar11 = iVar3 + -1;
      iVar12 = iVar12 + iVar3;
      iVar14 = *(int *)(lVar9 + 4) + iVar14;
    }
    iVar3 = iVar11;
    if (iVar12 <= iVar11) {
      iVar3 = iVar12;
    }
    if (iVar11 <= iVar12) {
      iVar11 = iVar12;
    }
    iVar12 = iVar13;
    if (iVar14 <= iVar13) {
      iVar12 = iVar14;
    }
    if (iVar13 <= iVar14) {
      iVar13 = iVar14;
    }
    if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
      param_2 = param_2 + 0x18;
    }
    else {
      param_2 = param_2 + 0x350;
    }
    iVar14 = *(int *)(param_2 + 0x24) + 1;
    iVar15 = *(int *)(param_2 + 0x14);
    if (iVar14 != iVar15) {
      iVar4 = *(int *)(param_2 + 0x10);
      iVar16 = iVar4;
      do {
        bVar7 = ((iVar3 <= iVar16 && iVar16 <= iVar11) && iVar12 <= iVar15) &&
                SBORROW4(iVar15,iVar13);
        bVar6 = ((iVar3 <= iVar16 && iVar16 <= iVar11) && iVar12 <= iVar15) && iVar15 == iVar13;
        bVar5 = ((iVar3 <= iVar16 && iVar16 <= iVar11) && iVar12 <= iVar15) && iVar15 - iVar13 < 0;
        bVar1 = bVar6 || bVar5 != bVar7;
        if (bVar6 || bVar5 != bVar7) {
          return bVar1;
        }
        if (iVar16 < *(int *)(param_2 + 0x20)) {
          iVar16 = iVar16 + 1;
        }
        else {
          iVar15 = iVar15 + 1;
          iVar16 = iVar4;
        }
      } while ((iVar4 != iVar16) || (iVar14 != iVar15));
      return bVar1;
    }
  }
  return false;
}

