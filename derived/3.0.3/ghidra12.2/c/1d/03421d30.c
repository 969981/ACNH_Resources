
void FUN_03421d30(long param_1,long *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined **local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined *local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined4 local_4e0;
  undefined *local_4d8;
  undefined1 *puStack_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4 [63];
  undefined1 local_485;
  undefined *local_480;
  undefined1 *puStack_478;
  undefined4 local_470;
  undefined1 local_46c [63];
  undefined1 local_42d;
  undefined8 local_428;
  undefined *local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined *local_3f0;
  undefined1 *puStack_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc [63];
  undefined1 local_39d;
  undefined *local_398;
  undefined1 *puStack_390;
  undefined4 local_388;
  undefined1 local_384 [63];
  undefined1 local_345;
  undefined8 local_340;
  undefined *local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined1 local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined *local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [63];
  undefined1 local_2b5;
  undefined *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [63];
  undefined1 local_25d;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined4 local_230;
  undefined1 local_22c [63];
  undefined1 local_1ed;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [63];
  undefined1 local_195;
  undefined **local_190;
  int local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined2 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined1 auStack_62 [2];
  undefined4 local_60;
  uint local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) goto LAB_03421ffc;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03421ffc;
  local_510 = 0;
  uStack_50c = 0;
  local_518 = *param_3;
  uStack_514 = param_3[1];
  local_520 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_518);
  if (*(long *)puVar4 == 0) {
LAB_03421f90:
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x86);
    local_54 = 0xbc;
LAB_03421fdc:
    uVar10 = FUN_01af0020(&local_520);
    if ((uVar10 & 1) == 0) goto LAB_03421ffc;
    uVar7 = FUN_01af02d0(&local_520);
    uVar10 = uVar7 & 0xffffffff;
    uVar5 = (uint)uVar7;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03421f90;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_3);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), puVar8 == (uint *)0x0
       )) goto LAB_03421f90;
    local_510 = SUB84(puVar8,0);
    uStack_50c = (undefined4)((ulong)puVar8 >> 0x20);
    local_54 = 0;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x86);
    uVar5 = *puVar8;
    if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
      local_54 = 0;
      if (*puVar9 != 0) {
        uVar5 = puVar9[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_54 < 0xbd))
            goto LAB_03421edc;
          }
        }
        local_54 = 0;
      }
    }
LAB_03421edc:
    if (local_54 != 0x86) {
      uVar5 = *puVar8;
      if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        if ((*puVar9 != 0) && ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 0x59))
            {
              iVar6 = FUN_01aedd20(&local_520);
              iVar3 = (int)((ulong)((long)iVar6 * 0x66666667) >> 0x20);
              iVar6 = iVar6 / 10 + (iVar6 >> 0x1f);
              goto LAB_03422068;
            }
          }
        }
      }
      goto LAB_03421fdc;
    }
    uVar5 = FUN_01aed4b8(&local_520);
    if (999 < (int)uVar5) {
      uVar10 = (ulong)uVar5 / 1000;
      if (1 < uVar5 / 1000) goto LAB_03422074;
      goto LAB_03421ffc;
    }
    iVar3 = (int)((ulong)((long)(int)uVar5 * 0x51eb851f) >> 0x20);
    iVar6 = (int)uVar5 / 100 + ((int)uVar5 >> 0x1f);
LAB_03422068:
    uVar5 = iVar6 - (iVar3 >> 0x1f);
    uVar10 = (ulong)uVar5;
  }
  if (1 < (int)uVar5) {
LAB_03422074:
    local_520 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
    local_518 = 7;
    (**(code **)(*param_2 + 0x18))(param_2,&local_520);
    (**(code **)(param_2[3] + 0x1c0))(param_2[1]);
    local_154 = 0;
    local_158 = 0x13;
    local_150 = 0xffffffff;
    local_148 = 0xffffffff00000000;
    local_130 = local_124;
    local_160 = &local_88;
    local_140 = 0xffffffff;
    local_128 = 0x40;
    local_e5 = 0;
    local_124[0] = 0;
    local_4d8 = PTR_DAT_04bb2bc0 + 0x10;
    local_d8 = local_cc;
    local_d0 = 0x40;
    local_8d = 0;
    local_cc[0] = 0;
    local_168 = PTR_DAT_04bc0bc0 + 0x10;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    uStack_68 = 0;
    puVar1 = auStack_62;
    if (auStack_62 <= (undefined1 *)((long)&local_88 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_88 + 2U);
    }
    uStack_70 = 0;
    local_6a = 0;
    local_138 = local_4d8;
    local_e0 = local_4d8;
    memset(local_160,0,(ulong)(puVar1 + (-0xe1 - (long)&local_168)) & 0xfffffffffffffffc | 2);
    local_60 = 0;
    FUN_01be4af0(&local_168,**(undefined4 **)PTR_DAT_04bb3448,uVar10,10,0,0);
    local_60 = (undefined4)uVar10;
    local_518 = CONCAT22(local_518._2_2_,0x100);
    puStack_4d0 = local_4c4;
    uStack_514 = 0;
    local_510 = 0;
    uStack_50c = 0;
    local_4f8 = 0;
    local_4f4 = 0;
    local_4e0 = 0xffffffff;
    local_4c8 = 0x40;
    local_485 = 0;
    local_4c4[0] = 0;
    local_470 = 0x40;
    local_42d = 0;
    local_46c[0] = 0;
    local_4f0 = 0xffffffff;
    uStack_4e8 = 0xffffffff00000000;
    puStack_478 = local_46c;
    local_410 = 0;
    local_40c = 0;
    local_3f8 = 0xffffffff;
    local_3e0 = 0x40;
    local_39d = 0;
    local_388 = 0x40;
    local_345 = 0;
    local_428 = 0;
    local_328 = 0;
    local_324 = 0;
    local_320 = 0xffffffff;
    local_318 = 0xffffffff00000000;
    local_310 = 0xffffffff;
    local_2f8 = 0x40;
    local_2b5 = 0;
    local_2a0 = 0x40;
    local_25d = 0;
    local_340 = 0;
    local_248 = 0;
    local_250 = 0;
    local_258 = 0;
    local_230 = 0x40;
    local_1ed = 0;
    local_1d8 = 0x40;
    local_195 = 0;
    local_508 = PTR_DAT_04bb2e00 + 0x10;
    puStack_390 = local_384;
    local_384[0] = 0;
    puStack_3e8 = local_3dc;
    local_3dc[0] = 0;
    uStack_500 = 0;
    uStack_418 = 0;
    local_2a8 = local_29c;
    local_29c[0] = 0;
    uStack_330 = 0;
    local_238 = local_22c;
    local_22c[0] = 0;
    local_1e0 = local_1d4;
    local_300 = local_2f4;
    local_2f4[0] = 0;
    local_1d4[0] = 0;
    local_408 = 0xffffffff;
    uStack_400 = 0xffffffff00000000;
    local_188 = *(int *)PTR_DAT_04bc0b30;
    local_184 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_188 + 1;
    local_190 = &PTR_LAB_04a3aca8;
    local_180 = 0;
    local_178 = 0;
    local_520 = (undefined **)(PTR_DAT_04bc0bf0 + 0x10);
    local_170 = 0;
    local_480 = local_4d8;
    local_420 = local_508;
    local_3f0 = local_4d8;
    local_398 = local_4d8;
    local_338 = local_508;
    local_308 = local_4d8;
    local_2b0 = local_4d8;
    local_240 = local_4d8;
    local_1e8 = local_4d8;
    FUN_01bea4e8(&local_520,param_1,&local_168);
    FUN_01bea9c8(&local_520);
    FUN_01be9eb8(&local_520);
    return;
  }
LAB_03421ffc:
  local_520 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
  local_518 = 6;
  (**(code **)(*param_2 + 0x18))(param_2,&local_520);
  (**(code **)(param_2[3] + 0x1b8))(param_2[1]);
  return;
}

