
long * FUN_03c92160(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long *plVar18;
  long lVar19;
  MutexType *pMVar20;
  
  puVar1 = PTR_DAT_04bd4140;
  lVar19 = *(long *)(*(long *)((long)param_1 + 0xc9) + 0x10);
  if ((*PTR_DAT_04bd4148 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04bd4148);
    puVar7 = PTR_DAT_04bd1bc8;
    if (iVar9 != 0) {
      if (((*PTR_DAT_04bd1bd0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1bd0), iVar9 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
          *(undefined8 *)PTR_DAT_04bc8f30 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)puVar7 = PTR_DAT_04bc8f30;
        __cxa_guard_release(PTR_DAT_04bd1bd0);
      }
      *(undefined **)puVar1 = puVar7;
      __cxa_guard_release(PTR_DAT_04bd4148);
    }
  }
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  puVar7 = PTR_DAT_04bd4170;
  if (puVar10 == (undefined8 *)puVar1) {
LAB_03c921d8:
    cVar3 = *(char *)(lVar19 + 0xf8);
    plVar11 = (long *)FUN_00367b14(0x290,0x10);
    if (cVar3 == '\0') {
      if (plVar11 != (long *)0x0) {
        FUN_0037bb50(plVar11);
        *plVar11 = (long)(PTR_DAT_04bd0890 + 0x10);
        plVar11[4] = (long)(plVar11 + 4);
        plVar11[5] = (long)(plVar11 + 4);
        FUN_0037ca20(plVar11,param_1,0,0,0);
        puVar1 = PTR_DAT_04bd1c10;
        *(undefined2 *)((long)plVar11 + 0xd2) = 0x100;
        *plVar11 = (long)(puVar1 + 0x10);
        uVar4 = *(undefined1 *)((long)param_1 + 0xd4);
        plVar11[0x1d] = (long)(PTR_DAT_04bc8e10 + 0x10);
        plVar11[0x1e] = -1;
        puVar1 = PTR_DAT_04bd1178;
        *(undefined1 *)((long)plVar11 + 0xd4) = uVar4;
        *(undefined1 *)((long)plVar11 + 0xd5) = 0;
        plVar11[0x1b] = 0;
        plVar11[0x1c] = 0;
        *(undefined4 *)(plVar11 + 0x1f) = 0;
        plVar11[0x26] = 0;
        plVar11[0x27] = 0;
        plVar11[0x28] = 0;
        plVar11[0x29] = 0;
        plVar11[0x40] = 0;
        plVar11[0x2a] = 0;
        plVar11[0x2b] = 0;
        plVar11[0x2c] = 0;
        plVar11[0x2d] = 0;
        plVar11[0x37] = 0;
        plVar11[0x38] = 0;
        plVar11[0x35] = 0;
        plVar11[0x36] = 0;
        plVar11[0x33] = 0;
        plVar11[0x34] = 0;
        plVar11[0x31] = 0;
        plVar11[0x32] = 0;
        plVar11[0x2f] = 0;
        plVar11[0x30] = 0;
        plVar11[0x3a] = 0;
        plVar11[0x3b] = 0;
        plVar11[0x3c] = 0;
        plVar11[0x3d] = 0;
        plVar11[0x20] = 0;
        plVar11[0x21] = (long)(puVar1 + 0x10);
        plVar11[0x22] = (long)&DAT_3f8000003f800000;
        plVar11[0x23] = 0;
        plVar11[0x24] = (long)&DAT_3f8000003f800000;
        plVar11[0x25] = 0;
        *(undefined4 *)(plVar11 + 0x39) = 0xffffffff;
        plVar11[0x41] = (long)"agl::TextureData";
        *(undefined4 *)(plVar11 + 0x42) = 0x10000;
        plVar11[0x3e] = 0;
        plVar11[0x3f] = 0;
        *(undefined4 *)(plVar11 + 0x45) = 0xff;
        *(undefined4 *)((long)plVar11 + 0x22c) = 0;
        puVar1 = PTR_DAT_04bd1198 + 0x10;
        plVar11[0x4c] = 0;
        plVar11[0x4b] = 0;
        plVar11[0x4a] = 0;
        plVar11[0x49] = 0;
        plVar11[0x48] = 0;
        plVar11[0x47] = 0;
        plVar11[0x2e] = (long)puVar1;
        plVar11[0x46] = 0x80000000000;
        FUN_03b2cf30(plVar11,param_2);
        plVar11[0x4f] = 0;
        plVar11[0x4e] = 0;
        *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x4d;
        *plVar11 = (long)&PTR_LAB_04b85860;
        ppuVar16 = &PTR_LAB_04b85970;
        goto LAB_03c92554;
      }
    }
    else if (plVar11 != (long *)0x0) {
      FUN_0037bb50(plVar11);
      *plVar11 = (long)(PTR_DAT_04bd0890 + 0x10);
      plVar11[4] = (long)(plVar11 + 4);
      plVar11[5] = (long)(plVar11 + 4);
      FUN_0037ca20(plVar11,param_1,0,0,0);
      puVar1 = PTR_DAT_04bd1c10;
      *(undefined2 *)((long)plVar11 + 0xd2) = 0x100;
      *plVar11 = (long)(puVar1 + 0x10);
      uVar4 = *(undefined1 *)((long)param_1 + 0xd4);
      plVar11[0x1d] = (long)(PTR_DAT_04bc8e10 + 0x10);
      plVar11[0x1e] = -1;
      puVar1 = PTR_DAT_04bd1178;
      *(undefined1 *)((long)plVar11 + 0xd4) = uVar4;
      *(undefined1 *)((long)plVar11 + 0xd5) = 0;
      plVar11[0x1b] = 0;
      plVar11[0x1c] = 0;
      *(undefined4 *)(plVar11 + 0x1f) = 0;
      plVar11[0x26] = 0;
      plVar11[0x27] = 0;
      plVar11[0x28] = 0;
      plVar11[0x29] = 0;
      plVar11[0x40] = 0;
      plVar11[0x2a] = 0;
      plVar11[0x2b] = 0;
      plVar11[0x2c] = 0;
      plVar11[0x2d] = 0;
      plVar11[0x37] = 0;
      plVar11[0x38] = 0;
      plVar11[0x35] = 0;
      plVar11[0x36] = 0;
      plVar11[0x33] = 0;
      plVar11[0x34] = 0;
      plVar11[0x31] = 0;
      plVar11[0x32] = 0;
      plVar11[0x2f] = 0;
      plVar11[0x30] = 0;
      plVar11[0x3a] = 0;
      plVar11[0x3b] = 0;
      plVar11[0x3c] = 0;
      plVar11[0x3d] = 0;
      plVar11[0x20] = 0;
      plVar11[0x21] = (long)(puVar1 + 0x10);
      plVar11[0x22] = (long)&DAT_3f8000003f800000;
      plVar11[0x23] = 0;
      plVar11[0x24] = (long)&DAT_3f8000003f800000;
      plVar11[0x25] = 0;
      *(undefined4 *)(plVar11 + 0x39) = 0xffffffff;
      plVar11[0x41] = (long)"agl::TextureData";
      *(undefined4 *)(plVar11 + 0x42) = 0x10000;
      plVar11[0x3e] = 0;
      plVar11[0x3f] = 0;
      *(undefined4 *)(plVar11 + 0x45) = 0xff;
      *(undefined4 *)((long)plVar11 + 0x22c) = 0;
      puVar1 = PTR_DAT_04bd1198 + 0x10;
      plVar11[0x4c] = 0;
      plVar11[0x4b] = 0;
      plVar11[0x4a] = 0;
      plVar11[0x49] = 0;
      plVar11[0x48] = 0;
      plVar11[0x47] = 0;
      plVar11[0x2e] = (long)puVar1;
      plVar11[0x46] = 0x80000000000;
      FUN_03b2cf30(plVar11,param_2);
      plVar11[0x4f] = 0;
      plVar11[0x4e] = 0;
      *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x4d;
      *plVar11 = (long)&PTR_LAB_04b856f0;
      ppuVar16 = &PTR_LAB_04b85808;
LAB_03c92554:
      plVar11[0x50] = (long)(param_1 + 0x4d);
      plVar11[0x4d] = (long)ppuVar16;
    }
  }
  else {
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
    if ((param_1 != (long *)0x0) && (puVar10 != (undefined8 *)0x0)) goto LAB_03c921d8;
    if ((*PTR_DAT_04bd4178 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04bd4178);
      puVar1 = PTR_DAT_04bd1d20;
      if (iVar9 != 0) {
        if (((*PTR_DAT_04bd1d28 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1d28), iVar9 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
            *(undefined8 *)PTR_DAT_04bc8f30 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar1 = PTR_DAT_04bc8f30;
          __cxa_guard_release(PTR_DAT_04bd1d28);
        }
        *(undefined **)puVar7 = puVar1;
        __cxa_guard_release(PTR_DAT_04bd4178);
      }
    }
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    puVar1 = PTR_DAT_04bd41a0;
    if (puVar10 == (undefined8 *)puVar7) {
LAB_03c92398:
      cVar3 = *(char *)(lVar19 + 0xf8);
      plVar11 = (long *)FUN_00367b14(0x100,0x10);
      if (cVar3 == '\0') {
        if (plVar11 != (long *)0x0) {
          FUN_0037bb50(plVar11);
          *plVar11 = (long)(PTR_DAT_04bd0890 + 0x10);
          plVar11[4] = (long)(plVar11 + 4);
          plVar11[5] = (long)(plVar11 + 4);
          FUN_0037ca20(plVar11,param_1,0,0,0);
          ppuVar16 = &PTR_LAB_04b85e08;
          ppuVar17 = &PTR_LAB_04b85f10;
          goto LAB_03c92640;
        }
      }
      else if (plVar11 != (long *)0x0) {
        FUN_0037bb50(plVar11);
        *plVar11 = (long)(PTR_DAT_04bd0890 + 0x10);
        plVar11[4] = (long)(plVar11 + 4);
        plVar11[5] = (long)(plVar11 + 4);
        FUN_0037ca20(plVar11,param_1,0,0,0);
        ppuVar16 = &PTR_LAB_04b85ca0;
        ppuVar17 = &PTR_LAB_04b85db0;
LAB_03c92640:
        plVar11[0x1c] = 0;
        plVar11[0x1d] = 0;
        plVar11[0x1e] = (long)(param_1 + 0x1b);
        *plVar11 = (long)ppuVar16;
        plVar11[0x1b] = (long)ppuVar17;
        *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x1b;
      }
    }
    else {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar7 && puVar10 != (undefined8 *)0x0);
      if ((param_1 != (long *)0x0) && (puVar10 != (undefined8 *)0x0)) goto LAB_03c92398;
      if ((*PTR_DAT_04bd41a8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04bd41a8);
        puVar7 = PTR_DAT_04bd1c98;
        if (iVar9 != 0) {
          if (((*PTR_DAT_04bd1ca0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1ca0), iVar9 != 0)) {
            if (((*PTR_DAT_04bd1bf0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1bf0), iVar9 != 0)) {
              if (((*PTR_DAT_04bc91b8 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc91b8), iVar9 != 0)) {
                if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
                  *(undefined8 *)PTR_DAT_04bc8f30 = 0;
                  __cxa_guard_release(PTR_DAT_04bc8f38);
                }
                *(undefined **)PTR_DAT_04bc91b0 = PTR_DAT_04bc8f30;
                __cxa_guard_release(PTR_DAT_04bc91b8);
              }
              *(undefined **)PTR_DAT_04bd1be8 = PTR_DAT_04bc91b0;
              __cxa_guard_release(PTR_DAT_04bd1bf0);
            }
            *(undefined **)puVar7 = PTR_DAT_04bd1be8;
            __cxa_guard_release(PTR_DAT_04bd1ca0);
          }
          *(undefined **)puVar1 = puVar7;
          __cxa_guard_release(PTR_DAT_04bd41a8);
        }
      }
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
      puVar7 = PTR_DAT_04bd41d0;
      if (puVar10 == (undefined8 *)puVar1) {
LAB_03c925a8:
        cVar3 = *(char *)(lVar19 + 0xf8);
        plVar11 = (long *)FUN_00367b14(0x200,0x10);
        if (cVar3 == '\0') {
          if (plVar11 != (long *)0x0) {
            FUN_03b34320(plVar11,param_1);
            plVar11[0x3d] = 0;
            plVar11[0x3e] = (long)(param_1 + 0x3b);
            *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x3b;
            *plVar11 = (long)&PTR_LAB_04b86c50;
            ppuVar16 = &PTR_LAB_04b86d68;
            goto LAB_03c92724;
          }
        }
        else if (plVar11 != (long *)0x0) {
          FUN_03b34320(plVar11,param_1);
          plVar11[0x3d] = 0;
          plVar11[0x3e] = (long)(param_1 + 0x3b);
          *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x3b;
          *plVar11 = (long)&PTR_LAB_04b86ad8;
          ppuVar16 = &PTR_LAB_04b86bf8;
LAB_03c92724:
          plVar11[0x3b] = (long)ppuVar16;
          plVar11[0x3c] = 0;
        }
      }
      else {
        do {
          puVar10 = (undefined8 *)*puVar10;
        } while (puVar10 != (undefined8 *)puVar1 && puVar10 != (undefined8 *)0x0);
        if ((param_1 != (long *)0x0) && (puVar10 != (undefined8 *)0x0)) goto LAB_03c925a8;
        if ((*PTR_DAT_04bd41d8 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04bd41d8);
          puVar1 = PTR_DAT_04bd1d40;
          if (iVar9 != 0) {
            if ((*PTR_DAT_04bd1d48 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1d48);
              puVar8 = PTR_DAT_04bd1be8;
              if (iVar9 != 0) {
                if ((*PTR_DAT_04bd1bf0 & 1) == 0) {
                  iVar9 = __cxa_guard_acquire(PTR_DAT_04bd1bf0);
                  puVar6 = PTR_DAT_04bc91b0;
                  if (iVar9 != 0) {
                    if ((*PTR_DAT_04bc91b8 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(PTR_DAT_04bc91b8);
                      puVar5 = PTR_DAT_04bc8f30;
                      if (iVar9 != 0) {
                        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
                          *(undefined8 *)puVar5 = 0;
                          __cxa_guard_release(PTR_DAT_04bc8f38);
                        }
                        *(undefined **)puVar6 = puVar5;
                        __cxa_guard_release(PTR_DAT_04bc91b8);
                      }
                    }
                    *(undefined **)puVar8 = puVar6;
                    __cxa_guard_release(PTR_DAT_04bd1bf0);
                  }
                }
                *(undefined **)puVar1 = puVar8;
                __cxa_guard_release(PTR_DAT_04bd1d48);
              }
            }
            *(undefined **)puVar7 = puVar1;
            __cxa_guard_release(PTR_DAT_04bd41d8);
          }
        }
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
        if (puVar10 == (undefined8 *)puVar7) {
LAB_03c926a4:
          cVar3 = *(char *)(lVar19 + 0xf8);
          plVar11 = (long *)FUN_00367b14(0x370,0x10);
          if (cVar3 == '\0') {
            if (plVar11 != (long *)0x0) {
              FUN_03b35378(plVar11,param_1,param_2);
              plVar11[0x6d] = 0;
              plVar11[0x6c] = 0;
              *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x6a;
              *plVar11 = (long)&PTR_LAB_04b86f38;
              ppuVar16 = &PTR_LAB_04b87050;
              goto LAB_03c92760;
            }
          }
          else if (plVar11 != (long *)0x0) {
            FUN_03b35378(plVar11,param_1,param_2);
            plVar11[0x6d] = 0;
            plVar11[0x6c] = 0;
            *(long **)((long)plVar11 + 0xc9) = plVar11 + 0x6a;
            *plVar11 = (long)&PTR_LAB_04b86dc0;
            ppuVar16 = &PTR_LAB_04b86ee0;
LAB_03c92760:
            plVar11[0x6b] = 0;
            plVar11[0x6a] = (long)ppuVar16;
          }
        }
        else {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != (undefined8 *)puVar7 && puVar10 != (undefined8 *)0x0);
          if (puVar10 != (undefined8 *)0x0) goto LAB_03c926a4;
          lVar12 = FUN_03c95940(param_1);
          if (lVar12 == 0) {
            lVar12 = FUN_03c95e70(param_1);
            if (lVar12 == 0) {
              lVar12 = FUN_03c96600(param_1);
              if (lVar12 == 0) {
                lVar12 = FUN_03c96d90(param_1);
                if (lVar12 == 0) {
                  lVar12 = FUN_03c97410(param_1);
                  if (lVar12 == 0) {
                    lVar12 = FUN_03c979a0(param_1);
                    if (lVar12 == 0) {
                      lVar12 = FUN_03c97f30(param_1);
                      if (lVar12 != 0) {
                        pMVar20 = (MutexType *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 0xb8)
                        ;
                        nn::os::LockMutex(pMVar20);
                        plVar11 = (long *)FUN_03c934f8(lVar19,lVar12,param_2);
                        goto LAB_03c9286c;
                      }
                      lVar12 = FUN_03c985b0(param_1);
                      if (lVar12 == 0) {
                        lVar12 = FUN_03c98bc0(param_1);
                        if (lVar12 == 0) {
                          lVar12 = FUN_03c99160(param_1);
                          if (lVar12 == 0) {
                            lVar12 = FUN_03c99680(param_1);
                            if (lVar12 == 0) {
                              lVar12 = FUN_03c99c90(param_1);
                              if (lVar12 == 0) {
                                plVar11 = (long *)FUN_03c9a2a0(param_1);
                                if (plVar11 == (long *)0x0) {
                                  lVar12 = FUN_03c9a8b0(param_1);
                                  if (lVar12 == 0) {
                                    uVar13 = FUN_03c9ae40(param_1);
                                    plVar11 = (long *)FUN_03c93f48(lVar19,uVar13);
                                  }
                                  else {
                                    plVar11 = (long *)FUN_03c93e4c(lVar19,lVar12,param_2);
                                  }
                                }
                                else {
                                  if ((param_3 & 1) == 0) {
                                    plVar18 = (long *)**(undefined8 **)PTR_DAT_04bd44c8;
                                    plVar2 = (long *)(*(undefined8 **)PTR_DAT_04bd44c8)[1];
                                    lVar19 = (**(code **)(*plVar18 + 0x78))(plVar18);
                                    if (plVar2 == (long *)0x0) {
                                      lVar12 = 0;
                                    }
                                    else {
                                      lVar12 = (**(code **)(*plVar2 + 0x78))(plVar2);
                                    }
                                    uVar13 = (**(code **)(*plVar11 + 0x100))(plVar11);
                                    lVar14 = FUN_03c93df8(uVar13,plVar11 + 0x16,param_2);
                                    lVar15 = FUN_03c9a750(*(undefined8 *)(lVar14 + 0x18));
                                    *(long *)(lVar15 + 0xe8) = lVar14;
                                    plVar11 = *(long **)(lVar14 + 0x18);
                                    lVar15 = (**(code **)(*plVar18 + 0x78))(plVar18);
                                    lVar19 = lVar19 - lVar15;
                                    if (plVar2 != (long *)0x0) {
                                      lVar15 = (**(code **)(*plVar2 + 0x78))(plVar2);
                                      lVar19 = (lVar19 + lVar12) - lVar15;
                                    }
                                    *(long *)(lVar14 + 0x150) = lVar19;
                                    goto LAB_03c92808;
                                  }
                                  plVar11 = (long *)FUN_03c93d48(lVar19,plVar11);
                                  plVar11[0x1d] = param_2;
                                  *(long **)(param_2 + 0x18) = plVar11;
                                }
                              }
                              else {
                                plVar11 = (long *)FUN_03c93b98(lVar19,lVar12);
                              }
                            }
                            else {
                              plVar11 = (long *)FUN_03c939d8(lVar19,lVar12);
                            }
                          }
                          else {
                            plVar11 = (long *)FUN_03c936fc(lVar19,lVar12,param_2);
                          }
                        }
                        else {
                          plVar11 = (long *)FUN_03c93660(lVar19,lVar12);
                        }
                      }
                      else {
                        plVar11 = (long *)FUN_03c935ac(lVar19,lVar12,param_2);
                      }
                    }
                    else {
                      plVar11 = (long *)FUN_03c93388(lVar19,lVar12);
                    }
                  }
                  else {
                    plVar11 = (long *)FUN_03c93208(lVar19,lVar12);
                  }
                }
                else {
                  pMVar20 = (MutexType *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 0xb8);
                  nn::os::LockMutex(pMVar20);
                  plVar11 = (long *)FUN_03c93140(lVar19,lVar12,param_2);
LAB_03c9286c:
                  nn::os::UnlockMutex(pMVar20);
                }
              }
              else {
                plVar11 = (long *)FUN_03c9308c(lVar19,lVar12,param_2);
              }
            }
            else {
              plVar11 = (long *)FUN_03c92fd8(lVar19,lVar12,param_2);
            }
          }
          else {
            plVar11 = (long *)FUN_03c92e18(lVar19,lVar12,param_2);
          }
        }
      }
    }
  }
  for (plVar18 = (long *)param_1[5]; plVar18 != param_1 + 4; plVar18 = (long *)plVar18[1]) {
    uVar13 = FUN_03c92160(plVar18 + -1,param_2,0);
    FUN_0037cfe0(plVar11,uVar13);
  }
LAB_03c92808:
  *(long *)(*(long *)((long)plVar11 + 0xc9) + 0x10) = param_2;
  return plVar11;
}

