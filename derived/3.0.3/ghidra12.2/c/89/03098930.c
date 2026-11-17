
void FUN_03098930(long param_1,short *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *local_488;
  char *pcStack_480;
  undefined *local_478;
  short local_470;
  short local_46e;
  undefined4 local_46c;
  long local_468;
  undefined *local_460;
  undefined1 *local_458;
  undefined4 local_450;
  undefined1 local_44c [63];
  undefined1 local_40d;
  undefined *local_408;
  short local_400;
  short local_3fe;
  undefined4 local_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
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
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined *local_78;
  int local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    bVar3 = false;
  }
  else {
    local_3fe = param_2[1];
    uStack_3f8 = 0;
    local_3f4 = 0;
    local_3fc = *(undefined4 *)(param_2 + 2);
    local_408 = PTR_DAT_04bc0510 + 0x10;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    local_400 = *param_2;
    uVar5 = FUN_0277d6c4(&local_400);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
          uStack_3f8 = (undefined4)lVar7;
          local_3f4 = (undefined4)((ulong)lVar7 >> 0x20);
        }
      }
    }
    iVar4 = FUN_01ad7260(&local_408);
    bVar3 = iVar4 != 0;
  }
  FUN_0309ffd8(param_1);
  lVar7 = *(long *)(param_1 + 0x220);
  plVar8 = *(long **)(lVar7 + 0x590);
  if (plVar8 == (long *)0x0) {
    lVar7 = *(long *)(lVar7 + 0x580);
    if (lVar7 == 0) {
      bVar3 = true;
    }
    if (bVar3) {
      return;
    }
  }
  else {
    plVar6 = (long *)plVar8[0x36];
    if (bVar3) {
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
        lVar7 = *(long *)(param_1 + 0x220);
      }
      plVar8 = *(long **)(lVar7 + 0x580);
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*(long *)(lVar7 + 0x590) == 0) {
        return;
      }
      if ((*(long *)(*(long *)(lVar7 + 0x590) + 0x220) != 0) &&
         (iVar4 = FUN_02c81e50(), puVar2 = PTR_DAT_04bc0a78, puVar1 = PTR_DAT_04bb2bc0, 1 < iVar4))
      {
        lVar7 = *(long *)(*(long *)(param_1 + 0x220) + 0x580);
        if ((lVar7 != 0) && (lVar7 = **(long **)(lVar7 + 0x220), lVar7 != 0)) {
          local_3fc = 0;
          uStack_3f8 = 0;
          local_400 = 0x100;
          local_3f4 = 0;
          local_3e0 = 0;
          puStack_3b8 = local_3ac;
          local_3dc = 0;
          local_3c8 = 0xffffffff;
          local_3b0 = 0x40;
          local_36d = 0;
          local_3ac[0] = 0;
          local_3d8 = 0xffffffff;
          uStack_3d0 = 0xffffffff00000000;
          local_3c0 = PTR_DAT_04bb2bc0 + 0x10;
          local_358 = 0x40;
          local_315 = 0;
          local_354[0] = 0;
          puStack_360 = local_354;
          local_3f0 = PTR_DAT_04bb2e00 + 0x10;
          local_278 = local_26c;
          local_26c[0] = 0;
          local_200 = 0xffffffff00000000;
          local_2e0 = 0xffffffff;
          local_208 = 0xffffffff;
          local_1f8 = 0xffffffff;
          puStack_2d0 = local_2c4;
          local_2c4[0] = 0;
          local_2f8 = 0;
          local_2f4 = 0;
          local_2c8 = 0x40;
          local_285 = 0;
          local_270 = 0x40;
          local_22d = 0;
          local_310 = 0;
          local_218 = 0;
          local_210 = 0;
          local_20c = 0;
          local_1e0 = 0x40;
          local_19d = 0;
          local_188 = 0x40;
          local_145 = 0;
          local_228 = 0;
          local_130 = 0;
          local_138 = 0;
          local_140 = 0;
          local_118 = 0x40;
          local_d5 = 0;
          local_c0 = 0x40;
          local_7d = 0;
          local_2f0 = 0xffffffff;
          uStack_2e8 = 0xffffffff00000000;
          local_1e8 = local_1dc;
          local_1dc[0] = 0;
          local_120 = local_114;
          local_114[0] = 0;
          local_c8 = local_bc;
          local_190 = local_184;
          local_184[0] = 0;
          local_bc[0] = 0;
          uStack_3e8 = 0;
          uStack_300 = 0;
          local_70 = *(int *)PTR_DAT_04bc0b30;
          local_6c = 0;
          *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
          local_78 = puVar2 + 0x10;
          local_68 = 0;
          local_408 = PTR_DAT_04bc0bf0 + 0x10;
          local_60 = 0;
          local_58 = 0;
          plVar6 = *(long **)(lVar7 + 0x48);
          local_368 = local_3c0;
          local_308 = local_3f0;
          local_2d8 = local_3c0;
          local_280 = local_3c0;
          local_220 = local_3f0;
          local_1f0 = local_3c0;
          local_198 = local_3c0;
          local_128 = local_3c0;
          local_d0 = local_3c0;
          if (plVar6[1] != 0) {
            local_460 = PTR_DAT_04bc0878 + 0x10;
            local_458 = (undefined1 *)CONCAT44(local_458._4_4_,9);
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_460);
            (**(code **)(plVar6[3] + 0x5e0))(plVar6[1],PTR_DAT_04bb2da0,0);
            FUN_03d7dd80(lVar7);
          }
          puVar2 = PTR_DAT_04bb43c0;
          if (*param_2 != -2) {
            local_40d = 0;
            local_44c[0] = 0;
            local_460 = puVar1 + 0x10;
            local_458 = local_44c;
            local_450 = 0x40;
            local_46e = param_2[1];
            local_478 = PTR_DAT_04bc0510 + 0x10;
            local_46c = *(undefined4 *)(param_2 + 2);
            local_468 = 0;
            lVar9 = *(long *)PTR_DAT_04bb43c0;
            local_470 = *param_2;
            uVar5 = FUN_0277d6c4(&local_470);
            if (*(long *)puVar2 != 0) {
              lVar9 = *(long *)(lVar9 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                lVar9 = *(long *)PTR_DAT_04bc0428;
                uVar5 = FUN_0277d6c4(param_2);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                   (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0))
                {
                  local_468 = lVar9;
                }
              }
            }
            FUN_01b003d0(&local_478,&local_460,*(undefined4 *)(param_1 + 0x574f8));
            local_488 = PTR_DAT_04bb2020 + 0x10;
            pcStack_480 = "STR_Remake_BodyColor";
            FUN_01bea210(&local_408,lVar7,&local_488,&local_460);
            FUN_01bea9c8(&local_408);
          }
          FUN_01be9eb8(&local_408);
        }
        plVar6 = (long *)plVar8[0x36];
        if (plVar6 == (long *)0x0) {
          return;
        }
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
        return;
      }
      plVar8 = (long *)plVar8[0x36];
      if (plVar8 == (long *)0x0) {
        return;
      }
      goto LAB_03098e40;
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,0);
      lVar7 = *(long *)(param_1 + 0x220);
    }
    lVar7 = *(long *)(lVar7 + 0x580);
    if (lVar7 == 0) {
      return;
    }
  }
  plVar8 = *(long **)(lVar7 + 0x1b0);
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_03098e40:
                    /* WARNING: Could not recover jumptable at 0x03098e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x30))(plVar8,0);
  return;
}

