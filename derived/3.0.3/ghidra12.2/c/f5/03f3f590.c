
bool FUN_03f3f590(long param_1)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined1 *local_3a0;
  undefined8 local_398;
  undefined1 local_390 [256];
  undefined *local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_17d;
  ulong local_78;
  uint local_6c [3];
  
  local_390[0] = 0;
  bVar3 = *(byte *)(param_1 + 9);
  local_3a0 = local_390;
  local_398 = 0x10000000000;
  (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(param_1 + 0x360);
  puVar12 = local_3a0;
  lVar19 = 0;
  do {
    pcVar1 = (char *)((long)*(void **)(param_1 + 0x368) + lVar19);
    lVar19 = lVar19 + 1;
  } while (*pcVar1 != '\0');
  if (-1 < (int)local_398) {
    uVar17 = (int)lVar19 - 1;
    if (local_398._4_4_ <= (int)uVar17) {
      uVar17 = local_398._4_4_ - 1;
    }
    if (0 < (int)uVar17) {
      memcpy(local_3a0,*(void **)(param_1 + 0x368),(ulong)uVar17);
      puVar12[uVar17] = 0;
      if (-1 < (int)local_398) {
        local_398 = CONCAT44(local_398._4_4_,uVar17);
      }
    }
  }
  puVar9 = PTR_DAT_04bb49b8;
  if ((bVar3 & 0x18) != 0) {
    FUN_03f34470(*(undefined8 *)PTR_DAT_04bb49b8,&local_3a0);
  }
  plVar21 = *(long **)(param_1 + 0x348);
  *(undefined1 **)(param_1 + 0x310) = local_3a0;
  plVar20 = plVar21;
  if (plVar21 == (long *)0x0) {
    plVar20 = (long *)(*(long *)puVar9 + 0x5f0);
    *(long **)(param_1 + 0x348) = plVar20;
  }
  puVar11 = PTR_DAT_04bd0bf0;
  if (((*PTR_DAT_04bd0bf0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bd0be8 = PTR_DAT_04bc3650 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0bf0);
  }
  puVar10 = PTR_DAT_04bd0be8;
  uVar14 = (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bd0be8);
  if (((uVar14 & 1) != 0) && ((*(byte *)(param_1 + 0xc) >> 6 & 1) != 0)) {
    *(undefined8 *)(param_1 + 800) = 0;
  }
  plVar20 = *(long **)(param_1 + 0x348);
  if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar13 != 0)) {
    *(undefined **)puVar10 = PTR_DAT_04bc3650 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0bf0);
  }
  lVar19 = param_1 + 0x308;
  if (((plVar20 != (long *)0x0) &&
      (uVar14 = (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bd0be8), (uVar14 & 1) != 0)) &&
     (*(long *)(param_1 + 0x70) != 0)) {
    plVar20[0x10] = *(long *)(param_1 + 0x70);
  }
  puVar8 = PTR_DAT_04bb28c8;
  puVar7 = PTR_DAT_04bb2840;
  puVar6 = PTR_DAT_04bb2130;
  bVar3 = *(byte *)(param_1 + 9);
  if ((bVar3 & 0x18) == 0) {
    lVar23 = *(long *)(param_1 + 0x348);
    lVar22 = *(long *)(*(long *)PTR_DAT_04bb2130 + 0x20);
    puVar15 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)PTR_DAT_04bb28c8,lVar19);
    bVar3 = *puVar7;
    if (lVar23 == lVar22) {
      if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
      if (puVar15 != (undefined8 *)0x0) goto LAB_03f3f7dc;
LAB_03f3f96c:
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_03f3f82c;
    }
    if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2840);
    }
    if (puVar15 == (undefined8 *)0x0) goto LAB_03f3f96c;
LAB_03f3f7dc:
    uVar14 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb2838);
    if ((uVar14 & 1) == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    if (puVar15 == (undefined8 *)0x0) goto LAB_03f3f82c;
  }
  else {
    lVar22 = *(long *)puVar9;
    uVar17 = bVar3 >> 3 & 2;
    if ((bVar3 & 8) != 0) {
      uVar17 = 1;
    }
    local_290 = (undefined *)CONCAT44(local_290._4_4_,uVar17);
    nn::os::LockMutex((MutexType *)(lVar22 + 0x2a0));
    if (((int)local_290 == 2) || ((int)local_290 != 1)) {
      puVar15 = (undefined8 *)(lVar22 + 0x278);
    }
    else {
      puVar15 = (undefined8 *)(lVar22 + 0x270);
    }
    lVar23 = *(long *)(param_1 + 0x348);
    lVar22 = *(long *)(*(long *)puVar6 + 0x20);
    puVar15 = (undefined8 *)FUN_038da030(*(undefined8 *)puVar8,lVar19,PTR_PTR_04bb2238,*puVar15);
    bVar3 = *puVar7;
    if (lVar23 == lVar22) {
      if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
      if (puVar15 != (undefined8 *)0x0) goto LAB_03f3f788;
LAB_03f3f810:
      puVar15 = (undefined8 *)0x0;
    }
    else {
      if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_03f3f810;
LAB_03f3f788:
      uVar14 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb2838);
      if ((uVar14 & 1) == 0) {
        puVar15 = (undefined8 *)0x0;
      }
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    nn::os::UnlockMutex((MutexType *)(*(long *)puVar9 + 0x2a0));
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_03f3f82c:
      local_78 = local_78 & 0xffffffffffffff00;
      local_288 = (undefined *)((long)&local_280 + 4);
      local_17d = 0;
      local_280 = CONCAT35(local_280._5_3_,0x100);
      local_290 = PTR_DAT_04bb21f8 + 0x10;
      FUN_038b6870(&local_290,lVar19);
      plVar20 = *(long **)(param_1 + 0x348);
      if ((char)plVar20[0xf] != '\0') {
        (**(code **)(*plVar20 + 0xc0))(plVar20,&local_78,&local_290);
      }
      if ((char)local_78 == '\0') {
        plVar20 = *(long **)(param_1 + 0x348);
        if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar13 != 0))
        {
          *(undefined **)puVar10 = PTR_DAT_04bc3650 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd0bf0);
        }
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bd0be8);
        }
        uVar17 = *(uint *)(param_1 + 0xc) | 0x100;
LAB_03f3f9e4:
        *(uint *)(param_1 + 0xc) = uVar17;
      }
      else {
        bVar3 = *(byte *)(param_1 + 9);
        local_6c[0] = 0;
        if ((bVar3 & 0x18) == 0) {
          plVar20 = *(long **)(param_1 + 0x348);
          if (((char)plVar20[0xf] != '\0') &&
             (uVar14 = (**(code **)(*plVar20 + 0xb0))(plVar20,local_6c,lVar19), (uVar14 & 1) != 0))
          {
            if (local_6c[0] != 0) goto LAB_03f3f8f0;
LAB_03f3f9dc:
            uVar17 = *(uint *)(param_1 + 0xc) | 0x200;
            goto LAB_03f3f9e4;
          }
        }
        else {
          uVar17 = bVar3 >> 3 & 2;
          local_280 = *(undefined8 *)(param_1 + 0x310);
          if ((bVar3 & 8) != 0) {
            uVar17 = 1;
          }
          local_290 = (undefined *)CONCAT44(local_290._4_4_,uVar17);
          local_278 = *(undefined8 *)(param_1 + 0x348);
          local_78 = 0;
          local_288 = PTR_DAT_04bb2020 + 0x10;
          uVar14 = FUN_03f36560(*(undefined8 *)puVar9,&local_78,&local_290);
          if ((uVar14 & 1) != 0) {
            local_6c[0] = (uint)local_78;
            if ((uint)local_78 == 0) goto LAB_03f3f9dc;
LAB_03f3f8f0:
            uVar14 = (**(code **)(**(long **)(param_1 + 800) + 0x80))(*(long **)(param_1 + 800),8);
            if (uVar14 < local_6c[0]) {
              uVar17 = 0x2000;
              if (*(long *)(param_1 + 0x88) != 0) {
                uVar17 = 0x800;
              }
              *(uint *)(param_1 + 0xc) = uVar17 | *(uint *)(param_1 + 0xc);
              (**(code **)(*(long *)(param_1 + 0x308) + 0x18))(lVar19);
              FUN_0156b428(&local_290,&DAT_040e1c8b,*(undefined8 *)(param_1 + 0x310),uVar14,
                           local_6c[0]);
            }
            else {
              plVar20 = *(long **)(param_1 + 0x340);
              if (((*PTR_DAT_04bb4488 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar13 != 0)) {
                *(undefined **)PTR_DAT_04bb4480 = PTR_DAT_04bb4490 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb4488);
              }
              if ((plVar20 != (long *)0x0) &&
                 (uVar14 = (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bb4480),
                 (uVar14 & 1) != 0)) {
                uVar14 = (**(code **)(**(long **)(param_1 + 0x318) + 0x80))
                                   (*(long **)(param_1 + 0x318),8);
                uVar16 = (**(code **)(*plVar20 + 0x40))(plVar20);
                if (uVar14 < (uVar16 & 0xffffffff)) {
                  uVar17 = *(uint *)(param_1 + 0xc) | 0x2000;
                  goto LAB_03f3f9e4;
                }
              }
              if ((*(byte *)(param_1 + 0xc) >> 5 & 1) == 0) {
                iVar13 = (**(code **)(**(long **)(param_1 + 0x348) + 0xf0))();
                if (0 < iVar13) {
                  FUN_03f3ee30(param_1);
                }
                if (*(long *)(param_1 + 0x30) == 0) {
                  uVar17 = *(uint *)(param_1 + 0xc) | 0x4000;
                  goto LAB_03f3f9e4;
                }
              }
            }
          }
        }
      }
    }
  }
  if (plVar21 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x60) == 0) {
      if (*(long *)(param_1 + 0x48) != 0) goto LAB_03f3fa34;
    }
    else {
      FUN_03f45838(param_1 + 0x50);
      if (*(long *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0xe;
      }
      else {
LAB_03f3fa34:
        if (*(long *)puVar9 != 0) {
          FUN_03f350f4(*(long *)puVar9,param_1 + 0x38);
        }
      }
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bb4458 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
LAB_03f3fa8c:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_03f3faa4;
    FUN_03f3e038(param_1);
    uVar18 = 8;
  }
  else {
    uVar14 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb4450);
    if ((uVar14 & 1) == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    if (puVar15 == (undefined8 *)0x0) goto LAB_03f3fa8c;
LAB_03f3faa4:
    if (puVar15 != (undefined8 *)0x0) {
      if (*(long *)(param_1 + 0x78) != 0) {
        puVar15[4] = *(long *)(param_1 + 0x78);
      }
      *(undefined4 *)(param_1 + 0x10) = 8;
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
      goto LAB_03f3fb00;
    }
    if ((*(byte *)(param_1 + 0xe) >> 3 & 1) != 0) {
      piVar2 = (int *)(param_1 + 0x90);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
    }
    uVar18 = 9;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar18;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
LAB_03f3fb00:
  return *(int *)(param_1 + 0x10) == 8;
}

