
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003319d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
            undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long local_440;
  undefined8 local_428;
  undefined8 *local_420;
  undefined8 *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_78;
  undefined8 local_70;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_8;
  *(undefined8 *)(param_1 + 0x440) = param_3;
  *(undefined8 *)(param_1 + 0x520) = param_9;
  *(undefined8 *)(param_1 + 0x490) = param_11;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  *(undefined8 *)(param_1 + 0x28) = param_7;
  *(undefined1 *)(param_1 + 8) = param_10;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_00331f70(param_1,param_4);
  local_78 = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  local_2f8 = 0;
  uStack_2f0 = 0;
  uVar5 = *(ushort *)(*(long *)(param_1 + 0x38) + 0x16);
  *(undefined4 *)(param_1 + 0x48) = 0;
  piVar19 = (int *)(*(long *)(param_1 + 0x38) + (ulong)uVar5);
  FUN_0034fb50(&local_2f8);
  local_2f8 = CONCAT44(0x10,(undefined4)local_2f8);
  local_70 = FUN_00347a58(uVar13,&local_2f8);
  lVar14 = 0;
  do {
    iVar11 = *piVar19;
    if (iVar11 == 0x46545247) {
      lVar15 = *(long *)(param_1 + 0x448);
      FUN_00332540(param_1,piVar19);
      if (piVar19[2] != 0xffffffff) {
        piVar9 = (int *)((long)piVar19 + (ulong)(uint)piVar19[2]);
        do {
          if (*piVar9 == 0x544e5447) {
            lVar8 = (long)piVar9 + (ulong)(uint)piVar9[5];
            goto LAB_00331b90;
          }
          puVar1 = (uint *)(piVar9 + 3);
          piVar9 = (int *)((long)piVar9 + (ulong)*puVar1);
        } while (*puVar1 != 0xffffffff);
      }
      lVar8 = 0;
LAB_00331b90:
      *(long *)(param_1 + 0xa8) = lVar8;
      *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x448) - lVar15;
      iVar11 = *piVar19;
    }
    if (iVar11 == 0x414d5250) {
      lVar15 = *(long *)(param_1 + 0x448);
      FUN_00332720(param_1,piVar19);
      *(long *)(param_1 + 0x468) = *(long *)(param_1 + 0x448) - lVar15;
      iVar11 = *piVar19;
    }
    if (iVar11 == 0x52503347) {
      if (piVar19[2] != 0xffffffff) {
        piVar9 = (int *)((long)piVar19 + (ulong)(uint)piVar19[2]);
        do {
          if (*piVar9 == 0x544e3347) {
            lVar15 = (long)piVar9 + (ulong)(uint)piVar9[5];
            goto LAB_00331bfc;
          }
          puVar1 = (uint *)(piVar9 + 3);
          piVar9 = (int *)((long)piVar9 + (ulong)*puVar1);
        } while (*puVar1 != 0xffffffff);
      }
      lVar15 = 0;
LAB_00331bfc:
      lVar8 = *(long *)(param_1 + 0x448);
      *(long *)(param_1 + 0xb0) = lVar15;
      FUN_00332ac0(param_1,piVar19);
      *(long *)(param_1 + 0x478) = *(long *)(param_1 + 0x448) - lVar8;
      iVar11 = *piVar19;
    }
    if (iVar11 == 0x4e535247) {
      lVar15 = *(long *)(param_1 + 0x448);
      FUN_00332b70(param_1,piVar19);
      *(long *)(param_1 + 0x470) = *(long *)(param_1 + 0x448) - lVar15;
      iVar11 = *piVar19;
    }
    if (iVar11 == 0x41545345) {
      lVar15 = *(long *)(param_1 + 0x448);
      FUN_00332cc0(param_1,piVar19,&local_78);
      *(long *)(param_1 + 0x480) = *(long *)(param_1 + 0x448) - lVar15;
      iVar11 = *piVar19;
    }
    if (iVar11 == 0x54465345) {
      lVar14 = (long)piVar19 + (ulong)(uint)piVar19[5];
    }
    puVar1 = (uint *)(piVar19 + 3);
    piVar19 = (int *)((long)piVar19 + (ulong)*puVar1);
    if (*puVar1 == 0xffffffff) {
      lVar15 = param_1 + 0xe8;
      lVar8 = *(long *)(param_1 + 0x448);
      uVar6 = FUN_00334414(lVar15,*(undefined8 *)(param_1 + 0x10),param_1 + 0x438,0x10,local_78);
      if ((uVar6 & 1) != 0) {
        FUN_00347d1c(lVar15,param_1 + 0x270);
      }
      *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x448) - lVar8;
      memset(&local_2f8,0,0x280);
      local_308 = 0;
      uStack_300 = 0;
      local_318 = 0;
      uStack_310 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_418 = (undefined8 *)0x0;
      uStack_410 = 0;
      local_428 = 0;
      local_420 = (undefined8 *)0x0;
      FUN_0034fd0c(&local_428);
      local_428 = CONCAT44(local_428._4_4_,0x100010);
      local_418 = &local_3f8;
      local_2f8._0_4_ = CONCAT22(0xf,(undefined2)local_2f8);
      local_420 = &local_2f8;
      lVar8 = FUN_0034efc0(&local_428);
      uVar6 = lVar8 + 7U & 0xfffffffffffffff8;
      lVar8 = (long)*(int *)(param_1 + 0x48) * uVar6 * 3;
      lVar7 = (**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                        (*(long **)(param_1 + 0x440),lVar8,8);
      local_440 = *(long *)(param_1 + 0x448);
      if (lVar7 != 0) {
        local_440 = local_440 + lVar8;
        *(long *)(param_1 + 0x448) = local_440;
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
      }
      *(long *)(param_1 + 0x518) = lVar7;
      *(undefined8 *)(param_1 + 0x280) = 0;
      uVar13 = FUN_00347cc4(lVar15);
      iVar11 = *(int *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x288) = uVar13;
      if (0 < iVar11) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          lVar12 = *(long *)(param_1 + 0x50);
          piVar19 = (int *)(lVar12 + lVar8 * 0x38 + 4);
          if (0 < *piVar19) {
            lVar16 = 0;
            lVar18 = 0;
            do {
              uVar2 = lVar10 + 7 + uVar6;
              lVar3 = *(long *)(lVar12 + lVar8 * 0x38 + 0x18) + lVar16;
              uVar17 = uVar2 + uVar6 & 0xfffffffffffffff8;
              *(long *)(lVar3 + 0x370) = lVar7 + lVar10;
              *(ulong *)(lVar3 + 0x388) = uVar6;
              *(ulong *)(lVar3 + 0x378) = lVar7 + (uVar2 & 0xfffffffffffffff8);
              *(ulong *)(lVar3 + 0x380) = lVar7 + uVar17;
              FUN_00322f1c(lVar3,*(undefined8 *)(param_1 + 0x10));
              lVar10 = *(long *)(lVar3 + 0x10);
              if (*(long *)(lVar10 + 0x8c0) == -1) {
                *(undefined8 *)(lVar3 + 0x80) = 0;
                cVar4 = *(char *)(lVar10 + 0x8f1);
              }
              else {
                uVar13 = FUN_003339f0(param_1);
                lVar10 = *(long *)(lVar3 + 0x10);
                *(undefined8 *)(lVar3 + 0x80) = uVar13;
                cVar4 = *(char *)(lVar10 + 0x8f1);
              }
              if ((cVar4 != '\0') && (*(long *)(lVar10 + 0x918) != -1)) {
                uVar13 = FUN_003339f0(param_1);
                *(undefined8 *)(lVar3 + 0x78) = uVar13;
              }
              FUN_00322f38(lVar3,lVar15);
              FUN_00323e40(lVar3,param_1,*(undefined8 *)(param_1 + 0x520));
              if (*(char *)(param_1 + 8) == '\0') {
                FUN_00323b44(lVar3,param_1);
              }
              if (lVar14 != 0) {
                *(long *)(*(long *)(param_1 + 0x50) + lVar8 * 0x38 + 0x30) = lVar14 + 0x18;
                puVar1 = (uint *)(lVar14 + 0x10);
                lVar10 = lVar14 + (ulong)*puVar1;
                lVar14 = 0;
                if (*puVar1 != 0) {
                  lVar14 = lVar10;
                }
              }
              lVar18 = lVar18 + 1;
              lVar10 = uVar17 + uVar6;
              lVar16 = lVar16 + 0x430;
            } while (lVar18 < *piVar19);
            iVar11 = *(int *)(param_1 + 0x44);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar11);
      }
      FUN_00347cdc(lVar15,0,*(undefined8 *)(param_1 + 600));
      FUN_00347cd8(lVar15);
      *(long *)(param_1 + 0x488) = *(long *)(param_1 + 0x448) - local_440;
      return 1;
    }
  } while( true );
}

