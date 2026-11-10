
undefined8 FUN_00280040(long param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  puVar6 = PTR_DAT_04bcd350;
  uVar8 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  if (0x1f < (uVar8 & 0xff)) {
    return 1;
  }
  if (*(short *)(param_1 + 0x58) != 0) {
    uVar16 = 0;
    bVar4 = true;
    do {
      if (((ulong)uVar8 & 0xff) != uVar16) {
        uVar11 = FUN_00269a70(*(undefined8 *)puVar6,uVar16 & 0xffffffff);
        bVar7 = *(int *)(*(long *)(param_1 + 0x70) + uVar16 * 4) == 0;
        if ((uVar11 & 1) != 0) {
          bVar7 = !bVar7;
        }
        bVar4 = (bool)(bVar7 & bVar4);
      }
      puVar5 = PTR_DAT_04bc1510;
      uVar2 = *(ushort *)(param_1 + 0x58);
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar2);
    if (!bVar4) {
      return 5;
    }
    if (uVar2 != 0) {
      uVar3 = (uint)uVar2 * (uVar8 & 0xff);
      uVar15 = 0;
      bVar4 = true;
      do {
        uVar16 = (ulong)uVar3;
        plVar12 = (long *)FUN_002ba790(*(undefined8 *)puVar5);
        lVar13 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar15);
        if (((lVar13 == 0) || (*(int *)(lVar13 + 0x4c) != 5)) ||
           (iVar9 = FUN_002b3eec(lVar13), iVar9 == -1)) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_002b3eec(lVar13);
        }
        uVar17 = uVar10;
        if (((uVar8 & 0xff) != (uVar15 & 0xffff)) &&
           (uVar11 = FUN_00269a70(*(undefined8 *)puVar6,uVar15), (uVar11 & 1) != 0)) {
          uVar11 = FUN_00273cb4(lVar13);
          if ((uVar10 & 0xffff) == 0) {
            if (((uVar11 & 1) == 0) &&
               ((lVar14 = FUN_0026c88c(*(undefined8 *)puVar6), lVar14 == 0 ||
                (uVar11 = FUN_00283230(lVar14,*(undefined1 *)(lVar13 + 0x38),uVar8),
                (uVar11 & 1) == 0)))) {
              uVar17 = 0;
              bVar4 = false;
            }
            else {
              uVar17 = 0;
            }
          }
          else {
            uVar17 = 0;
            if ((uVar11 & 1) == 0) {
              uVar17 = uVar10;
            }
          }
        }
        uVar10 = uVar17 >> 2 & 0x3fff;
        uVar15 = uVar15 + 1;
        if (0xfe < uVar10) {
          uVar10 = 0xff;
        }
        uVar1 = (undefined1)uVar10;
        uVar3 = uVar3 + 1;
        if ((uVar17 - 1 & 0xffff) < 3) {
          uVar1 = 1;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x68) + (uVar16 & 0xffff)) = uVar1;
      } while ((uVar15 & 0xffff) < (uint)*(ushort *)(param_1 + 0x58));
      if (!bVar4) {
        return 5;
      }
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcdc30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "RelayRouteManageJob::SendRelayRouteDirections";
  return 0;
}

