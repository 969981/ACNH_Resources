
void FUN_03384e14(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  puVar5 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x2148);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2148,8);
  }
  FUN_0338bd60();
  param_1[5] = pvVar9;
  FUN_0338cb70(pvVar9,param_2);
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    plVar8 = malloc(0x48);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x48,8);
  }
  *(undefined4 *)(plVar8 + 2) = 0;
  puVar1 = PTR_DAT_04bdf1d8;
  puVar4 = PTR_DAT_04bb5140;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar8[1] = 0;
  plVar8[5] = (long)(puVar1 + 0x10);
  plVar8[6] = 0;
  param_1[3] = plVar8;
  puVar4 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  local_90 = PTR_DAT_04bb2120;
  local_80 = "UILoad";
  local_78 = 0;
  local_a0 = param_2;
  local_88 = local_98;
  FUN_0082c840(plVar8,&local_a0);
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x1c8);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1c8,8);
  }
  FUN_0339a6b4();
  param_1[2] = pvVar9;
  puVar1 = PTR_DAT_04bb2808;
  plVar8 = *(long **)PTR_DAT_04bb2808;
  if (plVar8 == (long *)0x0) {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
      plVar8 = malloc(0x38);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar17 + 8);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_03385040;
        }
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
LAB_03385040:
    FUN_038c69f0(plVar8 + 3,param_2,3);
    puVar2 = PTR_DAT_04bc69b0;
    *(long **)PTR_DAT_04bc69b8 = plVar8 + 3;
    puVar6 = PTR_DAT_04bc69c0;
    plVar8[3] = (long)(puVar2 + 0x10);
    *(undefined4 *)(plVar8 + 2) = 0;
    *plVar8 = (long)(puVar6 + 0x10);
    plVar8[1] = 0;
    *(long **)puVar1 = plVar8;
  }
  puVar1 = PTR_DAT_04bb49e0;
  *param_1 = plVar8;
  lVar17 = *(long *)puVar1;
  if (*(long *)(lVar17 + 0x560) == 0) {
    lVar7 = *(long *)puVar5;
    if (lVar7 == 0) {
      plVar8 = malloc(0x20);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar7 + 8);
        if (lVar10 != 0) {
          puVar12 = (undefined8 *)(lVar10 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_03385100;
        }
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
    }
LAB_03385100:
    puVar1 = PTR_DAT_04bd0d40 + 0x10;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = (long)puVar1;
    plVar8[1] = 0;
    if (*(long *)puVar5 != 0) {
      lVar7 = FUN_038cb610(*(long *)puVar5,plVar8);
      plVar8[1] = lVar7;
      if (lVar7 != 0) {
        if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar7 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
        }
        plVar16 = (long *)(lVar7 + 0x70);
        lVar15 = *plVar16;
        plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)plVar8);
        *plVar16 = (long)plVar3;
        *plVar3 = lVar15;
        plVar3[1] = (long)plVar16;
        if (lVar15 != 0) {
          *(long **)(lVar15 + 8) = plVar3;
        }
        *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
        if (lVar10 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
        }
      }
    }
    *plVar8 = (long)(PTR_DAT_04bc5690 + 0x10);
    *(long **)(lVar17 + 0x560) = plVar8;
  }
  puVar1 = PTR_DAT_04bc69d8;
  if (*(long *)PTR_DAT_04bc69d8 == 0) {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
      plVar8 = malloc(0x30);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar17 + 8);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_03385208;
        }
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
LAB_03385208:
    FUN_038c69f0(plVar8 + 2,param_2,3);
    puVar2 = PTR_DAT_04bcb608 + 0x10;
    *(long **)PTR_DAT_04bcb610 = plVar8 + 2;
    plVar8[2] = (long)puVar2;
    *plVar8 = (long)(PTR_DAT_04bcb618 + 0x10);
    plVar8[1] = 0;
    *(long **)puVar1 = plVar8;
  }
  lVar17 = *(long *)(*(long *)(DAT_05739190 + 0x18) + 0x20);
  if (lVar17 != 0) {
    local_60 = puVar4 + 0x10;
    local_80 = (char *)(param_1[2] + 0x48);
    local_a0 = (long *)(PTR_DAT_04bb5070 + 0x10);
    local_90 = (undefined *)0x0;
    local_98 = (undefined *)CONCAT53((int5)((ulong)local_98 >> 0x18),0x10000);
    local_88 = *(undefined **)(*(long *)(DAT_05739190 + 0x18) + 8);
    local_68 = 0;
    local_78 = 0;
    local_70 = 0;
    local_58 = "Game::UI::ThreadMgr::createResidentAsHotReload";
    local_a8 = 0;
    pplStack_b0 = &local_a0;
    local_b8 = 0;
    FUN_03f45184(lVar17,&local_b8);
  }
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    puVar11 = malloc(0x10);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    puVar11 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,8);
  }
  *puVar11 = 0;
  *(undefined8 *)(puVar11 + 2) = 0;
  param_1[4] = puVar11;
  FUN_033da500(puVar11,&DAT_05747708,0x19);
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x11c8);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x11c8,8);
  }
  FUN_033b78a8();
  local_a0 = (long *)param_1[0x92];
  param_1[6] = pvVar9;
  FUN_033b9210(pvVar9,&local_a0);
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    puVar12 = malloc(0x1d0);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1d0,8);
  }
  *(undefined4 *)(puVar12 + 3) = 0;
  puVar12[0x1b] = puVar12 + 0x25;
  puVar12[0x11] = puVar12 + 0x1b;
  *puVar12 = &PTR_LAB_04b235c0;
  puVar12[0x2f] = 0;
  puVar13 = puVar12 + 7;
  *puVar13 = puVar12 + 0x11;
  puVar12[1] = puVar12 + 1;
  puVar12[2] = puVar12 + 1;
  puVar12[0x25] = puVar12 + 0x2f;
  *(undefined4 *)(puVar12 + 6) = 5;
  puVar12[4] = puVar13;
  puVar12[5] = puVar13;
  param_1[7] = puVar12;
  *(undefined1 *)(puVar12 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x82) = 1;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((long)param_1 + 0x28c) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)((long)param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((long)param_1 + 0x314) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  param_1[0x6b] = 0;
  puVar4 = PTR_DAT_04bc2fc8;
  lVar17 = *(long *)PTR_DAT_04bc2fc8;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  if (lVar17 == 0) {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
      puVar12 = malloc(0x38);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar17 + 8);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          puVar12 = (undefined8 *)0x0;
          goto LAB_03385524;
        }
      }
      puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
LAB_03385524:
    FUN_038c69f0(puVar12 + 3,param_2,3);
    *(undefined8 **)PTR_DAT_04bc9c28 = puVar12 + 3;
    puVar1 = PTR_DAT_04bc9c20 + 0x10;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = puVar1;
    *(undefined8 **)puVar4 = puVar12;
  }
  FUN_03397e58(param_2);
  puVar4 = PTR_DAT_04bc98b0;
  if (*(long *)PTR_DAT_04bc98b0 == 0) {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
      plVar8 = malloc(0x38);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar17 + 8);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_033855d4;
        }
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
LAB_033855d4:
    FUN_038c69f0(plVar8 + 3,param_2,3);
    puVar1 = PTR_DAT_04bc9cc8;
    *(long **)PTR_DAT_04bc9cd0 = plVar8 + 3;
    puVar2 = PTR_DAT_04bc9cd8;
    plVar8[3] = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar8 + 2) = 0;
    *plVar8 = (long)(puVar2 + 0x10);
    plVar8[1] = 0;
    *(long **)puVar4 = plVar8;
  }
  puVar4 = PTR_DAT_04bc98b8;
  if (*(long *)PTR_DAT_04bc98b8 == 0) {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
      plVar8 = malloc(0x38);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar12 = (undefined8 *)(lVar17 + 8);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar12;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_033856dc;
        }
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
LAB_033856dc:
    FUN_038c69f0(plVar8 + 3,param_2,3);
    puVar1 = PTR_DAT_04bc9bb8;
    *(long **)PTR_DAT_04bc9bc0 = plVar8 + 3;
    puVar2 = PTR_DAT_04bc9bc8;
    plVar8[3] = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar8 + 2) = 0;
    *plVar8 = (long)(puVar2 + 0x10);
    plVar8[1] = 0;
    *(long **)puVar4 = plVar8;
    lVar17 = *(long *)puVar5;
    if (lVar17 != 0) goto LAB_03385634;
LAB_0338572c:
    pvVar9 = malloc(0x2f50);
  }
  else {
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) goto LAB_0338572c;
LAB_03385634:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2f50,8);
  }
  FUN_03444c84();
  param_1[0x8a] = pvVar9;
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x60);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
  }
  FUN_03446068();
  param_1[0x8b] = pvVar9;
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x28);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x28,8);
  }
  FUN_033d4fa8();
  param_1[0x8c] = pvVar9;
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    puVar12 = malloc(8);
LAB_033858b0:
    puVar13 = malloc(0x1c);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
      if (plVar8 != (long *)0x0) goto LAB_03385844;
      puVar12 = (undefined8 *)0x0;
      lVar17 = *(long *)puVar5;
    }
    else {
LAB_03385844:
      puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,8,8);
      lVar17 = *(long *)puVar5;
    }
    if (lVar17 == 0) goto LAB_033858b0;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar13 = (undefined8 *)(lVar17 + 8);
    if (lVar7 != 0) {
      puVar13 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar13 = (undefined8 *)(**(code **)(*(long *)*puVar13 + 0x30))((long *)*puVar13,0x1c,8);
  }
  *(undefined1 *)(puVar13 + 3) = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar12 = puVar13;
  lVar17 = *(long *)puVar5;
  param_1[0x8d] = puVar12;
  if (lVar17 == 0) {
    pvVar9 = malloc(0x38);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
  FUN_033d5828();
  param_1[0x8e] = pvVar9;
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    puVar11 = malloc(8);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
      if (plVar8 == (long *)0x0) {
        puVar11 = (undefined4 *)0x0;
        goto LAB_03385990;
      }
    }
    puVar11 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,8,8);
  }
LAB_03385990:
  *puVar11 = 1;
  FUN_007ef010(puVar11 + 1,PTR_DAT_04bb3170);
  param_1[0x8f] = puVar11;
  lVar17 = *(long *)puVar5;
  if (lVar17 == 0) {
    puVar14 = malloc(1);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar12;
    }
    puVar14 = (undefined1 *)(**(code **)(*plVar8 + 0x30))(plVar8,1,8);
  }
  *puVar14 = 0;
  lVar17 = *(long *)puVar5;
  param_1[0x90] = puVar14;
  if (lVar17 == 0) {
    plVar8 = malloc(0x18);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar17 + 8);
      if (lVar7 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar12;
    }
    plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
  }
  puVar5 = PTR_DAT_04bc98d0;
  *(undefined4 *)(plVar8 + 1) = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  param_1[0x9f] = plVar8;
  return;
}

