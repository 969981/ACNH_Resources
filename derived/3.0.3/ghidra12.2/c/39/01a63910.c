
void FUN_01a63910(long param_1,long *param_2,long *param_3)

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
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 *__ptr;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  void *pvVar26;
  long *plVar27;
  uint uVar28;
  void *__src;
  size_t sVar29;
  uint uVar30;
  undefined *local_70;
  long lStack_68;
  
  pvVar26 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar26 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar15 = 0;
    do {
      if (*(char *)(param_2[1] + lVar15) == '\0') goto LAB_01a639bc;
      lVar24 = param_2[1] + lVar15;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_01a639bc;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_01a639bc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_01a639bc:
    iVar9 = (int)lVar15;
    if (*(int *)(param_1 + 0x18) <= (int)lVar15) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar26,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar26 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  plVar12 = (long *)PTR_DAT_04bb3350;
  plVar27 = param_3;
  if (param_3 == (long *)0x0) {
    lVar24 = *(long *)PTR_DAT_04bb2698;
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar24 + 8);
    if (lVar15 != 0) {
      puVar2 = (undefined8 *)(lVar15 + 0xa8);
    }
    plVar27 = (long *)*puVar2;
    if (plVar27 != (long *)0x0) goto LAB_01a63a44;
    lVar24 = 1;
  }
  else {
LAB_01a63a44:
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
    lVar24 = *(long *)(lVar15 + 0xa8);
    *(long **)(lVar15 + 0xa8) = plVar27;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 == (uint *)0x0)) {
    FUN_01a67df8();
LAB_01a63afc:
    if (*(long *)(param_1 + 0xb0) == 0) {
LAB_01a63b80:
      bVar5 = 0;
      uVar25 = 0;
    }
    else {
      puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
      if (puVar16 == (uint *)0x0) {
        bVar5 = 0;
        uVar25 = 0;
      }
      else {
        uVar30 = *puVar16;
        if (uVar30 == 0) goto LAB_01a63b80;
        uVar14 = 0;
        do {
          if (((uVar14 < *puVar16) && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar15 = (ulong)(puVar16[1] * uVar14 + (uint)(ushort)puVar16[2] * 8 + iVar9) +
                     (long)puVar16;
            if (lVar15 != 0) {
              FUN_01a68da0(lVar15);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar30 != uVar14);
        bVar5 = 0;
        uVar25 = 0;
      }
    }
  }
  else {
    uVar30 = *puVar16;
    uVar25 = (ulong)uVar30;
    FUN_01a67df8();
    puVar6 = PTR_DAT_04bc0018;
    puVar1 = PTR_DAT_04bb2698;
    if (uVar30 == 0) goto LAB_01a63afc;
    if ((int)uVar30 < 1) {
LAB_01a63bb8:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a63bc4;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a63bb8;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a63bb8;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a63bc4:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0020;
    if ((int)uVar30 < 1) {
LAB_01a63cc0:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a63ccc;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a63cc0;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a63cc0;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a63ccc:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0028;
    if ((int)uVar30 < 1) {
LAB_01a63dc4:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a63dd0;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a63dc4;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a63dc4;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a63dd0:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0030;
    if ((int)uVar30 < 1) {
LAB_01a63ec4:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a63ed0;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a63ec4;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a63ec4;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a63ed0:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    if ((int)uVar30 < 1) {
LAB_01a63fc0:
      if (0 < (int)DAT_053007a0) {
        sVar29 = (ulong)DAT_053007a0 << 1;
        goto LAB_01a63fdc;
      }
    }
    else {
      lVar15 = *(long *)puVar1;
      sVar29 = uVar25 << 1;
      if (lVar15 == 0) {
        pvVar26 = malloc(sVar29);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a63fc0;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar29,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a63fc0;
      DAT_053007a0 = uVar30;
      DAT_053007a8 = pvVar26;
LAB_01a63fdc:
      memset(DAT_053007a8,0,sVar29);
    }
    puVar6 = PTR_DAT_04bc0038;
    if ((int)uVar30 < 1) {
LAB_01a64064:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64070;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64064;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64064;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64070:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0040;
    if ((int)uVar30 < 1) {
LAB_01a64164:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64170;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64164;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64164;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64170:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0048;
    if ((int)uVar30 < 1) {
LAB_01a64264:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64270;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64264;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64264;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64270:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0050;
    if ((int)uVar30 < 1) {
LAB_01a64364:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64370;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64364;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64364;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64370:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0058;
    if ((int)uVar30 < 1) {
LAB_01a64464:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64470;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64464;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64464;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64470:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0060;
    if ((int)uVar30 < 1) {
LAB_01a64564:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64570;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64564;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64564;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64570:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0068;
    if ((int)uVar30 < 1) {
LAB_01a64664:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64670;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64664;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64664;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64670:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0070;
    if ((int)uVar30 < 1) {
LAB_01a64764:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64770;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64764;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64764;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64770:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0078;
    if ((int)uVar30 < 1) {
LAB_01a64864:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64870;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64864;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64864;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64870:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0080;
    if ((int)uVar30 < 1) {
LAB_01a64964:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64970;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64964;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64964;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64970:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0088;
    if ((int)uVar30 < 1) {
LAB_01a64a64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64a70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64a64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64a64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64a70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0090;
    if ((int)uVar30 < 1) {
LAB_01a64b64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64b70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64b64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64b64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64b70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0098;
    if ((int)uVar30 < 1) {
LAB_01a64c64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64c70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64c64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64c64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64c70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00a0;
    if ((int)uVar30 < 1) {
LAB_01a64d64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64d70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64d64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64d64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64d70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00a8;
    if ((int)uVar30 < 1) {
LAB_01a64e64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64e70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64e64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64e64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64e70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00b0;
    if ((int)uVar30 < 1) {
LAB_01a64f64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a64f70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a64f64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a64f64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a64f70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00b8;
    if ((int)uVar30 < 1) {
LAB_01a65064:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65070;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65064;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65064;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65070:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00c0;
    if ((int)uVar30 < 1) {
LAB_01a65164:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65170;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65164;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65164;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65170:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00c8;
    if ((int)uVar30 < 1) {
LAB_01a65264:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65270;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65264;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65264;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65270:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00d0;
    if ((int)uVar30 < 1) {
LAB_01a65364:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65370;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65364;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65364;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65370:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00d8;
    if ((int)uVar30 < 1) {
LAB_01a65464:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65470;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65464;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65464;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65470:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00e0;
    if ((int)uVar30 < 1) {
LAB_01a65564:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65570;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65564;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65564;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65570:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00e8;
    if ((int)uVar30 < 1) {
LAB_01a65664:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65670;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65664;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65664;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65670:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00f0;
    if ((int)uVar30 < 1) {
LAB_01a65764:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65770;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65764;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65764;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65770:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc00f8;
    if ((int)uVar30 < 1) {
LAB_01a65864:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65870;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65864;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65864;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65870:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0100;
    if ((int)uVar30 < 1) {
LAB_01a65964:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65970;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65964;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65964;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65970:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0108;
    if ((int)uVar30 < 1) {
LAB_01a65a64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65a70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65a64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65a64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65a70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0110;
    if ((int)uVar30 < 1) {
LAB_01a65b64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65b70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65b64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65b64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65b70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0118;
    if ((int)uVar30 < 1) {
LAB_01a65c64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65c70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65c64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65c64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65c70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0120;
    if ((int)uVar30 < 1) {
LAB_01a65d64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65d70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65d64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65d64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65d70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0128;
    if ((int)uVar30 < 1) {
LAB_01a65e64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65e70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65e64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65e64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65e70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0130;
    if ((int)uVar30 < 1) {
LAB_01a65f64:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a65f70;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a65f64;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a65f64;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a65f70:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0138;
    if ((int)uVar30 < 1) {
LAB_01a66064:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66070;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66064;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66064;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66070:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0140;
    if ((int)uVar30 < 1) {
LAB_01a66164:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66170;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66164;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66164;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66170:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0148;
    if ((int)uVar30 < 1) {
LAB_01a66264:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66270;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66264;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66264;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66270:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0150;
    if ((int)uVar30 < 1) {
LAB_01a66364:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66370;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66364;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66364;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66370:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0158;
    if ((int)uVar30 < 1) {
LAB_01a66464:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66470;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66464;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66464;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66470:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0160;
    if ((int)uVar30 < 1) {
LAB_01a66564:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66570;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66564;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66564;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66570:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    if ((int)uVar30 < 1) {
LAB_01a66670:
      plVar12 = (long *)PTR_DAT_04bb3350;
      if (0 < (int)DAT_053007b0) {
        sVar29 = (ulong)DAT_053007b0 << 1;
        goto LAB_01a6668c;
      }
    }
    else {
      lVar15 = *(long *)puVar1;
      sVar29 = uVar25 << 1;
      if (lVar15 == 0) {
        pvVar26 = malloc(sVar29);
      }
      else {
        plVar12 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar12 = (long *)(lVar10 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01a66670;
        }
        pvVar26 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar29,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66670;
      DAT_053007b0 = uVar30;
      DAT_053007b8 = pvVar26;
LAB_01a6668c:
      plVar12 = (long *)PTR_DAT_04bb3350;
      memset(DAT_053007b8,0,sVar29);
    }
    puVar6 = PTR_DAT_04bc0168;
    if ((int)uVar30 < 1) {
LAB_01a66718:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66724;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66718;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66718;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66724:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0170;
    if ((int)uVar30 < 1) {
LAB_01a66820:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a6682c;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66820;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66820;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a6682c:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0178;
    if ((int)uVar30 < 1) {
LAB_01a66924:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66930;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66924;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66924;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66930:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0180;
    if ((int)uVar30 < 1) {
LAB_01a66a24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66a30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66a24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66a24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66a30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0188;
    if ((int)uVar30 < 1) {
LAB_01a66b24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66b30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66b24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66b24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66b30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0190;
    if ((int)uVar30 < 1) {
LAB_01a66c24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66c30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66c24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66c24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66c30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc0198;
    if ((int)uVar30 < 1) {
LAB_01a66d24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66d30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66d24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66d24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66d30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc01a0;
    if ((int)uVar30 < 1) {
LAB_01a66e24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66e30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66e24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66e24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66e30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc01a8;
    if ((int)uVar30 < 1) {
LAB_01a66f24:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a66f30;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a66f24;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a66f24;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a66f30:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc01b0;
    if ((int)uVar30 < 1) {
LAB_01a67024:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a67030;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a67024;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a67024;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a67030:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    puVar6 = PTR_DAT_04bc01b8;
    if ((int)uVar30 < 1) {
LAB_01a67124:
      uVar13 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01a67130;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25 << 1);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a67124;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a67124;
      *(uint *)puVar6 = uVar30;
      *(void **)(puVar6 + 8) = pvVar26;
      uVar13 = uVar25;
LAB_01a67130:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar15 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15 + 6) = 0;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      if (uVar17 != 0) {
        lVar15 = uVar20 << 1;
        do {
          uVar17 = uVar17 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar15) = 0;
          lVar15 = lVar15 + 2;
        } while (uVar17 != 0);
      }
    }
    if (((*(long *)(param_1 + 0xb0) != 0) &&
        (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
       (uVar14 = *puVar16, uVar14 != 0)) {
      uVar8 = 0;
      do {
        if (((uVar8 < *puVar16) && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          lVar15 = (ulong)(puVar16[1] * uVar8 + (uint)(ushort)puVar16[2] * 8 + iVar9) +
                   (long)puVar16;
          if (lVar15 != 0) {
            FUN_01a68da0(lVar15);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar14 != uVar8);
    }
    plVar12 = (long *)PTR_DAT_04bb3350;
    if ((int)uVar30 < 1) {
LAB_01a67298:
      uVar13 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_01a672a4;
    }
    else {
      lVar15 = *(long *)puVar1;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar25);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a67298;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar25,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a67298;
      *(uint *)(param_1 + 200) = uVar30;
      *(void **)(param_1 + 0xd0) = pvVar26;
      uVar13 = uVar25;
LAB_01a672a4:
      uVar17 = uVar13 & 3;
      if (uVar13 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20 + 2) = 1;
          lVar15 = *(long *)(param_1 + 0xd0) + uVar20;
          uVar20 = uVar20 + 4;
          *(undefined1 *)(lVar15 + 3) = 1;
        } while ((uVar13 & 0xfffffffc) != uVar20);
      }
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20) = 1;
        uVar20 = uVar20 + 1;
      }
    }
    plVar11 = (long *)(param_1 + 0xf8);
    uVar13 = (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((uVar13 & 1) != 0) {
      uVar14 = 0;
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar14 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar14) != '\0')) &&
              (((uVar14 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            if ((ulong)(puVar16[1] * uVar14 + (uint)(ushort)puVar16[2] * 8 + iVar9) + (long)puVar16
                != 0) goto LAB_01a673a0;
          }
LAB_01a67354:
          uVar8 = uVar14;
          if (*(uint *)(param_1 + 200) <= uVar14) {
            uVar8 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar14) goto LAB_01a67354;
          uVar8 = uVar14;
          if (*(uint *)(param_1 + 0x1b0) <= uVar14) {
            uVar8 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8) == 0) goto LAB_01a67354;
LAB_01a673a0:
          uVar13 = (**(code **)*plVar11)(plVar11);
          if ((uVar13 & 1) == 0) goto LAB_01a67354;
        }
        uVar14 = uVar14 + 1;
      } while (uVar30 != uVar14);
    }
    bVar5 = 1;
  }
  uVar14 = (uint)uVar25;
  uVar30 = uVar14;
  if ((int)uVar14 <= (int)*(uint *)(param_1 + 400)) {
    uVar30 = *(uint *)(param_1 + 400);
  }
  uVar13 = (ulong)uVar30;
  if (uVar30 != 0) {
    if ((int)uVar30 < 1) {
LAB_01a674bc:
      uVar17 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_01a674c8;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar13 << 3);
      }
      else {
        plVar11 = plVar27;
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          plVar11 = (long *)(lVar15 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01a674bc;
        }
        pvVar26 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar13 << 3,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a674bc;
      *(uint *)(param_1 + 0x1b0) = uVar30;
      *(void **)(param_1 + 0x1b8) = pvVar26;
      uVar17 = uVar13;
LAB_01a674c8:
      uVar20 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar15 = uVar21 * 8;
          uVar21 = uVar21 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar15) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar15 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar15 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar15 + 0x18) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar21);
      }
      if (uVar20 != 0) {
        lVar15 = uVar21 << 3;
        do {
          uVar20 = uVar20 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar15) = 0;
          lVar15 = lVar15 + 8;
        } while (uVar20 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar30 < 1) {
LAB_01a675c4:
      uVar13 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_01a67654;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar26 = malloc(uVar13 << 1);
      }
      else {
        if (plVar27 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          puVar2 = (undefined8 *)(lVar15 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar27 = (long *)*puVar2;
          if (plVar27 == (long *)0x0) goto LAB_01a675c4;
        }
        pvVar26 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar13 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_01a675c4;
      *(uint *)(param_1 + 0x1c8) = uVar30;
      *(void **)(param_1 + 0x1d0) = pvVar26;
    }
    uVar17 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      do {
        lVar15 = uVar20 * 2;
        uVar20 = uVar20 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar15) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar15 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar15 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar15 + 6) = 0xffff;
      } while ((uVar13 & 0xfffffffc) != uVar20);
    }
    if (uVar17 != 0) {
      lVar15 = uVar20 << 1;
      do {
        uVar17 = uVar17 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar15) = 0xffff;
        lVar15 = lVar15 + 2;
      } while (uVar17 != 0);
    }
  }
LAB_01a67654:
  puVar1 = PTR_DAT_04bb2698;
  bVar4 = (bool)(bVar5 ^ 1);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar4 = true;
  }
  if (bVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar25 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if ((uVar25 & 1) != 0) {
      bVar4 = (bool)(bVar5 ^ 1);
      if ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0) {
        bVar4 = true;
      }
      if (!bVar4) {
        if (uVar14 != 0) {
          uVar30 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((((*(long *)(param_1 + 0xb0) != 0) &&
                    (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 != (uint *)0x0))
                   && ((*(uint *)(param_1 + 200) <= uVar30 ||
                       (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar30) != '\0')))) &&
                  ((uVar30 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
                iVar9 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  iVar9 = 0x1c;
                }
                lVar15 = (ulong)(puVar16[1] * uVar30 + (uint)(ushort)puVar16[2] * 8 + iVar9) +
                         (long)puVar16;
                goto joined_r0x01a678e0;
              }
            }
            else if (uVar30 < *(uint *)(param_1 + 0x1c0)) {
              uVar8 = uVar30;
              if (*(uint *)(param_1 + 0x1b0) <= uVar30) {
                uVar8 = 0;
              }
              lVar15 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01a678e0:
              if (lVar15 != 0) {
                pcVar19 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar19 = *(code **)(pcVar19 +
                                      *(long *)(lVar15 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar10 = (*pcVar19)();
                if (lVar10 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar10;
                  uVar8 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar8) {
                    uVar23 = uVar8;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                      uVar23 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar23 * 8) = lVar15;
                    uVar23 = uVar30;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar30) {
                      uVar23 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar23 * 2) = (short)uVar8;
                  }
                }
              }
            }
            uVar30 = uVar30 + 1;
          } while (uVar14 != uVar30);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x01a67a50;
      }
    }
    if (uVar14 != 0) {
      uVar8 = 0;
      uVar30 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar8 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
             (((uVar8 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar15 = (ulong)(puVar16[1] * uVar8 + (uint)(ushort)puVar16[2] * 8 + iVar9) +
                     (long)puVar16;
            goto joined_r0x01a679d0;
          }
        }
        else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
          uVar23 = uVar8;
          if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
            uVar23 = 0;
          }
          lVar15 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar23 * 8);
joined_r0x01a679d0:
          if (lVar15 != 0) {
            uVar23 = uVar30;
            if (*(uint *)(param_1 + 0x1b0) <= uVar30) {
              uVar23 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar23 * 8) = lVar15;
            uVar23 = uVar8;
            if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
              uVar23 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar23 * 2) = (short)uVar30;
            uVar30 = uVar30 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar14 != uVar8);
      *(uint *)(param_1 + 0x1c0) = uVar30;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x01a67a50;
  }
  if ((int)uVar14 < 1) {
    if (uVar14 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x01a67a50;
    }
LAB_01a67a04:
    pvVar26 = (void *)0x0;
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
    uVar30 = 0;
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 != 0) {
      plVar27 = param_3;
      if (param_3 != (long *)0x0) {
LAB_01a676b4:
        __ptr = (undefined4 *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar25 << 4,8);
        goto joined_r0x01a67a28;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
      plVar27 = (long *)(lVar15 + 8);
      if (lVar10 != 0) {
        plVar27 = (long *)(lVar10 + 0xa8);
      }
      plVar27 = (long *)*plVar27;
      if (plVar27 != (long *)0x0) goto LAB_01a676b4;
      lVar15 = *(long *)puVar1;
      sVar29 = (size_t)(int)(uVar14 << 3);
      if (lVar15 == 0) goto LAB_01a67ac4;
LAB_01a67a84:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
      puVar2 = (undefined8 *)(lVar15 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_01a67aa8;
      goto LAB_01a67a04;
    }
    __ptr = malloc(uVar25 << 4);
joined_r0x01a67a28:
    if (__ptr == (undefined4 *)0x0) {
      lVar15 = *(long *)puVar1;
      sVar29 = (size_t)(int)(uVar14 << 3);
      if (lVar15 == 0) {
LAB_01a67ac4:
        pvVar26 = malloc(sVar29);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_01a67a84;
LAB_01a67aa8:
        pvVar26 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar29,8);
      }
      __ptr = (undefined4 *)0x0;
      uVar8 = 0;
      if (pvVar26 != (void *)0x0) {
        uVar8 = uVar14;
      }
      uVar30 = 0;
    }
    else {
      uVar13 = uVar25 & 3;
      puVar18 = __ptr;
      if (uVar13 != 0) {
        do {
          *puVar18 = 0;
          uVar13 = uVar13 - 1;
          *(undefined8 *)(puVar18 + 2) = 0;
          puVar18 = puVar18 + 4;
        } while (uVar13 != 0);
      }
      if (2 < (uVar25 - 1 & 0xfffffffffffffff)) {
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
        } while (puVar18 != __ptr + uVar25 * 4);
      }
      lVar15 = *(long *)puVar1;
      uVar30 = uVar14;
      if (lVar15 == 0) {
        pvVar26 = malloc((long)(int)(uVar14 << 3));
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
          puVar2 = (undefined8 *)(lVar15 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          param_3 = (long *)*puVar2;
          if (param_3 == (long *)0x0) {
            uVar8 = 0;
            pvVar26 = (void *)0x0;
            goto LAB_01a67ae0;
          }
        }
        pvVar26 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar14 << 3),8);
      }
      uVar8 = 0;
      if (pvVar26 != (void *)0x0) {
        uVar8 = uVar14;
      }
    }
  }
LAB_01a67ae0:
  uVar28 = 0;
  uVar23 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar16 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar23 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar23) != '\0')) &&
          (((uVar23 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar15 = (ulong)(puVar16[1] * uVar23 + (uint)(ushort)puVar16[2] * 8 + iVar9) + (long)puVar16
        ;
        goto joined_r0x01a67bb4;
      }
    }
    else if (uVar23 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar23;
      if (*(uint *)(param_1 + 0x1b0) <= uVar23) {
        uVar3 = 0;
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01a67bb4:
      if (lVar15 != 0) {
        uVar3 = uVar23;
        if (uVar30 <= uVar23) {
          uVar3 = 0;
        }
        puVar16 = __ptr + (long)(int)uVar3 * 4;
        *puVar16 = uVar23;
        *(long *)(puVar16 + 2) = lVar15;
        if ((int)uVar28 < (int)uVar8) {
          *(uint **)((long)pvVar26 + (long)(int)uVar28 * 8) = puVar16;
          uVar28 = uVar28 + 1;
        }
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar14 != uVar23);
  if (1 < (int)uVar28) {
    uVar14 = 0;
    uVar30 = uVar28 - 1;
    do {
      if ((int)uVar30 <= (int)uVar14) break;
      uVar13 = (ulong)uVar14;
      uVar17 = (ulong)uVar30;
      uVar25 = uVar13;
      uVar30 = uVar14;
      do {
        puVar2 = (undefined8 *)((long)pvVar26 + uVar25 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar22 = puVar2[1];
          uVar30 = (uint)uVar25;
          puVar2[1] = *(undefined8 *)((long)pvVar26 + uVar25 * 8);
          *(undefined8 *)((long)pvVar26 + uVar25 * 8) = uVar22;
        }
        uVar25 = uVar25 + 1;
      } while (uVar17 != uVar25);
      if ((int)uVar30 <= (int)uVar14) break;
      uVar25 = (ulong)uVar30;
      uVar14 = uVar30;
      do {
        puVar2 = (undefined8 *)((long)pvVar26 + uVar25 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar22 = puVar2[-1];
          uVar14 = (uint)uVar25;
          puVar2[-1] = *(undefined8 *)((long)pvVar26 + uVar25 * 8);
          *(undefined8 *)((long)pvVar26 + uVar25 * 8) = uVar22;
        }
        uVar25 = uVar25 - 1;
      } while ((long)uVar13 < (long)uVar25);
    } while (uVar14 != uVar30);
  }
  plVar12 = (long *)PTR_DAT_04bb3350;
  if (uVar28 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar12 = (long *)PTR_DAT_04bb3350;
    if (pvVar26 != (void *)0x0) goto LAB_01a67cfc;
  }
  else {
    uVar25 = 0;
    do {
      uVar13 = -(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3;
      uVar14 = (uint)uVar25;
      uVar30 = uVar14;
      if (*(uint *)(param_1 + 0x1b0) <= uVar14) {
        uVar30 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar30 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar26 + uVar13) + 8);
      uVar30 = **(uint **)((long)pvVar26 + uVar13);
      if (*(uint *)(param_1 + 0x1c8) <= uVar30) {
        uVar30 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar30 * 2) = (short)uVar25;
      uVar25 = (ulong)(uVar14 + 1);
    } while (uVar28 != uVar14 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar28;
LAB_01a67cfc:
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar26);
    }
    else {
      plVar27 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar26);
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x38))(plVar27,pvVar26);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar27 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x38))(plVar27,__ptr);
      }
    }
  }
joined_r0x01a67a50:
  if (lVar24 != 1) {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*plVar12 + 0x68));
    *(long *)(lVar15 + 0xa8) = lVar24;
  }
  return;
}

