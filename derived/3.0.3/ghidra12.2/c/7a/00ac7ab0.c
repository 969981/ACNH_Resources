
void FUN_00ac7ab0(long param_1,long *param_2,long *param_3)

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
  undefined4 *__ptr;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  void *pvVar23;
  long *plVar24;
  size_t __size;
  uint uVar25;
  void *__src;
  long *plVar26;
  uint uVar27;
  undefined *local_70;
  long lStack_68;
  
  pvVar23 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar23 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar13 = 0;
    do {
      if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_00ac7b5c;
      lVar9 = param_2[1] + lVar13;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_00ac7b5c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_00ac7b5c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_00ac7b5c:
    iVar8 = (int)lVar13;
    if (*(int *)(param_1 + 0x18) <= (int)lVar13) {
      iVar8 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar23,__src,(long)iVar8);
    *(undefined1 *)((long)pvVar23 + (long)iVar8) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  lVar13 = DAT_05ae7600;
  plVar26 = (long *)PTR_DAT_04bb3350;
  plVar24 = param_3;
  if (param_3 == (long *)0x0) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar13 + 8);
    if (lVar9 != 0) {
      puVar2 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar24 = (long *)*puVar2;
    if (plVar24 != (long *)0x0) goto LAB_00ac7be4;
    lVar9 = 1;
  }
  else {
LAB_00ac7be4:
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
    lVar9 = *(long *)(lVar13 + 0xa8);
    *(long **)(lVar13 + 0xa8) = plVar24;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  lVar13 = DAT_05ae7600;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 == (uint *)0x0)) {
    bVar5 = 0;
    uVar27 = 0;
  }
  else {
    uVar27 = *puVar14;
    uVar22 = (ulong)uVar27;
    if (uVar27 == 0) {
      bVar5 = 0;
    }
    else {
      if ((int)uVar27 < 1) {
LAB_00ac7cb0:
        uVar22 = (ulong)*(uint *)(param_1 + 200);
        if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_00ac7cbc;
      }
      else {
        if (DAT_05ae7600 == 0) {
          pvVar23 = malloc(uVar22);
        }
        else {
          plVar11 = plVar24;
          if (plVar24 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
            plVar11 = (long *)(lVar13 + 8);
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + 0xa8);
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_00ac7cb0;
          }
          pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22,8);
        }
        if (pvVar23 == (void *)0x0) goto LAB_00ac7cb0;
        *(uint *)(param_1 + 200) = uVar27;
        *(void **)(param_1 + 0xd0) = pvVar23;
LAB_00ac7cbc:
        uVar15 = uVar22 & 3;
        if (uVar22 - 1 < 3) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18) = 1;
            *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18 + 1) = 1;
            *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18 + 2) = 1;
            lVar13 = *(long *)(param_1 + 0xd0) + uVar18;
            uVar18 = uVar18 + 4;
            *(undefined1 *)(lVar13 + 3) = 1;
          } while ((uVar22 & 0xfffffffc) != uVar18);
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar18) = 1;
          uVar18 = uVar18 + 1;
        }
      }
      plVar11 = (long *)(param_1 + 0xf8);
      uVar22 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if ((uVar22 & 1) != 0) {
        uVar12 = 0;
        uVar7 = uVar27;
        if (uVar27 < 2) {
          uVar7 = 1;
        }
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if ((((*(long *)(param_1 + 0xb0) != 0) &&
                 (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 200) <= uVar12 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
               (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              if ((ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                  (long)puVar14 != 0) goto LAB_00ac7dac;
            }
LAB_00ac7d60:
            uVar21 = uVar12;
            if (*(uint *)(param_1 + 200) <= uVar12) {
              uVar21 = 0;
            }
            *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) = 0;
          }
          else {
            if (*(uint *)(param_1 + 0x1c0) <= uVar12) goto LAB_00ac7d60;
            uVar21 = uVar12;
            if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
              uVar21 = 0;
            }
            if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) == 0) goto LAB_00ac7d60;
LAB_00ac7dac:
            uVar22 = (**(code **)*plVar11)(plVar11);
            if ((uVar22 & 1) == 0) goto LAB_00ac7d60;
          }
          uVar12 = uVar12 + 1;
        } while (uVar7 != uVar12);
      }
      bVar5 = 1;
    }
  }
  uVar12 = uVar27;
  if ((int)uVar27 <= (int)*(uint *)(param_1 + 400)) {
    uVar12 = *(uint *)(param_1 + 400);
  }
  uVar22 = (ulong)uVar12;
  if (uVar12 != 0) {
    if ((int)uVar12 < 1) {
LAB_00ac7ec0:
      uVar15 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_00ac7ecc;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 3);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_00ac7ec0;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22 << 3,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_00ac7ec0;
      *(uint *)(param_1 + 0x1b0) = uVar12;
      *(void **)(param_1 + 0x1b8) = pvVar23;
      uVar15 = uVar22;
LAB_00ac7ecc:
      uVar18 = uVar15 & 3;
      if (uVar15 - 1 < 3) {
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
        } while ((uVar15 & 0xfffffffc) != uVar19);
      }
      if (uVar18 != 0) {
        lVar13 = uVar19 << 3;
        do {
          uVar18 = uVar18 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          lVar13 = lVar13 + 8;
        } while (uVar18 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar12 < 1) {
LAB_00ac7fc4:
      uVar22 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_00ac8054;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 1);
      }
      else {
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          puVar2 = (undefined8 *)(lVar13 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar24 = (long *)*puVar2;
          if (plVar24 == (long *)0x0) goto LAB_00ac7fc4;
        }
        pvVar23 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,uVar22 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_00ac7fc4;
      *(uint *)(param_1 + 0x1c8) = uVar12;
      *(void **)(param_1 + 0x1d0) = pvVar23;
    }
    uVar15 = uVar22 & 3;
    if (uVar22 - 1 < 3) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      do {
        lVar13 = uVar18 * 2;
        uVar18 = uVar18 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 6) = 0xffff;
      } while ((uVar22 & 0xfffffffc) != uVar18);
    }
    if (uVar15 != 0) {
      lVar13 = uVar18 << 1;
      do {
        uVar15 = uVar15 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (uVar15 != 0);
    }
  }
LAB_00ac8054:
  puVar1 = PTR_DAT_04bb2698;
  bVar4 = (bool)(bVar5 ^ 1);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar4 = true;
  }
  if (bVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar22 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if ((uVar22 & 1) != 0) {
      bVar4 = (bool)(bVar5 ^ 1);
      if ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0) {
        bVar4 = true;
      }
      if (!bVar4) {
        if (uVar27 != 0) {
          uVar12 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((*(long *)(param_1 + 0xb0) != 0) &&
                  (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                 (((*(uint *)(param_1 + 200) <= uVar12 ||
                   (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')) &&
                  (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
                iVar8 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  iVar8 = 0x1c;
                }
                lVar13 = (ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                         (long)puVar14;
                goto joined_r0x00ac82e0;
              }
            }
            else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
              uVar7 = uVar12;
              if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
                uVar7 = 0;
              }
              lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x00ac82e0:
              if (lVar13 != 0) {
                pcVar17 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar17 = *(code **)(pcVar17 +
                                      *(long *)(lVar13 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar10 = (*pcVar17)();
                if (lVar10 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar10;
                  uVar7 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar7) {
                    uVar21 = uVar7;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
                      uVar21 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8) = lVar13;
                    uVar21 = uVar12;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar12) {
                      uVar21 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar7;
                  }
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar27 != uVar12);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x00ac8450;
      }
    }
    if (uVar27 != 0) {
      uVar7 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar7 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar7) != '\0')) &&
              (((uVar7 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar13 = (ulong)(puVar14[1] * uVar7 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                     (long)puVar14;
            goto joined_r0x00ac83d0;
          }
        }
        else if (uVar7 < *(uint *)(param_1 + 0x1c0)) {
          uVar21 = uVar7;
          if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
            uVar21 = 0;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar21 * 8);
joined_r0x00ac83d0:
          if (lVar13 != 0) {
            uVar21 = uVar12;
            if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
              uVar21 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar21 * 8) = lVar13;
            uVar21 = uVar7;
            if (*(uint *)(param_1 + 0x1c8) <= uVar7) {
              uVar21 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar21 * 2) = (short)uVar12;
            uVar12 = uVar12 + 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar27 != uVar7);
      *(uint *)(param_1 + 0x1c0) = uVar12;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x00ac8450;
  }
  if ((int)uVar27 < 1) {
    if (uVar27 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x00ac8450;
    }
LAB_00ac8404:
    pvVar23 = (void *)0x0;
    uVar12 = 0;
    uVar7 = 0;
    __ptr = (undefined4 *)0x0;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 != 0) {
      plVar24 = param_3;
      if (param_3 != (long *)0x0) {
LAB_00ac80b4:
        __ptr = (undefined4 *)(**(code **)(*plVar24 + 0x30))(plVar24,(ulong)uVar27 << 4,8);
        goto joined_r0x00ac8428;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
      plVar24 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar24 = (long *)(lVar10 + 0xa8);
      }
      plVar24 = (long *)*plVar24;
      if (plVar24 != (long *)0x0) goto LAB_00ac80b4;
      lVar13 = *(long *)puVar1;
      __size = (size_t)(int)(uVar27 << 3);
      if (lVar13 == 0) goto LAB_00ac84c4;
LAB_00ac8484:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
      puVar2 = (undefined8 *)(lVar13 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_00ac84a8;
      goto LAB_00ac8404;
    }
    __ptr = malloc((ulong)uVar27 << 4);
joined_r0x00ac8428:
    if (__ptr == (undefined4 *)0x0) {
      lVar13 = *(long *)puVar1;
      __size = (size_t)(int)(uVar27 << 3);
      if (lVar13 == 0) {
LAB_00ac84c4:
        pvVar23 = malloc(__size);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_00ac8484;
LAB_00ac84a8:
        pvVar23 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      }
      uVar7 = 0;
      __ptr = (undefined4 *)0x0;
      uVar12 = 0;
      if (pvVar23 != (void *)0x0) {
        uVar12 = uVar27;
      }
    }
    else {
      uVar15 = (ulong)uVar27;
      uVar22 = uVar15 & 3;
      puVar16 = __ptr;
      if ((uVar27 & 3) != 0) {
        do {
          *puVar16 = 0;
          uVar22 = uVar22 - 1;
          *(undefined8 *)(puVar16 + 2) = 0;
          puVar16 = puVar16 + 4;
        } while (uVar22 != 0);
      }
      if (2 < (uVar15 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar16 = 0;
          *(undefined8 *)(puVar16 + 2) = 0;
          puVar16[4] = 0;
          *(undefined8 *)(puVar16 + 6) = 0;
          puVar16[8] = 0;
          *(undefined8 *)(puVar16 + 10) = 0;
          puVar16[0xc] = 0;
          *(undefined8 *)(puVar16 + 0xe) = 0;
          puVar16 = puVar16 + 0x10;
        } while (puVar16 != __ptr + uVar15 * 4);
      }
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc((long)(int)(uVar27 << 3));
LAB_00ac8460:
        uVar12 = 0;
        if (pvVar23 != (void *)0x0) {
          uVar12 = uVar27;
        }
      }
      else {
        if (param_3 != (long *)0x0) {
LAB_00ac8174:
          pvVar23 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar27 << 3),8);
          goto LAB_00ac8460;
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
        puVar2 = (undefined8 *)(lVar13 + 8);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 != (long *)0x0) goto LAB_00ac8174;
        uVar12 = 0;
        pvVar23 = (void *)0x0;
      }
      uVar7 = uVar27;
    }
  }
  uVar25 = 0;
  uVar21 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar21 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar21) != '\0')) &&
          (((uVar21 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar13 = (ulong)(puVar14[1] * uVar21 + (uint)(ushort)puVar14[2] * 8 + iVar8) + (long)puVar14
        ;
        goto joined_r0x00ac85b4;
      }
    }
    else if (uVar21 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar21;
      if (*(uint *)(param_1 + 0x1b0) <= uVar21) {
        uVar3 = 0;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x00ac85b4:
      if (lVar13 != 0) {
        uVar3 = uVar21;
        if (uVar7 <= uVar21) {
          uVar3 = 0;
        }
        puVar14 = __ptr + (long)(int)uVar3 * 4;
        *puVar14 = uVar21;
        *(long *)(puVar14 + 2) = lVar13;
        if ((int)uVar25 < (int)uVar12) {
          *(uint **)((long)pvVar23 + (long)(int)uVar25 * 8) = puVar14;
          uVar25 = uVar25 + 1;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar27 != uVar21);
  if (1 < (int)uVar25) {
    uVar12 = 0;
    uVar27 = uVar25 - 1;
    do {
      if ((int)uVar27 <= (int)uVar12) break;
      uVar15 = (ulong)uVar12;
      uVar18 = (ulong)uVar27;
      uVar22 = uVar15;
      uVar27 = uVar12;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar22 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar8) {
          uVar20 = puVar2[1];
          uVar27 = (uint)uVar22;
          puVar2[1] = *(undefined8 *)((long)pvVar23 + uVar22 * 8);
          *(undefined8 *)((long)pvVar23 + uVar22 * 8) = uVar20;
        }
        uVar22 = uVar22 + 1;
      } while (uVar18 != uVar22);
      if ((int)uVar27 <= (int)uVar12) break;
      uVar22 = (ulong)uVar27;
      uVar12 = uVar27;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar22 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar8 < 0) {
          uVar20 = puVar2[-1];
          uVar12 = (uint)uVar22;
          puVar2[-1] = *(undefined8 *)((long)pvVar23 + uVar22 * 8);
          *(undefined8 *)((long)pvVar23 + uVar22 * 8) = uVar20;
        }
        uVar22 = uVar22 - 1;
      } while ((long)uVar15 < (long)uVar22);
    } while (uVar12 != uVar27);
  }
  plVar26 = (long *)PTR_DAT_04bb3350;
  if (uVar25 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar26 = &DAT_05ae7790;
    if (pvVar23 != (void *)0x0) goto LAB_00ac86fc;
  }
  else {
    uVar22 = 0;
    do {
      uVar15 = -(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3;
      uVar12 = (uint)uVar22;
      uVar27 = uVar12;
      if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
        uVar27 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar27 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar23 + uVar15) + 8);
      uVar27 = **(uint **)((long)pvVar23 + uVar15);
      if (*(uint *)(param_1 + 0x1c8) <= uVar27) {
        uVar27 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar27 * 2) = (short)uVar22;
      uVar22 = (ulong)(uVar12 + 1);
    } while (uVar25 != uVar12 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar25;
LAB_00ac86fc:
    if (DAT_05ae7600 == 0) {
      free(pvVar23);
    }
    else {
      plVar24 = (long *)FUN_038cb610(DAT_05ae7600,pvVar23);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24,pvVar23);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar24 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24,__ptr);
      }
    }
  }
joined_r0x00ac8450:
  if (lVar9 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar9;
  }
  return;
}

