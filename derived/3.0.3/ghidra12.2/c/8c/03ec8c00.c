
void FUN_03ec8c00(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  int *piVar23;
  int iVar24;
  undefined2 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  long *plVar32;
  long lVar33;
  void *pvVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  long lVar39;
  long lVar40;
  int *piVar41;
  undefined *local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined1 local_6d;
  
  puVar28 = PTR_DAT_04bb4a70;
  lVar37 = param_2[1];
  iVar24 = *(int *)(*(long *)PTR_DAT_04bb4a70 + 200);
  if (lVar37 == 0) {
LAB_03ec8d00:
    if (((DAT_05b050b8 & 1) == 0) && (iVar29 = __cxa_guard_acquire(&DAT_05b050b8), iVar29 != 0)) {
      DAT_05b05054 = 0;
      DAT_05b0509c = 0;
      DAT_05b050a4 = 0;
      DAT_05b0508c = 0;
      DAT_05b05094 = 0;
      DAT_05b0507c = 0;
      DAT_05b05084 = 0;
      DAT_05b0506c = 0;
      DAT_05b05074 = 0;
      DAT_05b0505c = 0;
      DAT_05b05064 = 0;
      __cxa_guard_release(&DAT_05b050b8);
    }
    *(undefined **)(param_1 + 8) = &DAT_05b05050;
    *(undefined **)(param_1 + 0x10) = &DAT_05b050c0;
    if (((DAT_05b05110 & 1) == 0) && (iVar29 = __cxa_guard_acquire(&DAT_05b05110), iVar29 != 0)) {
      DAT_05b050eb = 0;
      __cxa_guard_release(&DAT_05b05110);
    }
    *(undefined **)(param_1 + 0x18) = &DAT_05b050e8;
    *(undefined **)(param_1 + 0x20) = &DAT_05b05118;
    lVar37 = *(long *)(param_1 + 8);
    *(undefined **)(param_1 + 0x28) = &DAT_05b0514c;
  }
  else {
    *(long *)(param_1 + 8) = lVar37;
    lStack_f8 = (long)&local_f0 + 4;
    local_6d = 0;
    local_100 = PTR_DAT_04bb2d88 + 0x10;
    local_f0 = CONCAT35(local_f0._5_3_,0x80);
    if (*(int *)(lVar37 + 4) != 0x407) {
      FUN_038d1270(&local_100,"Resource version mismatch. current:%d resource:%d (%s)",0x407,
                   *(int *)(lVar37 + 4),
                   lVar37 + *(int *)(lVar37 + 0x24) + (long)*(int *)(lVar37 + 8));
      goto LAB_03ec8d00;
    }
    *(long *)(param_1 + 0x10) = lVar37 + 0x68;
    *(long *)(param_1 + 0x18) = lVar37 + 0x68 + (long)*(int *)(lVar37 + 0xc) * 0x28;
    *(long *)(param_1 + 0x20) = lVar37 + *(int *)(lVar37 + 0x20);
    *(long *)(param_1 + 0x28) = lVar37 + *(int *)(lVar37 + 0x30);
    *(long *)(param_1 + 0x30) = lVar37 + *(int *)(lVar37 + 0x34);
    *(long *)(param_1 + 0x48) = lVar37 + *(int *)(lVar37 + 0x3c);
    *(long *)(param_1 + 0x50) = lVar37 + *(int *)(lVar37 + 0x38);
    *(long *)(param_1 + 0x58) = lVar37 + *(int *)(lVar37 + 0x40);
  }
  puVar26 = PTR_DAT_04bb2698;
  iVar29 = 1;
  if (iVar24 != 2) {
    iVar29 = 2;
  }
  iVar29 = *(int *)(lVar37 + 0x10) + iVar29;
  if (0 < iVar29) {
    lVar37 = *(long *)PTR_DAT_04bb2698;
    if (lVar37 == 0) {
      pvVar34 = malloc((long)(iVar29 * 8));
    }
    else {
      plVar32 = (long *)*param_2;
      if (plVar32 == (long *)0x0) {
        lVar33 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar37 + 8);
        if (lVar33 != 0) {
          plVar32 = (long *)(lVar33 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
        if (plVar32 == (long *)0x0) goto LAB_03ec8de4;
      }
      pvVar34 = (void *)(**(code **)(*plVar32 + 0x30))(plVar32,(long)(iVar29 * 8),8);
    }
    if (pvVar34 != (void *)0x0) {
      *(void **)(param_1 + 0x40) = pvVar34;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(int *)(param_1 + 0x3c) = iVar29;
    }
  }
LAB_03ec8de4:
  lVar37 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar37 + 0x14)) {
    lVar33 = 0;
    do {
      piVar23 = (int *)(lVar37 + *(int *)(*(long *)(param_1 + 0x28) + lVar33 * 4));
      if (0 < *piVar23) {
        lVar37 = 0;
        piVar41 = piVar23 + 3;
        do {
          lVar39 = *(long *)(param_1 + 8);
          lVar40 = lVar39 + *(int *)(lVar39 + 0x24);
          iVar29 = FUN_03ecf580(*(undefined8 *)puVar28,lVar40 + piVar41[-1],0,
                                lVar40 + *(int *)(lVar39 + 8));
          *piVar41 = iVar29;
          lVar37 = lVar37 + 1;
          piVar41 = piVar41 + 6;
        } while (lVar37 < *piVar23);
      }
      if (0 < piVar23[1]) {
        lVar37 = 0;
        piVar41 = piVar23;
        do {
          iVar29 = *piVar23;
          lVar39 = *(long *)(param_1 + 8);
          lVar40 = lVar39 + *(int *)(lVar39 + 0x24);
          iVar30 = FUN_03ecf580(*(undefined8 *)puVar28,lVar40 + piVar41[(long)iVar29 * 6 + 2],1,
                                lVar40 + *(int *)(lVar39 + 8));
          piVar41[(long)iVar29 * 6 + 3] = iVar30;
          lVar37 = lVar37 + 1;
          piVar41 = piVar41 + 7;
        } while (lVar37 < piVar23[1]);
      }
      lVar37 = *(long *)(param_1 + 8);
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(lVar37 + 0x14));
  }
  piVar23 = (int *)(lVar37 + *(int *)(lVar37 + 0x28));
  if (0 < *piVar23) {
    iVar29 = 0;
    piVar41 = piVar23 + 1;
    do {
      lVar33 = *(long *)(param_1 + 8);
      lVar37 = lVar33 + *(int *)(lVar33 + 0x24);
      iVar30 = *piVar41;
      uVar31 = FUN_03ecf770(*(undefined8 *)puVar28,lVar37 + piVar41[1],lVar37 + piVar41[2],
                            lVar37 + *(int *)(lVar33 + 8));
      *(undefined4 *)(lVar33 + iVar30) = uVar31;
      iVar29 = iVar29 + 1;
      piVar41 = piVar41 + 3;
    } while (iVar29 < *piVar23);
    lVar37 = *(long *)(param_1 + 8);
  }
  puVar27 = PTR_DAT_04bb3350;
  if (*(int *)(lVar37 + 0x10) < 1) {
    lVar37 = 0;
  }
  else {
    lVar33 = 0;
    lVar37 = 0;
    puVar1 = PTR_DAT_04bd4808 + 0x10;
    puVar2 = PTR_DAT_04bd47f8 + 0x10;
    puVar3 = PTR_DAT_04bd47e8 + 0x10;
    puVar4 = PTR_DAT_04bd4810 + 0x10;
    puVar5 = PTR_DAT_04bd4858 + 0x10;
    puVar6 = PTR_DAT_04bd4800 + 0x10;
    puVar7 = PTR_DAT_04bd4830 + 0x10;
    puVar8 = PTR_DAT_04bd4838 + 0x10;
    puVar9 = PTR_DAT_04bd4848 + 0x10;
    puVar10 = PTR_DAT_04bd4818 + 0x10;
    puVar11 = PTR_DAT_04bd4840 + 0x10;
    puVar12 = PTR_DAT_04bd4820 + 0x10;
    puVar13 = PTR_DAT_04bd4850 + 0x10;
    puVar14 = PTR_DAT_04bd4860 + 0x10;
    puVar15 = PTR_DAT_04bd4868 + 0x10;
    puVar16 = PTR_DAT_04bd4870 + 0x10;
    puVar17 = PTR_DAT_04bd4828 + 0x10;
    puVar18 = PTR_DAT_04bd4878 + 0x10;
    puVar19 = PTR_DAT_04bd4880 + 0x10;
    puVar20 = PTR_DAT_04bd4888 + 0x10;
    puVar21 = PTR_DAT_04bd4890 + 0x10;
    puVar22 = PTR_DAT_04bd4898 + 0x10;
    do {
      lVar40 = *(long *)(param_1 + 0x18);
      switch(*(undefined2 *)(lVar40 + lVar33)) {
      case 1:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec97e8;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec97e8:
        puVar38 = puVar1;
        goto LAB_03ec9974;
      case 2:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec97f8;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec97f8:
        puVar38 = puVar2;
        goto LAB_03ec9974;
      case 3:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar3;
        break;
      case 4:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar4;
        break;
      case 5:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x18);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x18,8);
        }
        *(undefined4 *)(plVar32 + 1) = 0;
        *plVar32 = (long)puVar5;
        goto LAB_03ec99bc;
      case 6:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar6;
        break;
      case 7:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar7;
        break;
      case 8:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec9860;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec9860:
        puVar38 = puVar8;
        goto LAB_03ec9974;
      case 9:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar9;
        break;
      case 10:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar10;
        break;
      case 0xb:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x28);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x28,8);
        }
        *(undefined4 *)(plVar32 + 1) = 0;
        plVar32[3] = 0;
        *plVar32 = (long)puVar11;
        *(undefined4 *)(plVar32 + 4) = 1;
        goto LAB_03ec99bc;
      case 0xc:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar12;
        break;
      case 0xd:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar13;
        break;
      case 0xe:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec98d4;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec98d4:
        puVar38 = puVar14;
        goto LAB_03ec9974;
      case 0xf:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x18);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x18,8);
        }
        *(undefined4 *)(plVar32 + 1) = 0;
        *plVar32 = (long)(PTR_DAT_04bd4858 + 0x10);
        goto LAB_03ec99bc;
      case 0x10:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec9904;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec9904:
        puVar38 = puVar15;
        goto LAB_03ec9974;
      case 0x11:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec9914;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec9914:
        puVar38 = puVar16;
        goto LAB_03ec9974;
      case 0x12:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x28);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x28,8);
        }
        *(undefined4 *)(plVar32 + 1) = 0;
        puVar38 = PTR_DAT_04bd4840;
        plVar32[3] = 0;
        *plVar32 = (long)(puVar38 + 0x10);
        *(undefined4 *)(plVar32 + 4) = 2;
        goto LAB_03ec99bc;
      case 0x13:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar17;
        break;
      case 0x14:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar18;
        break;
      case 0x15:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar35 = (long *)*param_2;
          if (plVar35 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar35 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + 0xa8);
            }
            plVar35 = (long *)*plVar35;
            plVar32 = (long *)0x0;
            if (plVar35 == (long *)0x0) goto LAB_03ec9970;
          }
          plVar32 = (long *)(**(code **)(*plVar35 + 0x30))(plVar35,0x20,8);
        }
LAB_03ec9970:
        puVar38 = puVar19;
LAB_03ec9974:
        plVar32[1] = 0;
        *plVar32 = (long)puVar38;
        plVar32[2] = 0;
        goto LAB_03ec99b8;
      case 0x16:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar20;
        break;
      case 0x17:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar21;
        break;
      case 0x18:
        lVar39 = *(long *)puVar26;
        if (lVar39 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = (long *)*param_2;
          if (plVar32 == (long *)0x0) {
            lVar36 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar27 + 0x68));
            plVar32 = (long *)(lVar39 + 8);
            if (lVar36 != 0) {
              plVar32 = (long *)(lVar36 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
        puVar38 = puVar22;
        break;
      default:
        plVar32 = (long *)0x0;
        goto LAB_03ec99bc;
      }
      *(undefined4 *)(plVar32 + 1) = 0;
      *plVar32 = (long)puVar38;
LAB_03ec99b8:
      plVar32[3] = 0;
LAB_03ec99bc:
      uVar25 = *(undefined2 *)(lVar40 + lVar33);
      *(short *)((long)plVar32 + 10) = (short)lVar37;
      plVar32[2] = param_1;
      *(undefined2 *)(plVar32 + 1) = uVar25;
      if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
        *(long **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = plVar32;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
      lVar37 = lVar37 + 1;
      lVar33 = lVar33 + 0x24;
    } while (lVar37 < *(int *)(*(long *)(param_1 + 8) + 0x10));
  }
  lVar33 = *(long *)puVar26;
  if (lVar33 == 0) {
    plVar32 = malloc(0x18);
  }
  else {
    plVar32 = (long *)*param_2;
    if (plVar32 == (long *)0x0) {
      lVar40 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar32 = (long *)(lVar33 + 8);
      if (lVar40 != 0) {
        plVar32 = (long *)(lVar40 + 0xa8);
      }
      plVar32 = (long *)*plVar32;
    }
    plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x18,8);
  }
  puVar27 = PTR_DAT_04bd48a0;
  *(short *)((long)plVar32 + 10) = (short)lVar37;
  plVar32[2] = param_1;
  *plVar32 = (long)(puVar27 + 0x10);
  *(undefined2 *)(plVar32 + 1) = 0xffff;
  iVar29 = *(int *)(param_1 + 0x38);
  if (iVar29 < *(int *)(param_1 + 0x3c)) {
    *(long **)(*(long *)(param_1 + 0x40) + (long)iVar29 * 8) = plVar32;
    iVar29 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar29;
  }
  if (iVar24 != 2) {
    lVar33 = *(long *)puVar26;
    if (lVar33 == 0) {
      plVar32 = malloc(0x20);
    }
    else {
      plVar32 = (long *)*param_2;
      if (plVar32 == (long *)0x0) {
        lVar40 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar32 = (long *)(lVar33 + 8);
        if (lVar40 != 0) {
          plVar32 = (long *)(lVar40 + 0xa8);
        }
        plVar32 = (long *)*plVar32;
      }
      plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
    }
    puVar26 = PTR_DAT_04bd48a8;
    iVar24 = *(int *)(*(long *)puVar28 + 200);
    *(short *)((long)plVar32 + 10) = (short)lVar37 + 1;
    plVar32[2] = param_1;
    *(bool *)(plVar32 + 3) = iVar24 == 1;
    *plVar32 = (long)(puVar26 + 0x10);
    *(undefined2 *)(plVar32 + 1) = 0xffff;
    iVar29 = *(int *)(param_1 + 0x38);
    if (iVar29 < *(int *)(param_1 + 0x3c)) {
      *(long **)(*(long *)(param_1 + 0x40) + (long)iVar29 * 8) = plVar32;
      iVar29 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar29;
    }
  }
  if (0 < iVar29) {
    lVar37 = 0;
    lVar33 = 8;
    do {
      local_100 = (undefined *)*param_2;
      plVar32 = *(long **)(*(long *)(param_1 + 0x40) + lVar37 * 8);
      local_f0 = *(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 0x18) + lVar33);
      lStack_f8 = param_1;
      (**(code **)(*plVar32 + 0x20))(plVar32,&local_100);
      lVar37 = lVar37 + 1;
      lVar33 = lVar33 + 0x24;
    } while (lVar37 < *(int *)(param_1 + 0x38));
  }
  return;
}

