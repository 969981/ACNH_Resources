
/* WARNING: Removing unreachable block (ram,0x02cb0298) */
/* WARNING: Removing unreachable block (ram,0x02cb027c) */
/* WARNING: Removing unreachable block (ram,0x02cb01c8) */
/* WARNING: Removing unreachable block (ram,0x02cb0194) */
/* WARNING: Removing unreachable block (ram,0x02cb015c) */
/* WARNING: Removing unreachable block (ram,0x02cb013c) */
/* WARNING: Removing unreachable block (ram,0x02cb0174) */
/* WARNING: Removing unreachable block (ram,0x02cb01b0) */
/* WARNING: Removing unreachable block (ram,0x02cb021c) */
/* WARNING: Removing unreachable block (ram,0x02cb0264) */
/* WARNING: Removing unreachable block (ram,0x02cb02b0) */
/* WARNING: Removing unreachable block (ram,0x02cb02c8) */
/* WARNING: Removing unreachable block (ram,0x02cb0240) */

void FUN_02cb00d0(long param_1,byte *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  char *pcVar5;
  short sVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  short *psVar15;
  long lVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  ulong uVar20;
  byte local_360 [4];
  int local_35c;
  undefined *local_358;
  char *local_350;
  undefined4 local_348;
  undefined1 local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined *local_328;
  undefined1 *puStack_320;
  undefined4 local_318;
  undefined1 local_314 [63];
  undefined1 local_2d5;
  undefined *local_2d0;
  undefined1 *puStack_2c8;
  undefined4 local_2c0;
  undefined1 local_2bc [63];
  undefined1 local_27d;
  char local_278 [40];
  uint local_250;
  undefined8 local_248;
  undefined *puStack_240;
  long local_238;
  undefined8 local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined4 local_218;
  ushort local_214 [2];
  int local_210;
  undefined1 local_20c;
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined8 local_98;
  undefined *local_90;
  int local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined2 local_78;
  uint local_6c;
  
  local_6c = 0;
  uVar8 = 0xffffffff;
  plVar3 = (long *)(param_1 + (ulong)*param_2 * 800 + 0x220);
  if (7 < *param_2) {
    plVar3 = (long *)(param_1 + 0x1b20);
  }
  bVar7 = true;
  uVar19 = 0xffffffff;
  uVar9 = 0xffffffff;
  switch((param_3[1] >> 0x1e & 2 | ~*param_3 >> 0x1f | (param_3[2] >> 0x1f) << 2 |
          (param_3[3] >> 0x1f) << 3 | (param_3[4] >> 0x1f) << 4 | (param_3[5] >> 0x1f) << 5) ^ 0x3e)
  {
  case 1:
    uVar9 = *param_3;
    local_6c = 1;
    goto LAB_02cb02fc;
  case 2:
    uVar9 = param_3[1];
    local_6c = 2;
    goto LAB_02cb02fc;
  case 3:
    local_6c = 0;
    uVar8 = 0xffffffff;
    uVar9 = *param_3;
    bVar7 = true;
    uVar19 = param_3[1];
    break;
  case 4:
  case 5:
  case 6:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    break;
  case 7:
    local_6c = 0;
    uVar9 = *param_3;
    bVar7 = true;
    uVar19 = param_3[1];
    uVar8 = param_3[2];
    break;
  case 8:
    local_6c = 3;
    goto LAB_02cb02e8;
  case 0x10:
    local_6c = 4;
LAB_02cb02e8:
    uVar20 = (ulong)local_6c;
    if (5 < local_6c) {
      uVar20 = 0;
    }
    uVar9 = param_3[uVar20];
LAB_02cb02fc:
    bVar7 = false;
    uVar8 = 0xffffffff;
    uVar19 = 0xffffffff;
    break;
  default:
    uVar19 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  local_238 = 0;
  local_230 = 0;
  local_220 = local_214;
  local_1d5 = 0;
  local_214[0] = local_214[0] & 0xff00;
  local_228 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_158 = 0xffffffff00000000;
  local_218 = 0x40;
  local_1c0 = 0x40;
  local_17d = 0;
  local_1bc[0] = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0xffffffff;
  local_150 = 0xffffffff;
  local_138 = 0x40;
  local_f5 = 0;
  local_e0 = 0x40;
  local_9d = 0;
  puStack_1c8 = local_1bc;
  local_140 = local_134;
  local_134[0] = 0;
  local_e8 = local_dc;
  local_dc[0] = 0;
  local_178 = PTR_DAT_04bb2e00 + 0x10;
  local_84 = 0;
  uStack_170 = 0;
  local_88 = *(int *)PTR_DAT_04bc0b30;
  *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
  local_90 = PTR_DAT_04bc0a78 + 0x10;
  local_98 = 0;
  local_80 = 0;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  local_78 = 0x100;
  if (sVar6 == -1) {
LAB_02cb0438:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) goto joined_r0x02cb04c4;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c) {
      bVar7 = (bool)(bVar7 & *(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0);
      goto joined_r0x02cb04c4;
    }
  }
  else {
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_02cb0438;
joined_r0x02cb04c4:
    if (bVar7) {
      puStack_240 = &DAT_040a04a8;
      goto LAB_02cb04ec;
    }
  }
  uVar2 = local_6c;
  if (4 < local_6c) {
    uVar2 = 0;
  }
  puStack_240 = (&PTR_DAT_04ab5a08)[uVar2];
LAB_02cb04ec:
  local_350 = "ETC_ChatBalloon";
  local_358 = PTR_DAT_04bb2020 + 0x10;
  local_248 = local_358;
  local_1d0 = (undefined *)local_228;
  local_148 = (undefined *)local_228;
  local_f0 = (undefined *)local_228;
  FUN_01bebc30(&local_238,plVar3,&local_358,&local_248,**(undefined8 **)(plVar3[0x5a] + 0x220));
  if (-1 < (int)uVar9) {
    local_344 = 0;
    local_348 = 0x13;
    local_340 = 0xffffffff;
    uStack_338 = 0xffffffff00000000;
    local_330 = 0xffffffff;
    local_318 = 0x40;
    local_2d5 = 0;
    local_314[0] = 0;
    local_328 = PTR_DAT_04bb2bc0 + 0x10;
    local_2c0 = 0x40;
    local_27d = 0;
    local_2bc[0] = 0;
    local_358 = PTR_DAT_04bc0bc0 + 0x10;
    local_278[0] = '\0';
    local_278[1] = '\0';
    local_278[2] = '\0';
    local_278[3] = '\0';
    local_278[4] = '\0';
    local_278[5] = '\0';
    local_278[6] = '\0';
    local_278[7] = '\0';
    local_278[8] = '\0';
    local_278[9] = '\0';
    local_278[10] = '\0';
    local_278[0xb] = '\0';
    local_278[0xc] = '\0';
    local_278[0xd] = '\0';
    local_278[0xe] = '\0';
    local_278[0xf] = '\0';
    local_278[0x20] = '\0';
    local_278[0x21] = '\0';
    local_278[0x22] = '\0';
    local_278[0x23] = '\0';
    local_278[0x24] = '\0';
    local_278[0x25] = '\0';
    pcVar5 = local_278 + 0x26;
    if (local_278 + 0x26 <= local_278 + 2) {
      pcVar5 = local_278 + 2;
    }
    local_278[0x10] = '\0';
    local_278[0x11] = '\0';
    local_278[0x12] = '\0';
    local_278[0x13] = '\0';
    local_278[0x14] = '\0';
    local_278[0x15] = '\0';
    local_278[0x16] = '\0';
    local_278[0x17] = '\0';
    local_278[0x18] = '\0';
    local_278[0x19] = '\0';
    local_278[0x1a] = '\0';
    local_278[0x1b] = '\0';
    local_278[0x1c] = '\0';
    local_278[0x1d] = '\0';
    local_278[0x1e] = '\0';
    local_278[0x1f] = '\0';
    uVar20 = (ulong)(pcVar5 + (-0xe1 - (long)&local_358)) & 0xfffffffffffffffc | 2;
    local_350 = local_278;
    puStack_320 = local_314;
    local_2d0 = local_328;
    puStack_2c8 = local_2bc;
    memset(local_278,0,uVar20);
    local_250 = 0;
    FUN_01be4af0(&local_358,**(undefined4 **)PTR_DAT_04bb3448,uVar9,10,0,0);
    local_250 = uVar9;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    puVar4 = PTR_DAT_04bc0a80;
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar13 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar13 * 4) == 0x5a) goto LAB_02cb063c;
        uVar13 = uVar13 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar13);
    }
    uVar13 = 0;
LAB_02cb063c:
    local_248 = (undefined *)CONCAT44(local_248._4_4_,(int)uVar13);
    FUN_01bafc20(&local_90,&local_358,0,&local_248,0);
    if (-1 < (int)uVar19) {
      local_344 = 0;
      local_348 = 0x13;
      local_340 = 0xffffffff;
      uStack_338 = 0xffffffff00000000;
      local_330 = 0xffffffff;
      local_318 = 0x40;
      local_2d5 = 0;
      local_314[0] = 0;
      local_328 = PTR_DAT_04bb2bc0 + 0x10;
      local_2c0 = 0x40;
      local_27d = 0;
      local_2bc[0] = 0;
      local_358 = PTR_DAT_04bc0bc0 + 0x10;
      local_278[0x20] = '\0';
      local_278[0x21] = '\0';
      local_278[0x22] = '\0';
      local_278[0x23] = '\0';
      local_278[0x24] = '\0';
      local_278[0x25] = '\0';
      local_278[0x10] = '\0';
      local_278[0x11] = '\0';
      local_278[0x12] = '\0';
      local_278[0x13] = '\0';
      local_278[0x14] = '\0';
      local_278[0x15] = '\0';
      local_278[0x16] = '\0';
      local_278[0x17] = '\0';
      local_278[0x18] = '\0';
      local_278[0x19] = '\0';
      local_278[0x1a] = '\0';
      local_278[0x1b] = '\0';
      local_278[0x1c] = '\0';
      local_278[0x1d] = '\0';
      local_278[0x1e] = '\0';
      local_278[0x1f] = '\0';
      local_278[0] = '\0';
      local_278[1] = '\0';
      local_278[2] = '\0';
      local_278[3] = '\0';
      local_278[4] = '\0';
      local_278[5] = '\0';
      local_278[6] = '\0';
      local_278[7] = '\0';
      local_278[8] = '\0';
      local_278[9] = '\0';
      local_278[10] = '\0';
      local_278[0xb] = '\0';
      local_278[0xc] = '\0';
      local_278[0xd] = '\0';
      local_278[0xe] = '\0';
      local_278[0xf] = '\0';
      local_350 = local_278;
      puStack_320 = local_314;
      local_2d0 = local_328;
      puStack_2c8 = local_2bc;
      memset(local_278,0,uVar20);
      local_250 = 0;
      FUN_01be4af0(&local_358,**(undefined4 **)PTR_DAT_04bb3448,uVar19,10,0,0);
      local_250 = uVar19;
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      if (0 < (int)*(uint *)puVar4) {
        uVar13 = 0;
        do {
          if (*(int *)(*(long *)(puVar4 + 8) + uVar13 * 4) == 0x5a) goto LAB_02cb0740;
          uVar13 = uVar13 + 1;
        } while (*(uint *)puVar4 != uVar13);
      }
      uVar13 = 0;
LAB_02cb0740:
      local_248 = (undefined *)CONCAT44(local_248._4_4_,(int)uVar13);
      FUN_01bafc20(&local_90,&local_358,1,&local_248,0);
      if (-1 < (int)uVar8) {
        local_344 = 0;
        local_348 = 0x13;
        local_340 = 0xffffffff;
        uStack_338 = 0xffffffff00000000;
        local_330 = 0xffffffff;
        local_318 = 0x40;
        local_2d5 = 0;
        local_314[0] = 0;
        local_328 = PTR_DAT_04bb2bc0 + 0x10;
        local_2c0 = 0x40;
        local_27d = 0;
        local_2bc[0] = 0;
        local_358 = PTR_DAT_04bc0bc0 + 0x10;
        local_278[0x20] = '\0';
        local_278[0x21] = '\0';
        local_278[0x22] = '\0';
        local_278[0x23] = '\0';
        local_278[0x24] = '\0';
        local_278[0x25] = '\0';
        local_278[0x10] = '\0';
        local_278[0x11] = '\0';
        local_278[0x12] = '\0';
        local_278[0x13] = '\0';
        local_278[0x14] = '\0';
        local_278[0x15] = '\0';
        local_278[0x16] = '\0';
        local_278[0x17] = '\0';
        local_278[0x18] = '\0';
        local_278[0x19] = '\0';
        local_278[0x1a] = '\0';
        local_278[0x1b] = '\0';
        local_278[0x1c] = '\0';
        local_278[0x1d] = '\0';
        local_278[0x1e] = '\0';
        local_278[0x1f] = '\0';
        local_278[0] = '\0';
        local_278[1] = '\0';
        local_278[2] = '\0';
        local_278[3] = '\0';
        local_278[4] = '\0';
        local_278[5] = '\0';
        local_278[6] = '\0';
        local_278[7] = '\0';
        local_278[8] = '\0';
        local_278[9] = '\0';
        local_278[10] = '\0';
        local_278[0xb] = '\0';
        local_278[0xc] = '\0';
        local_278[0xd] = '\0';
        local_278[0xe] = '\0';
        local_278[0xf] = '\0';
        local_350 = local_278;
        puStack_320 = local_314;
        local_2d0 = local_328;
        puStack_2c8 = local_2bc;
        memset(local_278,0,uVar20);
        local_250 = 0;
        FUN_01be4af0(&local_358,**(undefined4 **)PTR_DAT_04bb3448,uVar8,10,0,0);
        local_250 = uVar8;
        if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
        if (0 < (int)*(uint *)puVar4) {
          uVar20 = 0;
          do {
            if (*(int *)(*(long *)(puVar4 + 8) + uVar20 * 4) == 0x5a) goto LAB_02cb084c;
            uVar20 = uVar20 + 1;
          } while (*(uint *)puVar4 != uVar20);
        }
        uVar20 = 0;
LAB_02cb084c:
        local_248 = (undefined *)CONCAT44(local_248._4_4_,(int)uVar20);
        FUN_01bafc20(&local_90,&local_358,2,&local_248,0);
      }
    }
  }
  FUN_01bebe38(&local_238);
  FUN_01bebabc(&local_238);
  local_35c = 2;
  if ((char)param_3[6] != '\0') {
    local_35c = 3;
  }
  local_350 = (char *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar14 = 0;
  local_358 = PTR_DAT_04bb8610 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bc1328;
  psVar15 = (short *)((long)local_350 + 2);
  do {
    if (psVar15[-1] == 0) goto LAB_02cb0910;
    if (*psVar15 == 0) {
      lVar14 = lVar14 + 1;
      goto LAB_02cb0910;
    }
    if (psVar15[1] == 0) {
      lVar14 = lVar14 + 2;
      goto LAB_02cb0910;
    }
    lVar14 = lVar14 + 3;
    psVar15 = psVar15 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_02cb0910:
  iVar10 = (int)lVar14;
  bVar17 = *param_2;
  if (0x1f < iVar10) {
    iVar10 = 0x20;
  }
  uVar18 = (ushort)bVar17;
  if (7 < bVar17) {
    uVar18 = 0xff;
  }
  local_238 = CONCAT62(local_238._2_6_,uVar18 | (ushort)(local_35c << 8));
  memcpy((void *)((ulong)&local_238 | 2),local_350,(ulong)(uint)(iVar10 * 2));
  uVar20 = (ulong)local_248 >> 0x30;
  local_248 = (undefined *)CONCAT26((ushort)uVar20 & 0xff00,0xff0000000000);
  if (-1 < *(int *)(lVar16 + 0x20)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(lVar16 + 0x20),&local_248,&local_238,
                 iVar10 * 2 + 2,0);
    bVar17 = *param_2;
  }
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_360[0] = bVar17;
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_360,1);
  if (lVar14 != 0) {
    local_20c = 0;
    if ((*(long **)(lVar14 + 0x17bb0) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar14 + 0x17bb0), puVar11 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar11)();
      uVar8 = uVar8 ^ 1;
    }
    bVar17 = *param_2;
    local_228 = &local_358;
    local_220 = (ushort *)((ulong)local_220 & 0xffffffffffffff00);
    local_238 = *(long *)(lVar14 + 0x17b98) + *(long *)(lVar14 + 0x17b90);
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_230 = CONCAT71(local_230._1_7_,bVar17);
    if ((*(long **)(lVar14 + 0x3278) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar14 + 0x3278), puVar11 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar11)();
      uVar9 = uVar9 ^ 1;
    }
    puVar1 = (undefined1 *)(*(long *)(lVar14 + 0x3260) + *(long *)(lVar14 + 0x3258));
    local_220 = (ushort *)
                CONCAT17(puVar1[5],
                         CONCAT16(puVar1[4],
                                  CONCAT15(puVar1[3],
                                           CONCAT14(puVar1[2],
                                                    CONCAT13(puVar1[1],
                                                             CONCAT12(*puVar1,(undefined2)local_220)
                                                            )))));
    local_218 = CONCAT13(local_218._3_1_,*(undefined3 *)(puVar1 + 6));
    local_214[0] = *(ushort *)(puVar1 + 10);
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar14 + 0x3278) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x3278) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    local_210 = local_35c;
    local_20c = 1;
    lVar16 = FUN_01d8382c(*(undefined8 *)PTR_DAT_04bb5030,&local_238);
    plVar3[99] = lVar16;
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar14 + 0x17bb0) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x17bb0) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
  }
  bVar17 = *param_2;
  *(int *)(plVar3 + 0x60) = local_35c;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  *(byte *)((long)plVar3 + 0x2f4) = bVar17;
  if (local_35c - 2U < 6) {
    uVar12 = *(undefined4 *)(&DAT_04180228 + (long)(int)(local_35c - 2U) * 4);
  }
  else {
    uVar12 = 0x96;
  }
  *(undefined4 *)(plVar3 + 0x5f) = uVar12;
  *(undefined4 *)((long)plVar3 + 0x2fc) = 0;
  *(uint *)((long)plVar3 + 0x30c) = *(uint *)((long)plVar3 + 0x30c) & 0xffffffdf | 1;
  return;
}

