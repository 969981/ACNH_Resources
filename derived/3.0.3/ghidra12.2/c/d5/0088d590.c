
void FUN_0088d590(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 *__ptr;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  code *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  uint uVar22;
  void *pvVar23;
  size_t sVar24;
  void *__src;
  uint uVar25;
  size_t __size;
  long *local_80;
  undefined *local_70;
  long lStack_68;
  
  pvVar23 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar23 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_0088d63c;
      lVar7 = param_2[1] + lVar11;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0088d63c;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0088d63c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0088d63c:
    iVar6 = (int)lVar11;
    if (*(int *)(param_1 + 0x18) <= (int)lVar11) {
      iVar6 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar23,__src,(long)iVar6);
    *(undefined1 *)((long)pvVar23 + (long)iVar6) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar4 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  lVar11 = DAT_05ae7600;
  puVar1 = PTR_DAT_04bb3350;
  plVar21 = param_3;
  if (param_3 == (long *)0x0) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar11 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    plVar21 = (long *)*puVar2;
    if (plVar21 != (long *)0x0) goto LAB_0088d6c4;
    lVar7 = 1;
  }
  else {
LAB_0088d6c4:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar7 = *(long *)(lVar11 + 0xa8);
    *(long **)(lVar11 + 0xa8) = plVar21;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  pvVar23 = DAT_04ce9770;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar12;
  }
  if (DAT_04ce9770 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(DAT_04ce9770);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,DAT_04ce9770);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar23);
      }
    }
    DAT_04ce9770 = (void *)0x0;
    DAT_04ce9768 = 0;
  }
  pvVar23 = DAT_04ce9760;
  if (DAT_04ce9760 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(DAT_04ce9760);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,DAT_04ce9760);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar23);
      }
    }
    DAT_04ce9760 = (void *)0x0;
    DAT_04ce9758 = 0;
  }
  pvVar23 = DAT_04ce9820;
  if (DAT_04ce9820 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(DAT_04ce9820);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,DAT_04ce9820);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar23);
      }
    }
    DAT_04ce9820 = (void *)0x0;
    DAT_04ce9818 = 0;
  }
  pvVar23 = DAT_04ce9830;
  if (DAT_04ce9830 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(DAT_04ce9830);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,DAT_04ce9830);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar23);
      }
    }
    DAT_04ce9830 = (void *)0x0;
    DAT_04ce9828 = 0;
  }
  uVar25 = (uint)__size;
  if (uVar25 == 0) {
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_0088e7c0();
    }
  }
  else {
    if ((int)uVar25 < 1) {
LAB_0088d8f0:
      sVar24 = (size_t)DAT_04ce9768;
      if (0 < (int)DAT_04ce9768) goto LAB_0088d900;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar23 = malloc(__size << 1);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088d8f0;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088d8f0;
      sVar24 = __size;
      DAT_04ce9768 = uVar25;
      DAT_04ce9770 = pvVar23;
LAB_0088d900:
      uVar13 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar11 = uVar18 * 2;
          uVar18 = uVar18 + 4;
          *(undefined2 *)((long)DAT_04ce9770 + lVar11) = 0;
          *(undefined2 *)((long)DAT_04ce9770 + lVar11 + 2) = 0;
          *(undefined2 *)((long)DAT_04ce9770 + lVar11 + 4) = 0;
          *(undefined2 *)((long)DAT_04ce9770 + lVar11 + 6) = 0;
        } while ((sVar24 & 0xfffffffc) != uVar18);
      }
      if (uVar13 != 0) {
        lVar11 = uVar18 << 1;
        do {
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)DAT_04ce9770 + lVar11) = 0;
          lVar11 = lVar11 + 2;
        } while (uVar13 != 0);
      }
    }
    lVar11 = DAT_05ae7600;
    if ((int)uVar25 < 1) {
LAB_0088d9fc:
      if (0 < (int)DAT_04ce9758) {
        sVar24 = (ulong)DAT_04ce9758 << 1;
        goto LAB_0088da10;
      }
    }
    else {
      sVar24 = __size << 1;
      if (DAT_05ae7600 == 0) {
        pvVar23 = malloc(sVar24);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088d9fc;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar24,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088d9fc;
      DAT_04ce9758 = uVar25;
      DAT_04ce9760 = pvVar23;
LAB_0088da10:
      memset(DAT_04ce9760,0,sVar24);
    }
    lVar11 = DAT_05ae7600;
    if ((int)uVar25 < 1) {
LAB_0088daac:
      sVar24 = (size_t)DAT_04ce9818;
      if (0 < (int)DAT_04ce9818) goto LAB_0088dabc;
    }
    else {
      if (DAT_05ae7600 == 0) {
        pvVar23 = malloc(__size << 1);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088daac;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088daac;
      sVar24 = __size;
      DAT_04ce9818 = uVar25;
      DAT_04ce9820 = pvVar23;
LAB_0088dabc:
      uVar13 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar11 = uVar18 * 2;
          uVar18 = uVar18 + 4;
          *(undefined2 *)((long)DAT_04ce9820 + lVar11) = 0;
          *(undefined2 *)((long)DAT_04ce9820 + lVar11 + 2) = 0;
          *(undefined2 *)((long)DAT_04ce9820 + lVar11 + 4) = 0;
          *(undefined2 *)((long)DAT_04ce9820 + lVar11 + 6) = 0;
        } while ((sVar24 & 0xfffffffc) != uVar18);
      }
      if (uVar13 != 0) {
        lVar11 = uVar18 << 1;
        do {
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)DAT_04ce9820 + lVar11) = 0;
          lVar11 = lVar11 + 2;
        } while (uVar13 != 0);
      }
    }
    lVar11 = DAT_05ae7600;
    if ((int)uVar25 < 1) {
LAB_0088dbc0:
      if (0 < (int)DAT_04ce9828) {
        sVar24 = (ulong)DAT_04ce9828 << 1;
        goto LAB_0088dbd8;
      }
    }
    else {
      sVar24 = __size << 1;
      if (DAT_05ae7600 == 0) {
        pvVar23 = malloc(sVar24);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088dbc0;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar24,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088dbc0;
      DAT_04ce9828 = uVar25;
      DAT_04ce9830 = pvVar23;
LAB_0088dbd8:
      memset(DAT_04ce9830,0,sVar24);
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_0088e7c0();
    }
    if ((int)uVar25 < 1) {
LAB_0088dc78:
      sVar24 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_0088dc84;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar23 = malloc(__size);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088dc78;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088dc78;
      *(uint *)(param_1 + 200) = uVar25;
      *(void **)(param_1 + 0xd0) = pvVar23;
      sVar24 = __size;
LAB_0088dc84:
      uVar13 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18 + 2) = 1;
          lVar11 = *(long *)(param_1 + 0xd0) + uVar18;
          uVar18 = uVar18 + 4;
          *(undefined1 *)(lVar11 + 3) = 1;
        } while ((sVar24 & 0xfffffffc) != uVar18);
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18) = 1;
        uVar18 = uVar18 + 1;
      }
    }
    plVar8 = (long *)(param_1 + 0xf8);
    uVar13 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((uVar13 & 1) != 0) {
      uVar10 = 0;
      uVar5 = uVar25;
      if (uVar25 < 2) {
        uVar5 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar10 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar10) != '\0')))) &&
             (((uVar10 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            if ((ulong)(puVar12[1] * uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar6) + (long)puVar12
                != 0) goto LAB_0088dd80;
          }
LAB_0088dd34:
          uVar17 = uVar10;
          if (*(uint *)(param_1 + 200) <= uVar10) {
            uVar17 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar17) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar10) goto LAB_0088dd34;
          uVar17 = uVar10;
          if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
            uVar17 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8) == 0) goto LAB_0088dd34;
LAB_0088dd80:
          uVar13 = (**(code **)*plVar8)(plVar8);
          if ((uVar13 & 1) == 0) goto LAB_0088dd34;
        }
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
    }
  }
  uVar10 = uVar25;
  if ((int)uVar25 <= (int)*(uint *)(param_1 + 400)) {
    uVar10 = *(uint *)(param_1 + 400);
  }
  uVar13 = (ulong)uVar10;
  if (uVar10 != 0) {
    if ((int)uVar10 < 1) {
LAB_0088dea0:
      uVar18 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_0088deb0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar23 = malloc(uVar13 << 3);
      }
      else {
        plVar8 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0088dea0;
        }
        pvVar23 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar13 << 3,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088dea0;
      *(uint *)(param_1 + 0x1b0) = uVar10;
      *(void **)(param_1 + 0x1b8) = pvVar23;
      uVar18 = uVar13;
LAB_0088deb0:
      uVar14 = uVar18 & 3;
      if (uVar18 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar11 = uVar19 * 8;
          uVar19 = uVar19 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar11) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar11 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar11 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar11 + 0x18) = 0;
        } while ((uVar18 & 0xfffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        lVar11 = uVar19 << 3;
        do {
          uVar14 = uVar14 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar11) = 0;
          lVar11 = lVar11 + 8;
        } while (uVar14 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar10 < 1) {
LAB_0088dfac:
      uVar13 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_0088e044;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar23 = malloc(uVar13 << 1);
      }
      else {
        if (plVar21 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar2 = (undefined8 *)(lVar11 + 8);
          if (lVar9 != 0) {
            puVar2 = (undefined8 *)(lVar9 + 0xa8);
          }
          plVar21 = (long *)*puVar2;
          if (plVar21 == (long *)0x0) goto LAB_0088dfac;
        }
        pvVar23 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,uVar13 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_0088dfac;
      *(uint *)(param_1 + 0x1c8) = uVar10;
      *(void **)(param_1 + 0x1d0) = pvVar23;
    }
    uVar18 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar11 = uVar14 * 2;
        uVar14 = uVar14 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar11) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar11 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar11 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar11 + 6) = 0xffff;
      } while ((uVar13 & 0xfffffffc) != uVar14);
    }
    if (uVar18 != 0) {
      lVar11 = uVar14 << 1;
      do {
        uVar18 = uVar18 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar11) = 0xffff;
        lVar11 = lVar11 + 2;
      } while (uVar18 != 0);
    }
  }
LAB_0088e044:
  lVar11 = DAT_05ae7600;
  if ((uVar25 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar13 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar13 & 1) == 0) ||
       ((uVar25 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar25 != 0) {
        uVar5 = 0;
        uVar10 = 0;
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if ((((*(long *)(param_1 + 0xb0) != 0) &&
                 (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 200) <= uVar5 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar5) != '\0')))) &&
               (((uVar5 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
              iVar6 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                iVar6 = 0x1c;
              }
              lVar11 = (ulong)(puVar12[1] * uVar5 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                       (long)puVar12;
              goto joined_r0x0088e380;
            }
          }
          else if (uVar5 < *(uint *)(param_1 + 0x1c0)) {
            uVar17 = uVar5;
            if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
              uVar17 = 0;
            }
            lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8);
joined_r0x0088e380:
            if (lVar11 != 0) {
              uVar17 = uVar10;
              if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
                uVar17 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar17 * 8) = lVar11;
              uVar17 = uVar5;
              if (*(uint *)(param_1 + 0x1c8) <= uVar5) {
                uVar17 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar17 * 2) = (short)uVar10;
              uVar10 = uVar10 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar25 != uVar5);
        *(uint *)(param_1 + 0x1c0) = uVar10;
        (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
      }
    }
    else {
      uVar10 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar10 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar10) != '\0')) &&
              (((uVar10 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            lVar11 = (ulong)(puVar12[1] * uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                     (long)puVar12;
            goto joined_r0x0088e290;
          }
        }
        else if (uVar10 < *(uint *)(param_1 + 0x1c0)) {
          uVar5 = uVar10;
          if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
            uVar5 = 0;
          }
          lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar5 * 8);
joined_r0x0088e290:
          if (lVar11 != 0) {
            pcVar16 = *(code **)(param_1 + 0x198);
            if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
              pcVar16 = *(code **)(pcVar16 +
                                  *(long *)(lVar11 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
            }
            lVar9 = (*pcVar16)();
            if (lVar9 != 0) {
              local_70 = puVar1;
              lStack_68 = lVar9;
              uVar5 = (**(code **)*puVar2)(puVar2,&local_70);
              if (-1 < (int)uVar5) {
                uVar17 = uVar5;
                if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
                  uVar17 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8) = lVar11;
                uVar17 = uVar10;
                if (*(uint *)(param_1 + 0x1c8) <= uVar10) {
                  uVar17 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar17 * 2) = (short)uVar5;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar25 != uVar10);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x0088e3d4;
  }
  if ((int)uVar25 < 1) {
    uVar5 = 0;
    __ptr = (undefined4 *)0x0;
    uVar10 = 0;
    pvVar23 = (void *)0x0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_0088e0c8;
LAB_0088e3ec:
      __size = 0;
LAB_0088e3f0:
      uVar5 = (uint)__size;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) goto LAB_0088e478;
      uVar10 = uVar5;
      local_80 = param_3;
      if (param_3 == (long *)0x0) {
LAB_0088e42c:
        uVar5 = uVar10;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar11 + 8);
        if (lVar9 != 0) {
          puVar2 = (undefined8 *)(lVar9 + 0xa8);
        }
        local_80 = (long *)*puVar2;
        if (local_80 == (long *)0x0) {
          pvVar23 = (void *)0x0;
          uVar10 = 0;
          goto LAB_0088e48c;
        }
      }
      pvVar23 = (void *)(**(code **)(*local_80 + 0x30))(local_80,(long)(int)(uVar25 << 3),8);
    }
    else {
      plVar21 = param_3;
      if (param_3 != (long *)0x0) {
LAB_0088e0ac:
        __ptr = (undefined4 *)(**(code **)(*plVar21 + 0x30))(plVar21,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_0088e3ec;
LAB_0088e0c8:
        uVar13 = __size & 3;
        puVar15 = __ptr;
        if (uVar13 != 0) {
          do {
            *puVar15 = 0;
            uVar13 = uVar13 - 1;
            *(undefined8 *)(puVar15 + 2) = 0;
            puVar15 = puVar15 + 4;
          } while (uVar13 != 0);
        }
        if (2 < (__size - 1 & 0xfffffffffffffff)) {
          do {
            *puVar15 = 0;
            *(undefined8 *)(puVar15 + 2) = 0;
            puVar15[4] = 0;
            *(undefined8 *)(puVar15 + 6) = 0;
            puVar15[8] = 0;
            *(undefined8 *)(puVar15 + 10) = 0;
            puVar15[0xc] = 0;
            *(undefined8 *)(puVar15 + 0xe) = 0;
            puVar15 = puVar15 + 0x10;
          } while (puVar15 != __ptr + __size * 4);
        }
        goto LAB_0088e3f0;
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar21 = (long *)(lVar11 + 8);
      if (lVar9 != 0) {
        plVar21 = (long *)(lVar9 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      if (plVar21 != (long *)0x0) goto LAB_0088e0ac;
      __ptr = (undefined4 *)0x0;
      uVar5 = 0;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      uVar10 = 0;
      if (lVar11 != 0) goto LAB_0088e42c;
LAB_0088e478:
      pvVar23 = malloc((long)(int)(uVar25 << 3));
    }
    uVar10 = 0;
    if (pvVar23 != (void *)0x0) {
      uVar10 = uVar25;
    }
  }
LAB_0088e48c:
  uVar22 = 0;
  uVar17 = 0;
  if (uVar25 < 2) {
    uVar25 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar17 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar17) != '\0')) &&
          (((uVar17 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        lVar11 = (ulong)(puVar12[1] * uVar17 + (uint)(ushort)puVar12[2] * 8 + iVar6) + (long)puVar12
        ;
        goto joined_r0x0088e570;
      }
    }
    else if (uVar17 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar17;
      if (*(uint *)(param_1 + 0x1b0) <= uVar17) {
        uVar3 = 0;
      }
      lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x0088e570:
      if (lVar11 != 0) {
        uVar3 = uVar17;
        if (uVar5 <= uVar17) {
          uVar3 = 0;
        }
        puVar12 = __ptr + (long)(int)uVar3 * 4;
        *puVar12 = uVar17;
        *(long *)(puVar12 + 2) = lVar11;
        if ((int)uVar22 < (int)uVar10) {
          *(uint **)((long)pvVar23 + (long)(int)uVar22 * 8) = puVar12;
          uVar22 = uVar22 + 1;
        }
      }
    }
    uVar17 = uVar17 + 1;
  } while (uVar25 != uVar17);
  if (1 < (int)uVar22) {
    uVar10 = 0;
    uVar25 = uVar22 - 1;
    do {
      if ((int)uVar25 <= (int)uVar10) break;
      uVar18 = (ulong)uVar10;
      uVar14 = (ulong)uVar25;
      uVar13 = uVar18;
      uVar25 = uVar10;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar13 * 8);
        iVar6 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar6) {
          uVar20 = puVar2[1];
          uVar25 = (uint)uVar13;
          puVar2[1] = *(undefined8 *)((long)pvVar23 + uVar13 * 8);
          *(undefined8 *)((long)pvVar23 + uVar13 * 8) = uVar20;
        }
        uVar13 = uVar13 + 1;
      } while (uVar14 != uVar13);
      if ((int)uVar25 <= (int)uVar10) break;
      uVar13 = (ulong)uVar25;
      uVar10 = uVar25;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar13 * 8);
        iVar6 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar6 < 0) {
          uVar20 = puVar2[-1];
          uVar10 = (uint)uVar13;
          puVar2[-1] = *(undefined8 *)((long)pvVar23 + uVar13 * 8);
          *(undefined8 *)((long)pvVar23 + uVar13 * 8) = uVar20;
        }
        uVar13 = uVar13 - 1;
      } while ((long)uVar18 < (long)uVar13);
    } while (uVar10 != uVar25);
  }
  if (uVar22 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (pvVar23 != (void *)0x0) goto LAB_0088e6b8;
  }
  else {
    uVar13 = 0;
    do {
      uVar18 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
      uVar10 = (uint)uVar13;
      uVar25 = uVar10;
      if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
        uVar25 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar25 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar23 + uVar18) + 8);
      uVar25 = **(uint **)((long)pvVar23 + uVar18);
      if (*(uint *)(param_1 + 0x1c8) <= uVar25) {
        uVar25 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar25 * 2) = (short)uVar13;
      uVar13 = (ulong)(uVar10 + 1);
    } while (uVar22 != uVar10 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar22;
LAB_0088e6b8:
    if (DAT_05ae7600 == 0) {
      free(pvVar23);
    }
    else {
      plVar21 = (long *)FUN_038cb610(DAT_05ae7600,pvVar23);
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x38))(plVar21,pvVar23);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar21 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x38))(plVar21,__ptr);
      }
    }
  }
joined_r0x0088e3d4:
  if (lVar7 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar7;
  }
  return;
}

