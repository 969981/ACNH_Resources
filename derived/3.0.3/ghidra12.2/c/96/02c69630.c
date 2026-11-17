
void FUN_02c69630(long param_1,short *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  uint *puVar14;
  undefined *local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e4;
  undefined4 local_4dc;
  undefined *local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined *local_4a8;
  undefined1 *puStack_4a0;
  undefined4 local_498;
  undefined1 local_494 [63];
  undefined1 local_455;
  undefined *local_450;
  undefined1 *puStack_448;
  undefined4 local_440;
  undefined1 local_43c [63];
  undefined1 local_3fd;
  undefined8 local_3f8;
  undefined *local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined *local_3c0;
  undefined1 *puStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac [63];
  undefined1 local_36d;
  undefined *local_368;
  undefined1 *puStack_360;
  undefined4 local_358;
  undefined1 local_354 [63];
  undefined1 local_315;
  undefined8 local_310;
  undefined *local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1fc [63];
  undefined1 local_1bd;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [63];
  undefined1 local_165;
  undefined *local_160;
  int local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined *local_138;
  char *local_130;
  int local_128;
  char local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  char *local_d8;
  int local_d0;
  char local_cc [63];
  undefined1 local_8d;
  undefined *local_88;
  short local_80;
  short local_7e;
  undefined4 local_7c;
  uint *local_78;
  undefined4 local_6c;
  
  plVar10 = *(long **)(*(long *)(param_1 + 0x210) + 0x5d8);
  if (plVar10 == (long *)0x0) {
    return;
  }
  if (((((*param_2 == -2) || (*(int *)(param_1 + 0x1c764) == 0)) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8), lVar8 == 0)) ||
      ((*(long *)(lVar8 + 0x220) == 0 || (iVar6 = FUN_02c81e50(), iVar6 < 2)))) ||
     ((lVar8 = *(long *)(*(long *)(param_1 + 0x210) + 0x5d8), lVar8 == 0 ||
      (lVar8 = **(long **)(lVar8 + 0x220), lVar8 == 0)))) goto LAB_02c69c60;
  plVar11 = *(long **)(lVar8 + 0x48);
  if (plVar11[1] != 0) {
    local_4f0 = PTR_DAT_04bc0878 + 0x10;
    local_4e8 = 9;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_4f0);
    (**(code **)(plVar11[3] + 0x5e0))(plVar11[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar8);
  }
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) goto LAB_02c69c60;
  local_7e = param_2[1];
  local_78 = (uint *)0x0;
  local_7c = *(undefined4 *)(param_2 + 2);
  local_88 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_80 = *param_2;
  uVar7 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar1 == 0) {
LAB_02c697d8:
    puVar14 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02c697d8;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_02c697d8;
    puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar14 != (uint *)0x0) {
      local_78 = puVar14;
    }
  }
  puVar5 = PTR_PTR_04bb2238;
  local_8d = 0;
  local_d0 = 0x40;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  local_e0 = puVar1;
  local_d8 = local_cc;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar13 = *(char **)(puVar5 + 8);
  if (local_cc != pcVar13) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar12) == '\0') goto LAB_02c69880;
      lVar3 = *(long *)(puVar5 + 8) + lVar12;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02c69880;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02c69880;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02c69880:
    iVar6 = (int)lVar12;
    if (local_d0 <= (int)lVar12) {
      iVar6 = local_d0 + -1;
    }
    memcpy(local_cc,pcVar13,(long)iVar6);
    local_cc[iVar6] = '\0';
  }
  local_e5 = 0;
  local_128 = 0x40;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_138 = puVar1;
  local_130 = local_124;
  local_e0 = puVar2;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  pcVar13 = *(char **)(puVar5 + 8);
  if (local_124 != pcVar13) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar12) == '\0') goto LAB_02c6993c;
      lVar3 = *(long *)(puVar5 + 8) + lVar12;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02c6993c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02c6993c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02c6993c:
    iVar6 = (int)lVar12;
    if (local_128 <= (int)lVar12) {
      iVar6 = local_128 + -1;
    }
    memcpy(local_124,pcVar13,(long)iVar6);
    local_124[iVar6] = '\0';
  }
  local_138 = puVar2;
  iVar6 = FUN_01ad7260(&local_88);
  if (iVar6 == 0) {
    uVar7 = 0;
    local_6c = 0;
    if (((puVar14 != (uint *)0x0) && (uVar4 = *puVar14, uVar4 != 0)) &&
       (puVar14 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar7 = puVar9[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar12 != 0) {
            uVar4 = 0;
            if ((ulong)uVar7 != 0) {
              uVar4 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc0020) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar4 * 2),
               uVar7 < 0x5b6)) goto LAB_02c69a28;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02c69a28:
    local_4f0 = (undefined *)CONCAT44(local_4f0._4_4_,uVar7);
    if (uVar7 != 0) {
      FUN_01ae1780(&local_88,&local_e0);
      FUN_01ae18f0(&local_88,&local_138);
    }
  }
  else {
    FUN_038d1270(&local_e0,"STR_Remake_BodyColor");
    FUN_01b000c0(&local_88,&local_138);
  }
  if ((*local_d8 != '\0') && (*local_130 != '\0')) {
    local_4e4 = 0;
    local_4e8 = CONCAT22(local_4e8._2_2_,0x100);
    local_4dc = 0;
    local_4c8 = 0;
    puStack_4a0 = local_494;
    local_4c4 = 0;
    local_4c0 = 0xffffffff;
    uStack_4b8 = 0xffffffff00000000;
    local_4b0 = 0xffffffff;
    local_498 = 0x40;
    local_455 = 0;
    local_494[0] = 0;
    local_4a8 = PTR_DAT_04bb2bc0 + 0x10;
    local_440 = 0x40;
    local_3fd = 0;
    local_43c[0] = 0;
    puStack_448 = local_43c;
    local_3c8 = 0xffffffff;
    local_2f0 = 0xffffffff;
    local_2e0 = 0xffffffff;
    local_2e8 = 0xffffffff00000000;
    local_3e0 = 0;
    local_3dc = 0;
    local_3b0 = 0x40;
    local_36d = 0;
    local_358 = 0x40;
    local_315 = 0;
    local_3f8 = 0;
    local_2f8 = 0;
    local_2f4 = 0;
    local_2c8 = 0x40;
    local_285 = 0;
    local_270 = 0x40;
    local_22d = 0;
    local_310 = 0;
    local_218 = 0;
    local_220 = 0;
    local_228 = 0;
    local_200 = 0x40;
    local_1bd = 0;
    local_1a8 = 0x40;
    local_165 = 0;
    local_4d8 = PTR_DAT_04bb2e00 + 0x10;
    puStack_360 = local_354;
    local_354[0] = 0;
    puStack_3b8 = local_3ac;
    local_3ac[0] = 0;
    local_3d8 = 0xffffffff;
    uStack_3d0 = 0xffffffff00000000;
    local_2d0 = local_2c4;
    local_2c4[0] = 0;
    local_208 = local_1fc;
    local_1fc[0] = 0;
    local_1b0 = local_1a4;
    local_278 = local_26c;
    local_26c[0] = 0;
    local_1a4[0] = 0;
    uStack_4d0 = 0;
    uStack_3e8 = 0;
    uStack_300 = 0;
    local_158 = *(int *)PTR_DAT_04bc0b30;
    local_154 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_158 + 1;
    local_160 = PTR_DAT_04bc0a78 + 0x10;
    local_150 = 0;
    local_148 = 0;
    local_4f0 = PTR_DAT_04bc0bf0 + 0x10;
    local_140 = 0;
    local_450 = local_4a8;
    local_3f0 = local_4d8;
    local_3c0 = local_4a8;
    local_368 = local_4a8;
    local_308 = local_4d8;
    local_2d8 = local_4a8;
    local_280 = local_4a8;
    local_210 = local_4a8;
    local_1b8 = local_4a8;
    FUN_01bea210(&local_4f0,lVar8,&local_e0,&local_138);
    FUN_01bea9c8(&local_4f0);
    FUN_01be9eb8(&local_4f0);
    plVar11 = (long *)plVar10[0x36];
    if (plVar11 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
                    /* WARNING: Could not recover jumptable at 0x02c69c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0xa8))(plVar10);
    return;
  }
LAB_02c69c60:
  plVar10 = (long *)plVar10[0x36];
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02c69c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x30))(plVar10,0);
  return;
}

