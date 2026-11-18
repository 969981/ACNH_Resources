
void FUN_03387478(long param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar11 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "SelectCursor";
  local_78 = puVar11;
  uVar5 = FUN_03387c94(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  local_70 = s_cPocketMenu_04b23657;
  local_78 = puVar11;
  uVar5 = FUN_03387e08(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  local_70 = s_cMenuDevice_04b23665;
  local_78 = puVar11;
  uVar5 = FUN_03387f84(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  local_70 = s_cCommonWipe_04b23673;
  local_78 = puVar11;
  uVar5 = FUN_033880f8(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  local_70 = s_cCommonBG_04b23681;
  local_78 = puVar11;
  uVar5 = FUN_03388320(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  local_70 = s_cMessageWindow_04b235d9;
  local_78 = puVar11;
  uVar5 = FUN_0338852c(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  local_70 = s_cCommonDialog_04b23611;
  local_78 = puVar11;
  uVar5 = FUN_03388754(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  local_70 = s_cSystemDialog_04b2369b;
  local_78 = puVar11;
  uVar5 = FUN_033888c8(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  local_70 = "cSwkbd";
  lVar8 = *(long *)(param_2 + 0xb8);
  if (lVar8 == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar9 = 1;
    local_78 = puVar11;
    if (lVar8 == 0) goto LAB_03387628;
LAB_033875ec:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03387610;
    plVar7 = (long *)0x0;
  }
  else {
    local_78 = puVar11;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_03387628:
      plVar7 = malloc(0xa40);
    }
    else {
      plVar7 = *(long **)(param_2 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_033875ec;
LAB_03387610:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa40,8);
    }
  }
  FUN_033691b0(plVar7,&local_78,0);
  plVar7[0x13] = param_2;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,0);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  pMVar1 = (MutexType *)(param_2 + 0xf0);
  nn::os::LockMutex(pMVar1);
  plVar10 = (long *)(param_2 + 0x40);
  lVar8 = *plVar10;
  plVar2 = (long *)((long)*(int *)(param_2 + 0x54) + (long)plVar7);
  *plVar10 = (long)plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  nn::os::UnlockMutex(pMVar1);
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  *(long **)(param_1 + 0x70) = plVar7;
  lVar8 = *(long *)(param_2 + 0xb8);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = s_cEventFlowUiCreater_04b23641;
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar9 = 1;
    if (lVar8 == 0) goto LAB_03387760;
LAB_03387724:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03387748;
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar9 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_03387760:
      plVar7 = malloc(0x238);
    }
    else {
      plVar7 = *(long **)(param_2 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_03387724;
LAB_03387748:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x238,8);
    }
  }
  FUN_03868244(plVar7,&local_78,0);
  *(undefined2 *)(plVar7 + 0x39) = 0;
  puVar11 = PTR_DAT_04bd4738;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined4 *)((long)plVar7 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  plVar7[0x35] = (long)(puVar11 + 0x10);
  plVar7[0x36] = 0xffffffff;
  *(undefined1 *)(plVar7 + 0x3f) = 0xff;
  puVar11 = PTR_DAT_04bc6920 + 0x10;
  *(undefined1 *)(plVar7 + 0x44) = 0xff;
  *(undefined1 *)((long)plVar7 + 0x22c) = 0xff;
  plVar7[0x42] = -1;
  *(undefined4 *)(plVar7 + 0x46) = 0;
  *(undefined1 *)((long)plVar7 + 0x234) = 0;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  plVar7[0x13] = param_2;
  *plVar7 = (long)puVar11;
  plVar7[0x43] = -0x100000000;
  *(undefined8 *)((long)plVar7 + 0x224) = 0xffffffff00000000;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  FUN_0386890c(plVar7,0);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_2 + 0x54) + (long)plVar7);
  lVar8 = *(long *)(param_2 + 0x40);
  *(long **)(param_2 + 0x40) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  nn::os::UnlockMutex(pMVar1);
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  *(long **)(param_1 + 0x80) = plVar7;
  puVar11 = PTR_DAT_04bb2020 + 0x10;
  local_70 = s_cFader_04b235d0;
  local_78 = puVar11;
  uVar5 = FUN_03388ae0(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  local_70 = s_cKeyGuide_04b235fc;
  local_78 = puVar11;
  uVar5 = FUN_03388c54(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  local_70 = s_cTelop_04b23608;
  local_78 = puVar11;
  uVar5 = FUN_03388dc8(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  lVar8 = *(long *)(param_2 + 0xb8);
  local_70 = s_cMiniGameStartFinish_04b2362a;
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar9 = 1;
    local_78 = puVar11;
    if (lVar8 == 0) goto LAB_03387960;
LAB_03387924:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03387948;
    plVar7 = (long *)0x0;
  }
  else {
    local_78 = puVar11;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar9 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_03387960:
      plVar7 = malloc(0x280);
    }
    else {
      plVar7 = *(long **)(param_2 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_03387924;
LAB_03387948:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x280,8);
    }
  }
  FUN_02fafbf4(plVar7,&local_78,0);
  plVar7[0x13] = param_2;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,0);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_2 + 0x54) + (long)plVar7);
  lVar8 = *(long *)(param_2 + 0x40);
  *(long **)(param_2 + 0x40) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  nn::os::UnlockMutex(pMVar1);
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  *(long **)(param_1 + 0x78) = plVar7;
  puVar11 = PTR_DAT_04bb2020 + 0x10;
  local_70 = s_cMainScreen_04b2368d;
  local_78 = puVar11;
  uVar5 = FUN_03388f3c(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  local_70 = s_cChatBalloon_04b236ab;
  local_78 = puVar11;
  uVar5 = FUN_033891a4(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  local_78 = PTR_DAT_04bc39b0 + 0x10;
  local_70 = (char *)CONCAT17(local_70._7_1_,0xff000000000000);
  local_68 = 0xffffffff;
  local_70 = (char *)CONCAT26(local_70._6_2_,0x100000000);
  local_80 = s_cNetErrorWindow_04b235ea;
  local_70 = (char *)(CONCAT44(local_70._4_4_,
                               *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc))
                     & 0xfffffffffffffffd);
  local_88 = puVar11;
  uVar5 = FUN_03389318(param_2,&local_88,&local_78);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  local_70 = s_cPlayerMarker_04b236ba;
  local_78 = puVar11;
  uVar5 = FUN_0338948c(param_2,&local_78,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  local_70 = s_cTelopRequestChangedCast_04b236ca;
  lVar8 = *(long *)(param_2 + 0xb8);
  if (lVar8 == 0) {
    lVar8 = *(long *)puVar3;
    lVar9 = 1;
    local_78 = puVar11;
    if (lVar8 == 0) goto LAB_03387b20;
LAB_03387b50:
    puVar11 = PTR_DAT_04bd4738;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_03387b94;
    }
  }
  else {
    local_78 = puVar11;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar9 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
LAB_03387b20:
      puVar11 = PTR_DAT_04bd4738;
      plVar7 = malloc(0x210);
      goto LAB_03387b94;
    }
    plVar7 = *(long **)(param_2 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_03387b50;
    puVar11 = PTR_DAT_04bd4738;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x210,8);
LAB_03387b94:
  FUN_03868244(plVar7,&local_78,0);
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x39) = 0;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined4 *)((long)plVar7 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  plVar7[0x35] = (long)(puVar11 + 0x10);
  plVar7[0x36] = 0xffffffff;
  *(undefined1 *)(plVar7 + 0x3f) = 0xff;
  puVar11 = PTR_DAT_04bc9a08 + 0x10;
  plVar7[0x13] = param_2;
  *plVar7 = (long)puVar11;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  FUN_0386890c(plVar7,0);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(param_2 + 0x54) + (long)plVar7);
  lVar8 = *(long *)(param_2 + 0x40);
  *(long **)(param_2 + 0x40) = plVar2;
  *plVar2 = lVar8;
  plVar2[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar2;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  nn::os::UnlockMutex(pMVar1);
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  *(long **)(param_1 + 200) = plVar7;
  *(undefined4 *)(param_2 + 200) = 0;
  return;
}

