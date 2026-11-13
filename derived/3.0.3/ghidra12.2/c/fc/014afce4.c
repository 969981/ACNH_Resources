
undefined8 FUN_014afce4(long param_1,short *param_2,byte *param_3)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  
  puVar6 = PTR_DAT_04bb4948;
  if (param_2 == (short *)0x0) {
    return 0;
  }
  bVar5 = *param_3;
  psVar1 = (short *)(param_1 + (ulong)bVar5 * 8);
  if (7 < bVar5) {
    psVar1 = (short *)PTR_DAT_04bb37e0;
  }
  if (*psVar1 == -2) {
    uVar7 = 0;
  }
  else {
    uVar2 = (uint)bVar5;
    if (7 < bVar5) {
      uVar2 = 0xffffffff;
    }
    lVar12 = *(long *)PTR_DAT_04bb4948;
    if (lVar12 == 0) {
      iVar14 = 0;
      iVar15 = 0;
      uVar11 = 0;
    }
    else if ((DAT_0519d040 == 0) || ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0)) {
      iVar14 = 0;
      iVar15 = 0;
      uVar11 = 0;
    }
    else {
      iVar14 = *(int *)(DAT_0519d040 + 0x4b6c);
      iVar15 = *(int *)(DAT_0519d040 + 0x4b70);
      piVar8 = (int *)(**(code **)(*(long *)(lVar12 + 0x218) + 0xf0))(lVar12 + 0x218);
      uVar11 = 0;
      iVar14 = *piVar8 + iVar14 * 0x20;
      iVar15 = piVar8[1] + iVar15 * 0x20;
      if ((bVar5 < 8) && (lVar12 = *(long *)puVar6, (int)uVar2 < *(int *)(lVar12 + 0x3d8))) {
        plVar13 = (long *)(*(long *)(*(long *)(lVar12 + 0x3e0) + (ulong)uVar2 * 8) + 0x30);
        piVar8 = (int *)(**(code **)(*plVar13 + 0xf0))(plVar13);
        iVar4 = *piVar8;
        lVar9 = (**(code **)(*plVar13 + 0xf0))(plVar13);
        iVar14 = iVar4 + iVar14;
        iVar15 = *(int *)(lVar9 + 4) + iVar15;
        pbVar10 = (byte *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x3e0) +
                                                          (ulong)uVar2 * 8) + 0x68) + 0xf0))();
        uVar11 = (uint)*pbVar10;
      }
    }
    uVar7 = 1;
    *param_2 = *psVar1;
    *(char *)(param_2 + 1) = (char)psVar1[1];
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)psVar1 + 3);
    uVar3 = *(undefined4 *)(psVar1 + 2);
    *(int *)(param_2 + 8) = iVar14;
    *(int *)(param_2 + 10) = iVar15;
    *(uint *)(param_2 + 0xc) = uVar11;
    *(undefined4 *)(param_2 + 2) = uVar3;
  }
  return uVar7;
}

