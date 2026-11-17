
void FUN_02a95630(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
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
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  void *pvVar27;
  size_t sVar28;
  void *__src;
  uint uVar29;
  size_t __size;
  undefined *local_70;
  long lStack_68;
  
  pvVar27 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar27 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_02a956dc;
      lVar24 = param_2[1] + lVar14;
      if (*(char *)(lVar24 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_02a956dc;
      }
      if (*(char *)(lVar24 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_02a956dc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_02a956dc:
    iVar9 = (int)lVar14;
    if (*(int *)(param_1 + 0x18) <= (int)lVar14) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar27,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar27 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  puVar1 = PTR_DAT_04bb3350;
  plVar12 = (long *)PTR_DAT_04bb2698;
  plVar25 = param_3;
  if (param_3 == (long *)0x0) {
    lVar24 = *(long *)PTR_DAT_04bb2698;
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar24 + 8);
    if (lVar14 != 0) {
      puVar2 = (undefined8 *)(lVar14 + 0xa8);
    }
    plVar25 = (long *)*puVar2;
    if (plVar25 != (long *)0x0) goto LAB_02a95764;
    lVar24 = 1;
  }
  else {
LAB_02a95764:
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar24 = *(long *)(lVar14 + 0xa8);
    *(long **)(lVar14 + 0xa8) = plVar25;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  puVar1 = PTR_DAT_04bc46a0;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar15;
  }
  pvVar27 = *(void **)(PTR_DAT_04bc46a0 + 8);
  if (pvVar27 != (void *)0x0) {
    if (*plVar12 == 0) {
      free(pvVar27);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar12,pvVar27);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar27);
      }
    }
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined4 *)puVar1 = 0;
  }
  puVar4 = PTR_DAT_04bc46a8;
  pvVar27 = *(void **)(PTR_DAT_04bc46a8 + 8);
  if (pvVar27 != (void *)0x0) {
    if (*plVar12 == 0) {
      free(pvVar27);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar12,pvVar27);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar27);
      }
    }
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined4 *)puVar4 = 0;
  }
  puVar5 = PTR_DAT_04bc46b0;
  pvVar27 = *(void **)(PTR_DAT_04bc46b0 + 8);
  if (pvVar27 != (void *)0x0) {
    if (*plVar12 == 0) {
      free(pvVar27);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar12,pvVar27);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar27);
      }
    }
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined4 *)puVar5 = 0;
  }
  puVar6 = PTR_DAT_04bc46b8;
  pvVar27 = *(void **)(PTR_DAT_04bc46b8 + 8);
  if (pvVar27 != (void *)0x0) {
    if (*plVar12 == 0) {
      free(pvVar27);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar12,pvVar27);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar27);
      }
    }
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined4 *)puVar6 = 0;
  }
  uVar29 = (uint)__size;
  if (uVar29 == 0) {
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02a96b50();
    }
  }
  else {
    if ((int)uVar29 < 1) {
LAB_02a95964:
      sVar28 = (size_t)*(uint *)puVar1;
      if (0 < (int)*(uint *)puVar1) goto LAB_02a95970;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar27 = malloc(__size << 1);
      }
      else {
        plVar12 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_02a95964;
        }
        pvVar27 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,__size << 1,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95964;
      *(uint *)puVar1 = uVar29;
      *(void **)(puVar1 + 8) = pvVar27;
      sVar28 = __size;
LAB_02a95970:
      uVar16 = sVar28 & 3;
      if (sVar28 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar14 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)(*(long *)(puVar1 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar1 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar1 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar1 + 8) + lVar14 + 6) = 0;
        } while ((sVar28 & 0xfffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        lVar14 = uVar21 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar1 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    plVar12 = (long *)PTR_DAT_04bb2698;
    if ((int)uVar29 < 1) {
LAB_02a95a74:
      sVar28 = (size_t)*(uint *)puVar4;
      if (0 < (int)*(uint *)puVar4) goto LAB_02a95a80;
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar27 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02a95a74;
        }
        pvVar27 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95a74;
      *(uint *)puVar4 = uVar29;
      *(void **)(puVar4 + 8) = pvVar27;
      sVar28 = __size;
LAB_02a95a80:
      uVar16 = sVar28 & 3;
      if (sVar28 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar14 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar14 + 6) = 0;
        } while ((sVar28 & 0xfffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        lVar14 = uVar21 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((int)uVar29 < 1) {
LAB_02a95b78:
      sVar28 = (size_t)*(uint *)puVar5;
      if (0 < (int)*(uint *)puVar5) goto LAB_02a95b84;
    }
    else {
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        pvVar27 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02a95b78;
        }
        pvVar27 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95b78;
      *(uint *)puVar5 = uVar29;
      *(void **)(puVar5 + 8) = pvVar27;
      sVar28 = __size;
LAB_02a95b84:
      uVar16 = sVar28 & 3;
      if (sVar28 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar14 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar14 + 6) = 0;
        } while ((sVar28 & 0xfffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        lVar14 = uVar21 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((int)uVar29 < 1) {
LAB_02a95c84:
      sVar28 = (size_t)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_02a95c90;
    }
    else {
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        pvVar27 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02a95c84;
        }
        pvVar27 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95c84;
      *(uint *)puVar6 = uVar29;
      *(void **)(puVar6 + 8) = pvVar27;
      sVar28 = __size;
LAB_02a95c90:
      uVar16 = sVar28 & 3;
      if (sVar28 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar14 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14 + 6) = 0;
        } while ((sVar28 & 0xfffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        lVar14 = uVar21 << 1;
        do {
          uVar16 = uVar16 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar14) = 0;
          lVar14 = lVar14 + 2;
        } while (uVar16 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02a96b50();
    }
    if ((int)uVar29 < 1) {
LAB_02a95d94:
      sVar28 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_02a95da0;
    }
    else {
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        pvVar27 = malloc(__size);
      }
      else {
        plVar10 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02a95d94;
        }
        pvVar27 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95d94;
      *(uint *)(param_1 + 200) = uVar29;
      *(void **)(param_1 + 0xd0) = pvVar27;
      sVar28 = __size;
LAB_02a95da0:
      uVar16 = sVar28 & 3;
      if (sVar28 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21 + 2) = 1;
          lVar14 = *(long *)(param_1 + 0xd0) + uVar21;
          uVar21 = uVar21 + 4;
          *(undefined1 *)(lVar14 + 3) = 1;
        } while ((sVar28 & 0xfffffffc) != uVar21);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21) = 1;
        uVar21 = uVar21 + 1;
      }
    }
    plVar10 = (long *)(param_1 + 0xf8);
    uVar16 = (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((uVar16 & 1) != 0) {
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
                != 0) goto LAB_02a95e9c;
          }
LAB_02a95e50:
          uVar20 = uVar13;
          if (*(uint *)(param_1 + 200) <= uVar13) {
            uVar20 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar20) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar13) goto LAB_02a95e50;
          uVar20 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar20 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8) == 0) goto LAB_02a95e50;
LAB_02a95e9c:
          uVar16 = (**(code **)*plVar10)(plVar10);
          if ((uVar16 & 1) == 0) goto LAB_02a95e50;
        }
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
  }
  uVar13 = uVar29;
  if ((int)uVar29 <= (int)*(uint *)(param_1 + 400)) {
    uVar13 = *(uint *)(param_1 + 400);
  }
  uVar16 = (ulong)uVar13;
  if (uVar13 != 0) {
    if ((int)uVar13 < 1) {
LAB_02a95fac:
      uVar21 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_02a95fbc;
    }
    else {
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        pvVar27 = malloc(uVar16 << 3);
      }
      else {
        plVar10 = plVar25;
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar14 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02a95fac;
        }
        pvVar27 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar16 << 3,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a95fac;
      *(uint *)(param_1 + 0x1b0) = uVar13;
      *(void **)(param_1 + 0x1b8) = pvVar27;
      uVar21 = uVar16;
LAB_02a95fbc:
      uVar17 = uVar21 & 3;
      if (uVar21 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          lVar14 = uVar22 * 8;
          uVar22 = uVar22 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14 + 0x18) = 0;
        } while ((uVar21 & 0xfffffffc) != uVar22);
      }
      if (uVar17 != 0) {
        lVar14 = uVar22 << 3;
        do {
          uVar17 = uVar17 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while (uVar17 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar13 < 1) {
LAB_02a960b4:
      uVar16 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_02a96144;
    }
    else {
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        pvVar27 = malloc(uVar16 << 1);
      }
      else {
        if (plVar25 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar2 = (undefined8 *)(lVar14 + 8);
          if (lVar11 != 0) {
            puVar2 = (undefined8 *)(lVar11 + 0xa8);
          }
          plVar25 = (long *)*puVar2;
          if (plVar25 == (long *)0x0) goto LAB_02a960b4;
        }
        pvVar27 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar16 << 1,8);
      }
      if (pvVar27 == (void *)0x0) goto LAB_02a960b4;
      *(uint *)(param_1 + 0x1c8) = uVar13;
      *(void **)(param_1 + 0x1d0) = pvVar27;
    }
    uVar21 = uVar16 & 3;
    if (uVar16 - 1 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      do {
        lVar14 = uVar17 * 2;
        uVar17 = uVar17 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14 + 6) = 0xffff;
      } while ((uVar16 & 0xfffffffc) != uVar17);
    }
    if (uVar21 != 0) {
      lVar14 = uVar17 << 1;
      do {
        uVar21 = uVar21 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar14) = 0xffff;
        lVar14 = lVar14 + 2;
      } while (uVar21 != 0);
    }
  }
LAB_02a96144:
  if ((uVar29 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar16 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar16 & 1) == 0) ||
       ((uVar29 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar29 != 0) {
        uVar8 = 0;
        uVar13 = 0;
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
              goto joined_r0x02a96470;
            }
          }
          else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
            uVar20 = uVar8;
            if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
              uVar20 = 0;
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8);
joined_r0x02a96470:
            if (lVar14 != 0) {
              uVar20 = uVar13;
              if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
                uVar20 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar20 * 8) = lVar14;
              uVar20 = uVar8;
              if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
                uVar20 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar20 * 2) = (short)uVar13;
              uVar13 = uVar13 + 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar29 != uVar8);
        *(uint *)(param_1 + 0x1c0) = uVar13;
        (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
      }
    }
    else {
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
            goto joined_r0x02a96380;
          }
        }
        else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
          uVar8 = uVar13;
          if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
            uVar8 = 0;
          }
          lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x02a96380:
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
                uVar20 = uVar8;
                if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                  uVar20 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8) = lVar14;
                uVar20 = uVar13;
                if (*(uint *)(param_1 + 0x1c8) <= uVar13) {
                  uVar20 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar20 * 2) = (short)uVar8;
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar29 != uVar13);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x02a964c4;
  }
  if ((int)uVar29 < 1) {
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
    uVar13 = 0;
    pvVar27 = (void *)0x0;
  }
  else {
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_02a961bc;
LAB_02a964dc:
      __size = 0;
LAB_02a964e0:
      uVar8 = (uint)__size;
      lVar14 = *plVar12;
      if (lVar14 == 0) goto LAB_02a96550;
      uVar13 = uVar8;
      if (param_3 == (long *)0x0) {
LAB_02a96508:
        uVar8 = uVar13;
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar14 + 8);
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          uVar13 = 0;
          pvVar27 = (void *)0x0;
          goto LAB_02a96564;
        }
      }
      pvVar27 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar29 << 3),8);
    }
    else {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_02a961a0:
        __ptr = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_02a964dc;
LAB_02a961bc:
        uVar16 = __size & 3;
        puVar18 = __ptr;
        if (uVar16 != 0) {
          do {
            *puVar18 = 0;
            uVar16 = uVar16 - 1;
            *(undefined8 *)(puVar18 + 2) = 0;
            puVar18 = puVar18 + 4;
          } while (uVar16 != 0);
        }
        if (2 < (__size - 1 & 0xfffffffffffffff)) {
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
          } while (puVar18 != __ptr + __size * 4);
        }
        goto LAB_02a964e0;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar25 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar25 = (long *)(lVar11 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_02a961a0;
      lVar14 = *plVar12;
      __ptr = (undefined4 *)0x0;
      uVar8 = 0;
      uVar13 = 0;
      if (lVar14 != 0) goto LAB_02a96508;
LAB_02a96550:
      pvVar27 = malloc((long)(int)(uVar29 << 3));
    }
    uVar13 = 0;
    if (pvVar27 != (void *)0x0) {
      uVar13 = uVar29;
    }
  }
LAB_02a96564:
  uVar26 = 0;
  uVar20 = 0;
  if (uVar29 < 2) {
    uVar29 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar15 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar20 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar20) != '\0')) &&
          (((uVar20 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar14 = (ulong)(puVar15[1] * uVar20 + (uint)(ushort)puVar15[2] * 8 + iVar9) + (long)puVar15
        ;
        goto joined_r0x02a96640;
      }
    }
    else if (uVar20 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar20;
      if (*(uint *)(param_1 + 0x1b0) <= uVar20) {
        uVar3 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x02a96640:
      if (lVar14 != 0) {
        uVar3 = uVar20;
        if (uVar8 <= uVar20) {
          uVar3 = 0;
        }
        puVar15 = __ptr + (long)(int)uVar3 * 4;
        *puVar15 = uVar20;
        *(long *)(puVar15 + 2) = lVar14;
        if ((int)uVar26 < (int)uVar13) {
          *(uint **)((long)pvVar27 + (long)(int)uVar26 * 8) = puVar15;
          uVar26 = uVar26 + 1;
        }
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar29 != uVar20);
  if (1 < (int)uVar26) {
    uVar13 = 0;
    uVar29 = uVar26 - 1;
    do {
      if ((int)uVar29 <= (int)uVar13) break;
      uVar21 = (ulong)uVar13;
      uVar17 = (ulong)uVar29;
      uVar16 = uVar21;
      uVar29 = uVar13;
      do {
        puVar2 = (undefined8 *)((long)pvVar27 + uVar16 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar23 = puVar2[1];
          uVar29 = (uint)uVar16;
          puVar2[1] = *(undefined8 *)((long)pvVar27 + uVar16 * 8);
          *(undefined8 *)((long)pvVar27 + uVar16 * 8) = uVar23;
        }
        uVar16 = uVar16 + 1;
      } while (uVar17 != uVar16);
      if ((int)uVar29 <= (int)uVar13) break;
      uVar16 = (ulong)uVar29;
      uVar13 = uVar29;
      do {
        puVar2 = (undefined8 *)((long)pvVar27 + uVar16 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar23 = puVar2[-1];
          uVar13 = (uint)uVar16;
          puVar2[-1] = *(undefined8 *)((long)pvVar27 + uVar16 * 8);
          *(undefined8 *)((long)pvVar27 + uVar16 * 8) = uVar23;
        }
        uVar16 = uVar16 - 1;
      } while ((long)uVar21 < (long)uVar16);
    } while (uVar13 != uVar29);
  }
  plVar12 = (long *)PTR_DAT_04bb2698;
  if (uVar26 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar12 = (long *)PTR_DAT_04bb2698;
    if (pvVar27 != (void *)0x0) goto LAB_02a9678c;
  }
  else {
    uVar16 = 0;
    do {
      uVar21 = -(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      uVar13 = (uint)uVar16;
      uVar29 = uVar13;
      if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
        uVar29 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar29 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar27 + uVar21) + 8);
      uVar29 = **(uint **)((long)pvVar27 + uVar21);
      if (*(uint *)(param_1 + 0x1c8) <= uVar29) {
        uVar29 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar29 * 2) = (short)uVar16;
      uVar16 = (ulong)(uVar13 + 1);
    } while (uVar26 != uVar13 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar26;
LAB_02a9678c:
    if (*plVar12 == 0) {
      free(pvVar27);
    }
    else {
      plVar25 = (long *)FUN_038cb610(*plVar12,pvVar27);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x38))(plVar25,pvVar27);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*plVar12 == 0) {
      free(__ptr);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar12,__ptr);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,__ptr);
      }
    }
  }
joined_r0x02a964c4:
  if (lVar24 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar24;
  }
  return;
}

