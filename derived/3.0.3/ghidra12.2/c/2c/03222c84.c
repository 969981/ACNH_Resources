
void FUN_03222c84(long param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  ushort uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  uint *local_5b0;
  undefined *local_5a8;
  undefined8 *puStack_5a0;
  undefined4 local_598;
  undefined1 local_594;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined4 local_580;
  undefined *local_578;
  undefined1 *puStack_570;
  undefined4 local_568;
  undefined1 local_564 [63];
  undefined1 local_525;
  undefined *local_520;
  undefined1 *puStack_518;
  undefined4 local_510;
  undefined1 local_50c [63];
  undefined1 local_4cd;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined6 uStack_4b0;
  undefined2 local_4aa;
  undefined6 uStack_4a8;
  undefined1 auStack_4a2 [2];
  undefined4 local_4a0;
  undefined *local_498;
  undefined4 local_490;
  undefined4 local_48c;
  uint *local_488;
  undefined *local_480;
  undefined1 *puStack_478;
  undefined4 local_470;
  undefined1 local_46c [63];
  undefined1 local_42d;
  undefined *local_428;
  undefined2 local_420;
  undefined8 local_41c;
  undefined4 local_414;
  undefined *local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined *local_3e0;
  undefined1 *puStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc [63];
  undefined1 local_38d;
  undefined *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_374 [63];
  undefined1 local_335;
  undefined8 local_330;
  undefined *local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined *local_2f8;
  undefined1 *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4 [63];
  undefined1 local_2a5;
  undefined *local_2a0;
  undefined1 *local_298;
  undefined4 local_290;
  undefined1 local_28c [63];
  undefined1 local_24d;
  undefined8 local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
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
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
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
  undefined *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  
  puVar3 = PTR_DAT_04bb2bc0;
  if ((short)*param_2 == -2) {
    return;
  }
  local_414 = 0;
  local_420 = 0x100;
  local_41c = 0;
  local_400 = 0;
  puStack_3d8 = local_3cc;
  local_3fc = 0;
  local_3f8 = 0xffffffff;
  uStack_3f0 = 0xffffffff00000000;
  local_3e8 = 0xffffffff;
  local_3d0 = 0x40;
  local_38d = 0;
  local_480 = PTR_DAT_04bb2bc0 + 0x10;
  local_3cc[0] = 0;
  local_378 = 0x40;
  local_335 = 0;
  local_374[0] = 0;
  local_380 = local_374;
  local_410 = PTR_DAT_04bb2e00 + 0x10;
  local_308 = 0xffffffff00000000;
  local_298 = local_28c;
  local_28c[0] = 0;
  local_2f0 = local_2e4;
  local_2e4[0] = 0;
  local_220 = 0xffffffff00000000;
  local_208 = local_1fc;
  local_1fc[0] = 0;
  local_1b0 = local_1a4;
  local_1a4[0] = 0;
  local_134[0] = 0;
  local_320 = 0;
  local_318 = 0;
  local_314 = 0;
  local_310 = 0xffffffff;
  local_300 = 0xffffffff;
  local_2e8 = 0x40;
  local_2a5 = 0;
  local_290 = 0x40;
  local_24d = 0;
  local_330 = 0;
  local_238 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0xffffffff;
  local_218 = 0xffffffff;
  local_200 = 0x40;
  local_1bd = 0;
  local_1a8 = 0x40;
  local_165 = 0;
  local_248 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_138 = 0x40;
  local_f5 = 0;
  local_e0 = 0x40;
  local_9d = 0;
  local_dc[0] = 0;
  uStack_408 = 0;
  local_140 = local_134;
  local_e8 = local_dc;
  local_90 = *(int *)PTR_DAT_04bc0b30;
  local_8c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_90 + 1;
  local_98 = PTR_DAT_04bc0a78 + 0x10;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_428 = PTR_DAT_04bc0bf0 + 0x10;
  puStack_478 = local_46c;
  local_470 = 0x40;
  local_42d = 0;
  local_46c[0] = 0;
  local_3e0 = local_480;
  local_388 = local_480;
  local_328 = local_410;
  local_2f8 = local_480;
  local_2a0 = local_480;
  local_240 = local_410;
  local_210 = local_480;
  local_1b8 = local_480;
  local_148 = local_480;
  local_f0 = local_480;
  FUN_038d1270(&local_480,&DAT_0409e973,"ShopSonkatsu");
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (lVar15 == 0) goto LAB_03223640;
  local_488 = (uint *)0x0;
  local_498 = PTR_DAT_04bc0510 + 0x10;
  local_490 = (undefined4)*param_2;
  local_48c = *(undefined4 *)((long)param_2 + 4);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_490);
  if (*(long *)puVar4 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar10 != (uint *)0x0)) {
        local_488 = puVar10;
      }
    }
  }
  local_594 = 0;
  local_598 = 0x13;
  puStack_570 = local_564;
  local_578 = puVar3 + 0x10;
  local_590 = 0xffffffff;
  uStack_588 = 0xffffffff00000000;
  puStack_5a0 = &local_4c8;
  puStack_518 = local_50c;
  local_580 = 0xffffffff;
  local_568 = 0x40;
  local_525 = 0;
  local_564[0] = 0;
  local_510 = 0x40;
  local_4cd = 0;
  local_50c[0] = 0;
  local_5a8 = PTR_DAT_04bc0bc0 + 0x10;
  uStack_4a8 = 0;
  puVar1 = auStack_4a2;
  if (auStack_4a2 <= (undefined1 *)((long)&local_4c8 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_4c8 + 2U);
  }
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4aa = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_520 = local_578;
  memset(puStack_5a0,0,(ulong)(puVar1 + (-0xe1 - (long)&local_5a8)) & 0xfffffffffffffffc | 2);
  local_4a0 = 0;
  lVar16 = *(long *)(*(long *)(lVar15 + 0x220) + (ulong)(1 < *(uint *)(lVar15 + 0x218)) * 8);
  if (lVar16 != 0) {
    plVar14 = *(long **)(lVar16 + 0x48);
    if (plVar14[1] != 0) {
      local_70 = PTR_DAT_04bc0878 + 0x10;
      local_68 = (char *)CONCAT44(local_68._4_4_,9);
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar16);
    }
    uVar7 = FUN_01af0dac(&local_498);
    FUN_01be4af0(&local_5a8,**(undefined4 **)PTR_DAT_04bb3448,uVar7,10,0,0);
    local_4a0 = uVar7;
    FUN_01bea4e8(&local_428,lVar16,&local_5a8);
    FUN_01bea9c8(&local_428);
  }
  puVar10 = local_488;
  plVar14 = (long *)**(undefined8 **)(lVar15 + 0x230);
  if (plVar14 != (long *)0x0) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "MainmenuRndDailyQuest";
    iVar8 = FUN_0274bce0(param_1 + 0x1f8,&local_70);
    if (iVar8 == 0) {
      if (puVar10 == (uint *)0x0) {
        uVar11 = 0;
LAB_03223344:
        if (uVar11 != 0x36) goto LAB_032230e8;
      }
      else {
        uVar6 = *puVar10;
        uVar11 = 0;
        if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
          puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
          uVar11 = 0;
          if (*puVar12 != 0) {
            uVar6 = puVar12[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar15) / (ulong)uVar6);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc0068) &&
                   (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar2 * 2),
                   uVar11 < 0x13e)) goto LAB_032231b0;
              }
            }
            uVar11 = 0;
          }
        }
LAB_032231b0:
        if (uVar11 != 0x2f) {
          uVar11 = 0;
          uVar6 = *puVar10;
          if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
            puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
            uVar11 = 0;
            if (*puVar12 != 0) {
              uVar6 = puVar12[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar15 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar15) / (ulong)uVar6);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc0068) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar2 * 2),
                     uVar11 < 0x13e)) goto LAB_03223258;
                }
              }
              uVar11 = 0;
            }
          }
LAB_03223258:
          if (uVar11 != 0x30) {
            uVar11 = 0;
            if (((puVar10 != (uint *)0x0) && (uVar6 = *puVar10, uVar6 != 0)) &&
               (puVar10 != (uint *)(ulong)uVar6)) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
              uVar11 = 0;
              if (*puVar12 != 0) {
                uVar6 = puVar12[1];
                if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar6 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar15) / (ulong)uVar6);
                    }
                    if (*puVar12 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar2 * 2)
                       , uVar11 < 0x13e)) goto LAB_03223344;
                  }
                }
                uVar11 = 0;
              }
            }
            goto LAB_03223344;
          }
        }
      }
      local_70 = PTR_DAT_04bc4e68 + 0x10;
      local_68 = (char *)CONCAT44(local_68._4_4_,7);
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
      puVar13 = (undefined8 *)(plVar14[3] + 0x1c0);
    }
    else {
LAB_032230e8:
      local_70 = PTR_DAT_04bc4e68 + 0x10;
      local_68 = (char *)CONCAT44(local_68._4_4_,6);
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
      puVar13 = (undefined8 *)(plVar14[3] + 0x1b8);
    }
    (*(code *)*puVar13)(plVar14[1]);
  }
  puVar13 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar13 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58), (uVar9 & 1) != 0)) {
    lVar15 = 0x18;
    if (*(uint *)(puVar13 + 0x44) < 4) {
      lVar15 = 0;
    }
    plVar14 = *(long **)(puVar13[0x45] + lVar15);
    if (plVar14 != (long *)0x0) {
      local_5c0 = puVar5 + 0x10;
      local_5b8 = local_490;
      uStack_5b4 = local_48c;
      local_5b0 = local_488;
      if (local_488 == (uint *)0x0) {
        uVar11 = 0xbc;
LAB_0322356c:
        local_70 = (undefined *)CONCAT44(local_70._4_4_,0x79);
        if ((((uVar11 == 0x79) || (uVar9 = FUN_01ad6a30(&local_5c0,0x7a), (uVar9 & 1) != 0)) ||
            (uVar9 = FUN_01ad6a30(&local_5c0,0xb1), (uVar9 & 1) != 0)) ||
           ((uVar9 = FUN_01ad6a30(&local_5c0,0x7b), (uVar9 & 1) != 0 ||
            (uVar9 = FUN_01ad6a30(&local_5c0,0x7c), (uVar9 & 1) != 0)))) goto LAB_032235c0;
        local_70 = PTR_DAT_04bc4e68 + 0x10;
        local_68 = (char *)CONCAT44(local_68._4_4_,6);
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
        puVar13 = (undefined8 *)(plVar14[3] + 0x1b8);
      }
      else {
        uVar6 = *local_488;
        uVar11 = 0;
        if ((uVar6 != 0) && (local_488 != (uint *)(ulong)uVar6)) {
          puVar10 = (uint *)((long)local_488 - (long)(ulong)uVar6);
          uVar11 = 0;
          if (*puVar10 != 0) {
            uVar6 = puVar10[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)local_488 - lVar15) / (ulong)uVar6);
                }
                if (*puVar10 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   uVar11 < 0xbd)) goto LAB_0322349c;
              }
            }
            uVar11 = 0;
          }
        }
LAB_0322349c:
        if (uVar11 != 0x94) {
          uVar11 = 0;
          uVar6 = *local_488;
          if ((uVar6 != 0) && (local_488 != (uint *)(ulong)uVar6)) {
            puVar10 = (uint *)((long)local_488 - (long)(ulong)uVar6);
            uVar11 = 0;
            if (*puVar10 != 0) {
              uVar6 = puVar10[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar15 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar2 = (uint)((ulong)((long)local_488 - lVar15) / (ulong)uVar6);
                  }
                  if (*puVar10 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar11 < 0xbd)) goto LAB_0322356c;
                }
              }
              uVar11 = 0;
            }
          }
          goto LAB_0322356c;
        }
LAB_032235c0:
        local_70 = PTR_DAT_04bc4e68 + 0x10;
        local_68 = (char *)CONCAT44(local_68._4_4_,7);
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
        puVar13 = (undefined8 *)(plVar14[3] + 0x1c0);
      }
      (*(code *)*puVar13)(plVar14[1]);
    }
  }
  local_70 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_70);
  local_68 = (char *)CONCAT62(local_68._2_6_,*(undefined2 *)PTR_DAT_04bb3170);
  local_70 = (undefined *)*param_2;
  FUN_033ba168(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_70);
LAB_03223640:
  FUN_01be9eb8(&local_428);
  return;
}

