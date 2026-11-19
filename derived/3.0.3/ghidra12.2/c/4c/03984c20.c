
undefined8 FUN_03984c20(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *__dest;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  void *local_520;
  undefined8 local_518;
  undefined **local_510;
  undefined **local_508;
  undefined4 local_500;
  undefined *local_4f8;
  undefined **local_4f0;
  void *pvStack_4e8;
  uint local_4e0;
  undefined4 uStack_4dc;
  undefined *local_4d8;
  long *local_4d0;
  long *local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined *local_498;
  undefined *local_490;
  undefined *local_480;
  undefined **local_478;
  undefined **ppuStack_470;
  undefined4 local_468;
  undefined *local_460;
  undefined **ppuStack_458;
  uint local_450;
  undefined *local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined1 local_408;
  uint local_404;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  local_498 = PTR_DAT_04bb2020 + 0x10;
  local_490 = PTR_DAT_04bb2120;
  plVar13 = param_3 + 6;
  (**(code **)(*plVar13 + 0x18))(plVar13);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  puVar3 = PTR_PTR_04bb2238;
  lVar14 = param_3[7];
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  if (lVar14 == *(long *)(puVar3 + 8)) {
LAB_03984d04:
    plVar13 = param_3 + 4;
    pcVar7 = "Save";
    if ((*(uint *)(param_1 + 0x60) & 1) != 0) {
      pcVar7 = "SaveAcceptReadOnlyFile";
    }
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcVar11 = (char *)param_3[5];
    if ((pcVar11 == "") || (*pcVar11 == '\0')) {
      pcVar11 = (char *)param_3[1];
    }
    (**(code **)(param_3[2] + 0x18))(param_3 + 2);
    lVar12 = param_3[3];
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar14 = param_3[1];
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = param_3[1];
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_006e9454(&local_480,&DAT_040a3348,lVar12,pcVar7,pcVar11,lVar14,lVar6,param_3[1]);
    uVar8 = 0;
    goto LAB_03984f84;
  }
  puVar15 = (undefined *)param_3[7];
  uVar9 = 0;
  bVar4 = true;
  do {
    if (puVar15[uVar9] != *(char *)(*(long *)(puVar3 + 8) + uVar9)) break;
    if (puVar15[uVar9] == '\0') {
      if (bVar4) goto LAB_03984d04;
      break;
    }
    bVar4 = uVar9 < 0x80000;
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x80001);
  local_490 = puVar15;
  if ((*(char *)((long)param_3 + 0x4c) == '\0') && ((*(uint *)(param_1 + 0x60) & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x60) >> 1 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 0x68) + 0x18))();
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      pcVar7 = "File = %s, Arg = %s, WaitEnd = True, WindowStyle = Hidden";
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(param_1 + 0x68);
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      pcVar7 = "File = %s, Arg = %s, WaitEnd = True, WindowStyle = Normal";
    }
    FUN_006e9454(&local_480,pcVar7,uVar8,puVar15);
  }
  puVar3 = PTR_DAT_04bb60d8;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4c8 = (long *)0x0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  plVar13 = *(long **)(param_1 + 8);
  local_4d8 = PTR_DAT_04bb60d8 + 0x10;
  local_4a0 = 0;
  local_4d0 = (long *)0x0;
  if ((char)plVar13[0xf] == '\0') {
LAB_03984f18:
    (**(code **)(local_498 + 0x18))(&local_498);
    FUN_006e9454(&local_480,&DAT_04074251,local_490);
    uVar8 = 0;
  }
  else {
    uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
    if ((uVar9 & 1) == 0) goto LAB_03984f18;
    local_4a0 = 0;
    plVar5 = (long *)(**(code **)(*plVar13 + 0x68))(plVar13,&local_4d8,&local_498,1);
    local_4d0 = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_03984f18;
    plVar16 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 0x58);
    lVar14 = *(long *)PTR_DAT_04bb2698;
    local_4c8 = plVar13;
    if (lVar14 == 0) {
      local_520 = malloc((ulong)param_4);
    }
    else {
      plVar13 = plVar16;
      if (plVar16 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar14 + 8);
        if (lVar6 != 0) {
          plVar13 = (long *)(lVar6 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          local_520 = (void *)0x0;
          goto LAB_03984fbc;
        }
      }
      local_520 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(ulong)param_4,0x40);
    }
LAB_03984fbc:
    plVar13 = local_4d0;
    ppuStack_458 = &local_4d8;
    local_468 = 1;
    local_480 = PTR_DAT_04bd0e18 + 0x10;
    local_460 = PTR_DAT_04bd0e10 + 0x10;
    if (local_4d0 == (long *)0x0) {
      plVar13 = (long *)0x0;
      local_450 = 0;
    }
    else {
      local_518 = (undefined *)((ulong)local_518 & 0xffffffff00000000);
      local_450 = (uint)*(byte *)(local_4d0 + 0xf);
      if (*(byte *)(local_4d0 + 0xf) != 0) {
        uVar9 = (**(code **)(*local_4d0 + 0x48))(local_4d0,&local_4d8);
        if ((uVar9 & 1) == 0) {
          local_450 = 0;
        }
        else {
          (**(code **)(*plVar13 + 0xa8))(plVar13,&local_518,&local_4d8);
          local_450 = (uint)local_518;
        }
      }
      plVar13 = local_4d0;
    }
    local_448 = puVar3 + 0x10;
    local_418 = 0;
    local_410 = 0;
    local_408 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    uStack_440 = 0;
    if (plVar13 == (long *)0x0) {
      local_404 = 0;
    }
    else {
      local_518 = (undefined *)((ulong)local_518._4_4_ << 0x20);
      local_404 = (uint)*(byte *)(plVar13 + 0xf);
      if (*(byte *)(plVar13 + 0xf) != 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13,&local_518,&local_4d8);
        local_404 = (uint)local_518;
      }
    }
    puVar15 = PTR_DAT_04bd0e08;
    local_508 = &local_4f8;
    uStack_4dc = 0;
    local_518 = PTR_DAT_04bd0e08 + 0x10;
    local_4f8 = PTR_DAT_04bd0df8 + 0x10;
    pvStack_4e8 = local_520;
    local_500 = 1;
    local_478 = &PTR_PTR_04c4b9a0;
    local_510 = &PTR_PTR_04c4b9a0;
    local_4f0 = &local_460;
    local_4e0 = param_4;
    ppuStack_470 = &local_460;
    FUN_038eb7d0(param_2,&local_518,plVar16,0,0);
    (**(code **)(*local_510 + 0xd8))(local_510,local_508);
    (**(code **)(*local_508 + 0x28))();
    if ((((char)plVar5[0xf] != '\0') &&
        (uVar9 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_4d8), (uVar9 & 1) != 0)) &&
       (uVar9 = (**(code **)(*plVar5 + 0x70))(plVar5,&local_4d8), (uVar9 & 1) != 0)) {
      local_4d0 = (long *)0x0;
      local_4c8 = (long *)0x0;
    }
    plVar13 = (long *)param_3[8];
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puVar10 = (undefined *)plVar13[1];
      (**(code **)(local_498 + 0x18))(&local_498);
      if (puVar10 != local_490) {
        lVar14 = param_3[8];
        __dest = *(undefined **)(lVar14 + 8);
        (**(code **)(local_498 + 0x18))(&local_498);
        puVar10 = local_490;
        if (__dest != local_490) {
          (**(code **)(local_498 + 0x18))(&local_498);
          lVar6 = 0;
          do {
            if (local_490[lVar6] == '\0') goto LAB_03985224;
            if (local_490[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_03985224;
            }
            if (local_490[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_03985224;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_03985224:
          iVar2 = *(int *)(lVar14 + 0x10);
          iVar1 = (int)lVar6;
          if (iVar2 <= (int)lVar6) {
            iVar1 = iVar2 + -1;
          }
          memcpy(__dest,puVar10,(long)iVar1);
          __dest[iVar1] = 0;
        }
      }
    }
    if (local_520 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_520);
      }
      else {
        plVar13 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_520);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x38))(plVar13,local_520);
        }
      }
    }
    local_518 = puVar15 + 0x10;
    (**(code **)(*local_510 + 0xd8))(local_510,local_508);
    (**(code **)(*local_508 + 0x28))();
    FUN_038df20c(&local_480);
    uVar8 = 1;
  }
  plVar13 = local_4c8;
  local_4d8 = puVar3 + 0x10;
  if (((local_4c8 != (long *)0x0) && ((char)local_4c8[0xf] != '\0')) &&
     (uVar9 = (**(code **)(*local_4c8 + 0x48))(local_4c8,&local_4d8), (uVar9 & 1) != 0)) {
    (**(code **)(*plVar13 + 0x70))(plVar13,&local_4d8);
  }
LAB_03984f84:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return uVar8;
}

