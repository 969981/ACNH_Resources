
void FUN_02d99b80(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 ***pppuVar15;
  long *plVar16;
  byte *pbVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_790;
  undefined8 *local_788;
  undefined8 ****local_780;
  undefined8 ****ppppuStack_778;
  undefined8 ****local_770 [2];
  undefined8 ****local_760 [2];
  undefined8 ****local_750 [2];
  undefined8 ****local_740 [2];
  undefined8 ****local_730 [2];
  undefined8 ****local_720 [2];
  undefined8 ****local_710 [2];
  undefined8 ****local_700 [2];
  undefined8 ****local_6f0 [2];
  undefined8 ****local_6e0 [2];
  undefined8 ****local_6d0 [2];
  undefined8 ****local_6c0 [2];
  undefined8 ****local_6b0 [2];
  undefined8 ****local_6a0 [2];
  undefined8 ****local_690 [2];
  undefined8 ****local_680 [2];
  undefined8 ****local_670 [2];
  undefined8 ****local_660 [2];
  undefined8 ****local_650 [2];
  undefined8 ****local_640 [2];
  undefined8 ****local_630 [2];
  undefined8 ****local_620 [2];
  undefined8 ****local_610 [2];
  undefined8 ****local_600 [2];
  undefined8 ****local_5f0 [2];
  undefined8 ****local_5e0 [2];
  undefined8 ***local_5d0 [2];
  undefined8 **local_5c0 [2];
  undefined8 *local_5b0 [2];
  undefined8 local_5a0 [2];
  undefined8 auStack_590 [30];
  uint local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined2 local_460;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined4 local_45c;
  undefined2 local_458;
  undefined1 local_456;
  undefined1 local_455;
  undefined4 local_454;
  undefined2 local_450;
  undefined1 local_44e;
  undefined1 local_44d;
  undefined4 local_44c;
  undefined2 local_448;
  undefined1 local_446;
  undefined1 local_445;
  undefined4 local_444;
  undefined2 local_440;
  undefined1 local_43e;
  undefined1 local_43d;
  undefined4 local_43c;
  undefined2 local_438;
  undefined1 local_436;
  undefined1 local_435;
  undefined4 local_434;
  undefined2 local_430;
  undefined1 local_42e;
  undefined1 local_42d;
  undefined4 local_42c;
  undefined2 local_428;
  undefined1 local_426;
  undefined1 local_425;
  undefined4 local_424;
  undefined2 local_420;
  undefined1 local_41e;
  undefined1 local_41d;
  undefined4 local_41c;
  undefined2 local_418;
  undefined1 local_416;
  undefined1 local_415;
  undefined4 local_414;
  undefined2 local_410;
  undefined1 local_40e;
  undefined1 local_40d;
  undefined4 local_40c;
  undefined2 local_408;
  undefined1 local_406;
  undefined1 local_405;
  undefined4 local_404;
  undefined2 local_400;
  undefined1 local_3fe;
  undefined1 local_3fd;
  undefined4 local_3fc;
  undefined2 local_3f8;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  char local_3a8 [8];
  uint local_3a0;
  long local_398;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  long lStack_a0;
  uint local_84 [5];
  undefined4 local_64;
  
  local_ac = FUN_02d99710();
  uVar14 = *(uint *)(param_1 + 0x1c260);
  local_b0 = 0xffffffff;
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0x1c248))) {
    lVar12 = param_1 + 0x1c238;
    uVar2 = uVar14 + 1 & 3;
    if (2 < uVar14) {
      uVar14 = uVar14 + 1 & 0xfffffffc;
      do {
        uVar14 = uVar14 - 4;
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
      } while (uVar14 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar12 = *(long *)(lVar12 + 8);
    }
    local_b0 = 0xffffffff;
    if ((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x1c24c), lVar12 != 0)) {
      local_b0 = *(undefined4 *)(lVar12 + 0x270);
    }
  }
  local_a8 = &PTR_LAB_04ac3990;
  lStack_a0 = param_1;
  FUN_0345ca00(local_3a8,&local_b0);
  *(byte *)(param_1 + 0x108d70) = *(byte *)(param_1 + 0x108d70) & 0xfd | local_3a8[0] << 1;
  FUN_03383504(&local_498);
  lVar12 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x470);
  }
  if (*(int *)(param_1 + 0x108b14) == 0) {
    puVar13 = *(undefined8 **)(lVar12 + 0x28);
  }
  else {
    puVar13 = *(undefined8 **)(lVar12 + 0x20);
  }
  if (puVar13 != (undefined8 *)0x0) {
    local_498 = *puVar13;
    local_490 = puVar13[1];
    local_488 = puVar13[2];
    local_460 = *(undefined2 *)(puVar13 + 7);
    local_480 = puVar13[3];
    local_478 = puVar13[4];
    local_470 = puVar13[5];
    local_468 = puVar13[6];
    local_45e = *(undefined1 *)((long)puVar13 + 0x3a);
    local_45d = *(undefined1 *)((long)puVar13 + 0x3b);
    local_45c = *(undefined4 *)((long)puVar13 + 0x3c);
    local_458 = *(undefined2 *)(puVar13 + 8);
    local_456 = *(undefined1 *)((long)puVar13 + 0x42);
    local_455 = *(undefined1 *)((long)puVar13 + 0x43);
    local_454 = *(undefined4 *)((long)puVar13 + 0x44);
    local_450 = *(undefined2 *)(puVar13 + 9);
    local_44e = *(undefined1 *)((long)puVar13 + 0x4a);
    local_44d = *(undefined1 *)((long)puVar13 + 0x4b);
    local_44c = *(undefined4 *)((long)puVar13 + 0x4c);
    local_448 = *(undefined2 *)(puVar13 + 10);
    local_446 = *(undefined1 *)((long)puVar13 + 0x52);
    local_445 = *(undefined1 *)((long)puVar13 + 0x53);
    local_444 = *(undefined4 *)((long)puVar13 + 0x54);
    local_440 = *(undefined2 *)(puVar13 + 0xb);
    local_43e = *(undefined1 *)((long)puVar13 + 0x5a);
    local_43d = *(undefined1 *)((long)puVar13 + 0x5b);
    local_43c = *(undefined4 *)((long)puVar13 + 0x5c);
    local_438 = *(undefined2 *)(puVar13 + 0xc);
    local_436 = *(undefined1 *)((long)puVar13 + 0x62);
    local_435 = *(undefined1 *)((long)puVar13 + 99);
    local_434 = *(undefined4 *)((long)puVar13 + 100);
    local_430 = *(undefined2 *)(puVar13 + 0xd);
    local_42e = *(undefined1 *)((long)puVar13 + 0x6a);
    local_42d = *(undefined1 *)((long)puVar13 + 0x6b);
    local_42c = *(undefined4 *)((long)puVar13 + 0x6c);
    local_428 = *(undefined2 *)(puVar13 + 0xe);
    local_426 = *(undefined1 *)((long)puVar13 + 0x72);
    local_425 = *(undefined1 *)((long)puVar13 + 0x73);
    local_424 = *(undefined4 *)((long)puVar13 + 0x74);
    local_420 = *(undefined2 *)(puVar13 + 0xf);
    local_41e = *(undefined1 *)((long)puVar13 + 0x7a);
    local_41d = *(undefined1 *)((long)puVar13 + 0x7b);
    local_41c = *(undefined4 *)((long)puVar13 + 0x7c);
    local_418 = *(undefined2 *)(puVar13 + 0x10);
    local_416 = *(undefined1 *)((long)puVar13 + 0x82);
    local_415 = *(undefined1 *)((long)puVar13 + 0x83);
    local_414 = *(undefined4 *)((long)puVar13 + 0x84);
    local_410 = *(undefined2 *)(puVar13 + 0x11);
    local_40e = *(undefined1 *)((long)puVar13 + 0x8a);
    local_40d = *(undefined1 *)((long)puVar13 + 0x8b);
    local_40c = *(undefined4 *)((long)puVar13 + 0x8c);
    local_408 = *(undefined2 *)(puVar13 + 0x12);
    local_406 = *(undefined1 *)((long)puVar13 + 0x92);
    local_405 = *(undefined1 *)((long)puVar13 + 0x93);
    local_404 = *(undefined4 *)((long)puVar13 + 0x94);
    local_400 = *(undefined2 *)(puVar13 + 0x13);
    local_3fe = *(undefined1 *)((long)puVar13 + 0x9a);
    local_3fd = *(undefined1 *)((long)puVar13 + 0x9b);
    local_3fc = *(undefined4 *)((long)puVar13 + 0x9c);
    local_3f8 = *(undefined2 *)(puVar13 + 0x14);
    local_3f6 = *(undefined1 *)((long)puVar13 + 0xa2);
    local_3f5 = *(undefined1 *)((long)puVar13 + 0xa3);
    local_3f4 = *(undefined4 *)((long)puVar13 + 0xa4);
    local_3f0 = puVar13[0x15];
    local_3e8 = puVar13[0x16];
    local_3e0 = puVar13[0x17];
    local_3d8 = puVar13[0x18];
    local_3d0 = puVar13[0x19];
    local_3c8 = puVar13[0x1a];
    local_3c0 = puVar13[0x1b];
    local_3b8 = puVar13[0x1c];
    local_3b0 = *(undefined1 *)(puVar13 + 0x1d);
  }
  bVar4 = *(byte *)(param_1 + 0x108d70);
  bVar3 = ((short)local_3b8 == 0x10) << 2;
  bVar5 = bVar4 & 3;
  if ((short)local_3b8 != 0x10) {
    bVar5 = bVar4 & 2;
  }
  bVar6 = bVar5 | bVar3;
  *(byte *)(param_1 + 0x108d70) = bVar4 & 0xf8 | bVar5 | bVar3;
  *(bool *)(*(long *)(param_1 + 0x108d68) + 0x1518) = bVar6 == 7;
  pbVar17 = PTR_DAT_04bc4e60;
  puVar7 = PTR_DAT_04bc4e58;
  if (bVar6 == 7) {
    puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
      *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
    if ((uVar11 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    plVar16 = *(long **)(puVar13[0x45] + (ulong)(4 < *(uint *)(puVar13 + 0x44)) * 0x20);
    if (plVar16 != (long *)0x0) {
      local_788._0_4_ = 9;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_790 = (undefined **)puVar1;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_790);
      fVar18 = (float)(**(code **)(plVar16[3] + 0xb0))(plVar16[1]);
      local_788._0_4_ = 9;
      fVar20 = 0.5;
      if (fVar18 < 0.0) {
        fVar20 = -0.5;
      }
      uVar14 = local_3a0;
      if ((int)(fVar18 + fVar20) + 1 <= (int)local_3a0) {
        uVar14 = (int)(fVar18 + fVar20) + 1;
      }
      iVar10 = uVar14 - 1;
      if ((int)local_3a0 < 1) {
        iVar10 = 0;
      }
      local_790 = (undefined **)puVar1;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_790);
      fVar18 = (float)(**(code **)(plVar16[3] + 0xb0))(plVar16[1]);
      pbVar17 = PTR_DAT_04bc4e60;
      if ((float)iVar10 <= fVar18) {
        fVar18 = (float)iVar10;
      }
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,0x14);
      fVar20 = 0.0;
      if (-1 < iVar10) {
        fVar20 = fVar18;
      }
      local_790 = (undefined **)puVar1;
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_790);
      (**(code **)(plVar16[3] + 0x158))(fVar20,plVar16[1]);
    }
    local_788 = (undefined8 *)0x0;
    local_770[0] = local_760;
    local_760[0] = local_750;
    ppppuStack_778 = local_770;
    local_750[0] = local_740;
    local_740[0] = local_730;
    local_730[0] = local_720;
    local_720[0] = local_710;
    local_710[0] = local_700;
    local_700[0] = local_6f0;
    local_6f0[0] = local_6e0;
    local_6e0[0] = local_6d0;
    local_6d0[0] = local_6c0;
    local_6c0[0] = local_6b0;
    local_6b0[0] = local_6a0;
    local_6a0[0] = local_690;
    local_690[0] = local_680;
    local_680[0] = local_670;
    local_670[0] = local_660;
    local_660[0] = local_650;
    local_650[0] = local_640;
    local_640[0] = local_630;
    local_630[0] = local_620;
    local_620[0] = local_610;
    local_610[0] = local_600;
    local_600[0] = local_5f0;
    local_5f0[0] = local_5e0;
    local_5e0[0] = local_5d0;
    local_5d0[0] = local_5c0;
    local_5c0[0] = local_5b0;
    local_5b0[0] = local_5a0;
    local_5a0[0] = 0;
    local_780 = ppppuStack_778;
    local_4a0 = param_2;
    if (auStack_590 == (undefined8 *)0x0) {
      local_790 = (undefined **)0x0;
    }
    else {
      local_790 = (undefined **)0x1e00000000;
      local_788 = auStack_590;
      if (0 < (int)local_3a0) {
        lVar12 = 0;
        if (0x1d < (int)local_3a0) {
          local_3a0 = 0x1e;
        }
        iVar10 = 0;
        do {
          ppppuVar8 = local_780;
          if (iVar10 < local_790._4_4_) {
            if (local_780 != (undefined8 ****)0x0) {
              local_780 = (undefined8 ****)*local_780;
            }
            pppuVar15 = (undefined8 ***)**(long **)(local_398 + lVar12);
            *(int *)(ppppuVar8 + 1) = (int)(*(long **)(local_398 + lVar12))[1];
            *ppppuVar8 = pppuVar15;
            iVar10 = (int)local_790;
            if ((int)local_790 < local_790._4_4_) {
              auStack_590[(int)local_790] = ppppuVar8;
              iVar10 = (int)local_790 + 1;
              local_790 = (undefined **)CONCAT44(local_790._4_4_,iVar10);
            }
          }
          lVar12 = lVar12 + 8;
        } while ((ulong)local_3a0 * 8 != lVar12);
      }
    }
    FUN_0345db20(*(long *)(param_1 + 0x108d68),&local_790);
  }
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar7 = PTR_DAT_04bc4e58;
  uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar11 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  lVar12 = 0x28;
  if (*(uint *)(puVar13 + 0x44) < 6) {
    lVar12 = 0;
  }
  plVar16 = *(long **)(puVar13[0x45] + lVar12);
  if (plVar16 != (long *)0x0) {
    local_790 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
    if (bVar6 == 7) {
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,0xc);
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_790);
      uVar11 = (**(code **)(plVar16[3] + 0xe0))(plVar16[1]);
      if ((uVar11 & 1) != 0) goto LAB_02d9a360;
      local_790 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,1);
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_790);
      uVar19 = 0x3f800000;
    }
    else {
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,0xb);
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_790);
      uVar11 = (**(code **)(plVar16[3] + 0xd0))(plVar16[1]);
      if ((uVar11 & 1) != 0) goto LAB_02d9a360;
      local_790 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,1);
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_790);
      uVar19 = 0xbf800000;
    }
    (**(code **)(plVar16[3] + 400))(uVar19,plVar16[1]);
  }
LAB_02d9a360:
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*pbVar17 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar11 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  lVar12 = 0x18;
  if (*(uint *)(puVar13 + 0x44) < 4) {
    lVar12 = 0;
  }
  plVar16 = *(long **)(puVar13[0x45] + lVar12);
  if (plVar16 != (long *)0x0) {
    if ((*(byte *)(param_1 + 0x108d70) >> 1 & 1) == 0) {
      local_790 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,7);
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_790);
      puVar13 = (undefined8 *)(plVar16[3] + 0x1c0);
    }
    else {
      local_790 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_788 = (undefined8 *)CONCAT44(local_788._4_4_,6);
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_790);
      puVar13 = (undefined8 *)(plVar16[3] + 0x1b8);
    }
    (*(code *)*puVar13)(plVar16[1]);
  }
  if ((*(byte *)(param_1 + 0x108d70) >> 1 & 1) != 0) {
    local_790 = &PTR_FUN_04ac39b8;
    local_788 = (undefined8 *)param_1;
    FUN_02d949c0(local_84,param_1,param_2);
    uVar14 = *(uint *)(param_1 + 0x1c260);
    local_64 = 0xffffffff;
    if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0x1c248))) {
      lVar12 = param_1 + 0x1c238;
      uVar2 = uVar14 + 1 & 3;
      if (2 < uVar14) {
        uVar14 = uVar14 + 1 & 0xfffffffc;
        do {
          uVar14 = uVar14 - 4;
          lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
        } while (uVar14 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar12 = *(long *)(lVar12 + 8);
      }
      local_64 = 0xffffffff;
      if ((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x1c24c), lVar12 != 0)) {
        local_64 = *(undefined4 *)(lVar12 + 0x270);
      }
    }
    local_84[0] = FUN_0345c6c0(local_84,&local_64);
    if (0 < (int)param_2) {
      do {
        if (local_84[0] != 0) break;
        local_84[0] = (*(code *)*local_790)(&local_790,param_2 - 1);
        bVar9 = 1 < param_2;
        param_2 = param_2 - 1;
      } while (bVar9);
    }
    if (local_84[0] != 0) {
      if (local_84[0] < 0x40) {
        local_788 = *(undefined8 **)(PTR_DAT_04bc0410 + (ulong)local_84[0] * 8 + 0x278);
      }
      else {
        local_788 = &DAT_0407ebb1;
      }
      local_790 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      FUN_03414f00(param_1 + 0x108c10,&local_790,0x1c);
    }
  }
  return;
}

