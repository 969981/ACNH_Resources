
void FUN_0128dcb0(long param_1,long *param_2,long *param_3)

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
  long lVar23;
  ulong uVar24;
  void *pvVar25;
  long *plVar26;
  size_t __size;
  uint uVar27;
  void *__src;
  uint uVar28;
  long *plVar29;
  undefined *local_70;
  long lStack_68;
  
  pvVar25 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar25 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_0128dd5c;
      lVar23 = param_2[1] + lVar14;
      if (*(char *)(lVar23 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0128dd5c;
      }
      if (*(char *)(lVar23 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0128dd5c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0128dd5c:
    iVar9 = (int)lVar14;
    if (*(int *)(param_1 + 0x18) <= (int)lVar14) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar25,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar25 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  plVar29 = (long *)PTR_DAT_04bb3350;
  plVar26 = param_3;
  if (param_3 == (long *)0x0) {
    lVar23 = *(long *)PTR_DAT_04bb2698;
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar23 + 8);
    if (lVar14 != 0) {
      puVar2 = (undefined8 *)(lVar14 + 0xa8);
    }
    plVar26 = (long *)*puVar2;
    if (plVar26 != (long *)0x0) goto LAB_0128dde4;
    lVar23 = 1;
  }
  else {
LAB_0128dde4:
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    lVar23 = *(long *)(lVar14 + 0xa8);
    *(long **)(lVar14 + 0xa8) = plVar26;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 == (uint *)0x0)) {
    FUN_01290438();
LAB_0128de9c:
    if (*(long *)(param_1 + 0xb0) == 0) {
LAB_0128df20:
      bVar5 = 0;
      uVar24 = 0;
    }
    else {
      puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
      if (puVar15 == (uint *)0x0) {
        bVar5 = 0;
        uVar24 = 0;
      }
      else {
        uVar28 = *puVar15;
        if (uVar28 == 0) goto LAB_0128df20;
        uVar13 = 0;
        do {
          if (((uVar13 < *puVar15) && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar14 = (ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                     (long)puVar15;
            if (lVar14 != 0) {
              FUN_01290b70(lVar14);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar28 != uVar13);
        bVar5 = 0;
        uVar24 = 0;
      }
    }
  }
  else {
    uVar28 = *puVar15;
    uVar24 = (ulong)uVar28;
    FUN_01290438();
    puVar6 = PTR_DAT_04bbbec0;
    puVar1 = PTR_DAT_04bb2698;
    if (uVar28 == 0) goto LAB_0128de9c;
    if ((int)uVar28 < 1) {
LAB_0128df58:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128df64;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128df58;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128df58;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128df64:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbec8;
    if ((int)uVar28 < 1) {
LAB_0128e060:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e06c;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e060;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e060;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e06c:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbed0;
    if ((int)uVar28 < 1) {
LAB_0128e164:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e170;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e164;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e164;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e170:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbed8;
    if ((int)uVar28 < 1) {
LAB_0128e264:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e270;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e264;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e264;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e270:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbee0;
    if ((int)uVar28 < 1) {
LAB_0128e364:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e370;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e364;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e364;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e370:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbee8;
    if ((int)uVar28 < 1) {
LAB_0128e464:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e470;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e464;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e464;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e470:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbef0;
    if ((int)uVar28 < 1) {
LAB_0128e564:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e570;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e564;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e564;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e570:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbef8;
    if ((int)uVar28 < 1) {
LAB_0128e664:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e670;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e664;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e664;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e670:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf00;
    if ((int)uVar28 < 1) {
LAB_0128e764:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e770;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e764;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e764;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e770:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf08;
    if ((int)uVar28 < 1) {
LAB_0128e864:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e870;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e864;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e864;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e870:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf10;
    if ((int)uVar28 < 1) {
LAB_0128e964:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128e970;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128e964;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128e964;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128e970:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf18;
    if ((int)uVar28 < 1) {
LAB_0128ea64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128ea70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128ea64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128ea64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128ea70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf20;
    if ((int)uVar28 < 1) {
LAB_0128eb64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128eb70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128eb64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128eb64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128eb70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf28;
    if ((int)uVar28 < 1) {
LAB_0128ec64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128ec70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128ec64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128ec64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128ec70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf30;
    if ((int)uVar28 < 1) {
LAB_0128ed64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128ed70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128ed64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128ed64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128ed70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf38;
    if ((int)uVar28 < 1) {
LAB_0128ee64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128ee70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128ee64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128ee64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128ee70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf40;
    if ((int)uVar28 < 1) {
LAB_0128ef64:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128ef70;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128ef64;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128ef64;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128ef70:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf48;
    if ((int)uVar28 < 1) {
LAB_0128f064:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f070;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f064;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f064;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f070:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf50;
    if ((int)uVar28 < 1) {
LAB_0128f164:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f170;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f164;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f164;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f170:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf58;
    if ((int)uVar28 < 1) {
LAB_0128f264:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f270;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f264;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f264;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f270:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf60;
    if ((int)uVar28 < 1) {
LAB_0128f364:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f370;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f364;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f364;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f370:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf68;
    if ((int)uVar28 < 1) {
LAB_0128f464:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f470;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f464;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f464;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f470:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf70;
    if ((int)uVar28 < 1) {
LAB_0128f564:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f570;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f564;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f564;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f570:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf78;
    if ((int)uVar28 < 1) {
LAB_0128f664:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f670;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f664;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f664;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f670:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbf80;
    if ((int)uVar28 < 1) {
LAB_0128f764:
      uVar12 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0128f770;
    }
    else {
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24 << 1);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f764;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f764;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar25;
      uVar12 = uVar24;
LAB_0128f770:
      uVar16 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar14 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((uVar12 & 0xfffffffc) != uVar19);
      }
      if (uVar16 != 0) {
        lVar14 = uVar19 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if (((*(long *)(param_1 + 0xb0) != 0) &&
        (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
       (uVar13 = *puVar15, uVar13 != 0)) {
      uVar8 = 0;
      do {
        if (((uVar8 < *puVar15) && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          lVar14 = (ulong)(puVar15[1] * uVar8 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                   (long)puVar15;
          if (lVar14 != 0) {
            FUN_01290b70(lVar14);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
    }
    if ((int)uVar28 < 1) {
LAB_0128f8e0:
      uVar12 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_0128f8ec;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar24);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128f8e0;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar24,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128f8e0;
      *(uint *)(param_1 + 200) = uVar28;
      *(void **)(param_1 + 0xd0) = pvVar25;
      uVar12 = uVar24;
LAB_0128f8ec:
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
            iVar9 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            if ((ulong)(puVar15[1] * uVar13 + (uint)(ushort)puVar15[2] * 8 + iVar9) + (long)puVar15
                != 0) goto LAB_0128f9e0;
          }
LAB_0128f994:
          uVar8 = uVar13;
          if (*(uint *)(param_1 + 200) <= uVar13) {
            uVar8 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar13) goto LAB_0128f994;
          uVar8 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar8 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8) == 0) goto LAB_0128f994;
LAB_0128f9e0:
          uVar12 = (**(code **)*plVar11)(plVar11);
          if ((uVar12 & 1) == 0) goto LAB_0128f994;
        }
        uVar13 = uVar13 + 1;
      } while (uVar28 != uVar13);
    }
    bVar5 = 1;
  }
  uVar13 = (uint)uVar24;
  uVar28 = uVar13;
  if ((int)uVar13 <= (int)*(uint *)(param_1 + 400)) {
    uVar28 = *(uint *)(param_1 + 400);
  }
  uVar12 = (ulong)uVar28;
  if (uVar28 != 0) {
    if ((int)uVar28 < 1) {
LAB_0128fafc:
      uVar16 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_0128fb08;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar12 << 3);
      }
      else {
        plVar11 = plVar26;
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar11 = (long *)(lVar14 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0128fafc;
        }
        pvVar25 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar12 << 3,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128fafc;
      *(uint *)(param_1 + 0x1b0) = uVar28;
      *(void **)(param_1 + 0x1b8) = pvVar25;
      uVar16 = uVar12;
LAB_0128fb08:
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
LAB_0128fc04:
      uVar12 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_0128fc94;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar25 = malloc(uVar12 << 1);
      }
      else {
        if (plVar26 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar26 = (long *)*puVar2;
          if (plVar26 == (long *)0x0) goto LAB_0128fc04;
        }
        pvVar25 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar12 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_0128fc04;
      *(uint *)(param_1 + 0x1c8) = uVar28;
      *(void **)(param_1 + 0x1d0) = pvVar25;
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
LAB_0128fc94:
  puVar1 = PTR_DAT_04bb2698;
  bVar4 = (bool)(bVar5 ^ 1);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar4 = true;
  }
  if (bVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar24 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if ((uVar24 & 1) != 0) {
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
                iVar9 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  iVar9 = 0x1c;
                }
                lVar14 = (ulong)(puVar15[1] * uVar28 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                         (long)puVar15;
                goto joined_r0x0128ff20;
              }
            }
            else if (uVar28 < *(uint *)(param_1 + 0x1c0)) {
              uVar8 = uVar28;
              if (*(uint *)(param_1 + 0x1b0) <= uVar28) {
                uVar8 = 0;
              }
              lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x0128ff20:
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
                  uVar8 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar8) {
                    uVar22 = uVar8;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                      uVar22 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8) = lVar14;
                    uVar22 = uVar28;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
                      uVar22 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar8;
                  }
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar13 != uVar28);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x01290090;
      }
    }
    if (uVar13 != 0) {
      uVar8 = 0;
      uVar28 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar8 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
             (((uVar8 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar14 = (ulong)(puVar15[1] * uVar8 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                     (long)puVar15;
            goto joined_r0x01290010;
          }
        }
        else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
          uVar22 = uVar8;
          if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
            uVar22 = 0;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x01290010:
          if (lVar14 != 0) {
            uVar22 = uVar28;
            if (*(uint *)(param_1 + 0x1b0) <= uVar28) {
              uVar22 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar22 * 8) = lVar14;
            uVar22 = uVar8;
            if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
              uVar22 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar22 * 2) = (short)uVar28;
            uVar28 = uVar28 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
      *(uint *)(param_1 + 0x1c0) = uVar28;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x01290090;
  }
  if ((int)uVar13 < 1) {
    if (uVar13 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x01290090;
    }
LAB_01290044:
    pvVar25 = (void *)0x0;
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
    uVar28 = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 != 0) {
      plVar26 = param_3;
      if (param_3 != (long *)0x0) {
LAB_0128fcf4:
        __ptr = (undefined4 *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar24 << 4,8);
        goto joined_r0x01290068;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
      plVar26 = (long *)(lVar14 + 8);
      if (lVar10 != 0) {
        plVar26 = (long *)(lVar10 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
      if (plVar26 != (long *)0x0) goto LAB_0128fcf4;
      lVar14 = *(long *)puVar1;
      __size = (size_t)(int)(uVar13 << 3);
      if (lVar14 == 0) goto LAB_01290104;
LAB_012900c4:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
      puVar2 = (undefined8 *)(lVar14 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_012900e8;
      goto LAB_01290044;
    }
    __ptr = malloc(uVar24 << 4);
joined_r0x01290068:
    if (__ptr == (undefined4 *)0x0) {
      lVar14 = *(long *)puVar1;
      __size = (size_t)(int)(uVar13 << 3);
      if (lVar14 == 0) {
LAB_01290104:
        pvVar25 = malloc(__size);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_012900c4;
LAB_012900e8:
        pvVar25 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      }
      __ptr = (undefined4 *)0x0;
      uVar8 = 0;
      if (pvVar25 != (void *)0x0) {
        uVar8 = uVar13;
      }
      uVar28 = 0;
    }
    else {
      uVar12 = uVar24 & 3;
      puVar17 = __ptr;
      if (uVar12 != 0) {
        do {
          *puVar17 = 0;
          uVar12 = uVar12 - 1;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17 = puVar17 + 4;
        } while (uVar12 != 0);
      }
      if (2 < (uVar24 - 1 & 0xfffffffffffffff)) {
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
        } while (puVar17 != __ptr + uVar24 * 4);
      }
      lVar14 = *(long *)puVar1;
      uVar28 = uVar13;
      if (lVar14 == 0) {
        pvVar25 = malloc((long)(int)(uVar13 << 3));
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
            uVar8 = 0;
            pvVar25 = (void *)0x0;
            goto LAB_01290120;
          }
        }
        pvVar25 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar13 << 3),8);
      }
      uVar8 = 0;
      if (pvVar25 != (void *)0x0) {
        uVar8 = uVar13;
      }
    }
  }
LAB_01290120:
  uVar27 = 0;
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
        goto joined_r0x012901f4;
      }
    }
    else if (uVar22 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar22;
      if (*(uint *)(param_1 + 0x1b0) <= uVar22) {
        uVar3 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x012901f4:
      if (lVar14 != 0) {
        uVar3 = uVar22;
        if (uVar28 <= uVar22) {
          uVar3 = 0;
        }
        puVar15 = __ptr + (long)(int)uVar3 * 4;
        *puVar15 = uVar22;
        *(long *)(puVar15 + 2) = lVar14;
        if ((int)uVar27 < (int)uVar8) {
          *(uint **)((long)pvVar25 + (long)(int)uVar27 * 8) = puVar15;
          uVar27 = uVar27 + 1;
        }
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar13 != uVar22);
  if (1 < (int)uVar27) {
    uVar13 = 0;
    uVar28 = uVar27 - 1;
    do {
      if ((int)uVar28 <= (int)uVar13) break;
      uVar12 = (ulong)uVar13;
      uVar16 = (ulong)uVar28;
      uVar24 = uVar12;
      uVar28 = uVar13;
      do {
        puVar2 = (undefined8 *)((long)pvVar25 + uVar24 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar21 = puVar2[1];
          uVar28 = (uint)uVar24;
          puVar2[1] = *(undefined8 *)((long)pvVar25 + uVar24 * 8);
          *(undefined8 *)((long)pvVar25 + uVar24 * 8) = uVar21;
        }
        uVar24 = uVar24 + 1;
      } while (uVar16 != uVar24);
      if ((int)uVar28 <= (int)uVar13) break;
      uVar24 = (ulong)uVar28;
      uVar13 = uVar28;
      do {
        puVar2 = (undefined8 *)((long)pvVar25 + uVar24 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar21 = puVar2[-1];
          uVar13 = (uint)uVar24;
          puVar2[-1] = *(undefined8 *)((long)pvVar25 + uVar24 * 8);
          *(undefined8 *)((long)pvVar25 + uVar24 * 8) = uVar21;
        }
        uVar24 = uVar24 - 1;
      } while ((long)uVar12 < (long)uVar24);
    } while (uVar13 != uVar28);
  }
  plVar29 = (long *)PTR_DAT_04bb3350;
  if (uVar27 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar29 = (long *)PTR_DAT_04bb3350;
    if (pvVar25 != (void *)0x0) goto LAB_0129033c;
  }
  else {
    uVar24 = 0;
    do {
      uVar12 = -(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3;
      uVar13 = (uint)uVar24;
      uVar28 = uVar13;
      if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar28 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar25 + uVar12) + 8);
      uVar28 = **(uint **)((long)pvVar25 + uVar12);
      if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
        uVar28 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar28 * 2) = (short)uVar24;
      uVar24 = (ulong)(uVar13 + 1);
    } while (uVar27 != uVar13 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar27;
LAB_0129033c:
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar25);
    }
    else {
      plVar26 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar25);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x38))(plVar26,pvVar25);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar26 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x38))(plVar26,__ptr);
      }
    }
  }
joined_r0x01290090:
  if (lVar23 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar23;
  }
  return;
}

