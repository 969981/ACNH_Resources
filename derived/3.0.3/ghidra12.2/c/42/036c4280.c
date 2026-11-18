
void FUN_036c4280(long param_1,long *param_2,long *param_3)

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
  undefined4 *__ptr;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  code *pcVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  uint uVar25;
  void *pvVar26;
  size_t sVar27;
  void *__src;
  uint uVar28;
  size_t __size;
  long *plVar29;
  undefined *local_70;
  long lStack_68;
  
  pvVar26 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar26 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar13 = 0;
    do {
      if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_036c432c;
      lVar23 = param_2[1] + lVar13;
      if (*(char *)(lVar23 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_036c432c;
      }
      if (*(char *)(lVar23 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_036c432c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_036c432c:
    iVar9 = (int)lVar13;
    if (*(int *)(param_1 + 0x18) <= (int)lVar13) {
      iVar9 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar26,__src,(long)iVar9);
    *(undefined1 *)((long)pvVar26 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  plVar29 = (long *)PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  plVar24 = param_3;
  if (param_3 == (long *)0x0) {
    lVar23 = *(long *)PTR_DAT_04bb2698;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar23 + 8);
    if (lVar13 != 0) {
      puVar2 = (undefined8 *)(lVar13 + 0xa8);
    }
    plVar24 = (long *)*puVar2;
    if (plVar24 != (long *)0x0) goto LAB_036c43b4;
    lVar23 = 1;
  }
  else {
LAB_036c43b4:
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    lVar23 = *(long *)(lVar13 + 0xa8);
    *(long **)(lVar13 + 0xa8) = plVar24;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  puVar4 = PTR_DAT_04bcac10;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar14;
  }
  pvVar26 = *(void **)(PTR_DAT_04bcac10 + 8);
  if (pvVar26 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar26);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar1,pvVar26);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar26);
      }
    }
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined4 *)puVar4 = 0;
  }
  puVar5 = PTR_DAT_04bcac18;
  pvVar26 = *(void **)(PTR_DAT_04bcac18 + 8);
  if (pvVar26 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar26);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar1,pvVar26);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar26);
      }
    }
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined4 *)puVar5 = 0;
  }
  puVar6 = PTR_DAT_04bcac20;
  pvVar26 = *(void **)(PTR_DAT_04bcac20 + 8);
  if (pvVar26 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar26);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar1,pvVar26);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar26);
      }
    }
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined4 *)puVar6 = 0;
  }
  uVar28 = (uint)__size;
  if (uVar28 == 0) {
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_036c5340();
    }
  }
  else {
    if ((int)uVar28 < 1) {
LAB_036c4564:
      sVar27 = (size_t)*(uint *)puVar4;
      if (0 < (int)*(uint *)puVar4) goto LAB_036c4570;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar26 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_036c4564;
        }
        pvVar26 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c4564;
      *(uint *)puVar4 = uVar28;
      *(void **)(puVar4 + 8) = pvVar26;
      sVar27 = __size;
LAB_036c4570:
      uVar15 = sVar27 & 3;
      if (sVar27 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar13 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar13 + 6) = 0;
        } while ((sVar27 & 0xfffffffc) != uVar20);
      }
      if (uVar15 != 0) {
        lVar13 = uVar20 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    puVar1 = PTR_DAT_04bb2698;
    if ((int)uVar28 < 1) {
LAB_036c4668:
      sVar27 = (size_t)*(uint *)puVar5;
      if (0 < (int)*(uint *)puVar5) goto LAB_036c4674;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar26 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_036c4668;
        }
        pvVar26 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c4668;
      *(uint *)puVar5 = uVar28;
      *(void **)(puVar5 + 8) = pvVar26;
      sVar27 = __size;
LAB_036c4674:
      uVar15 = sVar27 & 3;
      if (sVar27 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar13 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar13 + 6) = 0;
        } while ((sVar27 & 0xfffffffc) != uVar20);
      }
      if (uVar15 != 0) {
        lVar13 = uVar20 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((int)uVar28 < 1) {
LAB_036c476c:
      sVar27 = (size_t)*(uint *)puVar6;
      if (0 < (int)*(uint *)puVar6) goto LAB_036c4778;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar26 = malloc(__size << 1);
      }
      else {
        plVar10 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_036c476c;
        }
        pvVar26 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c476c;
      *(uint *)puVar6 = uVar28;
      *(void **)(puVar6 + 8) = pvVar26;
      sVar27 = __size;
LAB_036c4778:
      uVar15 = sVar27 & 3;
      if (sVar27 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar13 = uVar20 * 2;
          uVar20 = uVar20 + 4;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13 + 6) = 0;
        } while ((sVar27 & 0xfffffffc) != uVar20);
      }
      if (uVar15 != 0) {
        lVar13 = uVar20 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)(*(long *)(puVar6 + 8) + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_036c5340();
    }
    if ((int)uVar28 < 1) {
LAB_036c487c:
      sVar27 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_036c4888;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar26 = malloc(__size);
      }
      else {
        plVar10 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_036c487c;
        }
        pvVar26 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c487c;
      *(uint *)(param_1 + 200) = uVar28;
      *(void **)(param_1 + 0xd0) = pvVar26;
      sVar27 = __size;
LAB_036c4888:
      uVar15 = sVar27 & 3;
      if (sVar27 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20 + 2) = 1;
          lVar13 = *(long *)(param_1 + 0xd0) + uVar20;
          uVar20 = uVar20 + 4;
          *(undefined1 *)(lVar13 + 3) = 1;
        } while ((sVar27 & 0xfffffffc) != uVar20);
      }
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar20) = 1;
        uVar20 = uVar20 + 1;
      }
    }
    plVar10 = (long *)(param_1 + 0xf8);
    uVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((uVar15 & 1) != 0) {
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
                != 0) goto LAB_036c498c;
          }
LAB_036c4940:
          uVar19 = uVar12;
          if (*(uint *)(param_1 + 200) <= uVar12) {
            uVar19 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar19) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar12) goto LAB_036c4940;
          uVar19 = uVar12;
          if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
            uVar19 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar19 * 8) == 0) goto LAB_036c4940;
LAB_036c498c:
          uVar15 = (**(code **)*plVar10)(plVar10);
          if ((uVar15 & 1) == 0) goto LAB_036c4940;
        }
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  uVar12 = uVar28;
  if ((int)uVar28 <= (int)*(uint *)(param_1 + 400)) {
    uVar12 = *(uint *)(param_1 + 400);
  }
  uVar15 = (ulong)uVar12;
  if (uVar12 != 0) {
    if ((int)uVar12 < 1) {
LAB_036c4aa0:
      uVar20 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_036c4ab0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar26 = malloc(uVar15 << 3);
      }
      else {
        plVar10 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          plVar10 = (long *)(lVar13 + 8);
          if (lVar11 != 0) {
            plVar10 = (long *)(lVar11 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_036c4aa0;
        }
        pvVar26 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar15 << 3,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c4aa0;
      *(uint *)(param_1 + 0x1b0) = uVar12;
      *(void **)(param_1 + 0x1b8) = pvVar26;
      uVar20 = uVar15;
LAB_036c4ab0:
      uVar16 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          lVar13 = uVar21 * 8;
          uVar21 = uVar21 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x18) = 0;
        } while ((uVar20 & 0xfffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        lVar13 = uVar21 << 3;
        do {
          uVar16 = uVar16 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          lVar13 = lVar13 + 8;
        } while (uVar16 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar12 < 1) {
LAB_036c4b9c:
      uVar15 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_036c4c34;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar26 = malloc(uVar15 << 1);
      }
      else {
        if (plVar24 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
          puVar2 = (undefined8 *)(lVar13 + 8);
          if (lVar11 != 0) {
            puVar2 = (undefined8 *)(lVar11 + 0xa8);
          }
          plVar24 = (long *)*puVar2;
          if (plVar24 == (long *)0x0) goto LAB_036c4b9c;
        }
        pvVar26 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,uVar15 << 1,8);
      }
      if (pvVar26 == (void *)0x0) goto LAB_036c4b9c;
      *(uint *)(param_1 + 0x1c8) = uVar12;
      *(void **)(param_1 + 0x1d0) = pvVar26;
    }
    uVar20 = uVar15 & 3;
    if (uVar15 - 1 < 3) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar13 = uVar16 * 2;
        uVar16 = uVar16 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 6) = 0xffff;
      } while ((uVar15 & 0xfffffffc) != uVar16);
    }
    if (uVar20 != 0) {
      lVar13 = uVar16 << 1;
      do {
        uVar20 = uVar20 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (uVar20 != 0);
    }
  }
LAB_036c4c34:
  if ((uVar28 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar15 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar15 & 1) == 0) ||
       ((uVar28 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar28 != 0) {
        uVar8 = 0;
        uVar12 = 0;
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if ((((*(long *)(param_1 + 0xb0) != 0) &&
                 (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 200) <= uVar8 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
               (((uVar8 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
              iVar9 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar9 = 0x1c;
              }
              lVar13 = (ulong)(puVar14[1] * uVar8 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                       (long)puVar14;
              goto joined_r0x036c4f50;
            }
          }
          else if (uVar8 < *(uint *)(param_1 + 0x1c0)) {
            uVar19 = uVar8;
            if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
              uVar19 = 0;
            }
            lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar19 * 8);
joined_r0x036c4f50:
            if (lVar13 != 0) {
              uVar19 = uVar12;
              if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
                uVar19 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar19 * 8) = lVar13;
              uVar19 = uVar8;
              if (*(uint *)(param_1 + 0x1c8) <= uVar8) {
                uVar19 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar19 * 2) = (short)uVar12;
              uVar12 = uVar12 + 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar28 != uVar8);
        *(uint *)(param_1 + 0x1c0) = uVar12;
        (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
      }
    }
    else {
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
            goto joined_r0x036c4e60;
          }
        }
        else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
          uVar8 = uVar12;
          if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
            uVar8 = 0;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x036c4e60:
          if (lVar13 != 0) {
            pcVar18 = *(code **)(param_1 + 0x198);
            if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
              pcVar18 = *(code **)(pcVar18 +
                                  *(long *)(lVar13 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
            }
            lVar11 = (*pcVar18)();
            if (lVar11 != 0) {
              local_70 = puVar1;
              lStack_68 = lVar11;
              uVar8 = (**(code **)*puVar2)(puVar2,&local_70);
              if (-1 < (int)uVar8) {
                uVar19 = uVar8;
                if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
                  uVar19 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar19 * 8) = lVar13;
                uVar19 = uVar12;
                if (*(uint *)(param_1 + 0x1c8) <= uVar12) {
                  uVar19 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar19 * 2) = (short)uVar8;
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar28 != uVar12);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x036c4fa4;
  }
  if ((int)uVar28 < 1) {
    uVar8 = 0;
    __ptr = (undefined4 *)0x0;
    uVar12 = 0;
    pvVar26 = (void *)0x0;
  }
  else {
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_036c4ca4;
LAB_036c4fbc:
      __size = 0;
LAB_036c4fc0:
      uVar8 = (uint)__size;
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) goto LAB_036c5028;
      uVar12 = uVar8;
      if (param_3 == (long *)0x0) {
LAB_036c4fe8:
        uVar8 = uVar12;
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
        puVar2 = (undefined8 *)(lVar13 + 8);
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          uVar12 = 0;
          pvVar26 = (void *)0x0;
          goto LAB_036c503c;
        }
      }
      pvVar26 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar28 << 3),8);
    }
    else {
      plVar24 = param_3;
      if (param_3 != (long *)0x0) {
LAB_036c4c88:
        __ptr = (undefined4 *)(**(code **)(*plVar24 + 0x30))(plVar24,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_036c4fbc;
LAB_036c4ca4:
        uVar15 = __size & 3;
        puVar17 = __ptr;
        if (uVar15 != 0) {
          do {
            *puVar17 = 0;
            uVar15 = uVar15 - 1;
            *(undefined8 *)(puVar17 + 2) = 0;
            puVar17 = puVar17 + 4;
          } while (uVar15 != 0);
        }
        if (2 < (__size - 1 & 0xfffffffffffffff)) {
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
          } while (puVar17 != __ptr + __size * 4);
        }
        goto LAB_036c4fc0;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
      plVar24 = (long *)(lVar13 + 8);
      if (lVar11 != 0) {
        plVar24 = (long *)(lVar11 + 0xa8);
      }
      plVar24 = (long *)*plVar24;
      if (plVar24 != (long *)0x0) goto LAB_036c4c88;
      lVar13 = *(long *)puVar1;
      __ptr = (undefined4 *)0x0;
      uVar8 = 0;
      uVar12 = 0;
      if (lVar13 != 0) goto LAB_036c4fe8;
LAB_036c5028:
      pvVar26 = malloc((long)(int)(uVar28 << 3));
    }
    uVar12 = 0;
    if (pvVar26 != (void *)0x0) {
      uVar12 = uVar28;
    }
  }
LAB_036c503c:
  uVar25 = 0;
  uVar19 = 0;
  if (uVar28 < 2) {
    uVar28 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar19 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar19) != '\0')) &&
          (((uVar19 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        lVar13 = (ulong)(puVar14[1] * uVar19 + (uint)(ushort)puVar14[2] * 8 + iVar9) + (long)puVar14
        ;
        goto joined_r0x036c5120;
      }
    }
    else if (uVar19 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar19;
      if (*(uint *)(param_1 + 0x1b0) <= uVar19) {
        uVar3 = 0;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x036c5120:
      if (lVar13 != 0) {
        uVar3 = uVar19;
        if (uVar8 <= uVar19) {
          uVar3 = 0;
        }
        puVar14 = __ptr + (long)(int)uVar3 * 4;
        *puVar14 = uVar19;
        *(long *)(puVar14 + 2) = lVar13;
        if ((int)uVar25 < (int)uVar12) {
          *(uint **)((long)pvVar26 + (long)(int)uVar25 * 8) = puVar14;
          uVar25 = uVar25 + 1;
        }
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar28 != uVar19);
  if (1 < (int)uVar25) {
    uVar12 = 0;
    uVar28 = uVar25 - 1;
    do {
      if ((int)uVar28 <= (int)uVar12) break;
      uVar20 = (ulong)uVar12;
      uVar16 = (ulong)uVar28;
      uVar15 = uVar20;
      uVar28 = uVar12;
      do {
        puVar2 = (undefined8 *)((long)pvVar26 + uVar15 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar9) {
          uVar22 = puVar2[1];
          uVar28 = (uint)uVar15;
          puVar2[1] = *(undefined8 *)((long)pvVar26 + uVar15 * 8);
          *(undefined8 *)((long)pvVar26 + uVar15 * 8) = uVar22;
        }
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
      if ((int)uVar28 <= (int)uVar12) break;
      uVar15 = (ulong)uVar28;
      uVar12 = uVar28;
      do {
        puVar2 = (undefined8 *)((long)pvVar26 + uVar15 * 8);
        iVar9 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar9 < 0) {
          uVar22 = puVar2[-1];
          uVar12 = (uint)uVar15;
          puVar2[-1] = *(undefined8 *)((long)pvVar26 + uVar15 * 8);
          *(undefined8 *)((long)pvVar26 + uVar15 * 8) = uVar22;
        }
        uVar15 = uVar15 - 1;
      } while ((long)uVar20 < (long)uVar15);
    } while (uVar12 != uVar28);
  }
  plVar29 = (long *)PTR_DAT_04bb3350;
  plVar24 = (long *)PTR_DAT_04bb2698;
  if (uVar25 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar24 = (long *)PTR_DAT_04bb2698;
    plVar29 = (long *)PTR_DAT_04bb3350;
    if (pvVar26 != (void *)0x0) goto LAB_036c5284;
  }
  else {
    uVar15 = 0;
    do {
      uVar20 = -(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      uVar12 = (uint)uVar15;
      uVar28 = uVar12;
      if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar28 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar26 + uVar20) + 8);
      uVar28 = **(uint **)((long)pvVar26 + uVar20);
      if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
        uVar28 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar28 * 2) = (short)uVar15;
      uVar15 = (ulong)(uVar12 + 1);
    } while (uVar25 != uVar12 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar25;
LAB_036c5284:
    if (*plVar24 == 0) {
      free(pvVar26);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar24,pvVar26);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar26);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*plVar24 == 0) {
      free(__ptr);
    }
    else {
      plVar24 = (long *)FUN_038cb610(*plVar24,__ptr);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24,__ptr);
      }
    }
  }
joined_r0x036c4fa4:
  if (lVar23 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar29 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar23;
  }
  return;
}

