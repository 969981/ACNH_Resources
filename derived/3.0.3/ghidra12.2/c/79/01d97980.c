
void FUN_01d97980(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  void *__s;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  undefined *local_58;
  char *pcStack_50;
  byte local_48 [4];
  byte local_44 [4];
  
  if (*param_1 == 0) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      __s = malloc(0x5e370);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_2 = (long *)(lVar15 + 8);
        if (lVar10 != 0) {
          param_2 = (long *)(lVar10 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          __s = (void *)0x0;
          goto LAB_01d97a18;
        }
      }
      __s = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x5e370,8);
    }
LAB_01d97a18:
    memset(__s,0,0xaf00);
    lVar15 = 400;
    pvVar16 = __s;
    do {
      FUN_0276a91c(pvVar16);
      lVar15 = lVar15 + -1;
      pvVar16 = (void *)((long)pvVar16 + 0x70);
    } while (lVar15 != 0);
    memset((void *)((long)__s + 0xaf00),0,0x640);
    iVar9 = 0;
    uVar14 = 0;
    do {
      uVar6 = uVar14 << 2;
      uVar7 = uVar14 >> 0x1f;
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar1;
      *(int *)((long)__s + 0xaf00 + (-uVar7 & 0xfffffffc00000000 | uVar6)) = iVar9;
      iVar9 = iVar9 + 1;
    } while (uVar1 != 400);
    *(undefined8 *)((long)__s + 0xb540) = 0;
    FUN_02785660((long)__s + 0xb568);
    *(undefined1 *)((long)__s + 0x569d8) = 0;
    *(undefined8 *)((long)__s + 0x56910) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569c8) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569d0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569b8) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569c0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569a8) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569b0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56998) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569a0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56988) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56990) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56978) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56980) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56968) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56970) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56958) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56960) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56948) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56950) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56938) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56940) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56928) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56930) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56918) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56920) = 0xffffffffffffffff;
    pvVar16 = (void *)((long)__s + 0x569e0);
    memset(pvVar16,0,0x60e0);
    lVar15 = 100;
    do {
      FUN_0275a914(pvVar16);
      lVar15 = lVar15 + -1;
      pvVar16 = (void *)((long)pvVar16 + 0xf8);
    } while (lVar15 != 0);
    pvVar16 = (void *)((long)__s + 0x5cac0);
    memset(pvVar16,0,400);
    iVar9 = 0;
    uVar14 = 0;
    do {
      lVar15 = uVar14 << 0x20;
      iVar2 = iVar9 + 1;
      *(int *)((long)pvVar16 + (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2)) = iVar9;
      iVar9 = iVar9 + 2;
      uVar14 = (ulong)((int)uVar14 + 2);
      *(int *)((long)pvVar16 + (lVar15 + 0x100000000 >> 0x1e)) = iVar2;
    } while (iVar9 != 100);
    FUN_028cc6f0((long)__s + 0x5cc50);
    uVar14 = 0;
    do {
      lVar15 = uVar14 << 0x20;
      uVar6 = uVar14 << 3;
      uVar7 = uVar14 >> 0x1f;
      uVar1 = (int)uVar14 + 2;
      uVar14 = (ulong)uVar1;
      *(undefined8 *)((long)__s + (-uVar7 & 0xfffffff800000000 | uVar6) + 0x5de48) = 0;
      *(undefined8 *)((long)__s + (lVar15 + 0x100000000 >> 0x1d) + 0x5de48) = 0;
    } while (uVar1 != 100);
    iVar9 = 0;
    do {
      *(undefined1 *)((long)__s + (long)iVar9 + 0x5e168) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    iVar9 = 0;
    *(undefined8 *)((long)__s + 0x5e268) = 0;
    do {
      *(undefined1 *)((long)__s + (long)iVar9 + 0x5e270) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    *param_1 = (long)__s;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_01d97c54:
    if (7 < *pbVar12) {
LAB_01d97c60:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar15 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar4 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar12 = (byte *)(lVar15 + 0x471);
          }
        }
        local_44[0] = *pbVar12;
        if (local_44[0] < 8) goto LAB_01d97ce0;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01d97c54;
      }
      goto LAB_01d97c60;
    }
  }
  local_44[0] = *pbVar12;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
LAB_01d97ce0:
  local_48[0] = local_44[0];
  if (7 < local_44[0]) {
    local_48[0] = 0xff;
  }
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  puVar8 = PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    lVar10 = lVar15 + 0x194b0;
    plVar17 = (long *)(lVar15 + 0x194b8);
    lVar13 = lVar10;
    if (*plVar17 == 0) {
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x8560) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x8560), puVar11 == (undefined8 *)0x0)) {
      memcpy((void *)*param_1,(void *)(*(long *)(lVar13 + 0x8548) + *(long *)(lVar13 + 0x8540)),
             0xb548);
    }
    else {
      uVar14 = (**(code **)*puVar11)();
      memcpy((void *)*param_1,(void *)(*(long *)(lVar13 + 0x8548) + *(long *)(lVar13 + 0x8540)),
             0xb548);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x8560) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x8560) + 8), puVar11 != (undefined8 *)0x0))
      {
        (**(code **)*puVar11)();
      }
    }
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "FriendListNotifyLook";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb548) = iVar9 != 0;
    pcStack_50 = "FriendListNotifyUpdate";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb549) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_Camera";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54a) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_BestFriend";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54b) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_ChatLog";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54c) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_Map";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54d) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_SOS";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54e) = iVar9 != 0;
    pcStack_50 = "EmergencyEscapeExplain";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb54f) = iVar9 != 0;
    pcStack_50 = "AppUrgentEscapeUseToday";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb550) = iVar9 != 0;
    pcStack_50 = "AppUrgentEscapeNoPayment";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb551) = iVar9 != 0;
    pcStack_50 = "AppUrgentEscapeCallToday";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb552) = iVar9 != 0;
    pcStack_50 = "AppUrgentEscapeMobCounter";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb553) = iVar9 != 0;
    pcStack_50 = "AppUrgentEscapeTodayShiftMob";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb554) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_Mydesign";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb555) = iVar9 != 0;
    pcStack_50 = "Mobile1stBootAfterUnlockPro_Mydesign";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb556) = iVar9 != 0;
    pcStack_50 = "Mobile1stBootUnlockCantEditMydesign";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb557) = iVar9 != 0;
    pcStack_50 = "UnlockMyDesignProCategory";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb558) = iVar9 != 0;
    pcStack_50 = "KinuyoPROdesginFlag";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb559) = iVar9 != 0;
    pcStack_50 = "TapFirstDreamIn";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55a) = iVar9 != 0;
    pcStack_50 = "TapFirstCheckMydesingShowcase";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55b) = iVar9 != 0;
    pcStack_50 = "TapUnlockFavorite";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55c) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_Camera_UnlockKeyGuideOff";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55d) = iVar9 != 0;
    pcStack_50 = "ExplainMydesignPro2";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55e) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_MydesignShowcase";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb55f) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_MydesignPatternPlus";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb560) = iVar9 != 0;
    pcStack_50 = "TapUnlockSearchByIslandName";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb561) = iVar9 != 0;
    pcStack_50 = "NoticeAboutPMovinghTapDream";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb562) = iVar9 != 0;
    pcStack_50 = "Mobile1stBoot_Camera1stPersonView";
    local_58 = puVar3;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    *(bool *)(*param_1 + 0xb563) = iVar9 != 0;
    lVar13 = lVar10;
    if (*plVar17 == 0) {
      lVar13 = *(long *)(*(long *)puVar8 + 0x20);
    }
    if (*(long **)(lVar13 + 0x85d0) == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      puVar11 = (undefined8 *)**(long **)(lVar13 + 0x85d0);
      uVar14 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar14 = (**(code **)*puVar11)();
      }
    }
    *(undefined1 *)(*param_1 + 0x569d8) =
         *(undefined1 *)(*(long *)(lVar13 + 0x85b8) + *(long *)(lVar13 + 0x85b0));
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x85d0) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x85d0) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    lVar13 = lVar10;
    if (*plVar17 == 0) {
      lVar13 = *(long *)(*(long *)puVar8 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x2ae60) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x2ae60), puVar11 == (undefined8 *)0x0)) {
      memcpy((void *)(*param_1 + 0x569e0),
             (void *)(*(long *)(lVar13 + 0x2ae48) + *(long *)(lVar13 + 0x2ae40)),0x6270);
    }
    else {
      uVar14 = (**(code **)*puVar11)();
      memcpy((void *)(*param_1 + 0x569e0),
             (void *)(*(long *)(lVar13 + 0x2ae48) + *(long *)(lVar13 + 0x2ae40)),0x6270);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x2ae60) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x2ae60) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    lVar13 = lVar10;
    if (*plVar17 == 0) {
      lVar13 = *(long *)(*(long *)puVar8 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x2ae98) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x2ae98), puVar11 == (undefined8 *)0x0)) {
      memcpy((void *)(*param_1 + 0x5cc50),
             (void *)(*(long *)(lVar13 + 0x2ae80) + *(long *)(lVar13 + 0x2ae78)),0x11f8);
    }
    else {
      uVar14 = (**(code **)*puVar11)();
      memcpy((void *)(*param_1 + 0x5cc50),
             (void *)(*(long *)(lVar13 + 0x2ae80) + *(long *)(lVar13 + 0x2ae78)),0x11f8);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x2ae98) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x2ae98) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    lVar13 = lVar10;
    if (*plVar17 == 0) {
      lVar13 = *(long *)(*(long *)puVar8 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x2aed0) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x2aed0), puVar11 == (undefined8 *)0x0)) {
      memcpy((void *)(*param_1 + 0x5de48),
             (void *)(*(long *)(lVar13 + 0x2aeb8) + *(long *)(lVar13 + 0x2aeb0)),800);
    }
    else {
      uVar14 = (**(code **)*puVar11)();
      memcpy((void *)(*param_1 + 0x5de48),
             (void *)(*(long *)(lVar13 + 0x2aeb8) + *(long *)(lVar13 + 0x2aeb0)),800);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x2aed0) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x2aed0) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    if (*plVar17 == 0) {
      lVar10 = *(long *)(*(long *)puVar8 + 0x20);
      plVar17 = *(long **)(lVar10 + 0x1170);
    }
    else {
      plVar17 = *(long **)(lVar15 + 0x1a620);
    }
    if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
      memcpy((void *)(*param_1 + 0x5e168),
             (void *)(*(long *)(lVar10 + 0x1158) + *(long *)(lVar10 + 0x1150)),0x208);
    }
    else {
      uVar14 = (*(code *)**(undefined8 **)*plVar17)();
      memcpy((void *)(*param_1 + 0x5e168),
             (void *)(*(long *)(lVar10 + 0x1158) + *(long *)(lVar10 + 0x1150)),0x208);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar10 + 0x1170) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x1170) + 8), puVar11 != (undefined8 *)0x0))
      {
        (**(code **)*puVar11)();
      }
    }
  }
  if (*(long *)puVar8 != 0) {
    lVar15 = *(long *)(*(long *)puVar8 + 0x10);
    if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 8), lVar15 != 0)) &&
       (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar11 == (undefined8 *)0x0)) {
        memcpy((void *)(*param_1 + 0xb568),
               (void *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8)),0x4b3a8);
      }
      else {
        uVar14 = (**(code **)*puVar11)();
        memcpy((void *)(*param_1 + 0xb568),
               (void *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8)),0x4b3a8);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar11 != (undefined8 *)0x0))
        {
          (**(code **)*puVar11)();
        }
      }
    }
    if (*(long *)puVar8 != 0) {
      lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar8 + 0x10) + 0x30))();
      lVar15 = 0;
      if (lVar10 != 0) {
        lVar15 = lVar10 + 0x276cb0;
      }
      if ((*(long **)(lVar15 + 0x370) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar15 + 0x370), puVar11 == (undefined8 *)0x0)) {
        memcpy((void *)(*param_1 + 0x56910),
               (void *)(*(long *)(lVar15 + 0x358) + *(long *)(lVar15 + 0x350)),200);
      }
      else {
        uVar14 = (**(code **)*puVar11)();
        memcpy((void *)(*param_1 + 0x56910),
               (void *)(*(long *)(lVar15 + 0x358) + *(long *)(lVar15 + 0x350)),200);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x370) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x370) + 8), puVar11 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar11)();
        }
      }
    }
  }
  return;
}

