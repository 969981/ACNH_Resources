
/* WARNING: Removing unreachable block (ram,0x0375b004) */
/* WARNING: Removing unreachable block (ram,0x0375afb8) */
/* WARNING: Removing unreachable block (ram,0x0375afa8) */
/* WARNING: Removing unreachable block (ram,0x0375aff4) */
/* WARNING: Removing unreachable block (ram,0x0375b094) */

bool FUN_0375ae80(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long *local_3380;
  undefined8 uStack_3378;
  undefined4 local_3370;
  float local_336c [3];
  undefined8 local_3360;
  undefined **local_3358;
  long *local_3350;
  undefined8 local_3348;
  long local_3340 [3];
  undefined8 auStack_3328 [1194];
  undefined8 local_dd8;
  undefined1 auStack_dc0 [3200];
  undefined8 *local_140;
  long local_138;
  uint *local_130;
  byte local_128 [24];
  undefined8 local_110;
  long lStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  uint local_84;
  undefined *local_80;
  int local_78;
  uint local_74;
  uint local_6c [3];
  
  puVar2 = PTR_DAT_04bb2010;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar14 == 0) {
    local_78 = 0;
    local_74 = 0;
    uVar6 = 0x10;
    iVar15 = 0x10;
  }
  else {
    local_78 = *(int *)(lVar14 + 0xd88);
    local_74 = *(uint *)(lVar14 + 0xd8c);
    iVar15 = *(int *)(lVar14 + 0xd98);
    uVar6 = *(uint *)(lVar14 + 0xd9c);
  }
  local_dc = 0;
  local_88 = local_78;
  if (iVar15 <= local_78) {
    local_88 = iVar15;
  }
  if (local_78 <= iVar15) {
    local_78 = iVar15;
  }
  local_84 = local_74;
  if ((int)uVar6 <= (int)local_74) {
    local_84 = uVar6;
  }
  if ((int)local_74 <= (int)uVar6) {
    local_74 = uVar6;
  }
  local_d4 = 0;
  local_f0 = &local_dc;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_100 = PTR_DAT_04bb96d8 + 0x10;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  uStack_f8 = 0x110000020d;
  local_e0 = 0x15;
  uStack_e8 = 0x1900000000;
  local_80 = puStack_90;
  FUN_02145060(&local_100,PTR_DAT_04bb3238);
  puVar5 = PTR_DAT_04bc00c8;
  puVar4 = PTR_DAT_04bb43c0;
  local_110 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_128[0x10] = 0;
  local_128[0x11] = 0;
  local_128[0x12] = 0;
  local_128[0x13] = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_128[4] = 0;
  local_128[5] = 0;
  local_128[6] = 0;
  local_128[7] = 0;
  local_128[8] = 0;
  local_128[9] = 0;
  local_128[10] = 0;
  local_128[0xb] = 0;
  local_128[0xc] = 0;
  local_128[0xd] = 0;
  local_128[0xe] = 0;
  local_128[0xf] = 0;
  lStack_108 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  plVar1 = (long *)(puVar2 + 0x10);
  iVar15 = local_78;
  if (local_88 + 1 < local_78) {
    iVar15 = local_88 + 1;
  }
  if (local_78 < local_88 + 1) {
    local_78 = local_88 + 1;
  }
  uVar6 = local_74;
  if ((int)(local_84 + 1) < (int)local_74) {
    uVar6 = local_84 + 1;
  }
  if ((int)local_74 < (int)(local_84 + 1)) {
    local_74 = local_84 + 1;
  }
  uVar16 = local_74 + 1;
  local_3348 = (long *)CONCAT44(uVar6,iVar15);
  local_88 = iVar15;
  local_84 = uVar6;
  if (uVar16 != uVar6) {
    puVar12 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
    local_3360 = &puStack_90;
    local_3358 = &local_80;
    local_3350 = plVar1;
    do {
      uStack_3378 = 0;
      lVar9 = *(long *)(lVar14 + 0xd0);
      local_3380 = plVar1;
      if (lVar9 == 0) {
        plVar7 = (long *)PTR_DAT_04bb37e0;
      }
      else {
        lVar18 = lVar9 + 0x130 + (ulong)*(uint *)(lVar9 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar9 + 0x198)) {
          lVar18 = lVar9 + 0x130;
        }
        plVar7 = (long *)FUN_012eb21c(lVar18,&local_3350,&local_3380);
      }
      lVar9 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(plVar7);
      lVar18 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_130 = (uint *)0x0;
          local_138 = *plVar7;
          local_140 = puVar12;
          uVar6 = FUN_0277d6c4(&local_138);
          if (*(long *)puVar4 == 0) {
LAB_0375b25c:
            local_6c[0] = 0xbc;
          }
          else {
            lVar9 = *(long *)(lVar18 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0375b25c;
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(plVar7);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
               (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar10 == (uint *)0x0)) goto LAB_0375b25c;
            local_6c[0] = 0;
            uVar6 = *puVar10;
            local_130 = puVar10;
            if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
              puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
              local_6c[0] = 0;
              if (*puVar13 != 0) {
                uVar6 = puVar13[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar13 + lVar9 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar9 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar6);
                    }
                    if (*puVar13 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)puVar5) &&
                       (local_6c[0] = (uint)*(ushort *)
                                             (*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2),
                       local_6c[0] < 0xbd)) goto LAB_0375b268;
                  }
                }
                local_6c[0] = 0;
              }
            }
          }
LAB_0375b268:
          local_336c[0] = 2.94273e-44;
          if (local_6c[0] == 0x15) {
            uVar11 = (ulong)(uint)((int)local_3348 - iVar15);
            if (0x13 < (uint)((int)local_3348 - iVar15)) {
              uVar11 = 0;
            }
            if ((int)(uint)local_128[uVar11] < (int)local_3348._4_4_) {
              local_128[uVar11] = (byte)((ulong)local_3348 >> 0x20);
            }
          }
        }
      }
      if ((int)local_3348 < *(int *)(local_3358 + 1)) {
        iVar8 = (int)local_3348 + 1;
        uVar6 = local_3348._4_4_;
      }
      else {
        uVar6 = local_3348._4_4_ + 1;
        iVar8 = *(int *)(local_3360 + 1);
        local_3348 = (long *)((ulong)uVar6 << 0x20);
      }
      local_3348 = (long *)CONCAT44(local_3348._4_4_,iVar8);
    } while ((iVar15 != iVar8) || (uVar16 != uVar6));
  }
  iVar8 = local_88;
  lVar14 = 399;
  local_3350 = local_3340;
  local_3360 = (undefined **)0x0;
  local_3358 = (undefined **)0x0;
  puVar12 = auStack_3328;
  do {
    puVar12[-3] = puVar12;
    puVar12[3] = puVar12 + 6;
    *puVar12 = puVar12 + 3;
    lVar14 = lVar14 + -3;
    puVar12 = puVar12 + 9;
  } while (lVar14 != 0);
  local_dd8 = 0;
  if (auStack_dc0 != (undefined1 *)0x0) {
    local_3360 = (undefined **)0x19000000000;
    local_3358 = (undefined **)auStack_dc0;
  }
  uVar6 = local_74 + 1;
  local_3348 = local_3350;
  if (uVar6 != local_84) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar16 = local_84;
    iVar17 = local_88;
    do {
      uVar3 = (iVar17 - local_88) + uStack_e8._4_4_ * (uVar16 - local_84);
      if ((*(uint *)((long)local_f0 + (long)((int)uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) ==
          0) {
        uVar11 = FUN_035aa210(iVar17 + -1,uVar16 - 1,&local_110);
        if (((((uVar11 & 1) != 0) &&
             (uVar11 = FUN_035aa210(iVar17 + -1,uVar16,&local_110), (uVar11 & 1) != 0)) &&
            (uVar11 = FUN_035aa210(iVar17,uVar16 - 1,&local_110), (uVar11 & 1) != 0)) &&
           (uVar11 = FUN_035aa210(iVar17,uVar16,&local_110), plVar1 = local_3350, (uVar11 & 1) != 0)
           ) {
          if ((int)local_3360 < local_3360._4_4_) {
            if (local_3350 != (long *)0x0) {
              local_3350 = (long *)*local_3350;
            }
            *plVar1 = (long)puVar2;
            plVar1[1] = 0;
            plVar1[2] = 0;
            if ((int)local_3360 < local_3360._4_4_) {
              *(long **)((long)local_3358 + (long)(int)local_3360 * 8) = plVar1;
              local_3360 = (undefined **)CONCAT44(local_3360._4_4_,(int)local_3360 + 1);
            }
            uVar11 = (ulong)(uint)(iVar17 - iVar15);
            *(int *)(plVar1 + 1) = iVar17;
            *(uint *)((long)plVar1 + 0xc) = uVar16;
            *(undefined4 *)(plVar1 + 2) = 0;
            if (0x13 < (uint)(iVar17 - iVar15)) {
              uVar11 = 0;
            }
            *(undefined1 *)((long)plVar1 + 0x14) = 0;
            *(bool *)((long)plVar1 + 0x15) = (int)uVar16 <= (int)(uint)local_128[uVar11];
          }
        }
      }
      if (iVar17 < local_78) {
        iVar17 = iVar17 + 1;
      }
      else {
        uVar16 = uVar16 + 1;
        iVar17 = local_88;
      }
    } while (iVar8 != iVar17 || uVar6 != uVar16);
  }
  local_140 = &local_3360;
  local_3380 = (long *)0x3f8ccccd3f800000;
  uStack_3378 = 0x3fa6666640000000;
  local_336c[1] = 0.0;
  local_3370 = 0x3fa66666;
  local_6c[0] = 0;
  local_336c[0] = ((float)local_88 * 5.0 + (float)local_78 * 5.0 + 5.0) * 0.5;
  local_336c[2] = ((float)(int)local_84 * 5.0 + (float)(int)local_74 * 5.0 + 5.0) * 0.5;
  local_138 = param_1;
  local_130 = (uint *)param_2;
  FUN_0375b5f0(&local_140,local_336c,&local_3380,local_6c,1);
  local_6c[0] = 1;
  local_3380 = (long *)0x3fb333333f800000;
  uStack_3378 = 0x3f8ccccd40a00000;
  local_3370 = 0x3f8ccccd;
  FUN_0375b5f0(&local_140,local_336c,&local_3380,local_6c,1);
  local_6c[0] = 1;
  FUN_0375b5f0(&local_140,local_336c,&local_3380,local_6c,0);
  local_6c[0] = 2;
  FUN_0375b5f0(&local_140,local_336c,&local_3380,local_6c,0);
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}

