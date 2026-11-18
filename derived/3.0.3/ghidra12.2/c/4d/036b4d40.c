
void FUN_036b4d40(long param_1,long *param_2,long *param_3)

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
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
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
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_036b4dec;
      lVar10 = param_2[1] + lVar14;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_036b4dec;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_036b4dec;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_036b4dec:
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
    if (plVar25 != (long *)0x0) goto LAB_036b4e74;
    lVar10 = 1;
  }
  else {
LAB_036b4e74:
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
    lVar10 = *(long *)(lVar14 + 0xa8);
    *(long **)(lVar14 + 0xa8) = plVar25;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 == (uint *)0x0)) {
    FUN_036b6220();
LAB_036b4f24:
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_036b6560();
    }
    bVar5 = 0;
    uVar29 = 0;
  }
  else {
    uVar29 = *puVar15;
    uVar23 = (ulong)uVar29;
    FUN_036b6220();
    puVar1 = PTR_DAT_04bb2698;
    if (uVar29 == 0) goto LAB_036b4f24;
    if ((int)uVar29 < 1) {
LAB_036b4f58:
      if (0 < (int)DAT_05ab2598) {
        sVar27 = (ulong)DAT_05ab2598 << 1;
        goto LAB_036b4f74;
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
          if (plVar12 == (long *)0x0) goto LAB_036b4f58;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b4f58;
      DAT_05ab2598 = uVar29;
      DAT_05ab25a0 = pvVar24;
LAB_036b4f74:
      memset(DAT_05ab25a0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b4ff8:
      if (0 < (int)DAT_05ab25a8) {
        sVar27 = (ulong)DAT_05ab25a8 << 1;
        goto LAB_036b5014;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b4ff8;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b4ff8;
      DAT_05ab25a8 = uVar29;
      DAT_05ab25b0 = pvVar24;
LAB_036b5014:
      memset(DAT_05ab25b0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b5098:
      if (0 < (int)DAT_05ab25b8) {
        sVar27 = (ulong)DAT_05ab25b8 << 1;
        goto LAB_036b50b4;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b5098;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b5098;
      DAT_05ab25b8 = uVar29;
      DAT_05ab25c0 = pvVar24;
LAB_036b50b4:
      memset(DAT_05ab25c0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b5138:
      if (0 < (int)DAT_05ab25c8) {
        sVar27 = (ulong)DAT_05ab25c8 << 1;
        goto LAB_036b5154;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b5138;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b5138;
      DAT_05ab25c8 = uVar29;
      DAT_05ab25d0 = pvVar24;
LAB_036b5154:
      memset(DAT_05ab25d0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b51d8:
      if (0 < (int)DAT_05ab25d8) {
        sVar27 = (ulong)DAT_05ab25d8 << 1;
        goto LAB_036b51f4;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b51d8;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b51d8;
      DAT_05ab25d8 = uVar29;
      DAT_05ab25e0 = pvVar24;
LAB_036b51f4:
      memset(DAT_05ab25e0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b5278:
      if (0 < (int)DAT_05ab25e8) {
        sVar27 = (ulong)DAT_05ab25e8 << 1;
        goto LAB_036b5294;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b5278;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b5278;
      DAT_05ab25e8 = uVar29;
      DAT_05ab25f0 = pvVar24;
LAB_036b5294:
      memset(DAT_05ab25f0,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b5318:
      if (0 < (int)DAT_05ab25f8) {
        sVar27 = (ulong)DAT_05ab25f8 << 1;
        goto LAB_036b5334;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b5318;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b5318;
      DAT_05ab25f8 = uVar29;
      DAT_05ab2600 = pvVar24;
LAB_036b5334:
      memset(DAT_05ab2600,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b53b8:
      if (0 < (int)DAT_05ab2608) {
        sVar27 = (ulong)DAT_05ab2608 << 1;
        goto LAB_036b53d4;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b53b8;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b53b8;
      DAT_05ab2608 = uVar29;
      DAT_05ab2610 = pvVar24;
LAB_036b53d4:
      memset(DAT_05ab2610,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b5458:
      if (0 < (int)DAT_05ab2618) {
        sVar27 = (ulong)DAT_05ab2618 << 1;
        goto LAB_036b5474;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b5458;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b5458;
      DAT_05ab2618 = uVar29;
      DAT_05ab2620 = pvVar24;
LAB_036b5474:
      memset(DAT_05ab2620,0,sVar27);
    }
    if ((int)uVar29 < 1) {
LAB_036b54f8:
      if (0 < (int)DAT_05ab2628) {
        sVar27 = (ulong)DAT_05ab2628 << 1;
        goto LAB_036b5514;
      }
    }
    else {
      lVar14 = *(long *)puVar1;
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
          if (plVar12 == (long *)0x0) goto LAB_036b54f8;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar27,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b54f8;
      DAT_05ab2628 = uVar29;
      DAT_05ab2630 = pvVar24;
LAB_036b5514:
      memset(DAT_05ab2630,0,sVar27);
    }
    puVar6 = PTR_DAT_04bc3950;
    if ((int)uVar29 < 1) {
LAB_036b559c:
      uVar17 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_036b55a8;
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
          if (plVar12 == (long *)0x0) goto LAB_036b559c;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b559c;
      *(uint *)puVar6 = uVar29;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar17 = uVar23;
LAB_036b55a8:
      uVar16 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar14 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar20);
      }
      if (uVar16 != 0) {
        lVar14 = uVar20 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_036b6560();
    }
    if ((int)uVar29 < 1) {
LAB_036b56ac:
      uVar23 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_036b56b8;
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
          if (plVar12 == (long *)0x0) goto LAB_036b56ac;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b56ac;
      *(uint *)(param_1 + 200) = uVar29;
      *(void **)(param_1 + 0xd0) = pvVar24;
LAB_036b56b8:
      uVar17 = uVar23 & 3;
      if (uVar23 - 1 < 3) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar16) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar16 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar16 + 2) = 1;
          lVar14 = *(long *)(param_1 + 0xd0) + uVar16;
          uVar16 = uVar16 + 4;
          *(undefined1 *)(lVar14 + 3) = 1;
        } while ((uVar23 & 0xfffffffc) != uVar16);
      }
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar16) = 1;
        uVar16 = uVar16 + 1;
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
                != 0) goto LAB_036b57ac;
          }
LAB_036b5760:
          uVar22 = uVar13;
          if (*(uint *)(param_1 + 200) <= uVar13) {
            uVar22 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar22) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar13) goto LAB_036b5760;
          uVar22 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar22 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8) == 0) goto LAB_036b5760;
LAB_036b57ac:
          uVar23 = (**(code **)*plVar12)(plVar12);
          if ((uVar23 & 1) == 0) goto LAB_036b5760;
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
LAB_036b58c4:
      uVar17 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_036b58d4;
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
          if (plVar12 == (long *)0x0) goto LAB_036b58c4;
        }
        pvVar24 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar23 << 3,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b58c4;
      *(uint *)(param_1 + 0x1b0) = uVar13;
      *(void **)(param_1 + 0x1b8) = pvVar24;
      uVar17 = uVar23;
LAB_036b58d4:
      uVar16 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
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
        } while ((uVar17 & 0xfffffffc) != uVar20);
      }
      if (uVar16 != 0) {
        lVar14 = uVar20 << 3;
        do {
          uVar16 = uVar16 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while (uVar16 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar13 < 1) {
LAB_036b59d0:
      uVar23 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_036b5a64;
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
          if (plVar25 == (long *)0x0) goto LAB_036b59d0;
        }
        pvVar24 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_036b59d0;
      *(uint *)(param_1 + 0x1c8) = uVar13;
      *(void **)(param_1 + 0x1d0) = pvVar24;
    }
    uVar17 = uVar23 & 3;
    if (uVar23 - 1 < 3) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar14 = uVar16 * 2;
        uVar16 = uVar16 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 6) = 0xffff;
      } while ((uVar23 & 0xfffffffc) != uVar16);
    }
    if (uVar17 != 0) {
      lVar14 = uVar16 << 1;
      do {
        uVar17 = uVar17 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        lVar14 = lVar14 + 2;
      } while (uVar17 != 0);
    }
  }
LAB_036b5a64:
  lVar14 = DAT_05ae7600;
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
                goto joined_r0x036b5d00;
              }
            }
            else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
              uVar8 = uVar13;
              if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
                uVar8 = 0;
              }
              lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x036b5d00:
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
                    uVar22 = uVar8;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                      uVar22 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8) = lVar14;
                    uVar22 = uVar13;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar13) {
                      uVar22 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar8;
                  }
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar29 != uVar13);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x036b5e10;
      }
    }
    if (uVar29 != 0) {
      uVar13 = 0;
      uVar8 = 0;
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
            goto joined_r0x036b5df0;
          }
        }
        else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
          uVar22 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar22 = 0;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x036b5df0:
          if (lVar14 != 0) {
            uVar22 = uVar8;
            if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
              uVar22 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar22 * 8) = lVar14;
            uVar22 = uVar13;
            if (*(uint *)(param_1 + 0x1c8) <= uVar13) {
              uVar22 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar8;
            uVar8 = uVar8 + 1;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar29 != uVar13);
      *(uint *)(param_1 + 0x1c0) = uVar8;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x036b5e10;
  }
  if ((int)uVar29 < 1) {
    if (uVar29 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x036b5e10;
    }
LAB_036b5e24:
    pvVar24 = (void *)0x0;
    uVar8 = 0;
    uVar13 = 0;
    __ptr = (undefined4 *)0x0;
  }
  else {
    if (DAT_05ae7600 != 0) {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_036b5ac8:
        __ptr = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,(ulong)uVar29 << 4,8);
        goto joined_r0x036b5e54;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
      plVar25 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar25 = (long *)(lVar11 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_036b5ac8;
      sVar27 = (size_t)(int)(uVar29 << 3);
      if (DAT_05ae7600 == 0) goto LAB_036b5ea8;
LAB_036b5ec8:
      lVar14 = DAT_05ae7600;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
      puVar2 = (undefined8 *)(lVar14 + 8);
      if (lVar11 != 0) {
        puVar2 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_036b5eec;
      goto LAB_036b5e24;
    }
    __ptr = malloc((ulong)uVar29 << 4);
joined_r0x036b5e54:
    if (__ptr == (undefined4 *)0x0) {
      sVar27 = (size_t)(int)(uVar29 << 3);
      if (DAT_05ae7600 == 0) {
LAB_036b5ea8:
        pvVar24 = malloc(sVar27);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_036b5ec8;
LAB_036b5eec:
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar27,8);
      }
      uVar13 = 0;
      __ptr = (undefined4 *)0x0;
      uVar8 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar8 = uVar29;
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
      lVar14 = DAT_05ae7600;
      uVar13 = uVar29;
      if (DAT_05ae7600 == 0) {
        pvVar24 = malloc((long)(int)(uVar29 << 3));
      }
      else {
        if (param_3 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar11 != 0) {
            puVar2 = (undefined8 *)(lVar11 + 0xa8);
          }
          param_3 = (long *)*puVar2;
          if (param_3 == (long *)0x0) {
            uVar8 = 0;
            pvVar24 = (void *)0x0;
            goto LAB_036b5f18;
          }
        }
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar29 << 3),8);
      }
      uVar8 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar8 = uVar29;
      }
    }
  }
LAB_036b5f18:
  uVar26 = 0;
  uVar22 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar22 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar22) != '\0')) &&
          (((uVar22 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar14 = (ulong)(puVar15[1] * uVar22 + (uint)(ushort)puVar15[2] * 8 + iVar9) + (long)puVar15
        ;
        goto joined_r0x036b5ff0;
      }
    }
    else if (uVar22 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar22;
      if (*(uint *)(param_1 + 0x1b0) <= uVar22) {
        uVar3 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x036b5ff0:
      if (lVar14 != 0) {
        uVar3 = uVar22;
        if (uVar13 <= uVar22) {
          uVar3 = 0;
        }
        puVar15 = __ptr + (long)(int)uVar3 * 4;
        *puVar15 = uVar22;
        *(long *)(puVar15 + 2) = lVar14;
        if ((int)uVar26 < (int)uVar8) {
          *(uint **)((long)pvVar24 + (long)(int)uVar26 * 8) = puVar15;
          uVar26 = uVar26 + 1;
        }
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar29 != uVar22);
  if (1 < (int)uVar26) {
    uVar13 = 0;
    uVar29 = uVar26 - 1;
    do {
      if ((int)uVar29 <= (int)uVar13) break;
      uVar17 = (ulong)uVar13;
      uVar16 = (ulong)uVar29;
      uVar23 = uVar17;
      uVar29 = uVar13;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar21 = puVar2[1];
          uVar29 = (uint)uVar23;
          puVar2[1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar21;
        }
        uVar23 = uVar23 + 1;
      } while (uVar16 != uVar23);
      if ((int)uVar29 <= (int)uVar13) break;
      uVar23 = (ulong)uVar29;
      uVar13 = uVar29;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar21 = puVar2[-1];
          uVar13 = (uint)uVar23;
          puVar2[-1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar21;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar17 < (long)uVar23);
    } while (uVar13 != uVar29);
  }
  plVar28 = (long *)PTR_DAT_04bb3350;
  if (uVar26 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar28 = &DAT_05ae7790;
    if (pvVar24 != (void *)0x0) goto LAB_036b6150;
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
LAB_036b6150:
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
joined_r0x036b5e10:
  if (lVar10 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar28 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar10;
  }
  return;
}

