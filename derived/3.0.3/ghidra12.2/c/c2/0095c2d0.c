
void FUN_0095c2d0(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  char *pcVar19;
  uint uVar20;
  undefined *local_110;
  char *pcStack_108;
  undefined *local_100;
  char *local_f8;
  int local_f0;
  char local_ec [63];
  undefined1 local_ad;
  undefined1 local_6d;
  
  puVar17 = PTR_DAT_04bb2110;
  if (*(int *)(*(long *)PTR_DAT_04bb2110 + 8) == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  }
  pMVar1 = (MutexType *)(plVar15 + 0x4d);
  lVar16 = param_1 + 0x468;
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar15 + 0x38))(plVar15,lVar16);
  nn::os::UnlockMutex(pMVar1);
  *(undefined1 *)(param_1 + 0x540) = 0;
  puVar2 = PTR_DAT_04bb2020;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_100 = PTR_DAT_04bb2020 + 0x10;
    local_f8 = "TapIndoorSelectCloudIsland";
    iVar6 = FUN_02743000(&local_100);
    if ((iVar6 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
      *(undefined1 *)(param_1 + 0x540) = 1;
      local_100 = puVar2 + 0x10;
      local_f8 = &DAT_040f911f;
      plVar9 = (long *)FUN_038c6d48(0x10d00,&local_100,0,8,1,0);
      *(long **)(param_1 + 0x528) = plVar9;
      lVar18 = *(long *)PTR_DAT_04bb2698;
      if (lVar18 == 0) {
        puVar11 = malloc(0x10508);
        puVar2 = PTR_DAT_04bb2d88;
        puVar4 = PTR_DAT_04bdf0c8;
        puVar5 = PTR_DAT_04bdf1d8;
joined_r0x0095c440:
        PTR_DAT_04bb2d88 = puVar2;
        PTR_DAT_04bdf0c8 = puVar4;
        PTR_DAT_04bdf1d8 = puVar5;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = 0x120;
          puVar14 = puVar11 + 1;
          do {
            *puVar14 = 0;
            *(undefined1 *)(puVar14 + 1) = 0;
            *(undefined1 *)((long)puVar14 + 100) = 0;
            puVar14[2] = puVar4 + 0x10;
            *(undefined1 *)(puVar14 + 3) = 1;
            *(undefined4 *)((long)puVar14 + 0x1c) = 0;
            puVar14[8] = 0;
            *(undefined4 *)(puVar14 + 9) = 0xffffffff;
            *(undefined4 *)(puVar14 + 0xc) = 0x80;
            *(undefined1 *)((long)puVar14 + 0xe3) = 0;
            puVar14[4] = 0;
            puVar14[5] = puVar5 + 0x10;
            puVar14[6] = 0;
            puVar14[7] = 0;
            puVar14[10] = puVar2 + 0x10;
            puVar14[0xb] = (undefined1 *)((long)puVar14 + 100);
            puVar14 = puVar14 + 0x1d;
          } while (puVar14 != puVar11 + 0x20a1);
          *(undefined4 *)(param_1 + 0x530) = 0x120;
          *(undefined8 **)(param_1 + 0x538) = puVar11 + 1;
        }
      }
      else {
        if (plVar9 != (long *)0x0) {
LAB_0095c41c:
          puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x10508,8);
          puVar2 = PTR_DAT_04bb2d88;
          puVar4 = PTR_DAT_04bdf0c8;
          puVar5 = PTR_DAT_04bdf1d8;
          goto joined_r0x0095c440;
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar18 + 8);
        if (lVar10 != 0) {
          plVar9 = (long *)(lVar10 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) goto LAB_0095c41c;
      }
      (**(code **)(**(long **)(param_1 + 0x528) + 0x28))();
      lVar18 = *(long *)puVar17;
      if (((*(int *)(lVar18 + 8) != 0) &&
          (plVar9 = (long *)**(undefined8 **)(lVar18 + 0x10), plVar9 != (long *)0x0)) &&
         (uVar13 = *(uint *)(param_1 + 0x530), 0 < (int)uVar13)) {
        uVar20 = 0;
        do {
          lVar18 = *(long *)(param_1 + 0x538);
          uVar3 = uVar20;
          if (uVar13 <= uVar20) {
            uVar3 = 0;
          }
          nn::os::LockMutex((MutexType *)(plVar9 + 0x4d));
          (**(code **)(*plVar9 + 0x38))(plVar9,lVar18 + (ulong)uVar3 * 0xe8);
          nn::os::UnlockMutex((MutexType *)(plVar9 + 0x4d));
          uVar13 = uVar20;
          if (*(uint *)(param_1 + 0x530) <= uVar20) {
            uVar13 = 0;
          }
          uVar20 = uVar20 + 1;
          **(undefined1 **)(*(long *)(param_1 + 0x538) + (ulong)uVar13 * 0xe8 + 0x58) = 0;
          uVar13 = *(uint *)(param_1 + 0x530);
        } while ((int)uVar20 < (int)uVar13);
      }
    }
  }
  puVar2 = PTR_DAT_04bb2720;
  lVar18 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xc) == iVar6) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_f8 = "IdrTourCounterDemo_pbc";
    local_100 = puVar2;
    nn::os::LockMutex(pMVar1);
    (**(code **)(*plVar15 + 0x30))(plVar15,lVar16,&local_100,PTR_PTR_04bb2238);
    nn::os::UnlockMutex(pMVar1);
    *(undefined1 *)(param_1 + 0x540) = 1;
    local_f8 = &DAT_040868a7;
    local_100 = puVar2;
    plVar15 = (long *)FUN_038c6d48(0x10d00,&local_100,0,8,1,0);
    *(long **)(param_1 + 0x528) = plVar15;
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      puVar11 = malloc(0x10508);
      puVar2 = PTR_DAT_04bb2d88;
      puVar4 = PTR_DAT_04bdf0c8;
      puVar5 = PTR_DAT_04bdf1d8;
    }
    else {
      if (plVar15 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar16 + 8);
        if (lVar18 != 0) {
          plVar15 = (long *)(lVar18 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_0095c7ec;
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x10508,8);
      puVar2 = PTR_DAT_04bb2d88;
      puVar4 = PTR_DAT_04bdf0c8;
      puVar5 = PTR_DAT_04bdf1d8;
    }
    PTR_DAT_04bb2d88 = puVar2;
    PTR_DAT_04bdf0c8 = puVar4;
    PTR_DAT_04bdf1d8 = puVar5;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0x120;
      puVar14 = puVar11 + 1;
      do {
        *puVar14 = 0;
        *(undefined1 *)(puVar14 + 1) = 0;
        *(undefined1 *)((long)puVar14 + 100) = 0;
        puVar14[2] = puVar4 + 0x10;
        *(undefined1 *)(puVar14 + 3) = 1;
        *(undefined4 *)((long)puVar14 + 0x1c) = 0;
        puVar14[8] = 0;
        *(undefined4 *)(puVar14 + 9) = 0xffffffff;
        *(undefined4 *)(puVar14 + 0xc) = 0x80;
        *(undefined1 *)((long)puVar14 + 0xe3) = 0;
        puVar14[4] = 0;
        puVar14[5] = puVar5 + 0x10;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[10] = puVar2 + 0x10;
        puVar14[0xb] = (undefined1 *)((long)puVar14 + 100);
        puVar14 = puVar14 + 0x1d;
      } while (puVar14 != puVar11 + 0x20a1);
      *(undefined4 *)(param_1 + 0x530) = 0x120;
      *(undefined8 **)(param_1 + 0x538) = puVar11 + 1;
    }
LAB_0095c7ec:
    (**(code **)(**(long **)(param_1 + 0x528) + 0x28))();
    lVar16 = *(long *)puVar17;
    if (*(int *)(lVar16 + 8) == 0) {
      return;
    }
    plVar15 = (long *)**(undefined8 **)(lVar16 + 0x10);
    if (plVar15 == (long *)0x0) {
      return;
    }
    uVar13 = *(uint *)(param_1 + 0x530);
    if ((int)uVar13 < 1) {
      return;
    }
    uVar20 = 0;
    do {
      lVar16 = *(long *)(param_1 + 0x538);
      uVar3 = uVar20;
      if (uVar13 <= uVar20) {
        uVar3 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar15 + 0x4d));
      (**(code **)(*plVar15 + 0x38))(plVar15,lVar16 + (ulong)uVar3 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar15 + 0x4d));
      uVar13 = uVar20;
      if (*(uint *)(param_1 + 0x530) <= uVar20) {
        uVar13 = 0;
      }
      uVar20 = uVar20 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x538) + (ulong)uVar13 * 0xe8 + 0x58) = 0;
      uVar13 = *(uint *)(param_1 + 0x530);
    } while ((int)uVar20 < (int)uVar13);
    return;
  }
  lVar18 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar4 + 0x10) == iVar6) {
    local_100 = PTR_DAT_04bb2020 + 0x10;
    local_f8 = "IdrAirPort00_pbc";
    goto LAB_0095cedc;
  }
  lVar18 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar4 + 0x14) == iVar6) {
    local_ec[0] = '\0';
    local_f0 = 0x40;
    lVar18 = 0;
    local_ad = 0;
    local_100 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      if (local_ec[lVar18] == '\0') goto LAB_0095ca10;
      if (local_ec[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0095ca10;
      }
      if (local_ec[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0095ca10;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0095ca10:
    uVar13 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
    uVar20 = 10;
    if (0x35 < uVar13) {
      uVar20 = 0x3f - uVar13;
    }
    local_f8 = local_ec;
    if (0 < (int)uVar20) {
      memcpy(local_ec + uVar13,"IdrMarket0",(ulong)uVar20);
      local_ec[(ulong)uVar20 + (ulong)uVar13] = '\0';
    }
    iVar6 = FUN_017ba560();
    local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar6);
    FUN_038d13f0(&local_100,&DAT_040c7be9,iVar6 + -1);
    pcVar19 = local_f8;
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar18 = 0;
    do {
      if (local_f8[lVar18] == '\0') goto LAB_0095ce98;
      if (local_f8[lVar18 + 1] == '\0') goto LAB_0095ce8c;
      if (local_f8[lVar18 + 2] == '\0') goto LAB_0095ce94;
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
LAB_0095caac:
    lVar18 = 0;
    goto LAB_0095ce98;
  }
  lVar18 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar4 + 0x8c) == iVar6) {
    local_ec[0] = '\0';
    local_f0 = 0x80;
    lVar18 = 0;
    local_6d = 0;
    local_100 = PTR_DAT_04bb2d88 + 0x10;
    do {
      if (local_ec[lVar18] == '\0') goto LAB_0095cba0;
      if (local_ec[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0095cba0;
      }
      if (local_ec[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0095cba0;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0095cba0:
    uVar13 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
    uVar20 = 0xd;
    if (0x72 < uVar13) {
      uVar20 = 0x7f - uVar13;
    }
    local_f8 = local_ec;
    if (0 < (int)uVar20) {
      memcpy(local_ec + uVar13,"IdrMuseumArt_",(ulong)uVar20);
      local_ec[(ulong)uVar20 + (ulong)uVar13] = '\0';
    }
    lVar18 = *(long *)puVar2;
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
LAB_0095cc40:
      uVar8 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar6 = FUN_006bd550(*puVar11,0);
      uVar8 = 0;
      if (iVar6 == 0x758f7eaf) {
        if ((*(long *)puVar2 == 0) || (lVar18 = *(long *)(*(long *)puVar2 + 0x330), lVar18 == 0))
        goto LAB_0095cc40;
        uVar8 = *(undefined4 *)(lVar18 + 0x248);
      }
    }
    FUN_038d13f0(&local_100,&DAT_040c7be9,uVar8);
    pcVar19 = local_f8;
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar18 = 0;
    do {
      if (local_f8[lVar18] == '\0') goto LAB_0095ccac;
      if (local_f8[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0095ccac;
      }
      if (local_f8[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0095ccac;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0095ccac:
    uVar13 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
    uVar20 = 4;
    if ((int)(local_f0 - uVar13) < 5) {
      uVar20 = local_f0 + ~uVar13;
    }
    if (0 < (int)uVar20) {
      memcpy(pcVar19 + uVar13,&DAT_040b50da,(ulong)uVar20);
      pcVar19[(ulong)uVar20 + (ulong)uVar13] = '\0';
    }
    goto LAB_0095cedc;
  }
  lVar18 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar4 + 0x18) == iVar6) {
    local_ec[0] = '\0';
    local_f0 = 0x40;
    lVar18 = 0;
    local_ad = 0;
    local_100 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      if (local_ec[lVar18] == '\0') goto LAB_0095cde0;
      if (local_ec[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0095cde0;
      }
      if (local_ec[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0095cde0;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0095cde0:
    uVar13 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
    uVar20 = 0xd;
    if (0x32 < uVar13) {
      uVar20 = 0x3f - uVar13;
    }
    local_f8 = local_ec;
    if (0 < (int)uVar20) {
      memcpy(local_ec + uVar13,"IdrMuseumEnt0",(ulong)uVar20);
      local_ec[(ulong)uVar20 + (ulong)uVar13] = '\0';
    }
    iVar6 = FUN_017ba638();
    local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar6);
    if (4 < iVar6) {
      iVar6 = 5;
    }
    FUN_038d13f0(&local_100,&DAT_040c7be9,iVar6 + -2);
    pcVar19 = local_f8;
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar18 = 0;
    do {
      if (local_f8[lVar18] == '\0') goto LAB_0095ce98;
      if (local_f8[lVar18 + 1] == '\0') goto LAB_0095ce8c;
      if (local_f8[lVar18 + 2] == '\0') goto LAB_0095ce94;
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    goto LAB_0095caac;
  }
  lVar18 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      iVar6 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar18 != 0) {
            iVar6 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar4 + 0x1c) == iVar6) {
    local_6d = 0;
    local_f0 = 0x80;
    local_f8 = local_ec;
    local_ec[0] = '\0';
    local_100 = PTR_DAT_04bb2d88 + 0x10;
    uVar8 = FUN_017b70a4();
    FUN_01810570(&local_100,uVar8);
    local_110 = PTR_DAT_04bb2020 + 0x10;
  }
  else {
    uVar12 = FUN_017b8748(6);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_017b8748(7);
      if ((uVar12 & 1) != 0) {
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        pcStack_108 = "IdrMuseumInsect_";
        goto LAB_0095d028;
      }
      uVar12 = FUN_017b8748(0x2e);
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN_017b8748(8);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_017b8748(9);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_017b8748(10);
            if ((uVar12 & 1) == 0) {
              uVar12 = FUN_017b8748(0x22);
              if ((uVar12 & 1) == 0) {
                uVar12 = FUN_017b8748(0xb);
                if ((uVar12 & 1) == 0) {
                  uVar12 = FUN_017b8748(0x1e);
                  if ((uVar12 & 1) != 0) {
                    return;
                  }
                  uVar12 = FUN_017b8748(0x1f);
                  if (((uVar12 & 1) != 0) || (uVar12 = FUN_017b8748(0x2d), (uVar12 & 1) != 0)) {
                    local_6d = 0;
                    local_f0 = 0x80;
                    local_f8 = local_ec;
                    local_ec[0] = '\0';
                    local_100 = PTR_DAT_04bb2d88 + 0x10;
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,0x19);
                    uVar12 = FUN_0290cbcc(&local_110);
                    puVar17 = PTR_DAT_04bb5c80;
                    if ((uVar12 & 1) == 0) {
                      puVar17 = PTR_DAT_04bb5c88;
                    }
                    FUN_008aa0a0(&local_100,puVar17,0xffffffff);
                    local_110 = PTR_DAT_04bb2020 + 0x10;
                    goto LAB_0095d074;
                  }
                  uVar12 = FUN_017b8748(0x20);
                  if ((uVar12 & 1) != 0) {
                    return;
                  }
                  uVar12 = FUN_017b8748(0x23);
                  if ((uVar12 & 1) == 0) {
                    uVar12 = FUN_017b8748(0x26);
                    if ((uVar12 & 1) != 0) {
                      local_100 = PTR_DAT_04bb2d88 + 0x10;
                      pcStack_108 = "IdrWherearenOffice00_";
                      goto LAB_0095d028;
                    }
                    uVar12 = FUN_017b8748(0x30);
                    if ((uVar12 & 1) == 0) {
                      return;
                    }
                    local_f8 = "IdrHotelEnt00_pbc";
                  }
                  else {
                    uVar12 = FUN_035a3380();
                    if ((uVar12 & 1) == 0) {
                      local_f8 = "IdrDream00_pbc";
                    }
                    else {
                      local_f8 = "IdrDream01_pbc";
                    }
                  }
                }
                else {
                  local_f8 = "IdrTailor00_pbc";
                }
              }
              else {
                local_f8 = "IdrTsunekichi00_pbc";
              }
            }
            else {
              local_f8 = "IdrTanukichi00_pbc";
            }
            local_100 = PTR_DAT_04bb2020 + 0x10;
            goto LAB_0095d078;
          }
          pcStack_108 = "IdrOfficeDemo0";
        }
        else {
          pcStack_108 = "IdrOffice0";
        }
        local_100 = PTR_DAT_04bb2bc0 + 0x10;
        local_ad = 0;
        local_ec[0] = '\0';
        local_f0 = 0x40;
        local_f8 = local_ec;
        puVar17 = PTR_DAT_04bb2020 + 0x10;
        local_110 = puVar17;
        FUN_008aa0a0(&local_100,&local_110,0xffffffff);
        local_110 = (undefined *)CONCAT44(local_110._4_4_,2);
        uVar8 = 1;
        goto LAB_0095d04c;
      }
      local_6d = 0;
      local_ec[0] = '\0';
      local_f0 = 0x80;
      local_f8 = local_ec;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      puVar17 = PTR_DAT_04bb2020 + 0x10;
      pcStack_108 = "IdrMuseumCafe00";
      local_110 = puVar17;
      FUN_00958800(&local_100,&local_110,0xffffffff);
    }
    else {
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      pcStack_108 = "IdrMuseumFossil_";
LAB_0095d028:
      local_f8 = local_ec;
      local_6d = 0;
      local_ec[0] = '\0';
      local_f0 = 0x80;
      puVar17 = PTR_DAT_04bb2020 + 0x10;
      local_110 = puVar17;
      FUN_00958800(&local_100,&local_110,0xffffffff);
      uVar8 = FUN_017b70a4();
LAB_0095d04c:
      FUN_038d13f0(&local_100,&DAT_040c7be9,uVar8);
    }
    local_110 = puVar17;
  }
LAB_0095d074:
  pcStack_108 = "_pbc";
  FUN_00958800(&local_100,&local_110,0xffffffff);
LAB_0095d078:
  FUN_0081bf40(plVar15,lVar16,&local_100,PTR_PTR_04bb2238);
  return;
LAB_0095ce8c:
  lVar18 = lVar18 + 1;
  goto LAB_0095ce98;
LAB_0095ce94:
  lVar18 = lVar18 + 2;
LAB_0095ce98:
  uVar13 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
  uVar20 = 4;
  if ((int)(local_f0 - uVar13) < 5) {
    uVar20 = local_f0 + ~uVar13;
  }
  if (0 < (int)uVar20) {
    memcpy(pcVar19 + uVar13,&DAT_040b50da,(ulong)uVar20);
    pcVar19[(ulong)uVar20 + (ulong)uVar13] = '\0';
  }
LAB_0095cedc:
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar15 + 0x30))(plVar15,lVar16,&local_100,PTR_PTR_04bb2238);
  nn::os::UnlockMutex(pMVar1);
  return;
}

