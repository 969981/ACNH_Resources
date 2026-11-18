
void FUN_03340a20(long *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ushort *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  char *local_e8;
  undefined4 local_e0;
  undefined2 local_dc [31];
  undefined2 local_9e;
  ushort local_94 [2];
  undefined *local_90;
  undefined2 *puStack_88;
  undefined8 local_80;
  ulong *local_78;
  ulong local_70 [2];
  
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)param_1[0x371]);
  param_1[0x370] = (long)(&PTR_DAT_04b1c4a0)[(int)param_1[0x371]];
  (**(code **)(*param_1 + 0x188))();
  FUN_03322410(param_1);
  puVar5 = PTR_DAT_04bc8e68;
  lVar10 = *(long *)PTR_DAT_04bc1118;
  local_e8 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_e8 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_e8 != '\0') {
    local_f0 = PTR_DAT_04bc8e68 + 0x10;
    FUN_032cb8e0(&local_80,&local_f0,*(undefined8 *)(param_1[0x5e] + 0xf0));
  }
  lVar17 = 0;
  puVar2 = PTR_DAT_04bc8e78 + 0x10;
  puVar3 = PTR_DAT_04bc0840 + 0x10;
  do {
    uVar7 = *(ushort *)(param_1[0x370] + lVar17 * 2);
    if (uVar7 == 0) {
      local_78 = local_70;
      local_70[0] = local_70[0] & 0xffffffffffff0000;
      local_90 = *(undefined **)(*(long *)(param_1[lVar17 + 0x335] + 0x20) + 0x18);
      local_e8 = "T_00";
      local_f0 = puVar5 + 0x10;
      local_80 = puVar2;
      local_f0 = (undefined *)FUN_0328b6d0(&local_90,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_80);
      lVar15 = param_1[lVar17 + 0x335];
      if (lVar15 != 0) {
        FUN_0328a0b0(lVar15,6,1,0);
        if (((*(ushort *)(lVar15 + 0x578) >> 5 & 1) == 0) ||
           ((*(ushort *)(lVar15 + 0x578) >> 4 & 1) == 0)) {
          uVar7 = *(ushort *)(lVar15 + 0x250) | 0x200;
        }
        else {
          uVar7 = *(ushort *)(lVar15 + 0x250) & 0xfdff;
        }
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,9);
        uVar9 = 0;
        *(ushort *)(lVar15 + 0x250) = uVar7;
        goto LAB_03340b24;
      }
    }
    else {
      local_94[1] = 0;
      local_e0 = 0x20;
      local_9e = 0;
      local_dc[0] = 0;
      local_f0 = puVar3;
      local_e8 = (char *)local_dc;
      local_94[0] = uVar7;
      FUN_038d1340(&local_f0,&DAT_04169b80,local_94);
      local_70[0] = *(ulong *)(*(long *)(param_1[lVar17 + 0x335] + 0x20) + 0x18);
      local_90 = PTR_DAT_04bc8e78 + 0x10;
      local_80 = puVar5 + 0x10;
      puStack_88 = (undefined2 *)local_e8;
      local_78 = (ulong *)&DAT_040c1e5f;
      local_80 = (undefined *)FUN_0328b6d0(local_70,&local_80,0);
      FUN_032d67f0(&local_80,&local_90);
      lVar15 = param_1[lVar17 + 0x335];
      lVar16 = *(long *)(lVar10 + 0x20);
      uVar18 = (uint)uVar7;
      if ((*(uint *)(lVar16 + 0x106c) >> 8 & 1) == 0) {
LAB_03340c18:
        if (((*(uint *)(lVar16 + 0x106c) >> 7 & 1) != 0) &&
           ((0x29 < uVar18 - 0x30 || ((1L << ((ulong)(uVar18 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)
            ))) goto LAB_03340c68;
        (**(code **)(*(long *)(lVar16 + 0x1570) + 0x18))(lVar16 + 0x1570);
        uVar12 = (uint)**(ushort **)(lVar16 + 0x1578);
        if (uVar12 != 0) {
          if (uVar12 == uVar18) goto LAB_03340c68;
          puVar13 = *(ushort **)(lVar16 + 0x1578) + 2;
          uVar8 = 0;
          do {
            uVar11 = uVar8;
            if (puVar13[-1] == 0) {
              puVar13 = (ushort *)0x0;
              goto LAB_03340e90;
            }
            if (puVar13[-1] == uVar18) {
              puVar13 = (ushort *)0x1;
              goto LAB_03340e90;
            }
            if (*puVar13 == 0) {
              puVar13 = (ushort *)0x0;
              uVar11 = uVar11 + 1;
              goto LAB_03340e90;
            }
            if (*puVar13 == uVar18) {
              uVar11 = uVar11 + 1;
              puVar13 = (ushort *)0x1;
              goto LAB_03340e90;
            }
            if (uVar11 == 0x7fffe) {
              uVar11 = uVar11 + 2;
              goto LAB_03340e90;
            }
            puVar1 = puVar13 + 1;
            if (*puVar1 == 0) {
              puVar13 = (ushort *)0x0;
              uVar11 = uVar11 + 2;
              goto LAB_03340e90;
            }
            puVar13 = puVar13 + 3;
            uVar8 = uVar11 + 3;
          } while (*puVar1 != uVar18);
          puVar13 = (ushort *)0x1;
          uVar11 = uVar11 + 2;
LAB_03340e90:
          uVar18 = (uint)(uVar11 < 0x80000) & (uint)puVar13;
          FUN_0328a0b0(lVar15,6,1,uVar18 ^ 1);
          if (uVar18 == 0) goto LAB_03340eb4;
          goto LAB_03340c7c;
        }
        FUN_0328a0b0(lVar15,6,1,1);
LAB_03340eb4:
        uVar9 = 1;
LAB_03340b10:
        uVar7 = *(ushort *)(lVar15 + 0x250) & 0xfdff;
      }
      else {
        bVar6 = false;
        lVar14 = 0;
        do {
          lVar4 = lVar14 + 4;
          if (*(ushort *)((long)&DAT_0418d22a + lVar14) == uVar18 ||
              *(ushort *)((long)&DAT_0418d22c + lVar14) == uVar18) {
            bVar6 = true;
          }
          lVar14 = lVar4;
        } while (lVar4 != 0x52c);
        if (bVar6) goto LAB_03340c18;
LAB_03340c68:
        FUN_0328a0b0(lVar15,6,1,0);
LAB_03340c7c:
        if (((*(ushort *)(lVar15 + 0x578) >> 5 & 1) != 0) &&
           ((*(ushort *)(lVar15 + 0x578) >> 4 & 1) != 0)) {
          uVar9 = 0;
          goto LAB_03340b10;
        }
        uVar9 = 0;
        uVar7 = *(ushort *)(lVar15 + 0x250) | 0x200;
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,9);
      *(ushort *)(lVar15 + 0x250) = uVar7;
LAB_03340b24:
      FUN_0328a2b0(lVar15,uVar9);
    }
    lVar17 = lVar17 + 1;
    if (lVar17 == 0x37) {
      puVar5 = puVar5 + 0x10;
      local_e8 = "T_00";
      local_80 = *(undefined **)(*(long *)(param_1[0x36c] + 0x20) + 0x18);
      puVar2 = PTR_DAT_04bc8e78 + 0x10;
      puStack_f8 = &DAT_04169522;
      local_100 = puVar2;
      local_f0 = puVar5;
      local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_100);
      puStack_108 = &DAT_0416903e;
      local_e8 = "T_00";
      local_80 = *(undefined **)(*(long *)(param_1[0x36d] + 0x20) + 0x18);
      local_110 = puVar2;
      local_f0 = puVar5;
      local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_110);
      puStack_118 = &DAT_041690dc;
      local_e8 = "T_00";
      local_80 = *(undefined **)(*(long *)(param_1[0x36e] + 0x20) + 0x18);
      local_120 = puVar2;
      local_f0 = puVar5;
      local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_120);
      puStack_128 = &DAT_041691bc;
      local_e8 = "T_00";
      local_80 = *(undefined **)(*(long *)(param_1[0x36f] + 0x20) + 0x18);
      local_130 = puVar2;
      local_f0 = puVar5;
      local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_130);
      FUN_033227f8(param_1);
      return;
    }
  } while( true );
}

