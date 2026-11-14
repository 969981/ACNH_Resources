
void FUN_01d986d8(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *__ptr;
  long *plVar13;
  byte local_60 [4];
  byte local_5c [4];
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = &DAT_0548e140;
  if (lVar12 == 0) {
LAB_01d98750:
    if (*pbVar8 < 8) goto LAB_01d987c8;
LAB_01d9875c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01d987c0:
      pbVar8 = &DAT_0548e168;
      goto LAB_01d987c8;
    }
    lVar12 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar12 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar12 + 0x471);
      }
    }
    local_5c[0] = *pbVar8;
    if (7 < local_5c[0]) goto LAB_01d987c0;
  }
  else {
    pbVar8 = &DAT_0548e140;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d98750;
      }
      goto LAB_01d9875c;
    }
LAB_01d987c8:
    local_5c[0] = *pbVar8;
    if (7 < local_5c[0]) {
      local_5c[0] = 0xff;
    }
  }
  local_60[0] = local_5c[0];
  if (7 < local_5c[0]) {
    local_60[0] = 0xff;
  }
  lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_60,1);
  if (lVar12 != 0) {
    lVar11 = lVar12 + 0x194b0;
    plVar13 = (long *)(lVar12 + 0x194b8);
    lVar9 = lVar11;
    if (*plVar13 == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar7 = (long *)(lVar9 + 0x8540);
    lVar10 = *(long *)(lVar9 + 0x8560);
    if (lVar10 == 0) {
      memcpy((void *)(*(long *)(lVar9 + 0x8548) + *plVar7),(void *)*param_1,0xb548);
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar10 + 0x20);
joined_r0x01d98d34:
        if (plVar5 != (long *)0x0) {
          local_58 = (undefined *)*plVar7;
          local_50 = *(char **)(lVar9 + 0x8548);
          local_48 = 0xb548;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar9 + 0x8560) != 0) {
          plVar5 = *(long **)(*(long *)(lVar9 + 0x8560) + 0x20);
          goto joined_r0x01d98d34;
        }
      }
      memcpy((void *)(*(long *)(lVar9 + 0x8548) + *plVar7),(void *)*param_1,0xb548);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x8560) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x8560) + 0x18), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "FriendListNotifyLook";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb548));
    local_50 = "FriendListNotifyUpdate";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb549));
    local_50 = "Mobile1stBoot_Camera";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54a));
    local_50 = "Mobile1stBoot_BestFriend";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54b));
    local_50 = "Mobile1stBoot_ChatLog";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54c));
    local_50 = "Mobile1stBoot_Map";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54d));
    local_50 = "Mobile1stBoot_SOS";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54e));
    local_50 = "EmergencyEscapeExplain";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb54f));
    local_50 = "AppUrgentEscapeUseToday";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb550));
    local_50 = "AppUrgentEscapeNoPayment";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb551));
    local_50 = "AppUrgentEscapeCallToday";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb552));
    local_50 = "AppUrgentEscapeMobCounter";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb553));
    local_50 = "AppUrgentEscapeTodayShiftMob";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb554));
    local_50 = "Mobile1stBoot_Mydesign";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb555));
    local_50 = "Mobile1stBootAfterUnlockPro_Mydesign";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb556));
    local_50 = "Mobile1stBootUnlockCantEditMydesign";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb557));
    local_50 = "UnlockMyDesignProCategory";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb558));
    local_50 = "KinuyoPROdesginFlag";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb559));
    local_50 = "TapFirstDreamIn";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55a));
    local_50 = "TapFirstCheckMydesingShowcase";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55b));
    local_50 = "TapUnlockFavorite";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55c));
    local_50 = "Mobile1stBoot_Camera_UnlockKeyGuideOff";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55d));
    local_50 = "ExplainMydesignPro2";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55e));
    local_50 = "Mobile1stBoot_MydesignShowcase";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb55f));
    local_50 = "Mobile1stBoot_MydesignPatternPlus";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb560));
    local_50 = "TapUnlockSearchByIslandName";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb561));
    local_50 = "NoticeAboutPMovinghTapDream";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb562));
    local_50 = "Mobile1stBoot_Camera1stPersonView";
    local_58 = puVar1;
    FUN_0274bfe8(local_5c,&local_58,*(undefined1 *)(*param_1 + 0xb563));
    lVar9 = lVar11;
    if (*plVar13 == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    lVar10 = *(long *)(lVar9 + 0x85d0);
    if (lVar10 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar7 = *(long **)(lVar10 + 0x20);
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar9 + 0x85d0) == 0) goto LAB_01d98d6c;
        plVar7 = *(long **)(*(long *)(lVar9 + 0x85d0) + 0x20);
      }
      if (plVar7 != (long *)0x0) {
        local_58 = *(undefined **)(lVar9 + 0x85b0);
        local_50 = *(char **)(lVar9 + 0x85b8);
        local_48 = 1;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
      }
    }
LAB_01d98d6c:
    *(undefined1 *)(*(long *)(lVar9 + 0x85b8) + *(long *)(lVar9 + 0x85b0)) =
         *(undefined1 *)(*param_1 + 0x569d8);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x85d0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x85d0) + 0x18), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    lVar9 = lVar11;
    if (*plVar13 == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar7 = (long *)(lVar9 + 0x2ae40);
    lVar10 = *(long *)(lVar9 + 0x2ae60);
    if (lVar10 == 0) {
      memcpy((void *)(*(long *)(lVar9 + 0x2ae48) + *plVar7),(void *)(*param_1 + 0x569e0),0x6270);
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar10 + 0x20);
joined_r0x01d9912c:
        if (plVar5 != (long *)0x0) {
          local_58 = (undefined *)*plVar7;
          local_50 = *(char **)(lVar9 + 0x2ae48);
          local_48 = 0x6270;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar9 + 0x2ae60) != 0) {
          plVar5 = *(long **)(*(long *)(lVar9 + 0x2ae60) + 0x20);
          goto joined_r0x01d9912c;
        }
      }
      memcpy((void *)(*(long *)(lVar9 + 0x2ae48) + *plVar7),(void *)(*param_1 + 0x569e0),0x6270);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x2ae60) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2ae60) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
    lVar9 = lVar11;
    if (*plVar13 == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar7 = (long *)(lVar9 + 0x2ae78);
    lVar10 = *(long *)(lVar9 + 0x2ae98);
    if (lVar10 == 0) {
      memcpy((void *)(*(long *)(lVar9 + 0x2ae80) + *plVar7),(void *)(*param_1 + 0x5cc50),0x11f8);
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar10 + 0x20);
joined_r0x01d9913c:
        if (plVar5 != (long *)0x0) {
          local_58 = (undefined *)*plVar7;
          local_50 = *(char **)(lVar9 + 0x2ae80);
          local_48 = 0x11f8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar9 + 0x2ae98) != 0) {
          plVar5 = *(long **)(*(long *)(lVar9 + 0x2ae98) + 0x20);
          goto joined_r0x01d9913c;
        }
      }
      memcpy((void *)(*(long *)(lVar9 + 0x2ae80) + *plVar7),(void *)(*param_1 + 0x5cc50),0x11f8);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x2ae98) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2ae98) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
    lVar9 = lVar11;
    if (*plVar13 == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar7 = (long *)(lVar9 + 0x2aeb0);
    lVar10 = *(long *)(lVar9 + 0x2aed0);
    if (lVar10 == 0) {
      memcpy((void *)(*(long *)(lVar9 + 0x2aeb8) + *plVar7),(void *)(*param_1 + 0x5de48),800);
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar10 + 0x20);
joined_r0x01d9914c:
        if (plVar5 != (long *)0x0) {
          local_58 = (undefined *)*plVar7;
          local_50 = *(char **)(lVar9 + 0x2aeb8);
          local_48 = 800;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar9 + 0x2aed0) != 0) {
          plVar5 = *(long **)(*(long *)(lVar9 + 0x2aed0) + 0x20);
          goto joined_r0x01d9914c;
        }
      }
      memcpy((void *)(*(long *)(lVar9 + 0x2aeb8) + *plVar7),(void *)(*param_1 + 0x5de48),800);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x2aed0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2aed0) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
    if (*plVar13 == 0) {
      lVar11 = *(long *)(DAT_05574040 + 0x20);
      lVar12 = *(long *)(lVar11 + 0x1170);
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x1a620);
    }
    if (lVar12 == 0) {
      memcpy((void *)(*(long *)(lVar11 + 0x1158) + *(long *)(lVar11 + 0x1150)),
             (void *)(*param_1 + 0x5e168),0x208);
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar13 = *(long **)(lVar12 + 0x20);
joined_r0x01d9915c:
        if (plVar13 != (long *)0x0) {
          local_58 = *(undefined **)(lVar11 + 0x1150);
          local_50 = *(char **)(lVar11 + 0x1158);
          local_48 = 0x208;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar11 + 0x1170) != 0) {
          plVar13 = *(long **)(*(long *)(lVar11 + 0x1170) + 0x20);
          goto joined_r0x01d9915c;
        }
      }
      memcpy((void *)(*(long *)(lVar11 + 0x1158) + *(long *)(lVar11 + 0x1150)),
             (void *)(*param_1 + 0x5e168),0x208);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x1170) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x1170) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
  }
  if (DAT_05574040 == 0) goto LAB_01d992dc;
  if (((*(long *)(DAT_05574040 + 0x10) != 0) &&
      (lVar12 = *(long *)(*(long *)(DAT_05574040 + 0x10) + 8), lVar12 != 0)) &&
     (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar11 = *(long *)(lVar12 + 0x28);
    if (lVar11 == 0) {
      memcpy((void *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8)),(void *)(*param_1 + 0xb568),
             0x4b3a8);
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
LAB_01d9918c:
        plVar13 = *(long **)(lVar11 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_58 = *(undefined **)(lVar12 + 8);
          local_50 = *(char **)(lVar12 + 0x10);
          local_48 = 0x4b3a8;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        lVar11 = *(long *)(lVar12 + 0x28);
        uVar4 = uVar4 & 0xffffffff;
        if (lVar11 != 0) goto LAB_01d9918c;
      }
      memcpy((void *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8)),(void *)(*param_1 + 0xb568),
             0x4b3a8);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
  }
  if (DAT_05574040 == 0) goto LAB_01d992dc;
  lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  lVar12 = 0;
  if (lVar11 != 0) {
    lVar12 = lVar11 + 0x276cb0;
  }
  lVar11 = *(long *)(lVar12 + 0x370);
  if (lVar11 == 0) {
    memcpy((void *)(*(long *)(lVar12 + 0x358) + *(long *)(lVar12 + 0x350)),
           (void *)(*param_1 + 0x56910),200);
    goto LAB_01d992dc;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar13 = *(long **)(lVar11 + 0x20);
joined_r0x01d9935c:
    if (plVar13 != (long *)0x0) {
      local_58 = *(undefined **)(lVar12 + 0x350);
      local_50 = *(char **)(lVar12 + 0x358);
      local_48 = 200;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
    }
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar12 + 0x370) != 0) {
      plVar13 = *(long **)(*(long *)(lVar12 + 0x370) + 0x20);
      goto joined_r0x01d9935c;
    }
  }
  memcpy((void *)(*(long *)(lVar12 + 0x358) + *(long *)(lVar12 + 0x350)),
         (void *)(*param_1 + 0x56910),200);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar12 + 0x370) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x370) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_01d992dc:
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    FUN_027c10a4((long)__ptr + 0x56974);
    FUN_027c10a4((long)__ptr + 0x56910);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar13 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13,__ptr);
      }
    }
  }
  *param_1 = 0;
  return;
}

