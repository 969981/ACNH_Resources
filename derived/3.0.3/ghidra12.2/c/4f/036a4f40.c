
void FUN_036a4f40(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 *__ptr;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulong uVar23;
  void *pvVar24;
  long *plVar25;
  uint uVar26;
  void *__src;
  size_t sVar27;
  uint uVar28;
  long *plVar29;
  undefined *local_70;
  long lStack_68;
  
  pvVar24 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar24 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_036a4fec;
      lVar9 = param_2[1] + lVar14;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_036a4fec;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_036a4fec;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_036a4fec:
    iVar8 = (int)lVar14;
    if (*(int *)(param_1 + 0x18) <= (int)lVar14) {
      iVar8 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar24,__src,(long)iVar8);
    *(undefined1 *)((long)pvVar24 + (long)iVar8) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  lVar14 = DAT_05ae7600;
  plVar29 = (long *)PTR_DAT_04bb3350;
  plVar25 = param_3;
  if (param_3 == (long *)0x0) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar2 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar25 = (long *)*puVar2;
    if (plVar25 != (long *)0x0) goto LAB_036a5074;
    lVar9 = 1;
  }
  else {
LAB_036a5074:
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    lVar9 = *(long *)(lVar14 + 0xa8);
    *(long **)(lVar14 + 0xa8) = plVar25;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 == (uint *)0x0)) {
    FUN_036a7078();
LAB_036a5128:
    if (*(long *)(param_1 + 0xb0) == 0) {
LAB_036a51a4:
      bVar5 = 0;
      uVar23 = 0;
    }
    else {
      puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
      if (puVar15 == (uint *)0x0) {
        bVar5 = 0;
        uVar23 = 0;
      }
      else {
        uVar28 = *puVar15;
        if (uVar28 == 0) goto LAB_036a51a4;
        uVar13 = 0;
        do {
          if (((uVar13 < *puVar15) && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar14 = (ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar8) +
                     (long)puVar15;
            if (lVar14 != 0) {
              FUN_036a7910(lVar14);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar28 != uVar13);
        bVar5 = 0;
        uVar23 = 0;
      }
    }
  }
  else {
    uVar28 = *puVar15;
    uVar23 = (ulong)uVar28;
    FUN_036a7078();
    puVar1 = PTR_DAT_04bb2698;
    if (uVar28 == 0) goto LAB_036a5128;
    if ((int)uVar28 < 1) {
LAB_036a51dc:
      if (0 < (int)DAT_05ab1000) {
        sVar27 = (ulong)DAT_05ab1000 << 1;
        goto LAB_036a51f8;
      }
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a51dc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a51dc;
      DAT_05ab1000 = uVar28;
      DAT_05ab1008 = pvVar24;
LAB_036a51f8:
      memset(DAT_05ab1008,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a527c:
      if (0 < (int)DAT_05ab1010) {
        sVar27 = (ulong)DAT_05ab1010 << 1;
        goto LAB_036a5298;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a527c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a527c;
      DAT_05ab1010 = uVar28;
      DAT_05ab1018 = pvVar24;
LAB_036a5298:
      memset(DAT_05ab1018,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a531c:
      if (0 < (int)DAT_05ab1020) {
        sVar27 = (ulong)DAT_05ab1020 << 1;
        goto LAB_036a5338;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a531c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a531c;
      DAT_05ab1020 = uVar28;
      DAT_05ab1028 = pvVar24;
LAB_036a5338:
      memset(DAT_05ab1028,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a53bc:
      if (0 < (int)DAT_05ab1030) {
        sVar27 = (ulong)DAT_05ab1030 << 1;
        goto LAB_036a53d8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a53bc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a53bc;
      DAT_05ab1030 = uVar28;
      DAT_05ab1038 = pvVar24;
LAB_036a53d8:
      memset(DAT_05ab1038,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a545c:
      if (0 < (int)DAT_05ab1040) {
        sVar27 = (ulong)DAT_05ab1040 << 1;
        goto LAB_036a5478;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a545c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a545c;
      DAT_05ab1040 = uVar28;
      DAT_05ab1048 = pvVar24;
LAB_036a5478:
      memset(DAT_05ab1048,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a54fc:
      if (0 < (int)DAT_05ab1050) {
        sVar27 = (ulong)DAT_05ab1050 << 1;
        goto LAB_036a5518;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a54fc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a54fc;
      DAT_05ab1050 = uVar28;
      DAT_05ab1058 = pvVar24;
LAB_036a5518:
      memset(DAT_05ab1058,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a559c:
      if (0 < (int)DAT_05ab1060) {
        sVar27 = (ulong)DAT_05ab1060 << 1;
        goto LAB_036a55b8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a559c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a559c;
      DAT_05ab1060 = uVar28;
      DAT_05ab1068 = pvVar24;
LAB_036a55b8:
      memset(DAT_05ab1068,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a563c:
      if (0 < (int)DAT_05ab1070) {
        sVar27 = (ulong)DAT_05ab1070 << 1;
        goto LAB_036a5658;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a563c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a563c;
      DAT_05ab1070 = uVar28;
      DAT_05ab1078 = pvVar24;
LAB_036a5658:
      memset(DAT_05ab1078,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a56dc:
      if (0 < (int)DAT_05ab1080) {
        sVar27 = (ulong)DAT_05ab1080 << 1;
        goto LAB_036a56f8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a56dc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a56dc;
      DAT_05ab1080 = uVar28;
      DAT_05ab1088 = pvVar24;
LAB_036a56f8:
      memset(DAT_05ab1088,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a577c:
      if (0 < (int)DAT_05ab11a0) {
        sVar27 = (ulong)DAT_05ab11a0 << 1;
        goto LAB_036a5798;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a577c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a577c;
      DAT_05ab11a0 = uVar28;
      DAT_05ab11a8 = pvVar24;
LAB_036a5798:
      memset(DAT_05ab11a8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a581c:
      if (0 < (int)DAT_05ab1090) {
        sVar27 = (ulong)DAT_05ab1090 << 1;
        goto LAB_036a5838;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a581c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a581c;
      DAT_05ab1090 = uVar28;
      DAT_05ab1098 = pvVar24;
LAB_036a5838:
      memset(DAT_05ab1098,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a58bc:
      if (0 < (int)DAT_05ab10a0) {
        sVar27 = (ulong)DAT_05ab10a0 << 1;
        goto LAB_036a58d8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a58bc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a58bc;
      DAT_05ab10a0 = uVar28;
      DAT_05ab10a8 = pvVar24;
LAB_036a58d8:
      memset(DAT_05ab10a8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a595c:
      if (0 < (int)DAT_05ab10b0) {
        sVar27 = (ulong)DAT_05ab10b0 << 1;
        goto LAB_036a5978;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a595c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a595c;
      DAT_05ab10b0 = uVar28;
      DAT_05ab10b8 = pvVar24;
LAB_036a5978:
      memset(DAT_05ab10b8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a59fc:
      if (0 < (int)DAT_05ab10c0) {
        sVar27 = (ulong)DAT_05ab10c0 << 1;
        goto LAB_036a5a18;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a59fc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a59fc;
      DAT_05ab10c0 = uVar28;
      DAT_05ab10c8 = pvVar24;
LAB_036a5a18:
      memset(DAT_05ab10c8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5a9c:
      if (0 < (int)DAT_05ab10d0) {
        sVar27 = (ulong)DAT_05ab10d0 << 1;
        goto LAB_036a5ab8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5a9c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5a9c;
      DAT_05ab10d0 = uVar28;
      DAT_05ab10d8 = pvVar24;
LAB_036a5ab8:
      memset(DAT_05ab10d8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5b3c:
      if (0 < (int)DAT_05ab10e0) {
        sVar27 = (ulong)DAT_05ab10e0 << 1;
        goto LAB_036a5b58;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5b3c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5b3c;
      DAT_05ab10e0 = uVar28;
      DAT_05ab10e8 = pvVar24;
LAB_036a5b58:
      memset(DAT_05ab10e8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5bdc:
      if (0 < (int)DAT_05ab10f0) {
        sVar27 = (ulong)DAT_05ab10f0 << 1;
        goto LAB_036a5bf8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5bdc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5bdc;
      DAT_05ab10f0 = uVar28;
      DAT_05ab10f8 = pvVar24;
LAB_036a5bf8:
      memset(DAT_05ab10f8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5c7c:
      if (0 < (int)DAT_05ab1100) {
        sVar27 = (ulong)DAT_05ab1100 << 1;
        goto LAB_036a5c98;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5c7c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5c7c;
      DAT_05ab1100 = uVar28;
      DAT_05ab1108 = pvVar24;
LAB_036a5c98:
      memset(DAT_05ab1108,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5d1c:
      if (0 < (int)DAT_05ab1110) {
        sVar27 = (ulong)DAT_05ab1110 << 1;
        goto LAB_036a5d38;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5d1c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5d1c;
      DAT_05ab1110 = uVar28;
      DAT_05ab1118 = pvVar24;
LAB_036a5d38:
      memset(DAT_05ab1118,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5dbc:
      if (0 < (int)DAT_05ab11b0) {
        sVar27 = (ulong)DAT_05ab11b0 << 1;
        goto LAB_036a5dd8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5dbc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5dbc;
      DAT_05ab11b0 = uVar28;
      DAT_05ab11b8 = pvVar24;
LAB_036a5dd8:
      memset(DAT_05ab11b8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5e5c:
      if (0 < (int)DAT_05ab1120) {
        sVar27 = (ulong)DAT_05ab1120 << 1;
        goto LAB_036a5e78;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5e5c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5e5c;
      DAT_05ab1120 = uVar28;
      DAT_05ab1128 = pvVar24;
LAB_036a5e78:
      memset(DAT_05ab1128,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5efc:
      if (0 < (int)DAT_05ab1130) {
        sVar27 = (ulong)DAT_05ab1130 << 1;
        goto LAB_036a5f18;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5efc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5efc;
      DAT_05ab1130 = uVar28;
      DAT_05ab1138 = pvVar24;
LAB_036a5f18:
      memset(DAT_05ab1138,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a5f9c:
      if (0 < (int)DAT_05ab1140) {
        sVar27 = (ulong)DAT_05ab1140 << 1;
        goto LAB_036a5fb8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a5f9c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a5f9c;
      DAT_05ab1140 = uVar28;
      DAT_05ab1148 = pvVar24;
LAB_036a5fb8:
      memset(DAT_05ab1148,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a603c:
      if (0 < (int)DAT_05ab1150) {
        sVar27 = (ulong)DAT_05ab1150 << 1;
        goto LAB_036a6058;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a603c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a603c;
      DAT_05ab1150 = uVar28;
      DAT_05ab1158 = pvVar24;
LAB_036a6058:
      memset(DAT_05ab1158,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a60dc:
      if (0 < (int)DAT_05ab11c0) {
        sVar27 = (ulong)DAT_05ab11c0 << 1;
        goto LAB_036a60f8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a60dc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a60dc;
      DAT_05ab11c0 = uVar28;
      DAT_05ab11c8 = pvVar24;
LAB_036a60f8:
      memset(DAT_05ab11c8,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a617c:
      if (0 < (int)DAT_05ab1160) {
        sVar27 = (ulong)DAT_05ab1160 << 1;
        goto LAB_036a6198;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a617c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a617c;
      DAT_05ab1160 = uVar28;
      DAT_05ab1168 = pvVar24;
LAB_036a6198:
      memset(DAT_05ab1168,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a621c:
      if (0 < (int)DAT_05ab1170) {
        sVar27 = (ulong)DAT_05ab1170 << 1;
        goto LAB_036a6238;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a621c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a621c;
      DAT_05ab1170 = uVar28;
      DAT_05ab1178 = pvVar24;
LAB_036a6238:
      memset(DAT_05ab1178,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a62bc:
      if (0 < (int)DAT_05ab1180) {
        sVar27 = (ulong)DAT_05ab1180 << 1;
        goto LAB_036a62d8;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a62bc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a62bc;
      DAT_05ab1180 = uVar28;
      DAT_05ab1188 = pvVar24;
LAB_036a62d8:
      memset(DAT_05ab1188,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a635c:
      if (0 < (int)DAT_05ab1190) {
        sVar27 = (ulong)DAT_05ab1190 << 1;
        goto LAB_036a6378;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a635c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a635c;
      DAT_05ab1190 = uVar28;
      DAT_05ab1198 = pvVar24;
LAB_036a6378:
      memset(DAT_05ab1198,0,sVar27);
    }
    if ((int)uVar28 < 1) {
LAB_036a63fc:
      if (0 < (int)DAT_05ab11d0) {
        sVar27 = (ulong)DAT_05ab11d0 << 1;
        goto LAB_036a6418;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a63fc;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a63fc;
      DAT_05ab11d0 = uVar28;
      DAT_05ab11d8 = pvVar24;
LAB_036a6418:
      memset(DAT_05ab11d8,0,sVar27);
    }
    if (((*(long *)(param_1 + 0xb0) != 0) &&
        (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
       (uVar13 = *puVar15, uVar13 != 0)) {
      uVar7 = 0;
      do {
        if (((uVar7 < *puVar15) && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)) {
          iVar8 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          lVar14 = (ulong)(puVar15[1] * uVar7 + (uint)(ushort)puVar15[2] * 8 + iVar8) +
                   (long)puVar15;
          if (lVar14 != 0) {
            FUN_036a7910(lVar14);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar13 != uVar7);
    }
    lVar14 = DAT_05ae7600;
    if ((int)uVar28 < 1) {
LAB_036a651c:
      uVar12 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_036a6528;
    }
    else {
      if (DAT_05ae7600 == 0) {
        pvVar24 = malloc(uVar23);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a651c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a651c;
      *(uint *)(param_1 + 200) = uVar28;
      *(void **)(param_1 + 0xd0) = pvVar24;
      uVar12 = uVar23;
LAB_036a6528:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19 + 2) = 1;
          lVar14 = *(long *)(param_1 + 0xd0) + uVar19;
          uVar19 = uVar19 + 4;
          *(undefined1 *)(lVar14 + 3) = 1;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19) = 1;
        uVar19 = uVar19 + 1;
      }
    }
    plVar11 = (long *)(param_1 + 0xf8);
    uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((uVar12 & 1) != 0) {
      uVar13 = 0;
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar13 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13) != '\0')) &&
              (((uVar13 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            if ((ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar8) + (long)puVar15
                != 0) goto LAB_036a6620;
          }
LAB_036a65d4:
          uVar7 = uVar13;
          if (*(uint *)(param_1 + 200) <= uVar13) {
            uVar7 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar7) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar13) goto LAB_036a65d4;
          uVar7 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar7 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar7 * 8) == 0) goto LAB_036a65d4;
LAB_036a6620:
          uVar12 = (**(code **)*plVar11)(plVar11);
          if ((uVar12 & 1) == 0) goto LAB_036a65d4;
        }
        uVar13 = uVar13 + 1;
      } while (uVar28 != uVar13);
    }
    bVar5 = 1;
  }
  uVar13 = (uint)uVar23;
  uVar28 = uVar13;
  if ((int)uVar13 <= (int)*(uint *)(param_1 + 400)) {
    uVar28 = *(uint *)(param_1 + 400);
  }
  uVar12 = (ulong)uVar28;
  if (uVar28 != 0) {
    if ((int)uVar28 < 1) {
LAB_036a673c:
      uVar16 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_036a6748;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar12 << 3);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_036a673c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar12 << 3,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a673c;
      *(uint *)(param_1 + 0x1b0) = uVar28;
      *(void **)(param_1 + 0x1b8) = pvVar24;
      uVar16 = uVar12;
LAB_036a6748:
      uVar19 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar14 = uVar20 * 8;
          uVar20 = uVar20 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x18) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar20);
      }
      if (uVar19 != 0) {
        lVar14 = uVar20 << 3;
        do {
          uVar19 = uVar19 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while (uVar19 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar28 < 1) {
LAB_036a6844:
      uVar12 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_036a68d4;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar12 << 1);
      }
      else {
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar25 = (long *)*puVar2;
          if (plVar25 == (long *)0x0) goto LAB_036a6844;
        }
        pvVar24 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar12 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036a6844;
      *(uint *)(param_1 + 0x1c8) = uVar28;
      *(void **)(param_1 + 0x1d0) = pvVar24;
    }
    uVar16 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        lVar14 = uVar19 * 2;
        uVar19 = uVar19 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 6) = 0xffff;
      } while ((uVar12 & 0xfffffffc) != uVar19);
    }
    if (uVar16 != 0) {
      lVar14 = uVar19 << 1;
      do {
        uVar16 = uVar16 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        lVar14 = lVar14 + 2;
      } while (uVar16 != 0);
    }
  }
LAB_036a68d4:
  puVar1 = PTR_DAT_04bb2698;
  bVar4 = (bool)(bVar5 ^ 1);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar4 = true;
  }
  if (bVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar23 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if ((uVar23 & 1) != 0) {
      bVar4 = (bool)(bVar5 ^ 1);
      if ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0) {
        bVar4 = true;
      }
      if (!bVar4) {
        if (uVar13 != 0) {
          uVar28 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((((*(long *)(param_1 + 0xb0) != 0) &&
                    (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0))
                   && ((*(uint *)(param_1 + 200) <= uVar28 ||
                       (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar28) != '\0')))) &&
                  ((uVar28 < *puVar15 && (puVar15[1] != 0)))) && ((ushort)puVar15[2] != 0)) {
                iVar8 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  iVar8 = 0x1c;
                }
                lVar14 = (ulong)(puVar15[1] * uVar28 + (uint)(ushort)puVar15[2] * 8 + iVar8) +
                         (long)puVar15;
                goto joined_r0x036a6b60;
              }
            }
            else if (uVar28 < *(uint *)(param_1 + 0x1c0)) {
              uVar7 = uVar28;
              if (*(uint *)(param_1 + 0x1b0) <= uVar28) {
                uVar7 = 0;
              }
              lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x036a6b60:
              if (lVar14 != 0) {
                pcVar18 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar18 = *(code **)(pcVar18 +
                                      *(long *)(lVar14 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar10 = (*pcVar18)();
                if (lVar10 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar10;
                  uVar7 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar7) {
                    uVar22 = uVar7;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
                      uVar22 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8) = lVar14;
                    uVar22 = uVar28;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
                      uVar22 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar7;
                  }
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar13 != uVar28);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x036a6cd0;
      }
    }
    if (uVar13 != 0) {
      uVar7 = 0;
      uVar28 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar7 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
             (((uVar7 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar14 = (ulong)(puVar15[1] * uVar7 + (uint)(ushort)puVar15[2] * 8 + iVar8) +
                     (long)puVar15;
            goto joined_r0x036a6c50;
          }
        }
        else if (uVar7 < *(uint *)(param_1 + 0x1c0)) {
          uVar22 = uVar7;
          if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
            uVar22 = 0;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x036a6c50:
          if (lVar14 != 0) {
            uVar22 = uVar28;
            if (*(uint *)(param_1 + 0x1b0) <= uVar28) {
              uVar22 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar22 * 8) = lVar14;
            uVar22 = uVar7;
            if (*(uint *)(param_1 + 0x1c8) <= uVar7) {
              uVar22 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar28;
            uVar28 = uVar28 + 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar13 != uVar7);
      *(uint *)(param_1 + 0x1c0) = uVar28;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x036a6cd0;
  }
  if ((int)uVar13 < 1) {
    if (uVar13 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x036a6cd0;
    }
LAB_036a6c84:
    pvVar24 = (void *)0x0;
    uVar7 = 0;
    __ptr = (undefined4 *)0x0;
    uVar28 = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 != 0) {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_036a6934:
        __ptr = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar23 << 4,8);
        goto joined_r0x036a6ca8;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
      plVar25 = (long *)(lVar14 + 8);
      if (lVar10 != 0) {
        plVar25 = (long *)(lVar10 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_036a6934;
      lVar14 = *(long *)puVar1;
      sVar27 = (size_t)(int)(uVar13 << 3);
      if (lVar14 == 0) goto LAB_036a6d44;
LAB_036a6d04:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
      puVar2 = (undefined8 *)(lVar14 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_036a6d28;
      goto LAB_036a6c84;
    }
    __ptr = malloc(uVar23 << 4);
joined_r0x036a6ca8:
    if (__ptr == (undefined4 *)0x0) {
      lVar14 = *(long *)puVar1;
      sVar27 = (size_t)(int)(uVar13 << 3);
      if (lVar14 == 0) {
LAB_036a6d44:
        pvVar24 = malloc(sVar27);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_036a6d04;
LAB_036a6d28:
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar27,8);
      }
      __ptr = (undefined4 *)0x0;
      uVar7 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar7 = uVar13;
      }
      uVar28 = 0;
    }
    else {
      uVar12 = uVar23 & 3;
      puVar17 = __ptr;
      if (uVar12 != 0) {
        do {
          *puVar17 = 0;
          uVar12 = uVar12 - 1;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17 = puVar17 + 4;
        } while (uVar12 != 0);
      }
      if (2 < (uVar23 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar17 = 0;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17[4] = 0;
          *(undefined8 *)(puVar17 + 6) = 0;
          puVar17[8] = 0;
          *(undefined8 *)(puVar17 + 10) = 0;
          puVar17[0xc] = 0;
          *(undefined8 *)(puVar17 + 0xe) = 0;
          puVar17 = puVar17 + 0x10;
        } while (puVar17 != __ptr + uVar23 * 4);
      }
      lVar14 = *(long *)puVar1;
      uVar28 = uVar13;
      if (lVar14 == 0) {
        pvVar24 = malloc((long)(int)(uVar13 << 3));
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          param_3 = (long *)*puVar2;
          if (param_3 == (long *)0x0) {
            uVar7 = 0;
            pvVar24 = (void *)0x0;
            goto LAB_036a6d60;
          }
        }
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar13 << 3),8);
      }
      uVar7 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar7 = uVar13;
      }
    }
  }
LAB_036a6d60:
  uVar26 = 0;
  uVar22 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar22 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar22) != '\0')) &&
          (((uVar22 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar14 = (ulong)(puVar15[1] * uVar22 + (uint)(ushort)puVar15[2] * 8 + iVar8) + (long)puVar15
        ;
        goto joined_r0x036a6e34;
      }
    }
    else if (uVar22 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar22;
      if (*(uint *)(param_1 + 0x1b0) <= uVar22) {
        uVar3 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x036a6e34:
      if (lVar14 != 0) {
        uVar3 = uVar22;
        if (uVar28 <= uVar22) {
          uVar3 = 0;
        }
        puVar15 = __ptr + (long)(int)uVar3 * 4;
        *puVar15 = uVar22;
        *(long *)(puVar15 + 2) = lVar14;
        if ((int)uVar26 < (int)uVar7) {
          *(uint **)((long)pvVar24 + (long)(int)uVar26 * 8) = puVar15;
          uVar26 = uVar26 + 1;
        }
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar13 != uVar22);
  if (1 < (int)uVar26) {
    uVar13 = 0;
    uVar28 = uVar26 - 1;
    do {
      if ((int)uVar28 <= (int)uVar13) break;
      uVar12 = (ulong)uVar13;
      uVar16 = (ulong)uVar28;
      uVar23 = uVar12;
      uVar28 = uVar13;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar8) {
          uVar21 = puVar2[1];
          uVar28 = (uint)uVar23;
          puVar2[1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar21;
        }
        uVar23 = uVar23 + 1;
      } while (uVar16 != uVar23);
      if ((int)uVar28 <= (int)uVar13) break;
      uVar23 = (ulong)uVar28;
      uVar13 = uVar28;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar8 < 0) {
          uVar21 = puVar2[-1];
          uVar13 = (uint)uVar23;
          puVar2[-1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar21;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar12 < (long)uVar23);
    } while (uVar13 != uVar28);
  }
  plVar29 = (long *)PTR_DAT_04bb3350;
  if (uVar26 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar29 = &DAT_05ae7790;
    if (pvVar24 != (void *)0x0) goto LAB_036a6f7c;
  }
  else {
    uVar23 = 0;
    do {
      uVar12 = -(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3;
      uVar13 = (uint)uVar23;
      uVar28 = uVar13;
      if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar28 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar24 + uVar12) + 8);
      uVar28 = **(uint **)((long)pvVar24 + uVar12);
      if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
        uVar28 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar28 * 2) = (short)uVar23;
      uVar23 = (ulong)(uVar13 + 1);
    } while (uVar26 != uVar13 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar26;
LAB_036a6f7c:
    if (DAT_05ae7600 == 0) {
      free(pvVar24);
    }
    else {
      plVar25 = (long *)FUN_038cb610(DAT_05ae7600,pvVar24);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x38))(plVar25,pvVar24);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar25 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x38))(plVar25,__ptr);
      }
    }
  }
joined_r0x036a6cd0:
  if (lVar9 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar9;
  }
  return;
}

