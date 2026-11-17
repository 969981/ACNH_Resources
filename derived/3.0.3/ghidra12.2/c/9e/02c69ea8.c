
void FUN_02c69ea8(long param_1,short *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *local_430;
  char *local_428;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 uStack_410;
  undefined4 local_40c;
  undefined *local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined1 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined *local_380;
  undefined1 *puStack_378;
  undefined4 local_370;
  undefined1 local_36c [63];
  undefined1 local_32d;
  undefined8 local_328;
  undefined *local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined *local_2f0;
  undefined1 *puStack_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [63];
  undefined1 local_29d;
  undefined *local_298;
  undefined1 *puStack_290;
  undefined4 local_288;
  undefined1 local_284 [63];
  undefined1 local_245;
  undefined8 local_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined *local_90;
  int local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined *local_68;
  char *local_60;
  int local_54;
  
  puVar2 = PTR_DAT_04bc4e60;
  if (*(int *)(param_1 + 0x22598) != 0 && *param_2 != -2) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,param_3);
    puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58), (uVar6 & 1) != 0)) {
      lVar7 = 0x38;
      if (*(uint *)(puVar8 + 0x44) < 8) {
        lVar7 = 0;
      }
      plVar9 = *(long **)(puVar8[0x45] + lVar7);
      if (plVar9 != (long *)0x0) {
        uVar10 = 0;
        if ((int)local_68 - 1U < 3) {
          uVar10 = *(undefined4 *)(&DAT_0417ff28 + (long)(int)((int)local_68 - 1U) * 4);
        }
        local_420 = PTR_DAT_04bc4f00 + 0x10;
        local_418 = 0x14;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_420);
        (**(code **)(plVar9[3] + 0x158))(uVar10,plVar9[1]);
      }
    }
    puVar1 = PTR_DAT_04bb43c0;
    if (param_3 == 0) {
      if (*param_2 == -2) {
        iVar4 = 0;
      }
      else {
        uStack_410 = 0;
        local_40c = 0;
        local_418 = CONCAT22(param_2[1],*param_2);
        local_414 = *(undefined4 *)(param_2 + 2);
        local_420 = PTR_DAT_04bc0510 + 0x10;
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        uVar3 = FUN_0277d6c4(&local_418);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_2);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              uStack_410 = (undefined4)lVar7;
              local_40c = (undefined4)((ulong)lVar7 >> 0x20);
            }
          }
        }
        iVar4 = FUN_01aed730(&local_420);
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "RegulationType4";
        uVar6 = FUN_0273f0a0(&local_68);
        if ((uVar6 & 1) != 0) {
          iVar4 = (iVar4 * 0xc) / 10;
        }
      }
      puVar8 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      puVar1 = PTR_DAT_04bc4e58;
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      lVar7 = 0x38;
      if (*(uint *)(puVar8 + 0x42) < 8) {
        lVar7 = 0;
      }
      lVar7 = *(long *)(puVar8[0x43] + lVar7);
      if (lVar7 != 0) {
        local_414 = 0;
        uStack_410 = 0;
        local_418 = CONCAT22(local_418._2_2_,0x100);
        local_40c = 0;
        local_3f8 = 0;
        puStack_3d0 = local_3c4;
        local_3f4 = 0;
        local_3f0 = 0xffffffff;
        uStack_3e8 = 0xffffffff00000000;
        local_3e0 = 0xffffffff;
        local_3c8 = 0x40;
        local_385 = 0;
        local_3c4[0] = 0;
        local_3d8 = PTR_DAT_04bb2bc0 + 0x10;
        local_370 = 0x40;
        local_32d = 0;
        local_36c[0] = 0;
        puStack_378 = local_36c;
        local_408 = PTR_DAT_04bb2e00 + 0x10;
        local_218 = 0xffffffff00000000;
        puStack_290 = local_284;
        local_284[0] = 0;
        local_2f8 = 0xffffffff;
        local_220 = 0xffffffff;
        local_210 = 0xffffffff;
        puStack_2e8 = local_2dc;
        local_2dc[0] = 0;
        local_310 = 0;
        local_30c = 0;
        local_2e0 = 0x40;
        local_29d = 0;
        local_288 = 0x40;
        local_245 = 0;
        local_328 = 0;
        local_228 = 0;
        local_224 = 0;
        local_1f8 = 0x40;
        local_1b5 = 0;
        local_1a0 = 0x40;
        local_15d = 0;
        local_240 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        local_130 = 0x40;
        local_ed = 0;
        local_d8 = 0x40;
        local_95 = 0;
        local_308 = 0xffffffff;
        uStack_300 = 0xffffffff00000000;
        local_12c[0] = 0;
        local_200 = local_1f4;
        local_1f4[0] = 0;
        local_138 = local_12c;
        local_1a8 = local_19c;
        local_19c[0] = 0;
        local_e0 = local_d4;
        local_d4[0] = 0;
        uStack_400 = 0;
        uStack_318 = 0;
        uStack_230 = 0;
        local_88 = *(int *)PTR_DAT_04bc0b30;
        local_84 = 0;
        *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
        local_90 = PTR_DAT_04bc0a78 + 0x10;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_420 = PTR_DAT_04bc0bf0 + 0x10;
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "Catalog";
        local_380 = local_3d8;
        local_320 = local_408;
        local_2f0 = local_3d8;
        local_298 = local_3d8;
        local_238 = local_408;
        local_208 = local_3d8;
        local_1b0 = local_3d8;
        local_140 = local_3d8;
        local_e8 = local_3d8;
        FUN_01bea210(&local_420,lVar7,&local_68,&DAT_0565fc60);
        FUN_01bafd70(&local_90,iVar4,0);
        FUN_01bea9c8(&local_420);
        FUN_01be9eb8(&local_420);
      }
      puVar8 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      lVar7 = *(long *)(puVar8[0x43] + (ulong)(8 < *(uint *)(puVar8 + 0x42)) * 0x40);
    }
    else {
      puVar8 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      local_54 = param_3;
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      puVar1 = PTR_DAT_04bc4e58;
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      lVar7 = *(long *)(puVar8[0x43] + (ulong)(8 < *(uint *)(puVar8 + 0x42)) * 0x40);
      if (lVar7 != 0) {
        local_68 = PTR_DAT_04bb2020 + 0x10;
        if (local_54 - 1U < 3) {
          local_60 = *(char **)((&PTR_DAT_04ab2ea8)[(int)(local_54 - 1U)] + 8);
          local_418 = CONCAT22(local_418._2_2_,0x100);
          local_414 = 0;
          uStack_410 = 0;
          local_40c = 0;
          local_3f8 = 0;
          local_3f4 = 0;
          puStack_3d0 = local_3c4;
          local_3e0 = 0xffffffff;
          local_3f0 = 0xffffffff;
          uStack_3e8 = 0xffffffff00000000;
          local_3c8 = 0x40;
          local_3d8 = PTR_DAT_04bb2bc0 + 0x10;
          puStack_378 = local_36c;
          local_385 = 0;
          local_3c4[0] = 0;
          local_370 = 0x40;
          local_32d = 0;
          local_36c[0] = 0;
          local_408 = PTR_DAT_04bb2e00 + 0x10;
          puStack_290 = local_284;
          local_284[0] = 0;
          puStack_2e8 = local_2dc;
          local_2dc[0] = 0;
          local_2f8 = 0xffffffff;
          local_220 = 0xffffffff;
          local_210 = 0xffffffff;
          local_310 = 0;
          local_30c = 0;
          local_2e0 = 0x40;
          local_29d = 0;
          local_288 = 0x40;
          local_245 = 0;
          local_328 = 0;
          local_228 = 0;
          local_224 = 0;
          local_218 = 0xffffffff00000000;
          local_1f8 = 0x40;
          local_1b5 = 0;
          local_1a0 = 0x40;
          local_15d = 0;
          local_240 = 0;
          local_148 = 0;
          local_150 = 0;
          local_158 = 0;
          local_130 = 0x40;
          local_ed = 0;
          local_d8 = 0x40;
          local_95 = 0;
          uStack_400 = 0;
          uStack_318 = 0;
          local_200 = local_1f4;
          local_1f4[0] = 0;
          local_1a8 = local_19c;
          local_19c[0] = 0;
          uStack_230 = 0;
          local_12c[0] = 0;
          local_d4[0] = 0;
          local_308 = 0xffffffff;
          uStack_300 = 0xffffffff00000000;
          local_138 = local_12c;
          local_e0 = local_d4;
          local_88 = *(int *)PTR_DAT_04bc0b30;
          local_84 = 0;
          *(int *)PTR_DAT_04bc0b30 = local_88 + 1;
          local_90 = PTR_DAT_04bc0a78 + 0x10;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_420 = PTR_DAT_04bc0bf0 + 0x10;
          local_428 = "Catalog";
          local_430 = local_68;
          local_380 = local_3d8;
          local_320 = local_408;
          local_2f0 = local_3d8;
          local_298 = local_3d8;
          local_238 = local_408;
          local_208 = local_3d8;
          local_1b0 = local_3d8;
          local_140 = local_3d8;
          local_e8 = local_3d8;
          FUN_01bea210(&local_420,lVar7,&local_430,&local_68);
          FUN_01bea9c8(&local_420);
          FUN_01be9eb8(&local_420);
        }
      }
      puVar8 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      lVar7 = 0x38;
      if (*(uint *)(puVar8 + 0x42) < 8) {
        lVar7 = 0;
      }
      lVar7 = *(long *)(puVar8[0x43] + lVar7);
    }
    if ((lVar7 != 0) && (plVar9 = *(long **)(lVar7 + 0x48), plVar9[1] != 0)) {
      local_420 = PTR_DAT_04bc0878 + 0x10;
      local_418 = 9;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_420);
      (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar7);
    }
  }
  return;
}

