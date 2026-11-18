
void FUN_033172b0(long *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  ushort uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
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
  
  lVar11 = *(long *)PTR_DAT_04bc1118;
  if (*(char *)((long)param_1 + 0x1aec) == '\0') {
    lVar16 = param_1[0x6b];
    if (lVar16 == 0) {
      local_f0._0_4_ = 0;
    }
    else {
      local_f0._0_4_ = *(int *)(lVar16 + 0x5e8);
    }
    uVar17 = (uint)((int)local_f0 - 1U < 2);
    if (-1 < *(char *)(*(long *)(lVar11 + 0x20) + 0x106c)) {
      FUN_0328a0b0(lVar16,6,1,1);
      local_f0._0_4_ = 9;
      *(ushort *)(lVar16 + 0x250) = *(ushort *)(lVar16 + 0x250) & 0xfdff;
      FUN_0328a2b0(lVar16,1);
    }
  }
  else {
    lVar16 = param_1[0x6b];
    FUN_0328a0b0(lVar16,6,1,0);
    if (((*(ushort *)(lVar16 + 0x578) >> 5 & 1) == 0) ||
       ((*(ushort *)(lVar16 + 0x578) >> 4 & 1) == 0)) {
      uVar6 = *(ushort *)(lVar16 + 0x250) | 0x200;
    }
    else {
      uVar6 = *(ushort *)(lVar16 + 0x250) & 0xfdff;
    }
    local_f0._0_4_ = 9;
    *(ushort *)(lVar16 + 0x250) = uVar6;
    FUN_0328a2b0(lVar16,0);
    if (param_1[0x6b] != 0) {
      FUN_032e4828(param_1[0x6b],0,1);
    }
    uVar17 = 2;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar17);
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)param_1[0x35d]);
  param_1[0x35c] =
       *(long *)(*(long *)(PTR_PTR_04bc96a0 + (long)(int)param_1[0x35d] * 8) + (long)(int)uVar17 * 8
                );
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  puVar7 = PTR_DAT_04bc8e68;
  local_e8 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_e8 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_e8 != '\0') {
    local_f0 = PTR_DAT_04bc8e68 + 0x10;
    FUN_032cb8e0(&local_80,&local_f0,*(undefined8 *)(param_1[0x5e] + 0xf0));
  }
  lVar16 = 0;
  puVar2 = PTR_DAT_04bc8e78 + 0x10;
  puVar3 = PTR_DAT_04bc0840 + 0x10;
  do {
    uVar6 = *(ushort *)(param_1[0x35c] + lVar16 * 2);
    if (uVar6 == 0) {
      local_78 = local_70;
      local_70[0] = local_70[0] & 0xffffffffffff0000;
      local_90 = *(undefined **)(*(long *)(param_1[lVar16 + 0x32a] + 0x20) + 0x18);
      local_e8 = "T_00";
      local_f0 = puVar7 + 0x10;
      local_80 = puVar2;
      local_f0 = (undefined *)FUN_0328b6d0(&local_90,&local_f0,0);
      FUN_032d67f0(&local_f0,&local_80);
      lVar18 = param_1[lVar16 + 0x32a];
      if (lVar18 != 0) {
        FUN_0328a0b0(lVar18,6,1,0);
        if (((*(ushort *)(lVar18 + 0x578) >> 5 & 1) == 0) ||
           ((*(ushort *)(lVar18 + 0x578) >> 4 & 1) == 0)) {
          uVar6 = *(ushort *)(lVar18 + 0x250) | 0x200;
        }
        else {
          uVar6 = *(ushort *)(lVar18 + 0x250) & 0xfdff;
        }
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,9);
        uVar9 = 0;
        *(ushort *)(lVar18 + 0x250) = uVar6;
        goto LAB_03317504;
      }
    }
    else {
      local_94[1] = 0;
      local_e0 = 0x20;
      local_9e = 0;
      local_dc[0] = 0;
      local_f0 = puVar3;
      local_e8 = (char *)local_dc;
      local_94[0] = uVar6;
      FUN_038d1340(&local_f0,&DAT_04169b80,local_94);
      local_70[0] = *(ulong *)(*(long *)(param_1[lVar16 + 0x32a] + 0x20) + 0x18);
      local_90 = PTR_DAT_04bc8e78 + 0x10;
      local_80 = puVar7 + 0x10;
      puStack_88 = (undefined2 *)local_e8;
      local_78 = (ulong *)&DAT_040c1e5f;
      local_80 = (undefined *)FUN_0328b6d0(local_70,&local_80,0);
      FUN_032d67f0(&local_80,&local_90);
      lVar18 = param_1[lVar16 + 0x32a];
      lVar19 = *(long *)(lVar11 + 0x20);
      uVar17 = (uint)uVar6;
      if ((*(uint *)(lVar19 + 0x106c) >> 8 & 1) == 0) {
LAB_033175f8:
        if (((*(uint *)(lVar19 + 0x106c) >> 7 & 1) != 0) &&
           ((0x29 < uVar17 - 0x30 || ((1L << ((ulong)(uVar17 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)
            ))) goto LAB_03317648;
        (**(code **)(*(long *)(lVar19 + 0x1570) + 0x18))(lVar19 + 0x1570);
        uVar13 = (uint)**(ushort **)(lVar19 + 0x1578);
        if (uVar13 != 0) {
          if (uVar13 == uVar17) goto LAB_03317648;
          puVar14 = *(ushort **)(lVar19 + 0x1578) + 2;
          uVar8 = 0;
          do {
            uVar12 = uVar8;
            if (puVar14[-1] == 0) {
              puVar14 = (ushort *)0x0;
              goto LAB_0331787c;
            }
            if (puVar14[-1] == uVar17) {
              puVar14 = (ushort *)0x1;
              goto LAB_0331787c;
            }
            if (*puVar14 == 0) {
              puVar14 = (ushort *)0x0;
              uVar12 = uVar12 + 1;
              goto LAB_0331787c;
            }
            if (*puVar14 == uVar17) {
              uVar12 = uVar12 + 1;
              puVar14 = (ushort *)0x1;
              goto LAB_0331787c;
            }
            if (uVar12 == 0x7fffe) {
              uVar12 = uVar12 + 2;
              goto LAB_0331787c;
            }
            puVar1 = puVar14 + 1;
            if (*puVar1 == 0) {
              puVar14 = (ushort *)0x0;
              uVar12 = uVar12 + 2;
              goto LAB_0331787c;
            }
            puVar14 = puVar14 + 3;
            uVar8 = uVar12 + 3;
          } while (*puVar1 != uVar17);
          puVar14 = (ushort *)0x1;
          uVar12 = uVar12 + 2;
LAB_0331787c:
          uVar17 = (uint)(uVar12 < 0x80000) & (uint)puVar14;
          FUN_0328a0b0(lVar18,6,1,uVar17 ^ 1);
          if (uVar17 == 0) goto LAB_033178a0;
          goto LAB_0331765c;
        }
        FUN_0328a0b0(lVar18,6,1,1);
LAB_033178a0:
        uVar9 = 1;
LAB_033174f0:
        uVar6 = *(ushort *)(lVar18 + 0x250) & 0xfdff;
      }
      else {
        bVar5 = false;
        lVar15 = 0;
        do {
          lVar4 = lVar15 + 4;
          if (*(ushort *)((long)&DAT_0418d22a + lVar15) == uVar17 ||
              *(ushort *)((long)&DAT_0418d22c + lVar15) == uVar17) {
            bVar5 = true;
          }
          lVar15 = lVar4;
        } while (lVar4 != 0x52c);
        if (bVar5) goto LAB_033175f8;
LAB_03317648:
        FUN_0328a0b0(lVar18,6,1,0);
LAB_0331765c:
        if (((*(ushort *)(lVar18 + 0x578) >> 5 & 1) != 0) &&
           ((*(ushort *)(lVar18 + 0x578) >> 4 & 1) != 0)) {
          uVar9 = 0;
          goto LAB_033174f0;
        }
        uVar9 = 0;
        uVar6 = *(ushort *)(lVar18 + 0x250) | 0x200;
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,9);
      *(ushort *)(lVar18 + 0x250) = uVar6;
LAB_03317504:
      FUN_0328a2b0(lVar18,uVar9);
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 0x2c) {
      if (*(char *)((long)param_1 + 0x1aec) == '\0') {
        local_80 = *(undefined **)(*(long *)(param_1[0x356] + 0x20) + 0x18);
        local_110 = PTR_DAT_04bc8e78 + 0x10;
        puStack_108 = &DAT_04169712;
        local_f0 = puVar7 + 0x10;
        local_e8 = "T_00";
        local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
        ppuVar10 = &local_110;
      }
      else {
        local_80 = *(undefined **)(*(long *)(param_1[0x356] + 0x20) + 0x18);
        local_100 = PTR_DAT_04bc8e78 + 0x10;
        puStack_f8 = &DAT_041692f6;
        local_f0 = puVar7 + 0x10;
        local_e8 = "T_00";
        local_f0 = (undefined *)FUN_0328b6d0(&local_80,&local_f0,0);
        ppuVar10 = &local_100;
      }
      FUN_032d67f0(&local_f0,ppuVar10);
      FUN_033227f8(param_1);
      return;
    }
  } while( true );
}

