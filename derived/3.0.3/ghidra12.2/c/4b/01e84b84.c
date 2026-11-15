
void FUN_01e84b84(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *local_398;
  char *local_390;
  undefined1 local_388;
  byte local_387;
  undefined *local_380;
  long local_378;
  undefined1 local_370;
  byte local_36f;
  undefined8 local_368;
  undefined8 local_248;
  char *local_240;
  undefined1 local_238;
  byte local_237;
  
  *(undefined4 *)(param_1 + 0xb0b0) = 2;
  puVar6 = PTR_DAT_04bb27c0;
  if ((param_2 & 1) == 0) {
    lVar17 = *(long *)(param_1 + 8);
    uVar11 = *(uint *)(lVar17 + 0x288);
    *(undefined4 *)(lVar17 + 0x288) = *(undefined4 *)(lVar17 + 0x28c);
    uVar11 = uVar11 ^ uVar11 << 0xb;
    *(undefined4 *)(lVar17 + 0x28c) = *(undefined4 *)(lVar17 + 0x290);
    uVar4 = *(uint *)(lVar17 + 0x294);
    *(uint *)(lVar17 + 0x290) = uVar4;
    uVar11 = uVar11 >> 8 ^ uVar4 >> 0x13 ^ uVar11 ^ uVar4;
    *(uint *)(lVar17 + 0x294) = uVar11;
    puVar6 = PTR_DAT_04bb27c0;
    if (0x1a < (uint)((ulong)uVar11 * 100 >> 0x20)) {
      return;
    }
    lVar17 = *(long *)PTR_DAT_04bb27c0;
    if (lVar17 == 0) {
      return;
    }
    uVar11 = *(uint *)(param_1 + 0x7d74);
    if ((((uVar11 == 0) ||
         (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
        ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar11)) {
      plVar20 = (long *)0x0;
    }
    if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar17 = *(long *)puVar6;
      iVar10 = (**(code **)(*plVar12 + 0x60))();
      if (iVar10 < 0x11) {
        uVar11 = 1;
        goto joined_r0x01e84de4;
      }
      if (*(uint *)(lVar17 + 0x5e8) < 5) {
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
        goto joined_r0x01e84de4;
      }
    }
    uVar11 = 0;
joined_r0x01e84de4:
    if (plVar20 == (long *)0x0) {
      return;
    }
    lVar17 = plVar20[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
    uVar4 = 0;
    if ((int)lVar17 == 1) {
      uVar4 = uVar11;
    }
    if ((uVar13 & 1) == 0) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    lVar22 = *(long *)(param_1 + 8);
    lVar17 = FUN_0265c3e0(*(undefined4 *)(lVar22 + 0x508));
    lVar18 = FUN_0265c3e0((int)plVar20[0xa1]);
    if (lVar17 == 0) {
      return;
    }
    if (lVar18 == 0) {
      return;
    }
    if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar21 == (undefined8 *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)*puVar21)();
      uVar13 = uVar13 & 0xffffffff;
    }
    puVar6 = PTR_DAT_04bb2020;
    local_248 = PTR_DAT_04bb2020 + 0x10;
    local_240 = "PlayerNamePhrase";
    iVar10 = FUN_02749340(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267c,&local_248);
    if (iVar10 == 1) {
      pcVar14 = (char *)FUN_0265dec0(*(undefined4 *)(lVar22 + 0x508));
      bVar8 = true;
      if (pcVar14 != (char *)0x0) {
        local_238 = 1;
        local_240 = pcVar14;
        if (*(long **)(pcVar14 + 0x28) == (long *)0x0) {
          local_237 = 0;
        }
        else {
          puVar21 = (undefined8 *)**(long **)(pcVar14 + 0x28);
          local_237 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            local_237 = (**(code **)*puVar21)();
          }
        }
        local_237 = local_237 & 1;
        local_248 = PTR_DAT_04bb57a0 + 0x10;
        uVar15 = FUN_0272eca4(*(long *)(pcVar14 + 0x10) + *(long *)(pcVar14 + 8),1);
        local_368 = uVar15;
        FUN_02640184(&local_248);
        if ((uVar15 & 0xffff) != 0) {
          FUN_00a80e9c(&local_368,5);
          iVar10 = FUN_00a813c0(&local_368);
          bVar8 = iVar10 != -1;
        }
      }
    }
    else {
      bVar8 = false;
    }
    if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
       (puVar21 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar21 != (undefined8 *)0x0)) {
      (**(code **)*puVar21)();
    }
    if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar21 == (undefined8 *)0x0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)*puVar21)();
      uVar11 = uVar11 ^ 1;
    }
    local_248 = puVar6 + 0x10;
    local_240 = "PlayerNamePhrase";
    iVar10 = FUN_02749340(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1267c,&local_248);
    if ((((uVar11 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar21 != (undefined8 *)0x0)) {
      (**(code **)*puVar21)();
    }
    bVar8 = (bool)(bVar8 ^ 1);
    if (iVar10 != 0) {
      bVar8 = true;
    }
    if (bVar8) {
      return;
    }
    lVar17 = FUN_0265dc40(*(undefined4 *)(lVar22 + 0x508));
    lVar22 = FUN_0265dd80((int)plVar20[0xa1]);
    if (lVar17 == 0) {
      return;
    }
    if (lVar22 == 0) {
      return;
    }
    FUN_029071fc(&local_248);
    FUN_01e85434(&local_368);
    plVar12 = *(long **)(lVar17 + 0x28);
    local_370 = 1;
    local_378 = lVar17;
    if (plVar12 == (long *)0x0) {
      local_36f = 0;
    }
    else {
      local_36f = 0;
      if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
        local_36f = (*(code *)**(undefined8 **)*plVar12)();
        plVar12 = *(long **)(lVar17 + 0x28);
      }
    }
    puVar7 = PTR_DAT_04bc0cf0;
    local_36f = local_36f & 1;
    local_388 = 1;
    puVar1 = PTR_DAT_04bc0cf0 + 0x10;
    local_390 = (char *)lVar17;
    local_380 = puVar1;
    if (plVar12 == (long *)0x0) {
      local_387 = 0;
    }
    else {
      local_387 = 0;
      if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
        local_387 = (*(code *)**(undefined8 **)*plVar12)();
      }
    }
    local_387 = local_387 & 1;
    local_398 = puVar1;
    FUN_01e854d8(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8),&local_368);
    FUN_02640184(&local_398);
    FUN_02640184(&local_380);
    FUN_01e8558c(&local_248,&local_368);
    local_370 = 0;
    if (*(long *)(lVar22 + 0x28) == 0) {
      bVar9 = 0;
      local_378 = lVar22;
    }
    else {
      puVar21 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 0x10);
      bVar9 = 0;
      local_378 = lVar22;
      if (puVar21 != (undefined8 *)0x0) {
        bVar9 = (**(code **)*puVar21)();
      }
    }
    local_36f = bVar9 & 1;
    local_380 = puVar7 + 0x10;
    FUN_01e855f4(&local_380);
    puVar21 = (undefined8 *)FUN_02907208();
    puVar16 = (undefined8 *)FUN_02907250(&local_248);
    uVar2 = puVar16[1];
    *puVar21 = *puVar16;
    puVar21[1] = uVar2;
    uVar2 = puVar16[3];
    uVar3 = puVar16[4];
    uVar19 = puVar16[2];
    *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(puVar16 + 5);
    puVar21[2] = uVar19;
    puVar21[3] = uVar2;
    puVar21[4] = uVar3;
    FUN_02640184(&local_380);
    local_370 = 0;
    local_378 = lVar18;
    if (*(long *)(lVar18 + 0x28) == 0) {
      bVar9 = 0;
    }
    else {
      puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 0x10);
      bVar9 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        bVar9 = (**(code **)*puVar21)();
      }
    }
    local_36f = bVar9 & 1;
    local_380 = PTR_DAT_04bb67a0 + 0x10;
    lVar17 = FUN_0135d92c(&local_380);
    local_398 = puVar6 + 0x10;
    local_390 = "PlayerNamePhrase";
    FUN_02749650(lVar17 + 0x1267c,(int)plVar20[0xa1],&local_398,0,1);
    FUN_02640184(&local_380);
    return;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x7d74);
  if ((((uVar11 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar11)) {
    plVar20 = (long *)0x0;
  }
  if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar6;
    iVar10 = (**(code **)(*plVar12 + 0x60))();
    if (iVar10 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01e84d54;
    }
    if (*(uint *)(lVar17 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01e84d54;
    }
  }
  uVar11 = 0;
joined_r0x01e84d54:
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
    uVar4 = 0;
    if ((int)lVar17 == 1) {
      uVar4 = uVar11;
    }
    if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
      puVar21 = (undefined8 *)plVar20[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if (puVar21 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)0x0;
      }
      else {
        uVar13 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bb6858);
        if ((uVar13 & 1) == 0) {
          puVar21 = (undefined8 *)0x0;
        }
      }
      uVar11 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      if ((uVar11 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) {
        lVar17 = (ulong)uVar11 * 0xba0;
        FUN_0219bcf0(&DAT_053fe348 + lVar17,*(undefined4 *)(param_1 + 0x12748),0x78,0,1);
        uVar13 = local_368;
        lVar18 = plVar20[0xa1];
        (&DAT_053febe4)[lVar17] = 0xff;
        *(int *)(&DAT_053febe0 + lVar17) = (int)lVar18;
        local_368._0_2_ = CONCAT11((char)plVar20[0xa1],(&DAT_053fee40)[lVar17]);
        local_248._6_2_ = (ushort)((ulong)local_248 >> 0x30) & 0xff00;
        local_248 = (undefined *)CONCAT26(local_248._6_2_,0xff0000000000);
        local_368._3_5_ = SUB85(uVar13,3);
        local_368._0_3_ = CONCAT12(1,(undefined2)local_368);
        if (-1 < DAT_053d0d40) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d40,&local_248,&local_368,3,0);
        }
        *(undefined4 *)(param_1 + 0x7d70) = *(undefined4 *)(param_1 + 0x7d6c);
      }
      uVar11 = *(uint *)(plVar20 + 0xa1);
      if ((uVar11 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) {
        lVar17 = (ulong)uVar11 * 0xba0;
        FUN_0219bcf0(&DAT_053fe348 + lVar17,*(undefined4 *)(puVar21 + 0x24e9),0x78,0,1);
        uVar13 = local_368;
        lVar18 = *(long *)(param_1 + 8);
        uVar5 = *(undefined4 *)(lVar18 + 0x508);
        (&DAT_053febe4)[lVar17] = 0xff;
        *(undefined4 *)(&DAT_053febe0 + lVar17) = uVar5;
        local_368._0_2_ = CONCAT11((char)*(undefined4 *)(lVar18 + 0x508),(&DAT_053fee40)[lVar17]);
        local_248._6_2_ = (ushort)((ulong)local_248 >> 0x30) & 0xff00;
        local_248 = (undefined *)CONCAT26(local_248._6_2_,0xff0000000000);
        local_368._3_5_ = SUB85(uVar13,3);
        local_368._0_3_ = CONCAT12(1,(undefined2)local_368);
        if (-1 < DAT_053d0d40) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d40,&local_248,&local_368,3,0);
        }
        *(undefined4 *)(plVar20[0x77] + 0x7d70) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
      }
    }
  }
  return;
}

