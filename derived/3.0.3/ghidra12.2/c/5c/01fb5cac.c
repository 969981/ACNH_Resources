
void FUN_01fb5cac(long param_1,short *param_2,int param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc [2];
  undefined4 local_3b4;
  undefined8 local_3b0;
  char *local_3a8;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_36c;
  undefined1 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined1 local_348;
  undefined4 local_344;
  undefined1 auStack_340 [108];
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 local_2c4;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  uint *local_1f8;
  undefined *local_1f0;
  undefined1 *puStack_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined4 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined5 local_13c;
  undefined3 uStack_137;
  undefined5 uStack_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [31];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  long local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  
  puVar6 = PTR_DAT_04bb5ce0;
  puVar5 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    return;
  }
  if (*(long *)(lVar14 + 0x330) == 0) {
    return;
  }
  local_6c = param_3;
  puVar9 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
  iVar7 = FUN_006bd550(*puVar9,0);
  if (iVar7 != 0x758f7eaf) {
    return;
  }
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar14 = *(long *)(*(long *)puVar5 + 0x330);
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x244) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 3) {
    return;
  }
  local_70 = 0;
  local_78 = 0;
  if (local_6c == 2) {
    lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_70 = *(undefined4 *)(lVar14 + 0x280);
    local_78 = *(undefined8 *)(lVar14 + 0x278);
  }
  else {
    if (local_6c == 1) {
      uVar12 = 1;
    }
    else {
      if (local_6c != 0) goto LAB_01fb5dc4;
      uVar12 = 0;
    }
    FUN_01fc6440(param_1,&local_78,uVar12);
  }
LAB_01fb5dc4:
  local_190 = PTR_DAT_04bbc1a0;
  local_188 = PTR_DAT_04bb2010;
  puStack_80 = &local_78;
  local_88 = param_1;
  if ((*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) && (*param_2 != -2)) {
    piVar2 = (int *)(param_1 + 0xaf88);
    if (*piVar2 != 0) {
      local_198 = 0;
      *(undefined4 *)(param_1 + 0x12058) = 2;
      local_170 = 0;
      local_180 = 0;
      local_190 = local_190 + 0x10;
      local_154 = 0;
      local_188 = local_188 + 0x10;
      *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 2;
      local_15c = 0;
      uStack_158 = 0xfffe;
      local_178 = local_188;
      FUN_0277d4ac(&uStack_158);
      local_13c = 0;
      uStack_137 = 0;
      uStack_134 = 0;
      local_150 = 0x41c8000041800000;
      local_148 = 0xbf800000bf800000;
      local_140 = 0xbf800000;
      local_12c = 0xfffe;
      FUN_0277d4ac(&local_12c);
      local_124 = 0;
      local_e8 = 0x20;
      local_b8 = local_ac;
      local_b0 = 0x20;
      local_f0 = local_e4;
      local_c5 = 0;
      local_f8 = PTR_DAT_04bb2028 + 0x10;
      local_e4[0] = 0;
      local_8d = 0;
      local_ac[0] = 0;
      local_198 = 0;
      local_180 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_15c = 0;
      local_3b0 = (undefined *)0xfffe;
      local_c0 = local_f8;
      FUN_0277d4ac(&local_3b0);
      uStack_158 = (undefined4)local_3b0;
      local_154 = local_3b0._4_4_;
      local_150 = 0x41c8000041800000;
      local_148 = 0xbf800000bf800000;
      local_140 = 0xbf800000;
      local_13c = 0;
      uStack_137 = 0;
      uStack_134 = 0;
      local_3b0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_3b0);
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
      local_114 = 0;
      local_10c = 0;
      local_104 = 0;
      local_fc = 0;
      local_12c = local_3b0;
      *local_f0 = 0;
      *local_b8 = 0;
      puVar5 = PTR_DAT_04bb43c0;
      puStack_1e8 = local_1dc;
      local_1e0 = 0x40;
      local_19d = 0;
      local_1f0 = PTR_DAT_04bb2bc0 + 0x10;
      local_1dc[0] = 0;
      local_208 = PTR_DAT_04bc0510 + 0x10;
      local_200 = *(undefined4 *)param_2;
      local_1fc = *(undefined4 *)(param_2 + 2);
      local_1f8 = (uint *)0x0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar8 = FUN_0277d6c4(&local_200);
      if (*(long *)puVar5 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_2);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
             (((puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar15 != (uint *)0x0 && (uVar8 = *puVar15, local_1f8 = puVar15, uVar8 != 0)) &&
              (puVar15 != (uint *)(ulong)uVar8)))) {
            puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
            if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar16[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar14 != 0) {
                uVar4 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc0138) &&
                   (0xffac < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc0138 + 8) +
                                                (long)(int)uVar4 * 2) - 0x54U))) {
                  iVar7 = FUN_01b10e00(&local_208);
                  if (iVar7 != 8) {
                    FUN_01b10b80(&local_208,&local_1f0);
                    local_3b4 = 0x23;
                    if (iVar7 != 5) {
                      local_3b4 = 0x46;
                    }
                    lVar14 = FUN_016e3954(*(undefined8 *)(param_1 + 8));
                    local_3b0 = PTR_DAT_04bb2020 + 0x10;
                    local_3a8 = "NpcFtrHeight";
                    if (((*(long *)(lVar14 + 0x1138) != 0) &&
                        (lVar14 = *(long *)(*(long *)(lVar14 + 0x1138) + 0x78), lVar14 != 0)) &&
                       (plVar11 = *(long **)(lVar14 + 0x48), plVar11 != (long *)0x0)) {
                      (**(code **)(*plVar11 + 0x30))(local_78._4_4_,plVar11,&local_3b0);
                    }
                    if (local_6c == 2) {
                      uVar13 = 4;
                    }
                    else {
                      *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 8;
                      uVar13 = 3;
                    }
                    *(undefined4 *)(param_1 + 0xaf8c) = uVar13;
                    FUN_01e63f1c(&local_3b0);
                    local_3b0 = (undefined *)CONCAT44(local_3b0._4_4_,local_3b4);
                    FUN_01ed8df0(auStack_340,0,&local_1f0);
                    local_2c4 = FUN_01b10940(&local_208);
                    FUN_01b10fd0(local_3bc,&local_208);
                    FUN_02081400(&local_3c8,*(undefined8 *)(param_1 + 0xafb8),local_3bc);
                    local_2d4 = (undefined4)local_3c8;
                    uStack_2d0 = local_3c8._4_4_;
                    local_3c8 = 0;
                    local_3c0 = 0;
                    if ((param_4 != 0) &&
                       (uVar10 = FUN_01fc07f8(param_1,&local_3c8,param_4), (uVar10 & 1) != 0)) {
                      local_358 = 1;
                      local_388 = local_3c8;
                      local_380 = local_3c0;
                    }
                    if ((*piVar2 == 1) && ((*(uint *)(param_1 + 0xafb0) >> 1 & 1) != 0)) {
                      *(undefined4 *)(param_1 + 0x12058) = 0;
                      *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xfffffffd;
                      local_36c = *(undefined4 *)(param_1 + 0x12068);
                      *(undefined4 *)(param_1 + 0x12068) = 0;
                      local_350 = 2;
                    }
                    local_3a8 = (char *)(param_1 + 0x12218);
                    *(long *)(param_1 + 0x12220) = param_1;
                    local_34c = 1;
                    *(undefined1 **)(param_1 + 0x12228) = &LAB_01fc13b0;
                    *(undefined8 *)(param_1 + 0x12230) = 0;
                    FUN_01fb1020(param_1,&local_3b0,0x1e);
                    return;
                  }
                  FUN_01b10fd0(&local_3c8,&local_208);
                  if (*piVar2 != 1) {
                    if (*piVar2 == 0) {
                      FUN_01e5b3e0(*(undefined8 *)(param_1 + 0x10),&local_3c8);
                      return;
                    }
                    return;
                  }
                  FUN_01e63f1c(&local_3b0);
                  local_344 = 0x1e;
                  local_3b0 = (undefined *)CONCAT44(local_3b0._4_4_,1);
                  local_34c = 1;
                  local_348 = 1;
                  if (*(int *)(param_1 + 0xb0c8) < *(int *)(param_1 + 0xb0cc)) {
                    FUN_021920b0((int *)(param_1 + 0xb0c8),&local_3b0);
                  }
                  local_3bc[0] = 0;
                  FUN_01facaec(param_1,&local_3c8,local_3bc);
                  return;
                }
              }
            }
          }
        }
      }
      FUN_01fc0744(&local_88);
      return;
    }
    lVar14 = *(long *)puVar6;
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe9e) != '\0')) {
      *(undefined4 *)(param_1 + 0x12180) = *(undefined4 *)(lVar14 + 0xea0);
    }
    FUN_02085d90(*(undefined8 *)(param_1 + 0x18),0,&local_78,0);
  }
  else {
    lVar14 = *(long *)puVar6;
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe9e) != '\0')) {
      *(undefined4 *)(param_1 + 0x12180) = *(undefined4 *)(lVar14 + 0xea0);
    }
    lVar14 = *(long *)(param_1 + 0x18);
    uVar10 = FUN_02085a50(lVar14,3,0);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)(lVar14 + 0x801) = 1;
      lVar1 = lVar14 + 0x10;
      lVar3 = lVar1 + (ulong)*(uint *)(lVar14 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar14 + 0x294)) {
        lVar3 = lVar1;
      }
      *(undefined4 *)(lVar3 + 0x14) = local_70;
      *(undefined8 *)(lVar3 + 0xc) = local_78;
      lVar3 = lVar1 + (ulong)*(uint *)(lVar14 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar14 + 0x294)) {
        lVar3 = lVar1;
      }
      *(undefined1 *)(lVar3 + 0x7e) = 0;
    }
  }
  FUN_01fb9bc0(param_1);
  return;
}

