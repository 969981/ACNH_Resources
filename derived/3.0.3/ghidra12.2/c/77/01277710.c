
void FUN_01277710(long param_1,long *param_2,long *param_3)

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
  undefined4 *__ptr;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  void *pvVar24;
  long *plVar25;
  size_t __size;
  uint uVar26;
  void *__src;
  long *plVar27;
  uint uVar28;
  undefined *local_70;
  long lStack_68;
  
  pvVar24 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar24 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar13 = 0;
    do {
      if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_012777bc;
      lVar22 = param_2[1] + lVar13;
      if (*(char *)(lVar22 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_012777bc;
      }
      if (*(char *)(lVar22 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_012777bc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_012777bc:
    iVar9 = (int)lVar13;
    if (*(int *)(param_1 + 0x18) <= (int)lVar13) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar24,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar24 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  plVar27 = (long *)PTR_DAT_04bb3350;
  plVar25 = param_3;
  if (param_3 == (long *)0x0) {
    lVar22 = *(long *)PTR_DAT_04bb2698;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar22 + 8);
    if (lVar13 != 0) {
      puVar2 = (undefined8 *)(lVar13 + 0xa8);
    }
    plVar25 = (long *)*puVar2;
    if (plVar25 != (long *)0x0) goto LAB_01277844;
    lVar22 = 1;
  }
  else {
LAB_01277844:
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    lVar22 = *(long *)(lVar13 + 0xa8);
    *(long **)(lVar13 + 0xa8) = plVar25;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 == (uint *)0x0)) {
    FUN_01278b88();
LAB_012778fc:
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_01278db0();
    }
    bVar5 = 0;
    uVar28 = 0;
  }
  else {
    uVar28 = *puVar14;
    uVar23 = (ulong)uVar28;
    FUN_01278b88();
    puVar6 = PTR_DAT_04bbbe28;
    puVar1 = PTR_DAT_04bb2698;
    if (uVar28 == 0) goto LAB_012778fc;
    if ((int)uVar28 < 1) {
LAB_01277930:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_0127793c;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277930;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277930;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_0127793c:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe30;
    if ((int)uVar28 < 1) {
LAB_01277a34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277a40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277a34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277a34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277a40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe38;
    if ((int)uVar28 < 1) {
LAB_01277b34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277b40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277b34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277b34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277b40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe40;
    if ((int)uVar28 < 1) {
LAB_01277c34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277c40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277c34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277c34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277c40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe48;
    if ((int)uVar28 < 1) {
LAB_01277d34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277d40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277d34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277d34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277d40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe50;
    if ((int)uVar28 < 1) {
LAB_01277e34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277e40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277e34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277e34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277e40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar6 = PTR_DAT_04bbbe58;
    if ((int)uVar28 < 1) {
LAB_01277f34:
      uVar16 = (ulong)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_01277f40;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01277f34;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01277f34;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar24;
      uVar16 = uVar23;
LAB_01277f40:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_01278db0();
    }
    if ((int)uVar28 < 1) {
LAB_0127803c:
      uVar23 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_01278048;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0127803c;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0127803c;
      *(uint *)(param_1 + 200) = uVar28;
      *(void **)(param_1 + 0xd0) = pvVar24;
LAB_01278048:
      uVar16 = uVar23 & 3;
      if (uVar23 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar15) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar15 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar15 + 2) = 1;
          lVar13 = *(long *)(param_1 + 0xd0) + uVar15;
          uVar15 = uVar15 + 4;
          *(undefined1 *)(lVar13 + 3) = 1;
        } while ((uVar23 & 0xfffffffc) != uVar15);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar15) = 1;
        uVar15 = uVar15 + 1;
      }
    }
    plVar11 = (long *)(param_1 + 0xf8);
    uVar23 = (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((uVar23 & 1) != 0) {
      uVar12 = 0;
      uVar8 = uVar28;
      if (uVar28 < 2) {
        uVar8 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar12 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
             (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            if ((ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar9) + (long)puVar14
                != 0) goto LAB_0127813c;
          }
LAB_012780f0:
          uVar21 = uVar12;
          if (*(uint *)(param_1 + 200) <= uVar12) {
            uVar21 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar12) goto LAB_012780f0;
          uVar21 = uVar12;
          if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
            uVar21 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) == 0) goto LAB_012780f0;
LAB_0127813c:
          uVar23 = (**(code **)*plVar11)(plVar11);
          if ((uVar23 & 1) == 0) goto LAB_012780f0;
        }
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
    }
    bVar5 = 1;
  }
  uVar12 = uVar28;
  if ((int)uVar28 <= (int)*(uint *)(param_1 + 400)) {
    uVar12 = *(uint *)(param_1 + 400);
  }
  uVar23 = (ulong)uVar12;
  if (uVar12 != 0) {
    if ((int)uVar12 < 1) {
LAB_01278250:
      uVar16 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_0127825c;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 3);
      }
      else {
        plVar11 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01278250;
        }
        pvVar24 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar23 << 3,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01278250;
      *(uint *)(param_1 + 0x1b0) = uVar12;
      *(void **)(param_1 + 0x1b8) = pvVar24;
      uVar16 = uVar23;
LAB_0127825c:
      uVar15 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar13 = uVar19 * 8;
          uVar19 = uVar19 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x18) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar19);
      }
      if (uVar15 != 0) {
        lVar13 = uVar19 << 3;
        do {
          uVar15 = uVar15 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          lVar13 = lVar13 + 8;
        } while (uVar15 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar12 < 1) {
LAB_01278354:
      uVar23 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_012783e4;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar24 = malloc(uVar23 << 1);
      }
      else {
        if (plVar25 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          puVar2 = (undefined8 *)(lVar13 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar25 = (long *)*puVar2;
          if (plVar25 == (long *)0x0) goto LAB_01278354;
        }
        pvVar24 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar23 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_01278354;
      *(uint *)(param_1 + 0x1c8) = uVar12;
      *(void **)(param_1 + 0x1d0) = pvVar24;
    }
    uVar16 = uVar23 & 3;
    if (uVar23 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        lVar13 = uVar15 * 2;
        uVar15 = uVar15 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 6) = 0xffff;
      } while ((uVar23 & 0xfffffffc) != uVar15);
    }
    if (uVar16 != 0) {
      lVar13 = uVar15 << 1;
      do {
        uVar16 = uVar16 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (uVar16 != 0);
    }
  }
LAB_012783e4:
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
        if (uVar28 != 0) {
          uVar12 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((*(long *)(param_1 + 0xb0) != 0) &&
                  (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                 (((*(uint *)(param_1 + 200) <= uVar12 ||
                   (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')) &&
                  (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
                iVar9 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  iVar9 = 0x1c;
                }
                lVar13 = (ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                         (long)puVar14;
                goto joined_r0x01278670;
              }
            }
            else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
              uVar8 = uVar12;
              if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
                uVar8 = 0;
              }
              lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01278670:
              if (lVar13 != 0) {
                pcVar18 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar18 = *(code **)(pcVar18 +
                                      *(long *)(lVar13 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar10 = (*pcVar18)();
                if (lVar10 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar10;
                  uVar8 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar8) {
                    uVar21 = uVar8;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                      uVar21 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) = lVar13;
                    uVar21 = uVar12;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar12) {
                      uVar21 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar8;
                  }
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar28 != uVar12);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x012787e0;
      }
    }
    if (uVar28 != 0) {
      uVar8 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar8 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) != '\0')) &&
              (((uVar8 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
            iVar9 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar9 = 0x1c;
            }
            lVar13 = (ulong)(puVar14[1] * uVar8 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                     (long)puVar14;
            goto joined_r0x01278760;
          }
        }
        else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
          uVar21 = uVar8;
          if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
            uVar21 = 0;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8);
joined_r0x01278760:
          if (lVar13 != 0) {
            uVar21 = uVar12;
            if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
              uVar21 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar21 * 8) = lVar13;
            uVar21 = uVar8;
            if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
              uVar21 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar12;
            uVar12 = uVar12 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar28 != uVar8);
      *(uint *)(param_1 + 0x1c0) = uVar12;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x012787e0;
  }
  if ((int)uVar28 < 1) {
    if (uVar28 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x012787e0;
    }
LAB_01278794:
    pvVar24 = (void *)0x0;
    uVar12 = 0;
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 != 0) {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_01278444:
        __ptr = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,(ulong)uVar28 << 4,8);
        goto joined_r0x012787b8;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      plVar25 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar25 = (long *)(lVar10 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_01278444;
      lVar13 = *(long *)puVar1;
      __size = (size_t)(int)(uVar28 << 3);
      if (lVar13 == 0) goto LAB_01278854;
LAB_01278814:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      puVar2 = (undefined8 *)(lVar13 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_01278838;
      goto LAB_01278794;
    }
    __ptr = malloc((ulong)uVar28 << 4);
joined_r0x012787b8:
    if (__ptr == (undefined4 *)0x0) {
      lVar13 = *(long *)puVar1;
      __size = (size_t)(int)(uVar28 << 3);
      if (lVar13 == 0) {
LAB_01278854:
        pvVar24 = malloc(__size);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_01278814;
LAB_01278838:
        pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      }
      uVar8 = 0;
      __ptr = (undefined4 *)0x0;
      uVar12 = 0;
      if (pvVar24 != (void *)0x0) {
        uVar12 = uVar28;
      }
    }
    else {
      uVar16 = (ulong)uVar28;
      uVar23 = uVar16 & 3;
      puVar17 = __ptr;
      if ((uVar28 & 3) != 0) {
        do {
          *puVar17 = 0;
          uVar23 = uVar23 - 1;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17 = puVar17 + 4;
        } while (uVar23 != 0);
      }
      if (2 < (uVar16 - 1 & 0xfffffffffffffff)) {
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
        } while (puVar17 != __ptr + uVar16 * 4);
      }
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar24 = malloc((long)(int)(uVar28 << 3));
LAB_012787f0:
        uVar12 = 0;
        if (pvVar24 != (void *)0x0) {
          uVar12 = uVar28;
        }
      }
      else {
        if (param_3 != (long *)0x0) {
LAB_01278504:
          pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar28 << 3),8);
          goto LAB_012787f0;
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
        puVar2 = (undefined8 *)(lVar13 + 8);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 != (long *)0x0) goto LAB_01278504;
        uVar12 = 0;
        pvVar24 = (void *)0x0;
      }
      uVar8 = uVar28;
    }
  }
  uVar26 = 0;
  uVar21 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar21 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) != '\0')) &&
          (((uVar21 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar13 = (ulong)(puVar14[1] * uVar21 + (uint)(ushort)puVar14[2] * 8 + iVar9) + (long)puVar14
        ;
        goto joined_r0x01278944;
      }
    }
    else if (uVar21 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar21;
      if (*(uint *)(param_1 + 0x1b0) <= uVar21) {
        uVar3 = 0;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01278944:
      if (lVar13 != 0) {
        uVar3 = uVar21;
        if (uVar8 <= uVar21) {
          uVar3 = 0;
        }
        puVar14 = __ptr + (long)(int)uVar3 * 4;
        *puVar14 = uVar21;
        *(long *)(puVar14 + 2) = lVar13;
        if ((int)uVar26 < (int)uVar12) {
          *(uint **)((long)pvVar24 + (long)(int)uVar26 * 8) = puVar14;
          uVar26 = uVar26 + 1;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar28 != uVar21);
  if (1 < (int)uVar26) {
    uVar12 = 0;
    uVar28 = uVar26 - 1;
    do {
      if ((int)uVar28 <= (int)uVar12) break;
      uVar16 = (ulong)uVar12;
      uVar15 = (ulong)uVar28;
      uVar23 = uVar16;
      uVar28 = uVar12;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar20 = puVar2[1];
          uVar28 = (uint)uVar23;
          puVar2[1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar20;
        }
        uVar23 = uVar23 + 1;
      } while (uVar15 != uVar23);
      if ((int)uVar28 <= (int)uVar12) break;
      uVar23 = (ulong)uVar28;
      uVar12 = uVar28;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar23 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar20 = puVar2[-1];
          uVar12 = (uint)uVar23;
          puVar2[-1] = *(undefined8 *)((long)pvVar24 + uVar23 * 8);
          *(undefined8 *)((long)pvVar24 + uVar23 * 8) = uVar20;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar16 < (long)uVar23);
    } while (uVar12 != uVar28);
  }
  plVar27 = (long *)PTR_DAT_04bb3350;
  if (uVar26 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar27 = (long *)PTR_DAT_04bb3350;
    if (pvVar24 != (void *)0x0) goto LAB_01278a8c;
  }
  else {
    uVar23 = 0;
    do {
      uVar16 = -(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3;
      uVar12 = (uint)uVar23;
      uVar28 = uVar12;
      if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar28 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar24 + uVar16) + 8);
      uVar28 = **(uint **)((long)pvVar24 + uVar16);
      if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
        uVar28 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar28 * 2) = (short)uVar23;
      uVar23 = (ulong)(uVar12 + 1);
    } while (uVar26 != uVar12 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar26;
LAB_01278a8c:
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar24);
    }
    else {
      plVar25 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar24);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x38))(plVar25,pvVar24);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar25 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x38))(plVar25,__ptr);
      }
    }
  }
joined_r0x012787e0:
  if (lVar22 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar22;
  }
  return;
}

