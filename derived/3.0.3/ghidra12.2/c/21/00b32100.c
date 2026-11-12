
/* WARNING: Type propagation algorithm not settling */

bool FUN_00b32100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 *__src;
  undefined1 auVar9 [8];
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  short *psVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  long lVar26;
  long *plVar27;
  undefined1 *__dest;
  undefined8 uVar28;
  uint uVar29;
  undefined *puVar30;
  void *pvVar31;
  void *pvVar32;
  uint uVar33;
  char *pcVar34;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined *local_4e0;
  undefined4 local_4d8;
  undefined *local_4d0;
  undefined1 *puStack_4c8;
  undefined4 local_4c0;
  undefined1 local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined1 *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined1 *local_468;
  long local_460;
  undefined8 local_458;
  long lStack_450;
  undefined8 local_448;
  undefined1 *puStack_440;
  undefined4 local_438;
  undefined1 local_434 [31];
  undefined1 local_415;
  undefined1 *local_410;
  long lStack_408;
  undefined8 local_400;
  undefined1 *puStack_3f8;
  undefined1 local_3f0 [4];
  undefined1 auStack_3ec [4];
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [8];
  uint local_3b0;
  undefined2 uStack_3ac;
  undefined2 uStack_3aa;
  undefined1 local_3a8 [6];
  undefined2 uStack_3a2;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 *puStack_2a0;
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined *local_278;
  long local_270;
  undefined8 local_268;
  undefined1 *local_260;
  undefined4 local_258;
  undefined1 local_254 [47];
  undefined1 local_225;
  undefined *local_220;
  uint *local_218;
  undefined1 local_210 [4];
  uint auStack_20c [15];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined *local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined2 uStack_84;
  char cStack_82;
  char cStack_81;
  char local_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined2 local_44;
  undefined2 uStack_42;
  
  uStack_50 = (undefined4)unaff_x29;
  uStack_4c = (uint)((ulong)unaff_x29 >> 0x20);
  uStack_48 = (uint)unaff_x30;
  local_44 = (undefined2)((ulong)unaff_x30 >> 0x20);
  uStack_42 = (undefined2)((ulong)unaff_x30 >> 0x30);
  local_58._4_4_ = 0;
  uVar15 = 0;
  do {
    pcVar34 = "";
    if (uVar15 < 0x11) {
      pcVar34 = (&PTR_s_cForce_Furniture_049375d0)[uVar15];
    }
    (**(code **)(*(long *)(param_1 + 0x1e0) + 0x18))(param_1 + 0x1e0);
    uVar11 = uStack_42;
    uVar10 = local_44;
    uVar6 = uStack_48;
    uVar29 = uStack_4c;
    uVar20 = uStack_50;
    iVar16 = DAT_0545409c;
    iVar14 = DAT_05405f10;
    puVar30 = PTR_DAT_04bb32e8;
    puVar1 = PTR_DAT_04bb3240;
    pcVar25 = *(char **)(param_1 + 0x1e8);
    if (pcVar34 == pcVar25) {
LAB_00b321fc:
      local_58._4_4_ = uVar15;
      break;
    }
    if (*pcVar34 == *pcVar25) {
      if (*pcVar34 == '\0') goto LAB_00b321fc;
      lVar26 = 0x7fffe;
      while( true ) {
        if (pcVar34[1] != pcVar25[1]) break;
        if (pcVar34[1] == '\0') goto LAB_00b321fc;
        if (pcVar34[2] != pcVar25[2]) break;
        if (pcVar34[2] == '\0') goto LAB_00b321fc;
        if ((lVar26 == 0) || (cVar8 = pcVar34[3], cVar8 != pcVar25[3])) break;
        lVar26 = lVar26 + -3;
        pcVar25 = pcVar25 + 3;
        pcVar34 = pcVar34 + 3;
        if (cVar8 == '\0') goto LAB_00b321fc;
      }
    }
    uVar33 = 0x11;
    if ((int)uVar15 < 0x11) {
      uVar33 = uVar15 + 1;
    }
    uVar15 = uVar33;
  } while (uVar33 != 0x11);
  uVar15 = local_58._4_4_;
  if (0x10 < local_58._4_4_) {
    return false;
  }
  local_60 = (undefined *)CONCAT44(uStack_4c,uStack_50);
  local_58._4_4_ = (uint)(CONCAT26(uStack_42,CONCAT24(local_44,uStack_48)) >> 0x20);
  uStack_50 = (undefined4)unaff_x28;
  uStack_4c = (uint)((ulong)unaff_x28 >> 0x20);
  local_44 = (undefined2)((ulong)unaff_x27 >> 0x20);
  uStack_42 = (undefined2)((ulong)unaff_x27 >> 0x30);
  uStack_48 = (uint)unaff_x27;
  switch(uVar15) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      if ((-1 < DAT_05405f10) && (lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x48), lVar26 != 0)) {
        uStack_48 = uVar6 & 0xffffff;
        uStack_50 = 8;
        uStack_4c = uVar29 & 0xffffff00;
        local_58 = &uStack_4c;
        local_60 = PTR_DAT_04bb3768 + 0x10;
        local_44 = uVar10;
        uStack_42 = uVar11;
        uVar24 = FUN_02917058(*(undefined4 *)(lVar26 + 0x508));
        local_68._0_4_ = (uint)(uint3)local_68;
        local_88 = 0x20;
        lVar26 = 0;
        pcVar34 = "BO_Force_FurnitureN";
        if ((uVar24 & 1) == 0) {
          pcVar34 = "BO_Force_FurnitureP";
        }
        do {
          if (pcVar34[lVar26] == '\0') {
LAB_00b2fae8:
            iVar16 = (int)lVar26;
joined_r0x00b2faec:
            if (0x1f < iVar16) {
              iVar16 = 0x1f;
            }
            goto LAB_00b2faf4;
          }
          if (pcVar34[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b2fae8;
          }
          if (pcVar34[lVar26 + 2] == '\0') {
            iVar16 = (int)lVar26 + 2;
            goto joined_r0x00b2faec;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        iVar16 = 0;
LAB_00b2faf4:
        local_90 = (undefined1  [8])&uStack_84;
        memcpy(&uStack_84,pcVar34,(long)iVar16);
        *(undefined1 *)((long)&uStack_84 + (long)iVar16) = 0;
        local_98 = &PTR_LAB_048f9700;
        uVar24 = FUN_01be94e0(&local_60,&local_98,iVar14);
        if ((uVar24 & 1) != 0) {
          (*(code *)local_98[3])(&local_98);
          auVar9 = local_90;
          (**(code **)(local_60 + 0x18))(&local_60);
          FUN_0074fda4(&local_130,"%s:%s",auVar9,local_58);
          pvVar31 = *(void **)(param_1 + 0xc0);
          (**(code **)(local_130 + 0x18))(&local_130);
          pvVar32 = local_128;
          if (pvVar31 != local_128) {
            (**(code **)(local_130 + 0x18))(&local_130);
            lVar26 = 0;
            do {
              if (*(char *)((long)local_128 + lVar26) == '\0') goto LAB_00b2fbec;
              if (*(char *)((long)local_128 + lVar26 + 1) == '\0') {
                lVar26 = lVar26 + 1;
                goto LAB_00b2fbec;
              }
              if (*(char *)((long)local_128 + lVar26 + 2) == '\0') {
                lVar26 = lVar26 + 2;
                goto LAB_00b2fbec;
              }
              lVar26 = lVar26 + 3;
            } while (lVar26 != 0x80001);
            lVar26 = 0;
LAB_00b2fbec:
            iVar14 = (int)lVar26;
            if (*(int *)(param_1 + 200) <= (int)lVar26) {
              iVar14 = *(int *)(param_1 + 200) + -1;
            }
            memcpy(pvVar31,pvVar32,(long)iVar14);
            *(undefined1 *)((long)pvVar31 + (long)iVar14) = 0;
          }
        }
      }
    }
    return true;
  case 1:
    if (0 < DAT_05454098) {
      local_58._0_4_ = 0x20;
      local_44 = 0x4e;
      local_60 = (undefined *)((long)&local_58 + 4);
      local_58._4_4_ = s_BO_FreeA_ClothesN_040ced7d._0_4_;
      uStack_50 = s_BO_FreeA_ClothesN_040ced7d._4_4_;
      uStack_4c = s_BO_FreeA_ClothesN_040ced7d._8_4_;
      uStack_48 = s_BO_FreeA_ClothesN_040ced7d._12_4_;
      local_68 = &PTR_LAB_048f9700;
      uStack_42 = uVar11;
      FUN_0074fda4(&local_100,"%s:%03d");
      pvVar31 = *(void **)(param_1 + 0xc0);
      (**(code **)((long)local_100 + 0x18))(&local_100);
      pvVar32 = local_f8;
      if (pvVar31 != local_f8) {
        (**(code **)((long)local_100 + 0x18))(&local_100);
        lVar26 = 0;
        do {
          if (*(char *)((long)local_f8 + lVar26) == '\0') goto LAB_00b2fd2c;
          if (*(char *)((long)local_f8 + lVar26 + 1) == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b2fd2c;
          }
          if (*(char *)((long)local_f8 + lVar26 + 2) == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b2fd2c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b2fd2c:
        iVar14 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar14 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pvVar31,pvVar32,(long)iVar14);
        *(undefined1 *)((long)pvVar31 + (long)iVar14) = 0;
      }
    }
    return true;
  case 2:
    if (-1 < DAT_05454084) {
      local_58._0_4_ = 0x20;
      local_44 = 0x50;
      local_60 = (undefined *)((long)&local_58 + 4);
      local_58._4_4_ = s_BO_FreeA_ClothesP_0405c0f9._0_4_;
      uStack_50 = s_BO_FreeA_ClothesP_0405c0f9._4_4_;
      uStack_4c = s_BO_FreeA_ClothesP_0405c0f9._8_4_;
      uStack_48 = s_BO_FreeA_ClothesP_0405c0f9._12_4_;
      local_68 = &PTR_LAB_048f9700;
      uStack_42 = uVar11;
      FUN_0074fda4(&local_100,"%s:%03d");
      pvVar31 = *(void **)(param_1 + 0xc0);
      (**(code **)((long)local_100 + 0x18))(&local_100);
      pvVar32 = local_f8;
      if (pvVar31 != local_f8) {
        (**(code **)((long)local_100 + 0x18))(&local_100);
        lVar26 = 0;
        do {
          if (*(char *)((long)local_f8 + lVar26) == '\0') goto LAB_00b2fe60;
          if (*(char *)((long)local_f8 + lVar26 + 1) == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b2fe60;
          }
          if (*(char *)((long)local_f8 + lVar26 + 2) == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b2fe60;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b2fe60:
        iVar14 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar14 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pvVar31,pvVar32,(long)iVar14);
        *(undefined1 *)((long)pvVar31 + (long)iVar14) = 0;
      }
    }
    return true;
  case 3:
    lVar26 = *(long *)PTR_DAT_04bb3240;
    uVar7 = *(undefined4 *)(lVar26 + 0xde90);
    pcVar34 = "Genre";
    if (*(char *)(lVar26 + 0xde94) != '\0') {
      pcVar34 = "Theme";
    }
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    FUN_006d8678(&local_88,"BO_FreeB_Furniture_%s",pcVar34);
    local_90._0_4_ = local_90._0_4_ & 0xffffff;
    local_a8 = (long)&local_a0 + 4;
    local_a0 = (undefined *)CONCAT35(local_a0._5_3_,0x10);
    local_b0 = PTR_DAT_04bb2ab0 + 0x10;
    bVar13 = FUN_01be94e0(&local_b0,&local_88,uVar7);
    if ((bVar13 & 1) != 0) {
      (**(code **)(CONCAT17(cStack_81,CONCAT16(cStack_82,CONCAT24(uStack_84,local_88))) + 0x18))
                (&local_88);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      FUN_0074fda4(&local_148,"%s:%s",CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80)),local_a8);
      pvVar32 = *(void **)(param_1 + 0xc0);
      (**(code **)(local_148 + 0x18))(&local_148);
      ppuVar5 = local_140;
      if (pvVar32 != local_140) {
        (**(code **)(local_148 + 0x18))(&local_148);
        lVar23 = 0;
        do {
          if (*(char *)((long)local_140 + lVar23) == '\0') goto LAB_00b2fffc;
          if (*(char *)((long)local_140 + lVar23 + 1) == '\0') {
            lVar23 = lVar23 + 1;
            goto LAB_00b2fffc;
          }
          if (*(char *)((long)local_140 + lVar23 + 2) == '\0') {
            lVar23 = lVar23 + 2;
            goto LAB_00b2fffc;
          }
          lVar23 = lVar23 + 3;
        } while (lVar23 != 0x80001);
        lVar23 = 0;
LAB_00b2fffc:
        iVar14 = (int)lVar23;
        if (*(int *)(param_1 + 200) <= (int)lVar23) {
          iVar14 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pvVar32,ppuVar5,(long)iVar14);
        *(undefined1 *)((long)pvVar32 + (long)iVar14) = 0;
      }
      if (*(long *)(param_1 + 8) == 0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = *(long **)(*(long *)(param_1 + 8) + 0x48);
      }
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if ((((plVar27 != (long *)0x0) &&
           (uVar24 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0), (uVar24 & 1) != 0))
          && (uVar15 = *(uint *)(plVar27 + 0xa1), uVar15 < 10)) &&
         ((&DAT_053fee41)[(ulong)uVar15 * 0xba0] != '\0')) {
        FUN_0219c3e0((ulong)uVar15 * 0xba0 + 0x53fe5d0,&local_88,uVar7);
        FUN_021c07f8(&DAT_053fe348,lVar26 + 0xde88,1);
      }
    }
    return (bool)(bVar13 & 1);
  case 5:
    lVar26 = *(long *)PTR_DAT_04bb3240;
    uVar7 = *(undefined4 *)(lVar26 + 0xdea4);
    if (*(uint *)(lVar26 + 0xdea0) < 4) {
      puVar19 = (undefined8 *)(&PTR_s_N_Genre_049374a0)[*(uint *)(lVar26 + 0xdea0)];
    }
    else {
      puVar19 = &DAT_0407ebb1;
    }
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    FUN_006d8678(&local_88,"BO_FreeC_Furniture%s",puVar19);
    local_90._0_4_ = local_90._0_4_ & 0xffffff;
    local_a8 = (long)&local_a0 + 4;
    local_a0 = (undefined *)CONCAT35(local_a0._5_3_,0x10);
    local_b0 = PTR_DAT_04bb2ab0 + 0x10;
    bVar13 = FUN_01be94e0(&local_b0,&local_88,uVar7);
    if ((bVar13 & 1) != 0) {
      (**(code **)(CONCAT17(cStack_81,CONCAT16(cStack_82,CONCAT24(uStack_84,local_88))) + 0x18))
                (&local_88);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      FUN_0074fda4(&local_148,"%s:%s",CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80)),local_a8);
      pvVar32 = *(void **)(param_1 + 0xc0);
      (**(code **)(local_148 + 0x18))(&local_148);
      ppuVar5 = local_140;
      if (pvVar32 != local_140) {
        (**(code **)(local_148 + 0x18))(&local_148);
        lVar23 = 0;
        do {
          if (*(char *)((long)local_140 + lVar23) == '\0') goto LAB_00b3095c;
          if (*(char *)((long)local_140 + lVar23 + 1) == '\0') {
            lVar23 = lVar23 + 1;
            goto LAB_00b3095c;
          }
          if (*(char *)((long)local_140 + lVar23 + 2) == '\0') {
            lVar23 = lVar23 + 2;
            goto LAB_00b3095c;
          }
          lVar23 = lVar23 + 3;
        } while (lVar23 != 0x80001);
        lVar23 = 0;
LAB_00b3095c:
        iVar14 = (int)lVar23;
        if (*(int *)(param_1 + 200) <= (int)lVar23) {
          iVar14 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pvVar32,ppuVar5,(long)iVar14);
        *(undefined1 *)((long)pvVar32 + (long)iVar14) = 0;
      }
      if (*(long *)(param_1 + 8) == 0) {
        plVar27 = (long *)0x0;
      }
      else {
        plVar27 = *(long **)(*(long *)(param_1 + 8) + 0x48);
      }
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if ((((plVar27 != (long *)0x0) &&
           (uVar24 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0), (uVar24 & 1) != 0))
          && (uVar15 = *(uint *)(plVar27 + 0xa1), uVar15 < 10)) &&
         ((&DAT_053fee41)[(ulong)uVar15 * 0xba0] != '\0')) {
        FUN_0219c3e0((ulong)uVar15 * 0xba0 + 0x53fe6f0,&local_88,uVar7);
        FUN_021c07f8(&DAT_053fe348,lVar26 + 0xde98,0);
      }
    }
    return (bool)(bVar13 & 1);
  case 6:
    psVar21 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_58._0_4_ = uVar6;
    if (*psVar21 == 0) {
      uVar28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_88 = (undefined4)uVar28;
      uStack_84 = (undefined2)((ulong)uVar28 >> 0x20);
      cStack_82 = (char)((ulong)uVar28 >> 0x30);
      cStack_81 = (char)((ulong)uVar28 >> 0x38);
      if ((char)((ulong)uVar28 >> 0x20) < '\x05') {
        local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_120 = local_120 + -0x15180;
        uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
        local_88 = (undefined4)uVar28;
        cStack_81 = (char)((ulong)uVar28 >> 0x38);
      }
      psVar21 = (short *)&local_88;
      uStack_84 = 5;
      cStack_82 = 0;
    }
    puVar1 = PTR_DAT_04bb32f0;
    uVar15 = 0;
    lVar26 = 1;
    local_70 = *(undefined8 *)psVar21;
    do {
      lVar23 = *(long *)puVar30;
      psVar21 = (short *)(lVar23 + 0x4068);
      if (*psVar21 == 0) {
        uVar28 = *(undefined8 *)(lVar23 + 0x4060);
        local_88 = (undefined4)uVar28;
        uStack_84 = (undefined2)((ulong)uVar28 >> 0x20);
        cStack_82 = (char)((ulong)uVar28 >> 0x30);
        cStack_81 = (char)((ulong)uVar28 >> 0x38);
        if ((char)((ulong)uVar28 >> 0x20) < '\x05') {
          local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          local_120 = local_120 + -0x15180;
          uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
          local_88 = (undefined4)uVar28;
          cStack_81 = (char)((ulong)uVar28 >> 0x38);
        }
        psVar21 = (short *)&local_88;
        uStack_84 = 5;
        cStack_82 = 0;
      }
      local_78 = *(undefined8 *)psVar21;
      local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_120 = local_120 + lVar26 * 0x15180;
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
      uVar24 = FUN_00873540(*(undefined8 *)puVar1,&local_78,1,0);
      if ((uVar24 & 1) != 0) {
        FUN_00873ad0(&local_88,*(undefined8 *)puVar1,&local_78,1);
        uVar24 = FUN_00873540(*(undefined8 *)puVar1,&local_70,1,0);
        if ((uVar24 & 1) == 0) {
LAB_00b30d30:
          bVar13 = FUN_00874190(*(undefined8 *)puVar1,&local_88);
          uVar29 = (uint)bVar13;
          if (bVar13 != 0) {
            pcVar34 = (char *)CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
            if (((((*pcVar34 == 'F') && (pcVar34[1] == 'i')) && (pcVar34[2] == 'r')) &&
                (((pcVar34[3] == 'e' && (pcVar34[4] == 'w')) &&
                 ((pcVar34[5] == 'o' && ((pcVar34[6] == 'r' && (pcVar34[7] == 'k')))))))) &&
               (pcVar34[8] == 's')) {
              if (lVar26 != 1) goto LAB_00b30b80;
            }
            else if (lVar26 == 1) {
              uVar29 = uVar29 + 1;
            }
            uVar15 = uVar15 + 1;
            puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar6 = *puVar17 ^ *puVar17 << 0xb;
            uVar33 = puVar17[3];
            *puVar17 = puVar17[1];
            puVar17[1] = puVar17[2];
            uVar6 = uVar6 >> 8 ^ uVar33 >> 0x13 ^ uVar6 ^ uVar33;
            puVar17[2] = uVar33;
            puVar17[3] = uVar6;
            if (((ulong)uVar6 * (ulong)uVar15 & 0xffffffff00000000) == 0) {
              local_128 = (void *)CONCAT44(uVar15,(undefined4)local_128);
              FUN_0074fda4(&local_120,"BO_FreeE_Event:%03d",uVar29);
              pcVar25 = *(char **)(param_1 + 0xc0);
              (**(code **)(local_120 + 0x18))(&local_120);
              pcVar34 = local_118;
              if (pcVar25 != local_118) {
                (**(code **)(local_120 + 0x18))(&local_120);
                lVar23 = 0;
                do {
                  if (local_118[lVar23] == '\0') goto LAB_00b30b34;
                  if (local_118[lVar23 + 1] == '\0') {
                    lVar23 = lVar23 + 1;
                    goto LAB_00b30b34;
                  }
                  if (local_118[lVar23 + 2] == '\0') {
                    lVar23 = lVar23 + 2;
                    goto LAB_00b30b34;
                  }
                  lVar23 = lVar23 + 3;
                } while (lVar23 != 0x80001);
                lVar23 = 0;
LAB_00b30b34:
                iVar14 = (int)lVar23;
                if (*(int *)(param_1 + 200) <= (int)lVar23) {
                  iVar14 = *(int *)(param_1 + 200) + -1;
                }
                memcpy(pcVar25,pcVar34,(long)iVar14);
                pcVar25[iVar14] = '\0';
              }
              uVar15 = local_128._4_4_;
            }
          }
        }
        else {
          FUN_00873ad0(&local_120,*(undefined8 *)puVar1,&local_70,1);
          (**(code **)(local_120 + 0x18))(&local_120);
          (**(code **)(local_120 + 0x18))(&local_120);
          pcVar25 = local_118;
          (**(code **)(CONCAT17(cStack_81,CONCAT16(cStack_82,CONCAT24(uStack_84,local_88))) + 0x18))
                    (&local_88);
          pcVar34 = (char *)CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
          if (pcVar25 != pcVar34) {
            if (*local_118 != *pcVar34) goto LAB_00b30d30;
            if (*local_118 != '\0') {
              uVar24 = 0;
              do {
                uVar18 = uVar24;
                if (local_118[uVar18 + 1] != pcVar34[uVar18 + 1]) goto LAB_00b30d30;
                if (local_118[uVar18 + 1] == '\0') goto joined_r0x00b30d2c;
                if (local_118[uVar18 + 2] != pcVar34[uVar18 + 2]) goto LAB_00b30d30;
                if (local_118[uVar18 + 2] == '\0') {
                  uVar18 = uVar18 + 1;
                  goto joined_r0x00b30d2c;
                }
                if ((uVar18 == 0x7fffe) || (local_118[uVar18 + 3] != pcVar34[uVar18 + 3]))
                goto LAB_00b30d30;
                uVar24 = uVar18 + 3;
              } while (local_118[uVar18 + 3] != '\0');
              uVar18 = uVar18 + 2;
joined_r0x00b30d2c:
              if (0x7ffff < uVar18) goto LAB_00b30d30;
            }
          }
        }
      }
LAB_00b30b80:
      lVar26 = lVar26 + 1;
      if (lVar26 == 6) {
        return 0 < (int)uVar15;
      }
    } while( true );
  case 7:
    psVar21 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_58._0_4_ = uVar6;
    if (*psVar21 == 0) {
      uVar28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_88 = (undefined4)uVar28;
      uStack_84 = (undefined2)((ulong)uVar28 >> 0x20);
      cStack_82 = (char)((ulong)uVar28 >> 0x30);
      cStack_81 = (char)((ulong)uVar28 >> 0x38);
      if ((char)((ulong)uVar28 >> 0x20) < '\x05') {
        local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_120 = local_120 + -0x15180;
        uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
        local_88 = (undefined4)uVar28;
        cStack_81 = (char)((ulong)uVar28 >> 0x38);
      }
      psVar21 = (short *)&local_88;
      uStack_84 = 5;
      cStack_82 = 0;
    }
    puVar1 = PTR_DAT_04bb32f0;
    uVar24 = 1;
    local_70 = *(undefined8 *)psVar21;
    bVar12 = true;
    do {
      lVar26 = *(long *)puVar30;
      psVar21 = (short *)(lVar26 + 0x4068);
      if (*psVar21 == 0) {
        uVar28 = *(undefined8 *)(lVar26 + 0x4060);
        local_88 = (undefined4)uVar28;
        uStack_84 = (undefined2)((ulong)uVar28 >> 0x20);
        cStack_82 = (char)((ulong)uVar28 >> 0x30);
        cStack_81 = (char)((ulong)uVar28 >> 0x38);
        if ((char)((ulong)uVar28 >> 0x20) < '\x05') {
          local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          local_120 = local_120 + -0x15180;
          uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
          local_88 = (undefined4)uVar28;
          cStack_81 = (char)((ulong)uVar28 >> 0x38);
        }
        psVar21 = (short *)&local_88;
        uStack_84 = 5;
        cStack_82 = 0;
      }
      local_78 = *(undefined8 *)psVar21;
      local_120 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_120 = local_120 + uVar24 * 0x15180;
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
      uVar18 = FUN_00873540(*(undefined8 *)puVar1,&local_78,1,0);
      if ((uVar18 & 1) != 0) {
        FUN_00873ad0(&local_88,*(undefined8 *)puVar1,&local_78,1);
        uVar18 = FUN_00873540(*(undefined8 *)puVar1,&local_70,1,0);
        if ((uVar18 & 1) == 0) {
LAB_00b31148:
          uVar20 = 1;
          if ((int)uVar24 == 1) {
            uVar20 = 2;
          }
          FUN_0074fda4(&local_120,"BO_FreeE_Event:%03d",uVar20);
          pcVar25 = *(char **)(param_1 + 0xc0);
          (**(code **)(local_120 + 0x18))(&local_120);
          pcVar34 = local_118;
          if (pcVar25 == local_118) {
            return bVar12;
          }
          (**(code **)(local_120 + 0x18))(&local_120);
          lVar26 = 0;
          goto LAB_00b311a4;
        }
        FUN_00873ad0(&local_120,*(undefined8 *)puVar1,&local_70,1);
        (**(code **)(local_120 + 0x18))(&local_120);
        (**(code **)(local_120 + 0x18))(&local_120);
        pcVar25 = local_118;
        (**(code **)(CONCAT17(cStack_81,CONCAT16(cStack_82,CONCAT24(uStack_84,local_88))) + 0x18))
                  (&local_88);
        pcVar34 = (char *)CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
        if (pcVar25 != pcVar34) {
          if (*local_118 != *pcVar34) goto LAB_00b31148;
          if (*local_118 != '\0') {
            uVar18 = 0;
            do {
              uVar22 = uVar18;
              if (local_118[uVar22 + 1] != pcVar34[uVar22 + 1]) goto LAB_00b31148;
              if (local_118[uVar22 + 1] == '\0') goto LAB_00b30f98;
              if (local_118[uVar22 + 2] != pcVar34[uVar22 + 2]) goto LAB_00b31148;
              if (local_118[uVar22 + 2] == '\0') {
                uVar22 = uVar22 + 1;
                goto LAB_00b30f98;
              }
              if ((uVar22 == 0x7fffe) || (local_118[uVar22 + 3] != pcVar34[uVar22 + 3]))
              goto LAB_00b31148;
              uVar18 = uVar22 + 3;
            } while (local_118[uVar22 + 3] != '\0');
            uVar22 = uVar22 + 2;
LAB_00b30f98:
            if (0x7ffff < uVar22) goto LAB_00b31148;
          }
        }
      }
      bVar12 = uVar24 < 5;
      uVar24 = uVar24 + 1;
      if (uVar24 == 6) {
        return bVar12;
      }
    } while( true );
  case 8:
    local_58._0_4_ = (uint)local_58 & 0xffffff;
    local_d8 = CONCAT35(local_d8._5_3_,0x80);
    local_e0 = (char *)((long)&local_d8 + 4);
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    lVar26 = *(long *)PTR_DAT_04bb3240;
    if (**(char **)(lVar26 + 0xde20) != '\0') {
      local_58._4_4_ = uVar15;
      uStack_50 = uVar20;
      uStack_4c = uVar29;
      uStack_48 = uVar6;
      local_44 = uVar10;
      uStack_42 = uVar11;
      (**(code **)(*(long *)(lVar26 + 0xde18) + 0x18))((long *)(lVar26 + 0xde18),param_2);
      FUN_038d1270(&local_e8,"BO_FreeF_%s",*(undefined8 *)(lVar26 + 0xde20));
      pcVar25 = *(char **)(param_1 + 0xc0);
      (**(code **)(local_e8 + 0x18))(&local_e8);
      pcVar34 = local_e0;
      if (pcVar25 != local_e0) {
        (**(code **)(local_e8 + 0x18))(&local_e8);
        lVar26 = 0;
        do {
          if (local_e0[lVar26] == '\0') goto LAB_00b3144c;
          if (local_e0[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b3144c;
          }
          if (local_e0[lVar26 + 2] == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b3144c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b3144c:
        iVar14 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar14 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pcVar25,pcVar34,(long)iVar14);
        pcVar25[iVar14] = '\0';
        pcVar25 = local_e0;
      }
      if (*pcVar25 != '\0') {
        lVar26 = *(long *)puVar1;
        plVar27 = (long *)(lVar26 + 0xde50);
        pvVar32 = (void *)((long)&local_100 + 4);
        local_100 = (void *)CONCAT44(local_100._4_4_,0x10);
        local_f0._0_4_ = (uint)(uint3)local_f0;
        local_110 = PTR_DAT_04bb35a0 + 0x10;
        local_108 = pvVar32;
        (**(code **)(*plVar27 + 0x18))(plVar27);
        pvVar31 = *(void **)(lVar26 + 0xde58);
        if (pvVar32 != pvVar31) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
          lVar23 = 0;
          do {
            if (*(char *)(*(long *)(lVar26 + 0xde58) + lVar23) == '\0') goto LAB_00b31528;
            lVar2 = *(long *)(lVar26 + 0xde58) + lVar23;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar23 = lVar23 + 1;
              goto LAB_00b31528;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar23 = lVar23 + 2;
              goto LAB_00b31528;
            }
            lVar23 = lVar23 + 3;
          } while (lVar23 != 0x80001);
          lVar23 = 0;
LAB_00b31528:
          iVar14 = (int)lVar23;
          if ((int)local_100 <= (int)lVar23) {
            iVar14 = (int)local_100 + -1;
          }
          memcpy(pvVar32,pvVar31,(long)iVar14);
          *(undefined1 *)((long)pvVar32 + (long)iVar14) = 0;
        }
        local_118._0_4_ = (uint)(uint3)local_118;
        local_120._4_4_ = local_120._4_4_ & 0xffffff00;
        local_120 = CONCAT44(local_120._4_4_,8);
        local_140 = &local_130;
        local_110 = PTR_DAT_04bb2ab0 + 0x10;
        local_128 = (void *)((long)&local_120 + 4);
        local_130 = PTR_DAT_04bb3768 + 0x10;
        FUN_00b38fd4(param_1,&local_110,&local_130,&local_130,&local_130,&local_e8,&local_130,
                     &local_130);
        FUN_00b391e0(param_1,0,0);
        if (**(char **)(param_1 + 0xc0) != '\0') {
          return **(char **)(param_1 + 0xc0) != '\0';
        }
        if (*(long *)(param_1 + 8) == 0) {
          plVar27 = (long *)0x0;
        }
        else {
          plVar27 = *(long **)(*(long *)(param_1 + 8) + 0x48);
        }
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        if (plVar27 == (long *)0x0) {
          return false;
        }
        uVar24 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0);
        if ((uVar24 & 1) == 0) {
          return false;
        }
        FUN_021d8fe0(&local_e8,plVar27 + 0x7c);
        return false;
      }
    }
    return false;
  case 9:
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb3240 + 0xde10);
    if (0 < iVar14) {
      local_58._0_4_ = uVar6;
      FUN_0074fda4(&local_108,"BO_FreeE_Snpc:%03d",iVar14);
      pvVar31 = *(void **)(param_1 + 0xc0);
      (**(code **)((long)local_108 + 0x18))(&local_108);
      pvVar32 = local_100;
      if (pvVar31 != local_100) {
        (**(code **)((long)local_108 + 0x18))(&local_108);
        lVar26 = 0;
        do {
          if (*(char *)((long)local_100 + lVar26) == '\0') goto LAB_00b31750;
          if (*(char *)((long)local_100 + lVar26 + 1) == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b31750;
          }
          if (*(char *)((long)local_100 + lVar26 + 2) == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b31750;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b31750:
        iVar16 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar16 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(pvVar31,pvVar32,(long)iVar16);
        *(undefined1 *)((long)pvVar31 + (long)iVar16) = 0;
      }
      puVar30 = PTR_DAT_04bb43c0;
      local_110 = *(undefined **)(*(long *)puVar1 + 0xdf84);
      lVar26 = *(long *)PTR_DAT_04bb43c0;
      uVar15 = FUN_0277d6c4(&local_110);
      if (*(long *)puVar30 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          puStack_4c8 = local_3f0;
          local_498 = (undefined *)((long)&local_490 + 4);
          local_4e0 = PTR_DAT_04bc0ce0 + 0x10;
          puStack_440 = local_434;
          uVar28 = *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
          local_4d8 = 0;
          local_4c0 = 0x80;
          local_4bc = 0;
          local_4b8 = 0xffffffff;
          uStack_4b0 = 0xffffffff00000000;
          local_4a8 = 0xffffffff;
          lStack_450._0_4_ = (uint)(uint3)lStack_450;
          local_490 = (undefined1 *)CONCAT35(local_490._5_3_,0x40);
          local_438 = 0x40;
          puStack_3f8._0_4_ = (uint)(uint3)puStack_3f8;
          local_434[0] = 0;
          local_300 = 0;
          local_2f8 = 0;
          puVar1 = PTR_DAT_04bb2bc0 + 0x10;
          local_310 = 0;
          local_308 = 0;
          local_320 = 0;
          local_318 = 0;
          puVar30 = PTR_DAT_04bb6b38 + 0x10;
          ppuVar5 = &local_2f0;
          if (&local_2f0 <= local_3f0 + 2) {
            ppuVar5 = (undefined **)(local_3f0 + 2);
          }
          local_330 = 0;
          local_328 = 0;
          local_340 = 0;
          local_338 = 0;
          local_350 = 0;
          local_348 = 0;
          local_360 = 0;
          local_358 = 0;
          local_370 = 0;
          local_368 = 0;
          local_380 = 0;
          local_378 = 0;
          local_390 = 0;
          local_388 = 0;
          local_3a0 = 0;
          local_398 = 0;
          local_3b0 = 0;
          uStack_3ac = 0;
          uStack_3aa = 0;
          local_3a8 = (undefined1  [6])0x0;
          uStack_3a2 = 0;
          local_3c0 = 0;
          local_3b8 = (undefined1  [8])0x0;
          local_3d0 = 0;
          uStack_3c8 = 0;
          local_3e0 = 0;
          uStack_3d8 = 0;
          _local_3f0 = 0;
          uStack_3e8 = 0;
          local_4d0 = puVar30;
          local_4a0 = puVar1;
          local_448 = puVar1;
          memset(puStack_4c8,0,(long)ppuVar5 + (-0xe0 - (long)&local_4d0));
          local_2b8 = (long)&local_2b0 + 4;
          local_2b0._4_4_ = local_2b0._4_4_ & 0xffffff00;
          local_2e8 = local_210;
          local_260 = local_254;
          local_254[0] = 0;
          local_2e0 = CONCAT35(local_2e0._5_3_,0x80);
          ppuVar5 = &local_110;
          if (&local_110 <= local_210 + 2) {
            ppuVar5 = (undefined **)(local_210 + 2);
          }
          local_2d8 = 0xffffffff;
          local_2d0 = 0xffffffff00000000;
          local_2c8 = CONCAT44(local_2c8._4_4_,0xffffffff);
          local_2b0 = CONCAT44(local_2b0._4_4_,0x40);
          local_270._0_4_ = (uint)(uint3)local_270;
          local_258 = 0x40;
          local_218._0_4_ = (uint)(uint3)local_218;
          local_118 = (char *)0x0;
          local_120 = 0;
          local_128 = (void *)0x0;
          local_130 = (undefined *)0x0;
          local_138 = 0;
          local_140 = (undefined **)0x0;
          local_148 = 0;
          local_150 = 0;
          local_158 = 0;
          local_160 = 0;
          local_168 = 0;
          local_170 = 0;
          local_178 = 0;
          local_180 = 0;
          local_188 = 0;
          local_190 = 0;
          local_198 = 0;
          local_1a0 = 0;
          local_1a8 = 0;
          local_1b0 = 0;
          local_1b8 = 0;
          local_1c0 = 0;
          local_1c8 = 0;
          local_1d0 = 0;
          auStack_20c[0xd] = 0;
          auStack_20c[0xe] = 0;
          auStack_20c[0xb] = 0;
          auStack_20c[0xc] = 0;
          auStack_20c[9] = 0;
          auStack_20c[10] = 0;
          auStack_20c[7] = 0;
          auStack_20c[8] = 0;
          auStack_20c[5] = 0;
          auStack_20c[6] = 0;
          auStack_20c[3] = 0;
          auStack_20c[4] = 0;
          auStack_20c[1] = 0;
          auStack_20c[2] = 0;
          _local_210 = 0;
          local_2f0 = puVar30;
          local_2c0 = puVar1;
          local_268 = puVar1;
          memset(local_2e8,0,(size_t)((long)ppuVar5 + (-0xe0 - (long)&local_2f0)));
          FUN_01c0bafc(&local_4e0,&local_110,PTR_DAT_04bb2df0);
          if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar16 != 0)) {
            FUN_01bb25c8(PTR_DAT_04bc0a80);
            __cxa_guard_release(PTR_DAT_04bc0a88);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
            uVar24 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar24 * 4) == 0x7d) goto LAB_00b31a40;
              uVar24 = uVar24 + 1;
            } while (*(uint *)PTR_DAT_04bc0a80 != uVar24);
          }
          uVar24 = 0;
LAB_00b31a40:
          local_70 = CONCAT44((int)uVar24,(uint)local_70);
          FUN_01baf140(uVar28,&local_4e0,0,(long)&local_70 + 4,0);
        }
      }
    }
    return 0 < iVar14;
  case 10:
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb3240 + 0xde10);
    if (0 < iVar14) {
      local_58._4_4_ = uVar15;
      uStack_50 = uVar20;
      uStack_4c = uVar29;
      uStack_48 = uVar6;
      local_44 = uVar10;
      uStack_42 = uVar11;
      FUN_0074fda4(&local_c8,"BO_FreeE_Event:%03d",iVar14);
      puVar30 = *(undefined **)(param_1 + 0xc0);
      (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
      puVar1 = local_c0;
      if (puVar30 != local_c0) {
        (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
        lVar26 = 0;
        do {
          if (local_c0[lVar26] == '\0') goto LAB_00b31b7c;
          if (local_c0[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b31b7c;
          }
          if (local_c0[lVar26 + 2] == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b31b7c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b31b7c:
        iVar16 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar16 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(puVar30,puVar1,(long)iVar16);
        puVar30[iVar16] = 0;
      }
    }
    return 0 < iVar14;
  case 0xb:
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb3240 + 0xde10);
    if (0 < iVar14) {
      local_58._4_4_ = uVar15;
      uStack_50 = uVar20;
      uStack_4c = uVar29;
      uStack_48 = uVar6;
      local_44 = uVar10;
      uStack_42 = uVar11;
      FUN_0074fda4(&local_c8,"BO_FreeF_NewYear_Zodiac:%03d",iVar14);
      puVar30 = *(undefined **)(param_1 + 0xc0);
      (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
      puVar1 = local_c0;
      if (puVar30 != local_c0) {
        (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
        lVar26 = 0;
        do {
          if (local_c0[lVar26] == '\0') goto LAB_00b31c8c;
          if (local_c0[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b31c8c;
          }
          if (local_c0[lVar26 + 2] == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b31c8c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b31c8c:
        iVar16 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar16 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(puVar30,puVar1,(long)iVar16);
        puVar30[iVar16] = 0;
      }
    }
    return 0 < iVar14;
  case 0xc:
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    FUN_0074fda4(&local_c8,"BO_FreeI_Present:%03d",
                 *(undefined4 *)
                  (&DAT_041684ac +
                  (long)*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x288) + 0x1f8) * 4));
    puVar30 = *(undefined **)(param_1 + 0xc0);
    (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
    puVar1 = local_c0;
    if (puVar30 != local_c0) {
      (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
      lVar26 = 0;
      do {
        if (local_c0[lVar26] == '\0') goto LAB_00b31d9c;
        if (local_c0[lVar26 + 1] == '\0') {
          lVar26 = lVar26 + 1;
          goto LAB_00b31d9c;
        }
        if (local_c0[lVar26 + 2] == '\0') {
          lVar26 = lVar26 + 2;
          goto LAB_00b31d9c;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      lVar26 = 0;
LAB_00b31d9c:
      iVar14 = (int)lVar26;
      if (*(int *)(param_1 + 200) <= (int)lVar26) {
        iVar14 = *(int *)(param_1 + 200) + -1;
      }
      memcpy(puVar30,puVar1,(long)iVar14);
      puVar30[iVar14] = 0;
    }
    return true;
  case 0xd:
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    bVar13 = FUN_00b31e20(param_1,local_90 + 0x70);
    return (bool)(bVar13 & 1);
  case 0xe:
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    bVar13 = FUN_00b31e20(param_1,local_90 + 0x70);
    return (bool)(bVar13 & 1);
  case 0xf:
    local_58._4_4_ = uVar15;
    uStack_50 = uVar20;
    uStack_4c = uVar29;
    uStack_48 = uVar6;
    local_44 = uVar10;
    uStack_42 = uVar11;
    bVar13 = FUN_00b31e20(param_1,local_90 + 0x70);
    return (bool)(bVar13 & 1);
  case 0x10:
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb3240 + 0xde10);
    if (0 < iVar14) {
      local_58._4_4_ = uVar15;
      uStack_50 = uVar20;
      uStack_4c = uVar29;
      uStack_48 = uVar6;
      local_44 = uVar10;
      uStack_42 = uVar11;
      FUN_0074fda4(&local_c8,"BO_FreeE_Event:%03d",iVar14);
      puVar30 = *(undefined **)(param_1 + 0xc0);
      (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
      puVar1 = local_c0;
      if (puVar30 != local_c0) {
        (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x18))(&local_c8);
        lVar26 = 0;
        do {
          if (local_c0[lVar26] == '\0') goto LAB_00b312fc;
          if (local_c0[lVar26 + 1] == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_00b312fc;
          }
          if (local_c0[lVar26 + 2] == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_00b312fc;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_00b312fc:
        iVar16 = (int)lVar26;
        if (*(int *)(param_1 + 200) <= (int)lVar26) {
          iVar16 = *(int *)(param_1 + 200) + -1;
        }
        memcpy(puVar30,puVar1,(long)iVar16);
        puVar30[iVar16] = 0;
      }
    }
    return 0 < iVar14;
  }
  local_70._0_4_ = (uint)(uint3)local_70;
  uStack_7f = 0;
  local_90._4_4_ = s_BO_FreeB_Spot_040ab115._0_4_;
  local_88 = CONCAT31(s_BO_FreeB_Spot_040ab115._5_3_,s_BO_FreeB_Spot_040ab115[4]);
  uStack_84 = s_BO_FreeB_Spot_040ab115._8_2_;
  cStack_82 = s_BO_FreeB_Spot_040ab115[10];
  cStack_81 = s_BO_FreeB_Spot_040ab115[0xb];
  local_80 = s_BO_FreeB_Spot_040ab115[0xc];
  local_98 = (undefined **)(local_90 + 4);
  local_90._0_4_ = 0x20;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  if (DAT_0545409c - 0xcU < 8) {
    uStack_c4 = DAT_054540a0;
    local_460 = (long)&local_458 + 4;
    lStack_408 = (long)&local_400 + 4;
    local_490 = local_3b8;
    uVar28 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
    local_488 = (undefined *)CONCAT35(local_488._5_3_,0xb);
    local_480 = &DAT_ffffffff;
    local_478 = 0xffffffff00000000;
    local_470 = CONCAT44(local_470._4_4_,0xffffffff);
    local_415 = 0;
    local_458 = (undefined *)CONCAT35(local_458._5_3_,0x40);
    local_3c0._0_4_ = (uint)(uint3)local_3c0;
    local_400 = (undefined *)CONCAT35(local_400._5_3_,0x40);
    local_3a8 = (undefined1  [6])0x0;
    local_3b8 = (undefined1  [8])0x0;
    local_3b0 = 0;
    uStack_3ac = 0;
    uStack_3aa = 0;
    local_468 = PTR_DAT_04bb2bc0 + 0x10;
    local_498 = PTR_DAT_04bb5128 + 0x10;
    puVar3 = &uStack_3a2;
    if (&uStack_3a2 <= local_3b8 + 2) {
      puVar3 = (undefined2 *)(local_3b8 + 2);
    }
    local_410 = local_468;
    local_58._0_4_ = uVar6;
    memset(local_490,0,(long)puVar3 + (-0xe1 - (long)&local_498) & 0xfffffffffffffffcU | 2);
    FUN_01c11a38(&local_498,&uStack_c4);
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar14 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar24 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar24 * 4) == 0x73) goto LAB_00b302ac;
        uVar24 = uVar24 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar24);
    }
    uVar24 = 0;
LAB_00b302ac:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(int)uVar24);
    FUN_01bae480(uVar28,&local_498,0,&local_c0,0);
    goto LAB_00b302c8;
  }
  if (DAT_0545409c != 3) {
    if (DAT_0545409c == 0x23) {
      local_480 = local_3a8;
      lStack_450 = (long)&local_448 + 4;
      local_498 = PTR_DAT_04bc0ce0 + 0x10;
      puStack_3f8 = auStack_3ec;
      uVar28 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
      local_490 = (undefined1 *)((ulong)local_490 & 0xffffffff00000000);
      local_478 = CONCAT35(local_478._5_3_,0x80);
      local_470 = 0xffffffff;
      local_468 = &DAT_ffffffff00000000;
      local_460 = CONCAT44(local_460._4_4_,0xffffffff);
      lStack_408._0_4_ = (uint)(uint3)lStack_408;
      local_448 = (undefined *)CONCAT35(local_448._5_3_,0x40);
      local_3b0 = local_3b0 & 0xffffff;
      _local_3f0 = CONCAT35(auStack_3ec._1_3_,0x40);
      local_2b8 = 0;
      local_2b0 = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_2c8 = 0;
      local_2c0 = (undefined *)0x0;
      local_2d8 = 0;
      local_2d0 = 0;
      puVar30 = PTR_DAT_04bb6b38 + 0x10;
      ppuVar5 = &local_2a8;
      if (&local_2a8 <= local_3a8 + 2) {
        ppuVar5 = (undefined **)(local_3a8 + 2);
      }
      local_2e8 = (undefined1 *)0x0;
      local_2e0 = 0;
      local_2f8 = 0;
      local_2f0 = (undefined *)0x0;
      local_308 = 0;
      local_300 = 0;
      local_318 = 0;
      local_310 = 0;
      local_328 = 0;
      local_320 = 0;
      local_338 = 0;
      local_330 = 0;
      local_348 = 0;
      local_340 = 0;
      local_358 = 0;
      local_350 = 0;
      local_368 = 0;
      local_360 = 0;
      local_378 = 0;
      local_370 = 0;
      local_388 = 0;
      local_380 = 0;
      local_398 = 0;
      local_390 = 0;
      local_3a8 = (undefined1  [6])0x0;
      uStack_3a2 = 0;
      local_3a0 = 0;
      local_488 = puVar30;
      local_458 = puVar1;
      local_400 = puVar1;
      local_58._0_4_ = uVar6;
      memset(local_480,0,(long)ppuVar5 + (-0xe0 - (long)&local_488));
      local_298 = 0x80;
      local_270 = (long)&local_268 + 4;
      uVar24 = (ulong)local_268 >> 0x20;
      puStack_2a0 = &local_1c8;
      local_218 = auStack_20c;
      uVar18 = (ulong)_local_210 >> 0x20;
      local_294 = 0;
      puVar4 = &local_c8;
      if (&local_c8 <= (undefined4 *)((long)&local_1c8 + 2U)) {
        puVar4 = (undefined4 *)((long)&local_1c8 + 2U);
      }
      local_290 = 0xffffffff;
      local_288 = 0xffffffff00000000;
      local_280 = 0xffffffff;
      local_268 = (undefined *)CONCAT44((uint)uVar24 & 0xffffff00,0x40);
      local_225 = 0;
      _local_210 = CONCAT44((uint)uVar18 & 0xffffff00,0x40);
      local_1d0._0_4_ = (uint)(uint3)local_1d0;
      local_d0 = 0;
      local_d8 = 0;
      local_e0 = (char *)0x0;
      local_e8 = (undefined *)0x0;
      local_f0 = 0;
      local_f8 = (void *)0x0;
      local_100 = (void *)0x0;
      local_108 = (void *)0x0;
      local_110 = (undefined *)0x0;
      local_118 = (char *)0x0;
      local_120 = 0;
      local_128 = (void *)0x0;
      local_130 = (undefined *)0x0;
      local_138 = 0;
      local_140 = (void *)0x0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = 0;
      local_190 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_2a8 = puVar30;
      local_278 = puVar1;
      local_220 = puVar1;
      memset(puStack_2a0,0,(long)puVar4 + (-0xe0 - (long)&local_2a8));
      FUN_01c0bafc(&local_498,&DAT_054540a8,PTR_DAT_04bb2df0);
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar14 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar24 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar24 * 4) == 0x7d) goto LAB_00b3076c;
          uVar24 = uVar24 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar24);
      }
      uVar24 = 0;
LAB_00b3076c:
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(int)uVar24);
      FUN_01baf140(uVar28,&local_498,0,&local_c0,0);
      iVar16 = 0x23;
      goto LAB_00b302c8;
    }
    local_58._0_4_ = uVar6;
    if (DAT_0545409c != 0x22) goto LAB_00b302c8;
  }
  local_a8._0_4_ = (uint)(uint3)local_a8;
  local_b8 = (long)&local_b0 + 4;
  local_b0 = (undefined *)CONCAT35(local_b0._5_3_,8);
  local_c0 = PTR_DAT_04bb3768 + 0x10;
  local_58._0_4_ = uVar6;
  uVar24 = FUN_021d7c00(&local_c0,DAT_054540a0);
  if ((uVar24 & 1) == 0) {
    iVar16 = 1;
  }
  else {
    uVar28 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar26 = local_b8;
    uVar24 = (ulong)local_488 >> 0x20;
    local_488 = (undefined *)CONCAT44((uint)uVar24 & 0xffffff00,0x20);
    local_480 = &DAT_ffffffff;
    local_478 = 0xffffffff00000000;
    local_460 = (long)&local_458 + 4;
    local_490 = local_3b8;
    local_470 = CONCAT44(local_470._4_4_,0xffffffff);
    local_415 = 0;
    local_458 = (undefined *)CONCAT35(local_458._5_3_,0x40);
    local_468 = PTR_DAT_04bb2bc0 + 0x10;
    local_3c0._0_4_ = (uint)(uint3)local_3c0;
    local_400 = (undefined *)CONCAT35(local_400._5_3_,0x40);
    lStack_408 = (long)&local_400 + 4;
    local_498 = PTR_DAT_04bb4e10 + 0x10;
    local_3b8 = (undefined1  [8])0x0;
    local_3b0 = 0;
    uStack_3ac = 0;
    uStack_3aa = 0;
    local_3a8 = (undefined1  [6])0x0;
    uStack_3a2 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_390 = 0;
    local_388 = 0;
    local_380 = 0;
    puVar19 = &local_378;
    if (&local_378 <= local_3b8 + 2) {
      puVar19 = (undefined8 *)(local_3b8 + 2);
    }
    local_410 = local_468;
    memset(local_490,0,(size_t)((long)puVar19 + (-0xe0 - (long)&local_498)));
    FUN_01c0e6b4(&local_498,lVar26,PTR_DAT_04bb2df0);
    FUN_01bae5d0(uVar28,&local_498,0);
  }
LAB_00b302c8:
  (**(code **)(local_a0 + 0x18))(&local_a0);
  FUN_0074fda4(&local_498,"%s:%03d",local_98,iVar16);
  __dest = *(undefined1 **)(param_1 + 0xc0);
  (**(code **)(local_498 + 0x18))(&local_498);
  __src = local_490;
  if (__dest != local_490) {
    (**(code **)(local_498 + 0x18))(&local_498);
    lVar26 = 0;
    do {
      if (local_490[lVar26] == '\0') goto LAB_00b304b4;
      if (local_490[lVar26 + 1] == '\0') {
        lVar26 = lVar26 + 1;
        goto LAB_00b304b4;
      }
      if (local_490[lVar26 + 2] == '\0') {
        lVar26 = lVar26 + 2;
        goto LAB_00b304b4;
      }
      lVar26 = lVar26 + 3;
    } while (lVar26 != 0x80001);
    lVar26 = 0;
LAB_00b304b4:
    iVar14 = (int)lVar26;
    if (*(int *)(param_1 + 200) <= (int)lVar26) {
      iVar14 = *(int *)(param_1 + 200) + -1;
    }
    memcpy(__dest,__src,(long)iVar14);
    __dest[iVar14] = 0;
  }
  *(undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xcec) = DAT_054540a4;
  return true;
  while( true ) {
    if (local_118[lVar26 + 1] == '\0') {
      lVar26 = lVar26 + 1;
      goto LAB_00b311e0;
    }
    if (local_118[lVar26 + 2] == '\0') {
      lVar26 = lVar26 + 2;
      goto LAB_00b311e0;
    }
    lVar26 = lVar26 + 3;
    if (lVar26 == 0x80001) break;
LAB_00b311a4:
    if (local_118[lVar26] == '\0') goto LAB_00b311e0;
  }
  lVar26 = 0;
LAB_00b311e0:
  iVar14 = (int)lVar26;
  if (*(int *)(param_1 + 200) <= (int)lVar26) {
    iVar14 = *(int *)(param_1 + 200) + -1;
  }
  memcpy(pcVar25,pcVar34,(long)iVar14);
  pcVar25[iVar14] = '\0';
  return bVar12;
}

