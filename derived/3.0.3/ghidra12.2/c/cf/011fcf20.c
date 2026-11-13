
/* WARNING: Removing unreachable block (ram,0x011fde10) */
/* WARNING: Removing unreachable block (ram,0x011fdc20) */
/* WARNING: Removing unreachable block (ram,0x011fdb00) */
/* WARNING: Removing unreachable block (ram,0x011fd6a4) */
/* WARNING: Removing unreachable block (ram,0x011fd728) */
/* WARNING: Removing unreachable block (ram,0x011fdb98) */
/* WARNING: Removing unreachable block (ram,0x011fdd44) */
/* WARNING: Removing unreachable block (ram,0x011fec30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011fcf20(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  bool bVar6;
  undefined **ppuVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  ulong uVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined **ppuVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  bool bVar33;
  int iVar34;
  long *plVar35;
  undefined *puVar36;
  undefined *local_4118;
  undefined8 local_4110;
  undefined *local_4108;
  undefined8 local_4100;
  undefined *local_40f8;
  undefined8 local_40f0;
  undefined *local_40e8;
  undefined8 local_40e0;
  undefined *local_40d8;
  undefined8 local_40d0;
  undefined *local_40c8;
  undefined8 local_40c0;
  undefined *local_40b8;
  undefined8 local_40b0;
  undefined *local_40a8;
  undefined8 local_40a0;
  undefined *local_4098;
  undefined8 local_4090;
  undefined8 local_4088;
  undefined8 local_4080;
  undefined *local_4078;
  undefined8 uStack_4070;
  undefined *local_4068;
  undefined8 uStack_4060;
  undefined *local_4058;
  undefined8 uStack_4050;
  undefined *local_4048;
  undefined8 uStack_4040;
  undefined *local_4038;
  undefined8 uStack_4030;
  undefined *local_4028;
  undefined8 uStack_4020;
  undefined *local_4018;
  undefined8 uStack_4010;
  undefined *local_4008;
  undefined8 uStack_4000;
  undefined *local_3ff8;
  undefined8 uStack_3ff0;
  undefined *local_3fe8;
  undefined8 uStack_3fe0;
  undefined *local_3fd8;
  undefined8 uStack_3fd0;
  undefined *local_3fc8;
  undefined8 uStack_3fc0;
  undefined *local_3fb8;
  undefined8 uStack_3fb0;
  undefined *local_3fa8;
  undefined8 uStack_3fa0;
  undefined8 local_3080;
  undefined8 local_3078;
  undefined8 local_3070;
  undefined *local_3068;
  int local_3060;
  int local_305c;
  undefined *local_2078;
  undefined8 local_2070;
  undefined8 local_2068;
  undefined8 local_2060;
  undefined *local_2058;
  undefined8 local_2050;
  undefined *local_2048;
  undefined8 local_2040;
  undefined *local_2038;
  undefined8 local_2030;
  undefined *local_2028;
  undefined8 local_2020;
  undefined *local_2018;
  undefined8 local_2010;
  undefined *local_2008;
  undefined8 local_2000;
  undefined *local_1ff8;
  undefined8 local_1ff0;
  undefined *local_1fe8;
  undefined8 local_1fe0;
  undefined *local_1fd8;
  undefined8 local_1fd0;
  undefined *local_1fc8;
  undefined8 local_1fc0;
  undefined *local_1fb8;
  undefined8 local_1fb0;
  undefined *local_1fa8;
  undefined8 local_1fa0;
  undefined *local_1f98;
  undefined8 local_1f90;
  undefined8 local_1f88;
  undefined8 local_1f80;
  uint local_1070;
  uint local_106c;
  undefined8 local_1068;
  undefined8 local_1060;
  long local_1058;
  
  iVar17 = FUN_0252d29c();
  puVar36 = PTR_DAT_04bb2020;
  local_3080 = (undefined *)CONCAT44(local_3080._4_4_,iVar17);
  if (iVar17 == -1) {
    return;
  }
  local_2070 = "ValidatePlayerSaveFlag";
  local_2078 = PTR_DAT_04bb2020 + 0x10;
  iVar17 = FUN_0274ce10(&local_3080,&local_2078);
  if (iVar17 == 0) {
    return;
  }
  uVar24 = FUN_012297cc(param_1 + 0x10,1);
  puVar2 = PTR_DAT_04bb46b0;
  if ((uVar24 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      lVar25 = 0;
      lVar26 = _DAT_00000098;
      if (_DAT_00000098 == 0) goto LAB_011fd0f0;
LAB_011fd0c0:
      if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
        uVar24 = 0;
      }
      else {
        uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
        lVar26 = *(long *)(lVar25 + 0x98);
        uVar24 = uVar24 & 0xffffffff;
        if (lVar26 == 0) goto LAB_011fd12c;
      }
      plVar28 = *(long **)(lVar26 + 0x20);
      if (plVar28 != (long *)0x0) {
        local_2078 = *(undefined **)(lVar25 + 0x78);
        local_2070 = *(char **)(lVar25 + 0x80);
        local_2068 = (undefined *)0x53c;
        (**(code **)(*plVar28 + 0x20))(plVar28,&local_2078);
      }
    }
    else {
      lVar26 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
      lVar25 = 0;
      if (lVar26 != 0) {
        lVar25 = lVar26 + 0x276cb0;
      }
      lVar26 = *(long *)(lVar25 + 0x98);
      if (*(long *)(lVar25 + 0x98) != 0) goto LAB_011fd0c0;
LAB_011fd0f0:
      uVar24 = 0;
    }
LAB_011fd12c:
    lVar26 = *(long *)(lVar25 + 0x78);
    lVar1 = *(long *)(lVar25 + 0x80);
    uVar31 = 0;
    do {
      uVar32 = uVar31 << 1;
      uVar14 = uVar31 >> 0x1f;
      uVar19 = (int)uVar31 + 1;
      uVar31 = (ulong)uVar19;
      *(undefined2 *)(lVar1 + lVar26 + 0x23c + (-uVar14 & 0xfffffffe00000000 | uVar32)) = 0xffff;
    } while (uVar19 != 0xf0);
    if ((*(long *)(lVar25 + 0x98) != 0) &&
       (plVar28 = *(long **)(*(long *)(lVar25 + 0x98) + 0x20), plVar28 != (long *)0x0)) {
      local_2078 = *(undefined **)(lVar25 + 0x78);
      local_2070 = *(char **)(lVar25 + 0x80);
      local_2068 = (undefined *)0x53c;
      (**(code **)(*plVar28 + 0x20))(plVar28,&local_2078);
    }
    lVar26 = *(long *)(lVar25 + 0x78);
    lVar1 = *(long *)(lVar25 + 0x80);
    uVar31 = 0;
    do {
      uVar32 = uVar31 << 1;
      uVar14 = uVar31 >> 0x1f;
      uVar19 = (int)uVar31 + 1;
      uVar31 = (ulong)uVar19;
      *(undefined2 *)(lVar1 + lVar26 + 0x41c + (-uVar14 & 0xfffffffe00000000 | uVar32)) = 0xffff;
    } while (uVar19 != 0x90);
    local_3080 = (undefined *)((ulong)local_3080 & 0xffffffff00000000);
    if (*(long *)puVar2 == 0) {
LAB_011fd280:
      local_3080 = (undefined *)CONCAT44(local_3080._4_4_,2);
      if (*(long *)puVar2 == 0) goto LAB_011fd360;
      lVar26 = FUN_026eec4c(*(long *)puVar2,2);
      if (lVar26 != 0) {
        local_2070 = "HitMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
        local_2070 = "MissMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
      }
      local_3080 = (undefined *)CONCAT44(local_3080._4_4_,3);
      if (*(long *)puVar2 != 0) {
        lVar26 = FUN_026eec4c(*(long *)puVar2,3);
        if (lVar26 != 0) {
          local_2070 = "HitMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
          local_2070 = "MissMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
        }
        goto LAB_011fd360;
      }
    }
    else {
      lVar26 = FUN_026eec4c(*(long *)puVar2,0);
      if (lVar26 != 0) {
        local_2070 = "HitMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
        local_2070 = "MissMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
      }
      local_3080 = (undefined *)CONCAT44(local_3080._4_4_,1);
      if (*(long *)puVar2 != 0) {
        lVar26 = FUN_026eec4c(*(long *)puVar2,1);
        if (lVar26 != 0) {
          local_2070 = "HitMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
          local_2070 = "MissMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
        }
        goto LAB_011fd280;
      }
LAB_011fd360:
      local_3080 = (undefined *)CONCAT44(local_3080._4_4_,4);
      if (*(long *)puVar2 != 0) {
        lVar26 = FUN_026eec4c(*(long *)puVar2,4);
        if (lVar26 != 0) {
          local_2070 = "HitMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
          local_2070 = "MissMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
        }
        local_3080 = (undefined *)CONCAT44(local_3080._4_4_,5);
        if (*(long *)puVar2 == 0) goto LAB_011fd520;
        lVar26 = FUN_026eec4c(*(long *)puVar2,5);
        if (lVar26 != 0) {
          local_2070 = "HitMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
          local_2070 = "MissMessageBottleEgg";
          local_2078 = puVar36 + 0x10;
          FUN_0274d104(&local_3080,&local_2078,0);
        }
      }
    }
    local_3080 = (undefined *)CONCAT44(local_3080._4_4_,6);
    if (*(long *)puVar2 != 0) {
      lVar26 = FUN_026eec4c(*(long *)puVar2,6);
      if (lVar26 != 0) {
        local_2070 = "HitMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
        local_2070 = "MissMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
      }
      local_3080 = (undefined *)CONCAT44(local_3080._4_4_,7);
      if ((*(long *)puVar2 != 0) && (lVar26 = FUN_026eec4c(*(long *)puVar2,7), lVar26 != 0)) {
        local_2070 = "HitMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
        local_2070 = "MissMessageBottleEgg";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_3080,&local_2078,0);
      }
    }
LAB_011fd520:
    if ((uVar24 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar25 + 0x98) == 0) {
      return;
    }
    puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18);
    if (puVar27 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar27)();
    return;
  }
  uVar18 = FUN_0252d29c();
  plVar28 = (long *)PTR_DAT_04bb46b0;
  local_4118 = (undefined *)CONCAT44(local_4118._4_4_,uVar18);
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar25 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar18);
    if (lVar25 != 0) {
      local_2070 = "BuryEggGround";
      local_2078 = puVar36 + 0x10;
      iVar17 = FUN_0274ce10(&local_4118,&local_2078);
      if (iVar17 == 0) {
        local_2070 = "BuryEggGround";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_4118,&local_2078,1);
        local_4088 = PTR_DAT_04bb2010 + 0x10;
        local_4080 = 0;
        uStack_4070 = 0;
        uStack_4060 = 0;
        uStack_4050 = 0;
        uStack_4040 = 0;
        uStack_4030 = 0;
        uStack_4020 = 0;
        uStack_4010 = 0;
        uStack_4000 = 0;
        uStack_3ff0 = 0;
        uStack_3fe0 = 0;
        uStack_3fd0 = 0;
        uStack_3fc0 = 0;
        uStack_3fb0 = 0;
        uStack_3fa0 = 0;
        local_4078 = local_4088;
        local_4068 = local_4088;
        local_4058 = local_4088;
        local_4048 = local_4088;
        local_4038 = local_4088;
        local_4028 = local_4088;
        local_4018 = local_4088;
        local_4008 = local_4088;
        local_3ff8 = local_4088;
        local_3fe8 = local_4088;
        local_3fd8 = local_4088;
        local_3fc8 = local_4088;
        local_3fb8 = local_4088;
        local_3fa8 = local_4088;
        if (*plVar28 == 0) {
          lVar25 = 0;
        }
        else {
          lVar26 = (**(code **)(*(long *)**(undefined8 **)(*plVar28 + 0x10) + 0x30))();
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + 0x276cb0;
          }
        }
        lVar26 = *(long *)(lVar25 + 0x98);
        if (lVar26 == 0) {
          uVar24 = 0;
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar24 = 0;
          }
          else {
            uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar25 + 0x98);
            uVar24 = uVar24 & 0xffffffff;
            if (lVar26 == 0) goto LAB_011fd5b0;
          }
          plVar28 = *(long **)(lVar26 + 0x20);
          if (plVar28 != (long *)0x0) {
            local_2078 = *(undefined **)(lVar25 + 0x78);
            local_2070 = *(char **)(lVar25 + 0x80);
            local_2068 = (undefined *)0x53c;
            (**(code **)(*plVar28 + 0x20))(plVar28,&local_2078);
          }
        }
LAB_011fd5b0:
        uVar19 = 0;
        lVar26 = *(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78) + 0x23c;
        uVar21 = (int)local_4118 * 0x1e;
        do {
          uVar31 = (ulong)uVar21;
          uVar32 = (ulong)(uVar21 + 1);
          if (0xef < uVar21) {
            uVar31 = 0;
          }
          lVar1 = (long)((ulong)uVar19 << 0x20) >> 0x1c;
          if (0xef < uVar21 + 1) {
            uVar32 = 0;
          }
          sVar12 = *(short *)(lVar26 + uVar31 * 2);
          sVar13 = *(short *)(lVar26 + uVar32 * 2);
          *(int *)((long)&local_4080 + lVar1) = (int)sVar12;
          *(int *)((long)&local_4080 + lVar1 + 4) = (int)sVar13;
          if (sVar12 == 0 && sVar13 == 0) {
            *(undefined8 *)((long)&local_4080 + lVar1) = 0xffffffffffffffff;
            *(undefined2 *)(lVar26 + uVar31 * 2) = 0xffff;
            *(undefined2 *)(lVar26 + uVar32 * 2) = 0xffff;
          }
          uVar19 = uVar19 + 1;
          uVar21 = uVar21 + 2;
        } while (uVar19 != 0xf);
        if ((((uVar24 & 1) != 0) && (*(long *)(lVar25 + 0x98) != 0)) &&
           (puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18),
           puVar27 != (undefined8 *)0x0)) {
          (**(code **)*puVar27)();
        }
        uVar24 = FUN_01229524();
        local_2078 = PTR_DAT_04bbdd38 + 0x10;
        local_3080 = (undefined *)CONCAT44(local_3080._4_4_,4);
        memset(&local_2070,0,0x1000);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x18050 + lVar25);
          uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_3080 + lVar25) = *puVar5 | *(uint *)((long)&local_2070 + lVar25);
          *(uint *)((long)&local_3080 + lVar25 + 4) = uVar21 | uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_2070,&local_3080,0x1000);
        local_3080 = (undefined *)CONCAT44(local_3080._4_4_,0x17);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x2b0e8 + lVar25);
          uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_3080 + lVar25) = *puVar5 & *(uint *)((long)&local_2070 + lVar25);
          *(uint *)((long)&local_3080 + lVar25 + 4) = uVar21 & uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        iVar17 = 0xf;
        if ((uVar24 & 1) == 0) {
          iVar17 = 7;
        }
        memcpy(&local_2070,&local_3080,0x1000);
        uVar31 = FUN_01229524();
        uVar24 = 0xf;
        if ((uVar31 & 1) == 0) {
          uVar24 = 10;
        }
        uVar31 = 0;
        puVar36 = PTR_DAT_04bbc1a0 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        while( true ) {
          iVar20 = 0;
          lVar25 = 2;
          do {
            uVar19 = *(uint *)((long)&local_2078 + lVar25 * 4);
            lVar25 = lVar25 + 1;
            uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
            uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
            uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
            uVar19 = uVar19 + (uVar19 >> 8);
            iVar20 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar20;
          } while (lVar25 != 0x402);
          if (iVar20 == 0) break;
          if (*(int *)(&local_4080 + uVar31 * 2) == -1) {
            FUN_01696be0(&local_1068,&local_2078);
            *(uint *)(&local_4080 + uVar31 * 2) = (uint)local_1060;
            *(uint *)((long)&local_4080 + (uVar31 * 4 + 1) * 4) = local_1060._4_4_;
            if (((DAT_05233970 <= (int)(uint)local_1060) && ((int)(uint)local_1060 <= DAT_05233980))
               && ((DAT_05233974 <= (int)local_1060._4_4_ &&
                   (((int)local_1060._4_4_ <= DAT_05233984 &&
                    (uVar19 = (local_1060._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1060 >> 1),
                    uVar19 >> 0xf == 0)))))) {
              lVar25 = (ulong)(uVar19 >> 5) * 4;
              *(uint *)((long)&local_2070 + lVar25) =
                   *(uint *)((long)&local_2070 + lVar25) &
                   (1 << (ulong)((uint)local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            local_3070 = local_1060;
            local_3060 = (uint)local_1060 + 1;
            local_305c = local_1060._4_4_ + 1;
            local_3080 = puVar36;
            local_3078 = puVar2;
            local_3068 = puVar2;
            FUN_01686550(param_2,&local_3080);
            if (*(long *)PTR_DAT_04bb46b0 == 0) {
              lVar25 = 0;
              lVar26 = _DAT_00000098;
              if (_DAT_00000098 == 0) goto LAB_011fd98c;
LAB_011fd95c:
              if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
                uVar32 = 0;
LAB_011fd9b0:
                plVar28 = *(long **)(lVar26 + 0x20);
                if (plVar28 != (long *)0x0) {
                  local_3080 = *(undefined **)(lVar25 + 0x78);
                  local_3078 = *(undefined **)(lVar25 + 0x80);
                  local_3070 = (char *)0x53c;
                  (**(code **)(*plVar28 + 0x20))(plVar28,&local_3080);
                }
              }
              else {
                uVar32 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                lVar26 = *(long *)(lVar25 + 0x98);
                uVar32 = uVar32 & 0xffffffff;
                if (lVar26 != 0) goto LAB_011fd9b0;
              }
              FUN_0275c490(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),
                           (ulong)local_4118 & 0xffffffff,&local_1068,0);
              if ((((uVar32 & 1) != 0) && (*(long *)(lVar25 + 0x98) != 0)) &&
                 (puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18),
                 puVar27 != (undefined8 *)0x0)) {
                (**(code **)*puVar27)();
              }
            }
            else {
              lVar26 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                   0x30))();
              lVar25 = 0;
              if (lVar26 != 0) {
                lVar25 = lVar26 + 0x276cb0;
              }
              lVar26 = *(long *)(lVar25 + 0x98);
              if (*(long *)(lVar25 + 0x98) != 0) goto LAB_011fd95c;
LAB_011fd98c:
              FUN_0275c490(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),
                           (ulong)local_4118 & 0xffffffff,&local_1068,0);
            }
            iVar17 = iVar17 + -1;
          }
          uVar31 = uVar31 + 1;
          if ((uVar24 <= uVar31) || (iVar17 < 1)) break;
        }
        plVar28 = (long *)PTR_DAT_04bb46b0;
        puVar36 = PTR_DAT_04bb2020;
      }
    }
  }
  local_1070 = FUN_0252d29c();
  if (*plVar28 != 0) {
    lVar25 = FUN_026eec4c(*plVar28,local_1070);
    if (lVar25 != 0) {
      local_2070 = "SetTreeEggLeaf";
      local_2078 = puVar36 + 0x10;
      iVar17 = FUN_0274ce10(&local_1070,&local_2078);
      if (iVar17 == 0) {
        local_2070 = "SetTreeEggLeaf";
        local_2078 = puVar36 + 0x10;
        FUN_0274d104(&local_1070,&local_2078,1);
        puVar36 = PTR_DAT_04bbdd38;
        local_2078 = PTR_DAT_04bbdd38 + 0x10;
        local_3080 = (undefined *)CONCAT44(local_3080._4_4_,7);
        memset(&local_2070,0,0x1000);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x1b068 + lVar25);
          uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_3080 + lVar25) = *puVar5 | *(uint *)((long)&local_2070 + lVar25);
          *(uint *)((long)&local_3080 + lVar25 + 4) = uVar21 | uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_2070,&local_3080,0x1000);
        local_3080 = puVar36 + 0x10;
        local_4088 = (undefined *)CONCAT44(local_4088._4_4_,9);
        memset(&local_3078,0,0x1000);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x1d078 + lVar25);
          uVar19 = *(uint *)((long)&local_3078 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_4088 + lVar25) = *puVar5 | *(uint *)((long)&local_3078 + lVar25);
          *(uint *)((long)&local_4088 + lVar25 + 4) = uVar21 | uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_3078,&local_4088,0x1000);
        local_4088 = puVar36 + 0x10;
        local_1068 = (undefined *)CONCAT44(local_1068._4_4_,8);
        memset(&local_4080,0,0x1000);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x1c070 + lVar25);
          uVar19 = *(uint *)((long)&local_4080 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_1068 + lVar25) = *puVar5 | *(uint *)((long)&local_4080 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 | uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_4080,&local_1068,0x1000);
        lVar25 = 0;
        do {
          lVar26 = lVar25 + 8;
          uVar19 = *(uint *)((long)&local_4080 + lVar25 + 4);
          *(uint *)((long)&local_1068 + lVar25) = ~*(uint *)((long)&local_4080 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = ~uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_4080,&local_1068,0x1000);
        lVar25 = 0;
        do {
          uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = *(uint *)((long)&local_4080 + lVar25 + 4);
          *(uint *)((long)&local_1068 + lVar25) =
               *(uint *)((long)&local_4080 + lVar25) & *(uint *)((long)&local_2070 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 & uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_2070,&local_1068,0x1000);
        local_1068 = (undefined *)CONCAT44(local_1068._4_4_,0x17);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x2b0e8 + lVar25);
          uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_1068 + lVar25) = *puVar5 & *(uint *)((long)&local_2070 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 & uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_2070,&local_1068,0x1000);
        lVar25 = 0;
        do {
          uVar19 = *(uint *)((long)&local_3078 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = *(uint *)((long)&local_4080 + lVar25 + 4);
          *(uint *)((long)&local_1068 + lVar25) =
               *(uint *)((long)&local_4080 + lVar25) & *(uint *)((long)&local_3078 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 & uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_3078,&local_1068,0x1000);
        local_1068 = (undefined *)CONCAT44(local_1068._4_4_,0x17);
        lVar25 = 0;
        do {
          puVar5 = (uint *)(param_2 + 0x2b0e8 + lVar25);
          uVar19 = *(uint *)((long)&local_3078 + lVar25 + 4);
          lVar26 = lVar25 + 8;
          uVar21 = puVar5[1];
          *(uint *)((long)&local_1068 + lVar25) = *puVar5 & *(uint *)((long)&local_3078 + lVar25);
          *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 & uVar19;
          lVar25 = lVar26;
        } while (lVar26 != 0x1000);
        memcpy(&local_3078,&local_1068,0x1000);
        local_4118 = PTR_DAT_04bb2010 + 0x10;
        local_4110 = 0;
        local_4100 = 0;
        local_40f0 = 0;
        local_40e0 = 0;
        local_40d0 = 0;
        local_40c0 = 0;
        local_40b0 = 0;
        local_40a0 = 0;
        local_4090 = 0;
        local_4108 = local_4118;
        local_40f8 = local_4118;
        local_40e8 = local_4118;
        local_40d8 = local_4118;
        local_40c8 = local_4118;
        local_40b8 = local_4118;
        local_40a8 = local_4118;
        local_4098 = local_4118;
        if (*plVar28 == 0) {
          lVar25 = 0;
        }
        else {
          lVar26 = (**(code **)(*(long *)**(undefined8 **)(*plVar28 + 0x10) + 0x30))();
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + 0x276cb0;
          }
        }
        lVar26 = *(long *)(lVar25 + 0x98);
        if (lVar26 == 0) {
          FUN_0275cb4c(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),local_1070,&local_4118);
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar24 = 0;
LAB_011fdf10:
            plVar28 = *(long **)(lVar26 + 0x20);
            if (plVar28 != (long *)0x0) {
              local_1068 = *(undefined **)(lVar25 + 0x78);
              local_1060 = *(char **)(lVar25 + 0x80);
              local_1058 = 0x53c;
              (**(code **)(*plVar28 + 0x20))(plVar28,&local_1068);
            }
          }
          else {
            uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar25 + 0x98);
            uVar24 = uVar24 & 0xffffffff;
            if (lVar26 != 0) goto LAB_011fdf10;
          }
          FUN_0275cb4c(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),local_1070,&local_4118);
          if ((((uVar24 & 1) != 0) && (*(long *)(lVar25 + 0x98) != 0)) &&
             (puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18),
             puVar27 != (undefined8 *)0x0)) {
            (**(code **)*puVar27)();
          }
        }
        if ((((uint)local_4110 != 0xffffffff) &&
            ((((((int)(uint)local_4110 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_4110)) ||
               ((int)local_4110._4_4_ < DAT_05233974)) ||
              ((DAT_05233984 < (int)local_4110._4_4_ ||
               (uVar19 = (local_4110._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_4110 >> 1),
               uVar19 >> 0xf != 0)))) ||
             ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
               (ulong)((uint)local_4110 >> 1 & 0x1f) & 1) == 0)))) &&
           (uVar24 = FUN_016962d8(&local_3080,&local_4118,0), (uVar24 & 1) == 0)) {
          local_4110 = 0xffffffffffffffff;
        }
        if (((uint)local_4100 != 0xffffffff) &&
           (((((int)(uint)local_4100 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_4100)) ||
             (((int)local_4100._4_4_ < DAT_05233974 ||
              (((DAT_05233984 < (int)local_4100._4_4_ ||
                (uVar19 = (local_4100._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_4100 >> 1),
                uVar19 >> 0xf != 0)) ||
               ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                 (ulong)((uint)local_4100 >> 1 & 0x1f) & 1) == 0)))))) &&
            (uVar24 = FUN_016962d8(&local_3080,&local_4108,0), (uVar24 & 1) == 0)))) {
          local_4100 = 0xffffffffffffffff;
        }
        if ((((uint)local_40f0 != 0xffffffff) &&
            ((((int)(uint)local_40f0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40f0)) ||
             ((((int)local_40f0._4_4_ < DAT_05233974 ||
               ((DAT_05233984 < (int)local_40f0._4_4_ ||
                (uVar19 = (local_40f0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40f0 >> 1),
                uVar19 >> 0xf != 0)))) ||
              ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                (ulong)((uint)local_40f0 >> 1 & 0x1f) & 1) == 0)))))) &&
           (uVar24 = FUN_016962d8(&local_3080,&local_40f8,0), (uVar24 & 1) == 0)) {
          local_40f0 = 0xffffffffffffffff;
        }
        if ((((uint)local_40e0 != 0xffffffff) &&
            (((((int)(uint)local_40e0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40e0)) ||
              ((int)local_40e0._4_4_ < DAT_05233974)) ||
             (((DAT_05233984 < (int)local_40e0._4_4_ ||
               (uVar19 = (local_40e0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40e0 >> 1),
               uVar19 >> 0xf != 0)) ||
              ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                (ulong)((uint)local_40e0 >> 1 & 0x1f) & 1) == 0)))))) &&
           (uVar24 = FUN_016962d8(&local_3080,&local_40e8,0), (uVar24 & 1) == 0)) {
          local_40e0 = 0xffffffffffffffff;
        }
        if ((((uint)local_40d0 != 0xffffffff) &&
            ((((int)(uint)local_40d0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40d0)) ||
             (((int)local_40d0._4_4_ < DAT_05233974 ||
              (((DAT_05233984 < (int)local_40d0._4_4_ ||
                (uVar19 = (local_40d0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40d0 >> 1),
                uVar19 >> 0xf != 0)) ||
               ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                 (ulong)((uint)local_40d0 >> 1 & 0x1f) & 1) == 0)))))))) &&
           (uVar24 = FUN_016962d8(&local_3080,&local_40d8,0), (uVar24 & 1) == 0)) {
          local_40d0 = 0xffffffffffffffff;
        }
        if (((uint)local_40c0 != 0xffffffff) &&
           (((((int)(uint)local_40c0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40c0)) ||
             ((((int)local_40c0._4_4_ < DAT_05233974 ||
               ((DAT_05233984 < (int)local_40c0._4_4_ ||
                (uVar19 = (local_40c0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40c0 >> 1),
                uVar19 >> 0xf != 0)))) ||
              ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                (ulong)((uint)local_40c0 >> 1 & 0x1f) & 1) == 0)))) &&
            (uVar24 = FUN_016962d8(&local_3080,&local_40c8,0), (uVar24 & 1) == 0)))) {
          local_40c0 = 0xffffffffffffffff;
        }
        if (((uint)local_40b0 != 0xffffffff) &&
           (((((((int)(uint)local_40b0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40b0)) ||
               ((int)local_40b0._4_4_ < DAT_05233974)) ||
              ((DAT_05233984 < (int)local_40b0._4_4_ ||
               (uVar19 = (local_40b0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40b0 >> 1),
               uVar19 >> 0xf != 0)))) ||
             ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
               (ulong)((uint)local_40b0 >> 1 & 0x1f) & 1) == 0)) &&
            (uVar24 = FUN_016962d8(&local_3080,&local_40b8,0), (uVar24 & 1) == 0)))) {
          local_40b0 = 0xffffffffffffffff;
        }
        if (((uint)local_40a0 != 0xffffffff) &&
           (((((int)(uint)local_40a0 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_40a0)) ||
             (((int)local_40a0._4_4_ < DAT_05233974 ||
              (((DAT_05233984 < (int)local_40a0._4_4_ ||
                (uVar19 = (local_40a0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40a0 >> 1),
                uVar19 >> 0xf != 0)) ||
               ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                 (ulong)((uint)local_40a0 >> 1 & 0x1f) & 1) == 0)))))) &&
            (uVar24 = FUN_016962d8(&local_3080,&local_40a8,0), (uVar24 & 1) == 0)))) {
          local_40a0 = 0xffffffffffffffff;
        }
        if ((((uint)local_4090 != 0xffffffff) &&
            ((((int)(uint)local_4090 < DAT_05233970 || (DAT_05233980 < (int)(uint)local_4090)) ||
             ((((int)local_4090._4_4_ < DAT_05233974 ||
               ((DAT_05233984 < (int)local_4090._4_4_ ||
                (uVar19 = (local_4090._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_4090 >> 1),
                uVar19 >> 0xf != 0)))) ||
              ((*(uint *)((long)&local_2070 + (ulong)(uVar19 >> 5) * 4) >>
                (ulong)((uint)local_4090 >> 1 & 0x1f) & 1) == 0)))))) &&
           (uVar24 = FUN_016962d8(&local_3080,&local_4098,0), (uVar24 & 1) == 0)) {
          local_4090 = 0xffffffffffffffff;
        }
        iVar17 = 0;
        lVar25 = 2;
        do {
          uVar19 = *(uint *)((long)&local_2078 + lVar25 * 4);
          lVar25 = lVar25 + 1;
          uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
          uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
          uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
          uVar19 = uVar19 + (uVar19 >> 8);
          iVar17 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar17;
        } while (lVar25 != 0x402);
        if (iVar17 == 0) {
          lVar25 = 0;
          do {
            uVar19 = *(uint *)((long)&local_2070 + lVar25 + 4);
            lVar26 = lVar25 + 8;
            uVar21 = *(uint *)((long)&local_3078 + lVar25 + 4);
            *(uint *)((long)&local_1068 + lVar25) =
                 *(uint *)((long)&local_3078 + lVar25) | *(uint *)((long)&local_2070 + lVar25);
            *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 | uVar19;
            lVar25 = lVar26;
          } while (lVar26 != 0x1000);
          memcpy(&local_2070,&local_1068,0x1000);
        }
        iVar17 = 0;
        lVar25 = 2;
        do {
          uVar19 = *(uint *)((long)&local_2078 + lVar25 * 4);
          lVar25 = lVar25 + 1;
          uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
          uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
          uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
          uVar19 = uVar19 + (uVar19 >> 8);
          iVar17 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar17;
        } while (lVar25 != 0x402);
        if (iVar17 != 0) {
          if (((uint)local_4110 != -1) && (local_4110._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_4118,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_4118);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_4118,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_4118);
            }
          }
          if (((uint)local_4100 != -1) && (local_4100._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_4108,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_4108);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_4108,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_4108);
            }
          }
          if (((uint)local_40f0 != -1) && (local_40f0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40f8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40f8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40f8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40f8);
            }
          }
          if (((uint)local_40e0 != -1) && (local_40e0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40e8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40e8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40e8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40e8);
            }
          }
          if (((uint)local_40d0 != -1) && (local_40d0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40d8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40d8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40d8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40d8);
            }
          }
          if (((uint)local_40c0 != -1) && (local_40c0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40c8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40c8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40c8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40c8);
            }
          }
          if (((uint)local_40b0 != -1) && (local_40b0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40b8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40b8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40b8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40b8);
            }
          }
          if (((uint)local_40a0 != -1) && (local_40a0._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_40a8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_40a8);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_40a8,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_40a8);
            }
          }
          if (((uint)local_4090 != -1) && (local_4090._4_4_ != -1)) {
            uVar24 = FUN_016962d8(&local_2078,&local_4098,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_2078,&local_4098);
            }
            uVar24 = FUN_016962d8(&local_3080,&local_4098,0);
            if ((uVar24 & 1) != 0) {
              FUN_01696354(&local_3080,&local_4098);
            }
          }
          uVar24 = FUN_01229524();
          bVar15 = (uVar24 & 1) == 0;
          iVar17 = 9;
          if (bVar15) {
            iVar17 = 3;
          }
          uVar24 = 9;
          if (bVar15) {
            uVar24 = 6;
          }
          uVar31 = 0;
          iVar20 = 0;
          do {
            ppuVar29 = &local_4118 + uVar31 * 2;
            ppuVar7 = ppuVar29;
            if (8 < uVar31) {
              ppuVar7 = &local_4118;
            }
            if (*(int *)(ppuVar7 + 1) == -1) {
              iVar34 = 0;
              lVar25 = 2;
              do {
                uVar19 = *(uint *)((long)&local_2078 + lVar25 * 4);
                lVar25 = lVar25 + 1;
                uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
                uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
                uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
                uVar19 = uVar19 + (uVar19 >> 8);
                iVar34 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar34;
              } while (lVar25 != 0x402);
              if (iVar34 == 0) {
                lVar25 = 0;
                iVar34 = 0;
                do {
                  uVar19 = *(uint *)((long)&local_3078 + lVar25);
                  lVar25 = lVar25 + 4;
                  uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
                  uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
                  uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
                  uVar19 = uVar19 + (uVar19 >> 8);
                  iVar34 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar34;
                } while (lVar25 != 0x1000);
                if (iVar34 == 0) break;
                memset(&local_2070,0,0x1000);
                lVar25 = 0;
                do {
                  uVar22 = *(uint *)((long)&local_2070 + lVar25 + 4);
                  uVar19 = *(uint *)((long)&local_2068 + lVar25);
                  uVar9 = *(uint *)((long)&local_2068 + lVar25 + 4);
                  uVar21 = *(uint *)((long)&local_3078 + lVar25 + 4);
                  uVar10 = *(uint *)((long)&local_3070 + lVar25);
                  lVar26 = lVar25 + 0x10;
                  *(uint *)((long)&local_1068 + lVar25) =
                       *(uint *)((long)&local_3078 + lVar25) | *(uint *)((long)&local_2070 + lVar25)
                  ;
                  *(uint *)((long)&local_1068 + lVar25 + 4) = uVar21 | uVar22;
                  uVar21 = *(uint *)((long)&local_3070 + lVar25 + 4);
                  *(uint *)((long)&local_1060 + lVar25) = uVar10 | uVar19;
                  *(uint *)((long)&local_1060 + lVar25 + 4) = uVar21 | uVar9;
                  lVar25 = lVar26;
                } while (lVar26 != 0x1000);
                memcpy(&local_2070,&local_1068,0x1000);
                memset(&local_3078,0,0x1000);
              }
              FUN_01696be0(&local_1068,&local_2078);
              uVar19 = (uint)local_1060;
              uVar21 = local_1060._4_4_;
              if (8 < uVar31) {
                ppuVar29 = &local_4118;
              }
              *(uint *)(ppuVar7 + 1) = (uint)local_1060;
              *(uint *)((long)ppuVar29 + 0xc) = uVar21;
              if (((int)uVar19 < DAT_05233970) || (DAT_05233980 < (int)uVar19)) {
                local_106c = 7;
              }
              else if (((int)uVar21 < DAT_05233974) || (DAT_05233984 < (int)uVar21)) {
                local_106c = 7;
              }
              else {
                uVar21 = (uVar21 & 0x1fffffe) * 0x80 + ((int)uVar19 >> 1);
                if (uVar21 >> 0xf == 0) {
                  lVar25 = (ulong)(uVar21 >> 5) * 4;
                  *(uint *)((long)&local_2070 + lVar25) =
                       *(uint *)((long)&local_2070 + lVar25) &
                       (1 << (ulong)(uVar19 >> 1 & 0x1f) ^ 0xffffffffU);
                }
                local_106c = 7;
                if (uVar21 >> 0xf == 0) {
                  lVar25 = param_2 + 0x1b060 + (ulong)(uVar21 >> 5) * 4;
                  *(uint *)(lVar25 + 8) =
                       *(uint *)(lVar25 + 8) & (1 << (ulong)(uVar19 >> 1 & 0x1f) ^ 0xffffffffU);
                }
              }
              local_106c = 7;
              iVar20 = iVar20 + 1;
              if (iVar17 <= iVar20) break;
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar24);
        }
        FUN_01229e3c(local_1070,&local_4118);
        plVar28 = (long *)PTR_DAT_04bb46b0;
        puVar36 = PTR_DAT_04bb2020;
      }
    }
  }
  uVar19 = *(uint *)(param_2 + 0x32168);
  local_106c = FUN_0252d29c();
  if (*plVar28 != 0) {
    lVar25 = FUN_026eec4c(*plVar28,local_106c);
    if (lVar25 != 0) {
      local_2070 = "SetMessageBottleEgg";
      puVar2 = puVar36 + 0x10;
      local_2078 = puVar2;
      iVar17 = FUN_0274ce10(&local_106c,&local_2078);
      if (iVar17 == 0) {
        local_2070 = "EasterTodayRecipeRandomGenerateNum";
        local_2078 = puVar2;
        iVar20 = FUN_0274ce10(&local_106c,&local_2078);
        local_2070 = "HitMessageBottleEgg";
        local_2078 = puVar2;
        uVar21 = FUN_0274ce10(&local_106c,&local_2078);
        local_2070 = "MissMessageBottleEgg";
        local_2078 = puVar2;
        iVar17 = FUN_0274ce10(&local_106c,&local_2078);
        if (iVar20 != 0) {
          if (iVar20 == 1) {
            uVar22 = FUN_0122b928();
            if ((int)uVar21 < 1) {
              if (uVar22 < iVar17 * 10 + 0x28U) {
                local_2070 = "HitMessageBottleEgg";
                local_2078 = puVar36 + 0x10;
                FUN_0274d104(&local_106c,&local_2078,1);
                local_2070 = "MissMessageBottleEgg";
                local_2078 = puVar36 + 0x10;
                FUN_0274d104(&local_106c,&local_2078,0);
                bVar15 = false;
                uVar22 = 1;
                bVar33 = true;
                goto LAB_011ff868;
              }
              local_2070 = "HitMessageBottleEgg";
              local_2078 = puVar36 + 0x10;
              FUN_0274d104(&local_106c,&local_2078,0);
joined_r0x011ffec0:
              if (iVar17 < 6) {
                iVar17 = iVar17 + 1;
                goto LAB_011ffee0;
              }
            }
            else {
              if (uVar22 < uVar21 * -10 + 0x14) {
                if (uVar21 < 2) {
                  local_2070 = "HitMessageBottleEgg";
                  local_2078 = puVar36 + 0x10;
                  FUN_0274d104(&local_106c,&local_2078,2);
                }
                local_2070 = "MissMessageBottleEgg";
                local_2078 = puVar36 + 0x10;
                FUN_0274d104(&local_106c,&local_2078,0);
                bVar15 = false;
                uVar22 = 1;
                bVar33 = true;
                goto LAB_011ff868;
              }
              local_2070 = "HitMessageBottleEgg";
              local_2078 = puVar36 + 0x10;
              FUN_0274d104(&local_106c,&local_2078,0);
              iVar17 = 1;
LAB_011ffee0:
              local_2070 = "MissMessageBottleEgg";
              local_2078 = puVar36 + 0x10;
              FUN_0274d104(&local_106c,&local_2078,iVar17);
            }
            local_2078 = puVar36 + 0x10;
            local_2070 = "SetMessageBottleEgg";
            ppuVar29 = &local_2078;
LAB_011fff04:
            FUN_0274d104(&local_106c,ppuVar29,1);
          }
          else {
            if (iVar20 < 0xc) {
              if (iVar20 < 9) {
                bVar15 = iVar20 < 6;
                uVar22 = 3;
                if (iVar20 < 6) {
                  uVar22 = 1;
                }
                bVar33 = bVar15;
              }
              else {
                bVar15 = false;
                uVar22 = 4;
                bVar33 = false;
              }
            }
            else {
              bVar15 = false;
              uVar22 = 5;
              bVar33 = false;
            }
LAB_011ff868:
            uVar19 = uVar19 >> 0x12 & 7;
            iVar20 = uVar22 - uVar19;
            bVar8 = bVar15;
            if (uVar19 <= uVar22 && iVar20 != 0) {
              bVar8 = true;
            }
            bVar6 = false;
            if (uVar19 == 1) {
              bVar6 = bVar33;
            }
            if ((bVar8) && (!bVar6)) {
              local_4118 = (undefined *)0x3100;
              if (bVar15) {
                iVar20 = 1;
              }
              FUN_0277d4ac(&local_4118);
              FUN_01ad5d04(&local_3080,&local_4118);
              puVar2 = PTR_DAT_04bb46f0;
              local_1f80 = 0;
              local_1f88 = 0;
              local_1f90 = 0;
              local_1f98 = (undefined *)0x0;
              local_1fa0 = 0;
              local_1fa8 = (undefined *)0x0;
              local_1fb0 = 0;
              local_1fb8 = (undefined *)0x0;
              local_1fc0 = 0;
              local_1fc8 = (undefined *)0x0;
              local_1fd0 = 0;
              local_1fd8 = (undefined *)0x0;
              local_1fe0 = 0;
              local_1fe8 = (undefined *)0x0;
              local_1ff0 = 0;
              local_1ff8 = (undefined *)0x0;
              local_2000 = 0;
              local_2008 = (undefined *)0x0;
              local_2010 = 0;
              local_2018 = (undefined *)0x0;
              local_2020 = 0;
              local_2028 = (undefined *)0x0;
              local_2030 = 0;
              local_2038 = (undefined *)0x0;
              local_2040 = 0;
              local_2048 = (undefined *)0x0;
              local_2050 = 0;
              local_2058 = (undefined *)0x0;
              local_2060 = 0;
              local_2068 = (undefined *)0x0;
              local_2070 = (char *)0x0;
              local_2078 = (undefined *)0x0;
              local_4088 = (undefined *)CONCAT44(local_4088._4_4_,0x30);
              FUN_0262a720(*(long *)PTR_DAT_04bb46f0,&local_2078,&local_4088,
                           *(long *)PTR_DAT_04bb46f0 + 0xe98e0);
              FUN_0262b200(*(long *)puVar2,&local_2078,&local_106c,*(long *)puVar2 + 0xe98e0);
              if (iVar20 < 1) {
                local_2070 = "HitMessageBottleEgg";
                local_2078 = puVar36 + 0x10;
                FUN_0274d104(&local_106c,&local_2078,0);
                goto joined_r0x011ffec0;
              }
              iVar34 = 0;
              bVar15 = false;
              uVar24 = 0;
              puVar2 = PTR_DAT_04bb2010 + 0x10;
              plVar35 = plVar28;
              do {
                uVar19 = 0;
                uVar31 = 0;
                do {
                  uVar9 = (uint)uVar31 & 4;
                  uVar22 = (uint)uVar31 + 4;
                  bVar11 = *(byte *)((long)&local_2078 + (uVar31 >> 3));
                  uVar19 = (bVar11 >> (ulong)(uVar9 | 3) & 1) +
                           (bVar11 >> (ulong)(uVar9 | 2) & 1) + (bVar11 >> (ulong)(uVar9 | 1) & 1) +
                           (bVar11 >> (ulong)uVar9 & 1) + uVar19;
                  uVar31 = (ulong)uVar22;
                } while (uVar22 != 0x800);
                uVar10 = (uint)(uVar24 >> 0x20);
                uVar22 = (uint)uVar24 - ((uint)uVar24 >> 1 & 0x55555555);
                uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
                uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
                uVar9 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
                uVar22 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
                uVar9 = uVar9 + (uVar9 >> 8);
                uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
                uVar22 = uVar22 + (uVar22 >> 8);
                if (uVar19 <= (uVar22 + (uVar22 >> 0x10) & 0x3f) + (uVar9 + (uVar9 >> 0x10) & 0x3f))
                {
                  local_4088 = (undefined *)CONCAT44(local_4088._4_4_,0x30);
                  FUN_0262a720(*(long *)PTR_DAT_04bb46f0,&local_2078,&local_4088,
                               *(long *)PTR_DAT_04bb46f0 + 0xe98e0);
                }
                uVar19 = DAT_0514cb58;
                uVar22 = DAT_0514cb5c;
                uVar9 = DAT_0514cb60;
                do {
                  DAT_0514cb60 = DAT_0514cb64;
                  DAT_0514cb5c = uVar9;
                  DAT_0514cb58 = uVar22;
                  uVar22 = 0;
                  uVar31 = 0;
                  do {
                    uVar10 = (uint)uVar31 & 4;
                    uVar9 = (uint)uVar31 + 4;
                    bVar11 = *(byte *)((long)&local_2078 + (uVar31 >> 3));
                    uVar22 = (bVar11 >> (ulong)(uVar10 | 3) & 1) +
                             (bVar11 >> (ulong)(uVar10 | 2) & 1) +
                             (bVar11 >> (ulong)(uVar10 | 1) & 1) +
                             (bVar11 >> (ulong)uVar10 & 1) + uVar22;
                    uVar31 = (ulong)uVar9;
                  } while (uVar9 != 0x800);
                  uVar19 = uVar19 ^ uVar19 << 0xb;
                  DAT_0514cb64 = uVar19 >> 8 ^ DAT_0514cb60 >> 0x13 ^ uVar19 ^ DAT_0514cb60;
                  uVar31 = (ulong)DAT_0514cb64 * (ulong)uVar22;
                  uVar32 = 1L << (uVar31 >> 0x20 & 0x3f);
                  uVar19 = DAT_0514cb58;
                  uVar22 = DAT_0514cb5c;
                  uVar9 = DAT_0514cb60;
                } while ((uVar32 & uVar24) != 0);
                if (-1 < (long)uVar31) {
                  uVar19 = 0;
                  iVar23 = 0;
                  do {
                    iVar30 = (int)(uVar31 >> 0x20);
                    if ((*(byte *)((long)&local_2078 + (ulong)(uVar19 >> 3)) >> (ulong)(uVar19 & 6)
                        & 1) != 0) {
                      if (iVar23 == iVar30) goto LAB_011ffc70;
                      iVar23 = iVar23 + 1;
                    }
                    if ((*(byte *)((long)&local_2078 + (ulong)(uVar19 >> 3)) >>
                         (ulong)(uVar19 + 1 & 7) & 1) != 0) {
                      if (iVar23 == iVar30) {
                        uVar19 = uVar19 + 1;
                        goto LAB_011ffc70;
                      }
                      iVar23 = iVar23 + 1;
                    }
                    uVar19 = uVar19 + 2;
                  } while (uVar19 != 0x800);
                }
                uVar19 = 0xffffffff;
LAB_011ffc70:
                local_1070 = CONCAT13(local_1070._3_1_,0x80023);
                FUN_020fd218(&local_1070,0,0);
                uVar22 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b74 = DAT_05582b78;
                uVar9 = uVar22 ^ DAT_05582b7c;
                DAT_05582b78 = DAT_05582b7c;
                plVar35 = (long *)((ulong)plVar35 & 0xffffffffff000000 | (ulong)(uint3)local_1070);
                DAT_05582b7c = uVar22 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9;
                FUN_01afc400(&local_4088,&local_3080,plVar35,uVar19,uVar9 >> 0x18);
                local_4118 = local_4088;
                local_4080 = 0;
                local_4088 = puVar2;
                uVar31 = FUN_0168c968(param_2,&local_4118,&local_4088);
                plVar28 = (long *)PTR_DAT_04bb46b0;
                if ((uVar31 & 1) == 0) {
                  if (bVar15) goto LAB_011fecd8;
                  puVar36 = puVar36 + 0x10;
                  local_1060 = "HitMessageBottleEgg";
                  local_1068 = puVar36;
                  FUN_0274d104(&local_106c,&local_1068,0);
                  if (iVar17 < 6) {
                    local_1060 = "MissMessageBottleEgg";
                    local_1068 = puVar36;
                    FUN_0274d104(&local_106c,&local_1068,iVar17 + 1);
                  }
                  local_1060 = "SetMessageBottleEgg";
                  ppuVar29 = (undefined **)&local_1068;
                  local_1068 = puVar36;
                  goto LAB_011fff04;
                }
                local_1060 = "SetMessageBottleEgg";
                local_1068 = puVar36 + 0x10;
                iVar23 = FUN_0274ce10(&local_106c,&local_1068);
                if (iVar23 == 0) {
                  puVar4 = puVar36 + 0x10;
                  local_1060 = "SetMessageBottleEgg";
                  local_1068 = puVar4;
                  FUN_0274d104(&local_106c,&local_1068,1);
                  if ((int)uVar21 < 2) {
                    local_1060 = "HitMessageBottleEgg";
                    local_1068 = puVar4;
                    FUN_0274d104(&local_106c,&local_1068,uVar21 + 1);
                  }
                  local_1060 = "MissMessageBottleEgg";
                  local_1068 = puVar4;
                  FUN_0274d104(&local_106c,&local_1068,0);
                }
                local_1068 = puVar36 + 0x10;
                local_1060 = "EasterTodayRecipeRandomGenerateNum";
                uVar24 = uVar32 | uVar24;
                FUN_0274dc60(&local_106c,&local_1068,0xffffffff);
                iVar34 = iVar34 + 1;
                bVar15 = true;
              } while (iVar34 != iVar20);
              plVar28 = (long *)PTR_DAT_04bb46b0;
            }
          }
        }
      }
    }
  }
LAB_011fecd8:
  local_2070 = (char *)0x0;
  local_2060 = 0;
  local_2078 = PTR_DAT_04bb2010 + 0x10;
  local_2050 = 0;
  local_2040 = 0;
  local_2030 = 0;
  local_2020 = 0;
  local_2010 = 0;
  local_2000 = 0;
  local_1ff0 = 0;
  local_1fe0 = 0;
  local_1fd0 = 0;
  local_1fc0 = 0;
  local_1fb0 = 0;
  local_1fa0 = 0;
  local_1f90 = 0;
  local_2068 = local_2078;
  local_2058 = local_2078;
  local_2048 = local_2078;
  local_2038 = local_2078;
  local_2028 = local_2078;
  local_2018 = local_2078;
  local_2008 = local_2078;
  local_1ff8 = local_2078;
  local_1fe8 = local_2078;
  local_1fd8 = local_2078;
  local_1fc8 = local_2078;
  local_1fb8 = local_2078;
  local_1fa8 = local_2078;
  local_1f98 = local_2078;
  iVar17 = FUN_0252d29c();
  if (*plVar28 == 0) {
    lVar25 = 0;
    lVar26 = _DAT_00000098;
    if (_DAT_00000098 == 0) goto LAB_011fedc8;
LAB_011fed98:
    if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      lVar26 = *(long *)(lVar25 + 0x98);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar26 == 0) goto LAB_011fee04;
    }
    plVar28 = *(long **)(lVar26 + 0x20);
    if (plVar28 != (long *)0x0) {
      local_3080 = *(undefined **)(lVar25 + 0x78);
      local_3078 = *(undefined **)(lVar25 + 0x80);
      local_3070 = (char *)0x53c;
      (**(code **)(*plVar28 + 0x20))(plVar28,&local_3080);
    }
  }
  else {
    lVar26 = (**(code **)(*(long *)**(undefined8 **)(*plVar28 + 0x10) + 0x30))();
    lVar25 = 0;
    if (lVar26 != 0) {
      lVar25 = lVar26 + 0x276cb0;
    }
    lVar26 = *(long *)(lVar25 + 0x98);
    if (*(long *)(lVar25 + 0x98) != 0) goto LAB_011fed98;
LAB_011fedc8:
    uVar24 = 0;
  }
LAB_011fee04:
  uVar21 = iVar17 * 0x1e;
  uVar19 = 0;
  lVar26 = *(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78) + 0x23c;
  do {
    uVar31 = (ulong)uVar21;
    uVar32 = (ulong)(uVar21 + 1);
    if (0xef < uVar21) {
      uVar31 = 0;
    }
    lVar1 = (long)((ulong)uVar19 << 0x20) >> 0x1c;
    if (0xef < uVar21 + 1) {
      uVar32 = 0;
    }
    sVar12 = *(short *)(lVar26 + uVar31 * 2);
    sVar13 = *(short *)(lVar26 + uVar32 * 2);
    *(int *)((long)&local_2070 + lVar1) = (int)sVar12;
    *(int *)((long)&local_2070 + lVar1 + 4) = (int)sVar13;
    if (sVar12 == 0 && sVar13 == 0) {
      *(undefined8 *)((long)&local_2070 + lVar1) = 0xffffffffffffffff;
      *(undefined2 *)(lVar26 + uVar31 * 2) = 0xffff;
      *(undefined2 *)(lVar26 + uVar32 * 2) = 0xffff;
    }
    uVar19 = uVar19 + 1;
    uVar21 = uVar21 + 2;
  } while (uVar19 != 0xf);
  if ((((uVar24 & 1) != 0) && (*(long *)(lVar25 + 0x98) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  puVar4 = PTR_DAT_04bbbf90;
  local_4088 = PTR_DAT_04bbfe68 + 0x10;
  local_4080 = CONCAT44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc),1);
  uVar16 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb6268;
  local_4078 = (undefined *)(CONCAT71(local_4078._1_7_,uVar16) & 0xffffffffffffff01);
  local_4088 = PTR_DAT_04bb6268 + 0x10;
  local_4118 = (undefined *)0x30dd;
  FUN_0277d4ac(&local_4118);
  puVar36 = PTR_DAT_04bb43c0;
  local_1058 = 0;
  local_1068 = PTR_DAT_04bc0510 + 0x10;
  local_1060 = local_4118;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar19 = FUN_0277d6c4(&local_1060);
  if (*(long *)puVar36 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar19 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar19 = FUN_0277d6c4(&local_4118);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar19 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar19 * 8);
        if (lVar25 != 0) {
          local_1058 = lVar25;
        }
      }
    }
  }
  FUN_01b152b8(&local_1068);
  lVar25 = 0;
  bVar15 = false;
  local_4118 = local_1060;
  puVar36 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  do {
    iVar20 = *(int *)((long)&local_2070 + lVar25);
    if (iVar20 != -1) {
      local_305c = *(int *)((long)&local_2070 + lVar25 + 4);
      local_3060 = iVar20 + 1;
      local_3070 = (char *)CONCAT44(local_305c,iVar20);
      local_305c = local_305c + 1;
      local_3080 = puVar36;
      local_3078 = puVar3;
      local_3068 = puVar3;
      uVar24 = FUN_01675930(&local_3080,1);
      if ((uVar24 & 1) != 0) {
        local_3080 = PTR_DAT_04bbc1a0 + 0x10;
        local_3078 = PTR_DAT_04bb2010 + 0x10;
        local_3068 = PTR_DAT_04bb2010 + 0x10;
        local_305c = *(int *)((long)&local_2070 + lVar25 + 4);
        local_3070 = (char *)CONCAT44(local_305c,*(int *)((long)&local_2070 + lVar25));
        local_3060 = *(int *)((long)&local_2070 + lVar25) + 1;
        local_305c = local_305c + 1;
        uVar24 = FUN_011f3160(&local_4088,0,&local_3080);
        if ((uVar24 & 1) != 0) {
          FUN_01a50ae4(&local_4088,&local_4118,(long)&local_2078 + lVar25);
          goto LAB_011feff8;
        }
      }
      bVar15 = true;
      *(undefined4 *)((long)&local_2070 + lVar25) = 0xffffffff;
      *(undefined4 *)((long)&local_2070 + lVar25 + 4) = 0xffffffff;
    }
LAB_011feff8:
    lVar25 = lVar25 + 0x10;
  } while (lVar25 != 0xf0);
  if (bVar15) {
    FUN_012298fc(iVar17,&local_2078);
  }
  local_2070 = (char *)0x0;
  local_2060 = 0;
  local_2078 = PTR_DAT_04bb2010 + 0x10;
  local_2050 = 0;
  local_2040 = 0;
  local_2030 = 0;
  local_2020 = 0;
  local_2010 = 0;
  local_2000 = 0;
  local_1ff0 = 0;
  local_2068 = local_2078;
  local_2058 = local_2078;
  local_2048 = local_2078;
  local_2038 = local_2078;
  local_2028 = local_2078;
  local_2018 = local_2078;
  local_2008 = local_2078;
  local_1ff8 = local_2078;
  uVar18 = FUN_0252d29c();
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar25 = 0;
    lVar26 = _DAT_00000098;
    if (_DAT_00000098 == 0) goto LAB_011ff19c;
LAB_011ff16c:
    if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
LAB_011ff1bc:
      plVar28 = *(long **)(lVar26 + 0x20);
      if (plVar28 != (long *)0x0) {
        local_3080 = *(undefined **)(lVar25 + 0x78);
        local_3078 = *(undefined **)(lVar25 + 0x80);
        local_3070 = (char *)0x53c;
        (**(code **)(*plVar28 + 0x20))(plVar28,&local_3080);
      }
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      lVar26 = *(long *)(lVar25 + 0x98);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar26 != 0) goto LAB_011ff1bc;
    }
    FUN_0275cb4c(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),uVar18,&local_2078);
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar25 + 0x98) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar25 + 0x98) + 0x18), puVar27 != (undefined8 *)0x0))
    {
      (**(code **)*puVar27)();
    }
  }
  else {
    lVar26 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar25 = 0;
    if (lVar26 != 0) {
      lVar25 = lVar26 + 0x276cb0;
    }
    lVar26 = *(long *)(lVar25 + 0x98);
    if (*(long *)(lVar25 + 0x98) != 0) goto LAB_011ff16c;
LAB_011ff19c:
    FUN_0275cb4c(*(long *)(lVar25 + 0x80) + *(long *)(lVar25 + 0x78),uVar18,&local_2078);
  }
  local_3080 = PTR_DAT_04bbfe68 + 0x10;
  local_3078 = (undefined *)CONCAT44(*(undefined4 *)(puVar4 + 0xc),1);
  uVar16 = FUN_017baf44();
  local_3070 = (char *)(CONCAT71(local_3070._1_7_,uVar16) & 0xffffffffffffff01);
  local_3080 = puVar2 + 0x10;
  local_4088 = (undefined *)0xed16;
  FUN_0277d4ac(&local_4088);
  if ((int)local_2070 == -1) {
    bVar15 = false;
  }
  else {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2078,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    bVar15 = iVar17 != 60000;
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2078);
    }
    else {
      local_2070 = (char *)0xffffffffffffffff;
    }
  }
  if ((int)local_2060 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2068,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2068);
    }
    else {
      local_2060 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2050 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2058,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2058);
    }
    else {
      local_2050 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2040 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2048,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2048);
    }
    else {
      local_2040 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2030 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2038,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2038);
    }
    else {
      local_2030 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2020 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2028,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2028);
    }
    else {
      local_2020 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2010 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2018,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2018);
    }
    else {
      local_2010 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_2000 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_2008,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 == 60000) {
      FUN_011f3390(&local_3080,0,&local_4088,&local_2008);
    }
    else {
      local_2000 = 0xffffffffffffffff;
      bVar15 = true;
    }
  }
  if ((int)local_1ff0 != -1) {
    FUN_01a5033c(&local_1068,&local_3080,0,&local_1ff8,0);
    iVar17 = FUN_0277d6c4(&local_1068);
    if (iVar17 != 60000) {
      local_1ff0 = 0xffffffffffffffff;
      goto LAB_011ff634;
    }
    FUN_011f3390(&local_3080,0,&local_4088,&local_1ff8);
  }
  if (!bVar15) {
    return;
  }
LAB_011ff634:
  FUN_01229e3c(uVar18,&local_2078);
  return;
}

