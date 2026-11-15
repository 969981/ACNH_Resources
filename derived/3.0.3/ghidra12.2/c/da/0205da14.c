
undefined8 FUN_0205da14(long param_1,byte *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined1 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb4948;
  bVar9 = *param_2;
  lVar17 = *(long *)PTR_DAT_04bb4948;
  bVar3 = bVar9;
  if (7 < bVar9) {
    bVar3 = 0xff;
  }
  if (((lVar17 == 0) || (DAT_0519d040 == 0)) || ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0)) {
    uVar13 = 0;
  }
  else {
    iVar4 = *(int *)(DAT_0519d040 + 0x4b6c);
    iVar6 = *(int *)(DAT_0519d040 + 0x4b70);
    piVar14 = (int *)(**(code **)(*(long *)(lVar17 + 0x218) + 0xf0))(lVar17 + 0x218);
    uVar13 = 0;
    if (bVar9 < 8) {
      lVar17 = *(long *)puVar1;
      if ((int)(char)bVar3 < *(int *)(lVar17 + 0x3d8)) {
        iVar5 = *piVar14;
        iVar7 = piVar14[1];
        lVar11 = (ulong)(uint)(int)(char)bVar3 * 8;
        plVar18 = (long *)(*(long *)(*(long *)(lVar17 + 0x3e0) + lVar11) + 0x30);
        piVar14 = (int *)(**(code **)(*plVar18 + 0xf0))(plVar18);
        iVar8 = *piVar14;
        lVar15 = (**(code **)(*plVar18 + 0xf0))(plVar18);
        iVar8 = iVar5 + iVar4 * 0x20 + iVar8;
        iVar4 = iVar7 + iVar6 * 0x20 + *(int *)(lVar15 + 4);
        puVar16 = (undefined1 *)
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x3e0) + lVar11) + 0x68) +
                              0xf0))();
        puVar1 = PTR_DAT_04bb43c0;
        uVar10 = *puVar16;
        local_58 = 0;
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *param_3;
        uStack_5c = param_3[1];
        lVar17 = *(long *)PTR_DAT_04bb43c0;
        uVar12 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar1 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(param_3);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8), lVar17 != 0))
            {
              local_58 = lVar17;
            }
          }
        }
        FUN_01afade0(&local_68,uVar10);
        local_98 = local_60;
        uStack_94 = uStack_5c;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        local_80 = 0;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        local_70 = 0;
        local_90 = puVar1;
        puStack_88 = puVar2;
        local_78 = puVar2;
        FUN_0277f02c(&local_98,&local_90);
        local_70._0_4_ = (int)local_70 + iVar8;
        local_80._0_4_ = (int)local_80 + iVar8;
        local_70._4_4_ = local_70._4_4_ + iVar4;
        if (*(char *)(param_1 + 0x2f8) == '\0') {
          *(undefined **)(param_1 + 0x2d0) = puVar1;
          *(undefined **)(param_1 + 0x2d8) = puVar2;
          *(undefined **)(param_1 + 0x2e8) = puVar2;
          *(undefined1 *)(param_1 + 0x2f8) = 1;
        }
        else {
          *(int *)(param_1 + 0x2e0) = (int)local_80;
        }
        local_80._0_4_ = (int)local_80 + -1;
        iVar6 = local_80._4_4_ + iVar4 + -1;
        uVar13 = 1;
        iVar4 = (int)local_80;
        if ((int)local_70 <= (int)local_80) {
          iVar4 = (int)local_70;
        }
        if ((int)local_80 <= (int)local_70) {
          local_80._0_4_ = (int)local_70;
        }
        iVar8 = iVar6;
        if (local_70._4_4_ <= iVar6) {
          iVar8 = local_70._4_4_;
        }
        if (iVar6 <= local_70._4_4_) {
          iVar6 = local_70._4_4_;
        }
        iVar5 = iVar4;
        if ((int)local_80 + 1 <= iVar4) {
          iVar5 = (int)local_80 + 1;
        }
        *(int *)(param_1 + 0x2e0) = iVar5;
        if (iVar4 <= (int)local_80 + 1) {
          iVar4 = (int)local_80 + 1;
        }
        *(int *)(param_1 + 0x2f0) = iVar4;
        iVar4 = iVar8;
        if (iVar6 + 1 <= iVar8) {
          iVar4 = iVar6 + 1;
        }
        if (iVar8 <= iVar6 + 1) {
          iVar8 = iVar6 + 1;
        }
        *(int *)(param_1 + 0x2e4) = iVar4;
        *(int *)(param_1 + 0x2f4) = iVar8;
      }
    }
  }
  return uVar13;
}

