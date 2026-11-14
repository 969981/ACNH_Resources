
void FUN_017cd330(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined4 *__ptr;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  code *pcVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  void *pvVar23;
  size_t sVar24;
  void *__src;
  long *plVar25;
  uint uVar26;
  size_t __size;
  undefined *local_70;
  long lStack_68;
  
  pvVar23 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar23 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = 0;
    do {
      if (*(char *)(param_2[1] + lVar10) == '\0') goto LAB_017cd3dc;
      lVar20 = param_2[1] + lVar10;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_017cd3dc;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_017cd3dc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_017cd3dc:
    iVar6 = (int)lVar10;
    if (*(int *)(param_1 + 0x18) <= (int)lVar10) {
      iVar6 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar23,__src,(long)iVar6);
    *(undefined1 *)((long)pvVar23 + (long)iVar6) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar4 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  plVar25 = (long *)PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  plVar21 = param_3;
  if (param_3 == (long *)0x0) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar20 + 8);
    if (lVar10 != 0) {
      puVar2 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar21 = (long *)*puVar2;
    if (plVar21 != (long *)0x0) goto LAB_017cd464;
    lVar20 = 1;
  }
  else {
LAB_017cd464:
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
    lVar20 = *(long *)(lVar10 + 0xa8);
    *(long **)(lVar10 + 0xa8) = plVar21;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  pvVar23 = DAT_05293030;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar11;
  }
  if (DAT_05293030 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05293030);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05293030);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar23);
      }
    }
    DAT_05293030 = (void *)0x0;
    DAT_05293028 = 0;
  }
  pvVar23 = DAT_05293000;
  if (DAT_05293000 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_05293000);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar1,DAT_05293000);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar23);
      }
    }
    DAT_05293000 = (void *)0x0;
    DAT_05292ff8 = 0;
  }
  uVar26 = (uint)__size;
  if (uVar26 == 0) {
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_017ce2f0();
    }
  }
  else {
    if ((int)uVar26 < 1) {
LAB_017cd5d0:
      sVar24 = (size_t)DAT_05293028;
      if (0 < (int)DAT_05293028) goto LAB_017cd5e0;
    }
    else {
      lVar10 = *(long *)puVar1;
      if (lVar10 == 0) {
        pvVar23 = malloc(__size << 1);
      }
      else {
        plVar7 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017cd5d0;
        }
        pvVar23 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,__size << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_017cd5d0;
      sVar24 = __size;
      DAT_05293028 = uVar26;
      DAT_05293030 = pvVar23;
LAB_017cd5e0:
      uVar12 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          lVar10 = uVar17 * 2;
          uVar17 = uVar17 + 4;
          *(undefined2 *)((long)DAT_05293030 + lVar10) = 0;
          *(undefined2 *)((long)DAT_05293030 + lVar10 + 2) = 0;
          *(undefined2 *)((long)DAT_05293030 + lVar10 + 4) = 0;
          *(undefined2 *)((long)DAT_05293030 + lVar10 + 6) = 0;
        } while ((sVar24 & 0xfffffffc) != uVar17);
      }
      if (uVar12 != 0) {
        lVar10 = uVar17 << 1;
        do {
          uVar12 = uVar12 - 1;
          *(undefined2 *)((long)DAT_05293030 + lVar10) = 0;
          lVar10 = lVar10 + 2;
        } while (uVar12 != 0);
      }
    }
    if ((int)uVar26 < 1) {
LAB_017cd6d8:
      sVar24 = (size_t)DAT_05292ff8;
      if (0 < (int)DAT_05292ff8) goto LAB_017cd6e8;
    }
    else {
      lVar10 = *(long *)puVar1;
      if (lVar10 == 0) {
        pvVar23 = malloc(__size << 1);
      }
      else {
        plVar7 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017cd6d8;
        }
        pvVar23 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,__size << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_017cd6d8;
      sVar24 = __size;
      DAT_05292ff8 = uVar26;
      DAT_05293000 = pvVar23;
LAB_017cd6e8:
      uVar12 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          lVar10 = uVar17 * 2;
          uVar17 = uVar17 + 4;
          *(undefined2 *)((long)DAT_05293000 + lVar10) = 0;
          *(undefined2 *)((long)DAT_05293000 + lVar10 + 2) = 0;
          *(undefined2 *)((long)DAT_05293000 + lVar10 + 4) = 0;
          *(undefined2 *)((long)DAT_05293000 + lVar10 + 6) = 0;
        } while ((sVar24 & 0xfffffffc) != uVar17);
      }
      if (uVar12 != 0) {
        lVar10 = uVar17 << 1;
        do {
          uVar12 = uVar12 - 1;
          *(undefined2 *)((long)DAT_05293000 + lVar10) = 0;
          lVar10 = lVar10 + 2;
        } while (uVar12 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_017ce2f0();
    }
    if ((int)uVar26 < 1) {
LAB_017cd7ec:
      sVar24 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_017cd7f8;
    }
    else {
      lVar10 = *(long *)puVar1;
      if (lVar10 == 0) {
        pvVar23 = malloc(__size);
      }
      else {
        plVar7 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017cd7ec;
        }
        pvVar23 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_017cd7ec;
      *(uint *)(param_1 + 200) = uVar26;
      *(void **)(param_1 + 0xd0) = pvVar23;
      sVar24 = __size;
LAB_017cd7f8:
      uVar12 = sVar24 & 3;
      if (sVar24 - 1 < 3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar17) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar17 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar17 + 2) = 1;
          lVar10 = *(long *)(param_1 + 0xd0) + uVar17;
          uVar17 = uVar17 + 4;
          *(undefined1 *)(lVar10 + 3) = 1;
        } while ((sVar24 & 0xfffffffc) != uVar17);
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar17) = 1;
        uVar17 = uVar17 + 1;
      }
    }
    plVar7 = (long *)(param_1 + 0xf8);
    uVar12 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((uVar12 & 1) != 0) {
      uVar9 = 0;
      uVar5 = uVar26;
      if (uVar26 < 2) {
        uVar5 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar9 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
             (((uVar9 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            if ((ulong)(puVar11[1] * uVar9 + (uint)(ushort)puVar11[2] * 8 + iVar6) + (long)puVar11
                != 0) goto LAB_017cd8f0;
          }
LAB_017cd8a4:
          uVar16 = uVar9;
          if (*(uint *)(param_1 + 200) <= uVar9) {
            uVar16 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar16) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar9) goto LAB_017cd8a4;
          uVar16 = uVar9;
          if (*(uint *)(param_1 + 0x1b0) <= uVar9) {
            uVar16 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar16 * 8) == 0) goto LAB_017cd8a4;
LAB_017cd8f0:
          uVar12 = (**(code **)*plVar7)(plVar7);
          if ((uVar12 & 1) == 0) goto LAB_017cd8a4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  uVar9 = uVar26;
  if ((int)uVar26 <= (int)*(uint *)(param_1 + 400)) {
    uVar9 = *(uint *)(param_1 + 400);
  }
  uVar12 = (ulong)uVar9;
  if (uVar9 != 0) {
    if ((int)uVar9 < 1) {
LAB_017cda08:
      uVar17 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_017cda18;
    }
    else {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        pvVar23 = malloc(uVar12 << 3);
      }
      else {
        plVar7 = plVar21;
        if (plVar21 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
          plVar7 = (long *)(lVar10 + 8);
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017cda08;
        }
        pvVar23 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar12 << 3,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_017cda08;
      *(uint *)(param_1 + 0x1b0) = uVar9;
      *(void **)(param_1 + 0x1b8) = pvVar23;
      uVar17 = uVar12;
LAB_017cda18:
      uVar13 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar10 = uVar18 * 8;
          uVar18 = uVar18 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10 + 0x18) = 0;
        } while ((uVar17 & 0xfffffffc) != uVar18);
      }
      if (uVar13 != 0) {
        lVar10 = uVar18 << 3;
        do {
          uVar13 = uVar13 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10) = 0;
          lVar10 = lVar10 + 8;
        } while (uVar13 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar9 < 1) {
LAB_017cdb0c:
      uVar12 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_017cdba4;
    }
    else {
      lVar10 = *(long *)puVar1;
      if (lVar10 == 0) {
        pvVar23 = malloc(uVar12 << 1);
      }
      else {
        if (plVar21 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
          puVar2 = (undefined8 *)(lVar10 + 8);
          if (lVar8 != 0) {
            puVar2 = (undefined8 *)(lVar8 + 0xa8);
          }
          plVar21 = (long *)*puVar2;
          if (plVar21 == (long *)0x0) goto LAB_017cdb0c;
        }
        pvVar23 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,uVar12 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_017cdb0c;
      *(uint *)(param_1 + 0x1c8) = uVar9;
      *(void **)(param_1 + 0x1d0) = pvVar23;
    }
    uVar17 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar10 = uVar13 * 2;
        uVar13 = uVar13 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar10) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar10 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar10 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar10 + 6) = 0xffff;
      } while ((uVar12 & 0xfffffffc) != uVar13);
    }
    if (uVar17 != 0) {
      lVar10 = uVar13 << 1;
      do {
        uVar17 = uVar17 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar10) = 0xffff;
        lVar10 = lVar10 + 2;
      } while (uVar17 != 0);
    }
  }
LAB_017cdba4:
  if ((uVar26 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar12 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar12 & 1) == 0) ||
       ((uVar26 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar26 != 0) {
        uVar5 = 0;
        uVar9 = 0;
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if ((((*(long *)(param_1 + 0xb0) != 0) &&
                 (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 200) <= uVar5 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar5) != '\0')))) &&
               (((uVar5 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
              iVar6 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                iVar6 = 0x1c;
              }
              lVar10 = (ulong)(puVar11[1] * uVar5 + (uint)(ushort)puVar11[2] * 8 + iVar6) +
                       (long)puVar11;
              goto joined_r0x017cdec0;
            }
          }
          else if (uVar5 < *(uint *)(param_1 + 0x1c0)) {
            uVar16 = uVar5;
            if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
              uVar16 = 0;
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x017cdec0:
            if (lVar10 != 0) {
              uVar16 = uVar9;
              if (*(uint *)(param_1 + 0x1b0) <= uVar9) {
                uVar16 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar16 * 8) = lVar10;
              uVar16 = uVar5;
              if (*(uint *)(param_1 + 0x1c8) <= uVar5) {
                uVar16 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar16 * 2) = (short)uVar9;
              uVar9 = uVar9 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar26 != uVar5);
        *(uint *)(param_1 + 0x1c0) = uVar9;
        (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
      }
    }
    else {
      uVar9 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar9 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar9) != '\0')) &&
              (((uVar9 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            lVar10 = (ulong)(puVar11[1] * uVar9 + (uint)(ushort)puVar11[2] * 8 + iVar6) +
                     (long)puVar11;
            goto joined_r0x017cddd0;
          }
        }
        else if (uVar9 < *(uint *)(param_1 + 0x1c0)) {
          uVar5 = uVar9;
          if (*(uint *)(param_1 + 0x1b0) <= uVar9) {
            uVar5 = 0;
          }
          lVar10 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar5 * 8);
joined_r0x017cddd0:
          if (lVar10 != 0) {
            pcVar15 = *(code **)(param_1 + 0x198);
            if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
              pcVar15 = *(code **)(pcVar15 +
                                  *(long *)(lVar10 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
            }
            lVar8 = (*pcVar15)();
            if (lVar8 != 0) {
              local_70 = puVar1;
              lStack_68 = lVar8;
              uVar5 = (**(code **)*puVar2)(puVar2,&local_70);
              if (-1 < (int)uVar5) {
                uVar16 = uVar5;
                if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
                  uVar16 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar16 * 8) = lVar10;
                uVar16 = uVar9;
                if (*(uint *)(param_1 + 0x1c8) <= uVar9) {
                  uVar16 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar16 * 2) = (short)uVar5;
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar26 != uVar9);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x017cdf18;
  }
  if ((int)uVar26 < 1) {
    uVar5 = 0;
    __ptr = (undefined4 *)0x0;
    uVar9 = 0;
    pvVar23 = (void *)0x0;
  }
  else {
    lVar10 = *(long *)puVar1;
    if (lVar10 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_017cdc14;
LAB_017cdf30:
      __size = 0;
LAB_017cdf34:
      uVar5 = (uint)__size;
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) goto LAB_017cdfa8;
      uVar9 = uVar5;
      if (param_3 == (long *)0x0) {
LAB_017cdf68:
        uVar5 = uVar9;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
        puVar2 = (undefined8 *)(lVar10 + 8);
        if (lVar8 != 0) {
          puVar2 = (undefined8 *)(lVar8 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          uVar9 = 0;
          pvVar23 = (void *)0x0;
          goto LAB_017cdfbc;
        }
      }
      pvVar23 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar26 << 3),8);
    }
    else {
      plVar21 = param_3;
      if (param_3 != (long *)0x0) {
LAB_017cdbf8:
        __ptr = (undefined4 *)(**(code **)(*plVar21 + 0x30))(plVar21,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_017cdf30;
LAB_017cdc14:
        uVar12 = __size & 3;
        puVar14 = __ptr;
        if (uVar12 != 0) {
          do {
            *puVar14 = 0;
            uVar12 = uVar12 - 1;
            *(undefined8 *)(puVar14 + 2) = 0;
            puVar14 = puVar14 + 4;
          } while (uVar12 != 0);
        }
        if (2 < (__size - 1 & 0xfffffffffffffff)) {
          do {
            *puVar14 = 0;
            *(undefined8 *)(puVar14 + 2) = 0;
            puVar14[4] = 0;
            *(undefined8 *)(puVar14 + 6) = 0;
            puVar14[8] = 0;
            *(undefined8 *)(puVar14 + 10) = 0;
            puVar14[0xc] = 0;
            *(undefined8 *)(puVar14 + 0xe) = 0;
            puVar14 = puVar14 + 0x10;
          } while (puVar14 != __ptr + __size * 4);
        }
        goto LAB_017cdf34;
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
      plVar21 = (long *)(lVar10 + 8);
      if (lVar8 != 0) {
        plVar21 = (long *)(lVar8 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      if (plVar21 != (long *)0x0) goto LAB_017cdbf8;
      __ptr = (undefined4 *)0x0;
      lVar10 = *(long *)puVar1;
      uVar5 = 0;
      uVar9 = 0;
      if (lVar10 != 0) goto LAB_017cdf68;
LAB_017cdfa8:
      pvVar23 = malloc((long)(int)(uVar26 << 3));
    }
    uVar9 = 0;
    if (pvVar23 != (void *)0x0) {
      uVar9 = uVar26;
    }
  }
LAB_017cdfbc:
  uVar22 = 0;
  uVar16 = 0;
  if (uVar26 < 2) {
    uVar26 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar16 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar16) != '\0')) &&
          (((uVar16 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        lVar10 = (ulong)(puVar11[1] * uVar16 + (uint)(ushort)puVar11[2] * 8 + iVar6) + (long)puVar11
        ;
        goto joined_r0x017ce0a0;
      }
    }
    else if (uVar16 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar16;
      if (*(uint *)(param_1 + 0x1b0) <= uVar16) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x017ce0a0:
      if (lVar10 != 0) {
        uVar3 = uVar16;
        if (uVar5 <= uVar16) {
          uVar3 = 0;
        }
        puVar11 = __ptr + (long)(int)uVar3 * 4;
        *puVar11 = uVar16;
        *(long *)(puVar11 + 2) = lVar10;
        if ((int)uVar22 < (int)uVar9) {
          *(uint **)((long)pvVar23 + (long)(int)uVar22 * 8) = puVar11;
          uVar22 = uVar22 + 1;
        }
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar26 != uVar16);
  if (1 < (int)uVar22) {
    uVar9 = 0;
    uVar26 = uVar22 - 1;
    do {
      if ((int)uVar26 <= (int)uVar9) break;
      uVar17 = (ulong)uVar9;
      uVar13 = (ulong)uVar26;
      uVar12 = uVar17;
      uVar26 = uVar9;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar12 * 8);
        iVar6 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar6) {
          uVar19 = puVar2[1];
          uVar26 = (uint)uVar12;
          puVar2[1] = *(undefined8 *)((long)pvVar23 + uVar12 * 8);
          *(undefined8 *)((long)pvVar23 + uVar12 * 8) = uVar19;
        }
        uVar12 = uVar12 + 1;
      } while (uVar13 != uVar12);
      if ((int)uVar26 <= (int)uVar9) break;
      uVar12 = (ulong)uVar26;
      uVar9 = uVar26;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar12 * 8);
        iVar6 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar6 < 0) {
          uVar19 = puVar2[-1];
          uVar9 = (uint)uVar12;
          puVar2[-1] = *(undefined8 *)((long)pvVar23 + uVar12 * 8);
          *(undefined8 *)((long)pvVar23 + uVar12 * 8) = uVar19;
        }
        uVar12 = uVar12 - 1;
      } while ((long)uVar17 < (long)uVar12);
    } while (uVar9 != uVar26);
  }
  plVar25 = (long *)PTR_DAT_04bb3350;
  plVar21 = (long *)PTR_DAT_04bb2698;
  if (uVar22 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar21 = (long *)PTR_DAT_04bb2698;
    plVar25 = (long *)PTR_DAT_04bb3350;
    if (pvVar23 != (void *)0x0) goto LAB_017ce204;
  }
  else {
    uVar12 = 0;
    do {
      uVar17 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      uVar9 = (uint)uVar12;
      uVar26 = uVar9;
      if (*(uint *)(param_1 + 0x1b0) <= uVar9) {
        uVar26 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar26 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar23 + uVar17) + 8);
      uVar26 = **(uint **)((long)pvVar23 + uVar17);
      if (*(uint *)(param_1 + 0x1c8) <= uVar26) {
        uVar26 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar26 * 2) = (short)uVar12;
      uVar12 = (ulong)(uVar9 + 1);
    } while (uVar22 != uVar9 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar22;
LAB_017ce204:
    if (*plVar21 == 0) {
      free(pvVar23);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*plVar21,pvVar23);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar23);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*plVar21 == 0) {
      free(__ptr);
    }
    else {
      plVar21 = (long *)FUN_038cb610(*plVar21,__ptr);
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x38))(plVar21,__ptr);
      }
    }
  }
joined_r0x017cdf18:
  if (lVar20 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar25 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar20;
  }
  return;
}

