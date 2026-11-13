
void FUN_01401c10(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 *__ptr;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  void *pvVar24;
  long *plVar25;
  uint uVar26;
  void *__src;
  size_t sVar27;
  long *plVar28;
  uint uVar29;
  undefined *local_70;
  long lStack_68;
  
  pvVar24 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar24 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_01401cbc;
      lVar10 = param_2[1] + lVar14;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_01401cbc;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_01401cbc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_01401cbc:
    iVar9 = (int)lVar14;
    if (*(int *)(param_1 + 0x18) <= (int)lVar14) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar24,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar24 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  lVar14 = DAT_05ae7600;
  plVar28 = (long *)PTR_DAT_04bb3350;
  plVar25 = param_3;
  if (param_3 == (long *)0x0) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar2 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar25 = (long *)*puVar2;
    if (plVar25 != (long *)0x0) goto LAB_01401d44;
    lVar10 = 1;
  }
  else {
LAB_01401d44:
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
    lVar10 = *(long *)(lVar14 + 0xa8);
    *(long **)(lVar14 + 0xa8) = plVar25;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 == (uint *)0x0)) {
    FUN_01402efc();
LAB_01401df8:
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_014030f0();
    }
    bVar5 = 0;
    uVar29 = 0;
  }
  else {
    uVar29 = *puVar15;
    uVar23 = (ulong)uVar29;
    FUN_01402efc();
    puVar1 = PTR_DAT_04bb2698;
    if (uVar29 == 0) goto LAB_01401df8;
    if ((int)uVar29 < 1) {
LAB_01401e2c:
      if (0 < (int)DAT_051b69c0) {
        sVar27 = (ulong)DAT_051b69c0 << 1;
        goto LAB_01401e48;
      }
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      sVar27 = uVar23 << 1;
      if (lVar14 == 0) {
        pvVar24 = malloc(sVar27);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01401e2c;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01401e2c;
      DAT_051b69c0 = uVar29;
      DAT_051b69c8 = pvVar24;
LAB_01401e48:
      memset(DAT_051b69c8,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_01401ed0:
      uVar17 = (ulong)DAT_051b69d0;
      if (0 < (int)DAT_051b69d0) goto LAB_01401ee0;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01401ed0;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01401ed0;
      uVar17 = uVar23;
      DAT_051b69d0 = uVar29;
      DAT_051b69d8 = pvVar24;
LAB_01401ee0:
      uVar16 = uVar17 & 3;
      uVar22 = 0;
      if (2 < uVar17 - 1) {
        do {
          lVar14 = uVar22 * 2;
          uVar22 = uVar22 + 4;
          *(undefined2 *)((long)DAT_051b69d8 + lVar14) = 0;
          *(undefined2 *)((long)DAT_051b69d8 + lVar14 + 2) = 0;
          *(undefined2 *)((long)DAT_051b69d8 + lVar14 + 4) = 0;
          *(undefined2 *)((long)DAT_051b69d8 + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar22);
      }
      if (uVar16 != 0) {
        lVar14 = uVar22 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)((long)DAT_051b69d8 + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((int)uVar29 < 1) {
LAB_01401fd4:
      uVar17 = (ulong)DAT_051b69e0;
      if (0 < (int)DAT_051b69e0) goto LAB_01401fe4;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01401fd4;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01401fd4;
      uVar17 = uVar23;
      DAT_051b69e0 = uVar29;
      DAT_051b69e8 = pvVar24;
LAB_01401fe4:
      uVar16 = uVar17 & 3;
      uVar22 = 0;
      if (2 < uVar17 - 1) {
        do {
          lVar14 = uVar22 * 2;
          uVar22 = uVar22 + 4;
          *(undefined2 *)((long)DAT_051b69e8 + lVar14) = 0;
          *(undefined2 *)((long)DAT_051b69e8 + lVar14 + 2) = 0;
          *(undefined2 *)((long)DAT_051b69e8 + lVar14 + 4) = 0;
          *(undefined2 *)((long)DAT_051b69e8 + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar22);
      }
      if (uVar16 != 0) {
        lVar14 = uVar22 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)((long)DAT_051b69e8 + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((int)uVar29 < 1) {
LAB_014020d4:
      uVar17 = (ulong)DAT_051b69f0;
      if (0 < (int)DAT_051b69f0) goto LAB_014020e4;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014020d4;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014020d4;
      uVar17 = uVar23;
      DAT_051b69f0 = uVar29;
      DAT_051b69f8 = pvVar24;
LAB_014020e4:
      uVar16 = uVar17 & 3;
      uVar22 = 0;
      if (2 < uVar17 - 1) {
        do {
          lVar14 = uVar22 * 2;
          uVar22 = uVar22 + 4;
          *(undefined2 *)((long)DAT_051b69f8 + lVar14) = 0;
          *(undefined2 *)((long)DAT_051b69f8 + lVar14 + 2) = 0;
          *(undefined2 *)((long)DAT_051b69f8 + lVar14 + 4) = 0;
          *(undefined2 *)((long)DAT_051b69f8 + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar22);
      }
      if (uVar16 != 0) {
        lVar14 = uVar22 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)((long)DAT_051b69f8 + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((int)uVar29 < 1) {
LAB_014021d4:
      uVar17 = (ulong)DAT_051b6a00;
      if (0 < (int)DAT_051b6a00) goto LAB_014021e4;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014021d4;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014021d4;
      uVar17 = uVar23;
      DAT_051b6a00 = uVar29;
      DAT_051b6a08 = pvVar24;
LAB_014021e4:
      uVar16 = uVar17 & 3;
      uVar22 = 0;
      if (2 < uVar17 - 1) {
        do {
          lVar14 = uVar22 * 2;
          uVar22 = uVar22 + 4;
          *(undefined2 *)((long)DAT_051b6a08 + lVar14) = 0;
          *(undefined2 *)((long)DAT_051b6a08 + lVar14 + 2) = 0;
          *(undefined2 *)((long)DAT_051b6a08 + lVar14 + 4) = 0;
          *(undefined2 *)((long)DAT_051b6a08 + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar22);
      }
      if (uVar16 != 0) {
        lVar14 = uVar22 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)((long)DAT_051b6a08 + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbcad8;
    if ((int)uVar29 < 1) {
LAB_014022d4:
      uVar17 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_014022e0;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014022d4;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014022d4;
      *(uint *)puVar6 = uVar29;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar17 = uVar23;
LAB_014022e0:
      uVar22 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          lVar14 = uVar16 * 2;
          uVar16 = uVar16 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar16);
      }
      if (uVar22 != 0) {
        lVar14 = uVar16 << 1;
        do {
          uVar22 = uVar22 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar22 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_014030f0();
    }
    if ((int)uVar29 < 1) {
LAB_014023dc:
      uVar23 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_014023e8;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014023dc;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014023dc;
      *(uint *)(param_1 + 200) = uVar29;
      *(void **)(param_1 + 0xd0) = pvVar24;
LAB_014023e8:
      uVar17 = uVar23 & 3;
      if (uVar23 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar22) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar22 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar22 + 2) = 1;
          lVar14 = *(long *)(param_1 + 0xd0) + uVar22;
          uVar22 = uVar22 + 4;
          *(undefined1 *)(lVar14 + 3) = 1;
        } while ((uVar23 & 0xfffffffc) != uVar22);
      }
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar22) = 1;
        uVar22 = uVar22 + 1;
      }
    }
    plVar12 = (long *)(param_1 + 0xf8);
    uVar23 = (**(code **)(*plVar12 + 0x10))(plVar12);
    if ((uVar23 & 1) != 0) {
      uVar13 = 0;
      uVar8 = uVar29;
      if (uVar29 < 2) {
        uVar8 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar13 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13) != '\0')))) &&
             (((uVar13 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            if ((ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar9) + (long)puVar15
                != 0) goto LAB_014024dc;
          }
LAB_01402490:
          uVar21 = uVar13;
          if (*(uint *)(param_1 + 200) <= uVar13) {
            uVar21 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar13) goto LAB_01402490;
          uVar21 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar21 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) == 0) goto LAB_01402490;
LAB_014024dc:
          uVar23 = (**(code **)*plVar12)(plVar12);
          if ((uVar23 & 1) == 0) goto LAB_01402490;
        }
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
    bVar5 = 1;
  }
  uVar13 = uVar29;
  if ((int)uVar29 <= (int)*(uint *)(param_1 + 400)) {
    uVar13 = *(uint *)(param_1 + 400);
  }
  uVar23 = (ulong)uVar13;
  if (uVar13 != 0) {
    if ((int)uVar13 < 1) {
LAB_014025f0:
      uVar17 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_014025fc;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 3);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014025f0;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 3,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014025f0;
      *(uint *)(param_1 + 0x1b0) = uVar13;
      *(void **)(param_1 + 0x1b8) = pvVar24;
      uVar17 = uVar23;
LAB_014025fc:
      uVar22 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          lVar14 = uVar16 * 8;
          uVar16 = uVar16 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x18) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar16);
      }
      if (uVar22 != 0) {
        lVar14 = uVar16 << 3;
        do {
          uVar22 = uVar22 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while (uVar22 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar13 < 1) {
LAB_014026f4:
      uVar23 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_01402784;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar11 != 0) {
            puVar2 = (undefined8 *)(lVar11 + 0xa8);
          }
          plVar25 = (long *)*puVar2;
          if (plVar25 == (long *)0x0) goto LAB_014026f4;
        }
        pvVar24 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_014026f4;
      *(uint *)(param_1 + 0x1c8) = uVar13;
      *(void **)(param_1 + 0x1d0) = pvVar24;
    }
    uVar17 = uVar23 & 3;
    if (uVar23 - 1 < 3) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      do {
        lVar14 = uVar22 * 2;
        uVar22 = uVar22 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 6) = 0xffff;
      } while ((uVar23 & 0xfffffffc) != uVar22);
    }
    if (uVar17 != 0) {
      lVar14 = uVar22 << 1;
      do {
        uVar17 = uVar17 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        lVar14 = lVar14 + 2;
      } while (uVar17 != 0);
    }
  }
LAB_01402784:
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
        if (uVar29 != 0) {
          uVar13 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((*(long *)(param_1 + 0xb0) != 0) &&
                  (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
                 (((*(uint *)(param_1 + 200) <= uVar13 ||
                   (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13) != '\0')) &&
                  (((uVar13 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
                iVar9 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  iVar9 = 0x1c;
                }
                lVar14 = (ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                         (long)puVar15;
                goto joined_r0x01402a10;
              }
            }
            else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
              uVar8 = uVar13;
              if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
                uVar8 = 0;
              }
              lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01402a10:
              if (lVar14 != 0) {
                pcVar19 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar19 = *(code **)(pcVar19 +
                                      *(long *)(lVar14 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar11 = (*pcVar19)();
                if (lVar11 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar11;
                  uVar8 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar8) {
                    uVar21 = uVar8;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                      uVar21 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) = lVar14;
                    uVar21 = uVar13;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar13) {
                      uVar21 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar8;
                  }
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar29 != uVar13);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x01402b80;
      }
    }
    if (uVar29 != 0) {
      uVar8 = 0;
      uVar13 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar8 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) != '\0')) &&
              (((uVar8 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar14 = (ulong)(puVar15[1] * uVar8 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                     (long)puVar15;
            goto joined_r0x01402b00;
          }
        }
        else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
          uVar21 = uVar8;
          if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
            uVar21 = 0;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8);
joined_r0x01402b00:
          if (lVar14 != 0) {
            uVar21 = uVar13;
            if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
              uVar21 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar21 * 8) = lVar14;
            uVar21 = uVar8;
            if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
              uVar21 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar13;
            uVar13 = uVar13 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar29 != uVar8);
      *(uint *)(param_1 + 0x1c0) = uVar13;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x01402b80;
  }
  if ((int)uVar29 < 1) {
    if (uVar29 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x01402b80;
    }
LAB_01402b34:
    pvVar24 = (void *)0x0;
    uVar13 = 0;
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 != 0) {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_014027e4:
        __ptr = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,(ulong)uVar29 << 4,8);
        goto joined_r0x01402b58;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
      plVar25 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar25 = (long *)(lVar11 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_014027e4;
      lVar14 = *(long *)puVar1;
      sVar27 = (size_t)(int)(uVar29 << 3);
      if (lVar14 == 0) goto LAB_01402bf4;
LAB_01402bb4:
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
      puVar2 = (undefined8 *)(lVar14 + 8);
      if (lVar11 != 0) {
        puVar2 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_01402bd8;
      goto LAB_01402b34;
    }
    __ptr = malloc((ulong)uVar29 << 4);
joined_r0x01402b58:
    if (__ptr == (undefined4 *)0x0) {
      lVar14 = *(long *)puVar1;
      sVar27 = (size_t)(int)(uVar29 << 3);
      if (lVar14 == 0) {
LAB_01402bf4:
        pvVar24 = malloc(sVar27);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_01402bb4;
LAB_01402bd8:
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar27,8);
      }
      uVar8 = 0;
      __ptr = (undefined4 *)0x0;
      uVar13 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar13 = uVar29;
      }
    }
    else {
      uVar17 = (ulong)uVar29;
      uVar23 = uVar17 & 3;
      puVar18 = __ptr;
      if ((uVar29 & 3) != 0) {
        do {
          *puVar18 = 0;
          uVar23 = uVar23 - 1;
          *(undefined8 *)(puVar18 + 2) = 0;
          puVar18 = puVar18 + 4;
        } while (uVar23 != 0);
      }
      if (2 < (uVar17 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar18 = 0;
          *(undefined8 *)(puVar18 + 2) = 0;
          puVar18[4] = 0;
          *(undefined8 *)(puVar18 + 6) = 0;
          puVar18[8] = 0;
          *(undefined8 *)(puVar18 + 10) = 0;
          puVar18[0xc] = 0;
          *(undefined8 *)(puVar18 + 0xe) = 0;
          puVar18 = puVar18 + 0x10;
        } while (puVar18 != __ptr + uVar17 * 4);
      }
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar24 = malloc((long)(int)(uVar29 << 3));
LAB_01402b90:
        uVar13 = 0;
        if (pvVar24 != (void *)0x0) {
          uVar13 = uVar29;
        }
      }
      else {
        if (param_3 != (long *)0x0) {
LAB_014028a4:
          pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar29 << 3),8);
          goto LAB_01402b90;
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
        puVar2 = (undefined8 *)(lVar14 + 8);
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 != (long *)0x0) goto LAB_014028a4;
        uVar13 = 0;
        pvVar24 = (void *)0x0;
      }
      uVar8 = uVar29;
    }
  }
  uVar26 = 0;
  uVar21 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar21 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) != '\0')) &&
          (((uVar21 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar14 = (ulong)(puVar15[1] * uVar21 + (uint)(ushort)puVar15[2] * 8 + iVar9) + (long)puVar15
        ;
        goto joined_r0x01402ce4;
      }
    }
    else if (uVar21 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar21;
      if (*(uint *)(param_1 + 0x1b0) <= uVar21) {
        uVar3 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01402ce4:
      if (lVar14 != 0) {
        uVar3 = uVar21;
        if (uVar8 <= uVar21) {
          uVar3 = 0;
        }
        puVar15 = __ptr + (long)(int)uVar3 * 4;
        *puVar15 = uVar21;
        *(long *)(puVar15 + 2) = lVar14;
        if ((int)uVar26 < (int)uVar13) {
          *(uint **)((long)pvVar24 + (long)(int)uVar26 * 8) = puVar15;
          uVar26 = uVar26 + 1;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar29 != uVar21);
  if (1 < (int)uVar26) {
    uVar13 = 0;
    uVar29 = uVar26 - 1;
    do {
      if ((int)uVar29 <= (int)uVar13) break;
      uVar17 = (ulong)uVar13;
      uVar22 = (ulong)uVar29;
      uVar23 = uVar17;
      uVar29 = uVar13;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar20 = puVar2[1];
          uVar29 = (uint)uVar23;
          puVar2[1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar20;
        }
        uVar23 = uVar23 + 1;
      } while (uVar22 != uVar23);
      if ((int)uVar29 <= (int)uVar13) break;
      uVar23 = (ulong)uVar29;
      uVar13 = uVar29;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar20 = puVar2[-1];
          uVar13 = (uint)uVar23;
          puVar2[-1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar20;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar17 < (long)uVar23);
    } while (uVar13 != uVar29);
  }
  plVar28 = (long *)PTR_DAT_04bb3350;
  if (uVar26 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar28 = &DAT_05ae7790;
    if (pvVar24 != (void *)0x0) goto LAB_01402e2c;
  }
  else {
    uVar23 = 0;
    do {
      uVar17 = -(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3;
      uVar13 = (uint)uVar23;
      uVar29 = uVar13;
      if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
        uVar29 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar29 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar24 + uVar17) + 8);
      uVar29 = **(uint **)((long)pvVar24 + uVar17);
      if (*(uint *)(param_1 + 0x1c8) <= uVar29) {
        uVar29 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar29 * 2) = (short)uVar23;
      uVar23 = (ulong)(uVar13 + 1);
    } while (uVar26 != uVar13 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar26;
LAB_01402e2c:
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
joined_r0x01402b80:
  if (lVar10 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar10;
  }
  return;
}

