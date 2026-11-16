
void FUN_0297f690(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
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
  long lVar21;
  long *plVar22;
  uint uVar23;
  void *pvVar24;
  size_t sVar25;
  void *__src;
  long *plVar26;
  uint uVar27;
  size_t __size;
  undefined *local_70;
  long lStack_68;
  
  pvVar24 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar24 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_0297f73c;
      lVar21 = param_2[1] + lVar11;
      if (*(char *)(lVar21 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0297f73c;
      }
      if (*(char *)(lVar21 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0297f73c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0297f73c:
    iVar7 = (int)lVar11;
    if (*(int *)(param_1 + 0x18) <= (int)lVar11) {
      iVar7 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar24,__src,(long)iVar7);
    *(undefined1 *)((long)pvVar24 + (long)iVar7) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar5 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  plVar26 = (long *)PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar21 + 8);
    if (lVar11 != 0) {
      puVar2 = (undefined8 *)(lVar11 + 0xa8);
    }
    plVar22 = (long *)*puVar2;
    if (plVar22 != (long *)0x0) goto LAB_0297f7c4;
    lVar21 = 1;
  }
  else {
LAB_0297f7c4:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
    lVar21 = *(long *)(lVar11 + 0xa8);
    *(long **)(lVar11 + 0xa8) = plVar22;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  pvVar24 = DAT_055dca08;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar12;
  }
  if (DAT_055dca08 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_055dca08);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar1,DAT_055dca08);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar24);
      }
    }
    DAT_055dca08 = (void *)0x0;
    DAT_055dca00 = 0;
  }
  puVar4 = PTR_DAT_04bc38a0;
  pvVar24 = *(void **)(PTR_DAT_04bc38a0 + 8);
  if (pvVar24 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar24);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar1,pvVar24);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar24);
      }
    }
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined4 *)puVar4 = 0;
  }
  uVar27 = (uint)__size;
  if (uVar27 == 0) {
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02980630();
    }
  }
  else {
    if ((int)uVar27 < 1) {
LAB_0297f92c:
      sVar25 = (size_t)DAT_055dca00;
      if (0 < (int)DAT_055dca00) goto LAB_0297f93c;
    }
    else {
      lVar11 = *(long *)puVar1;
      if (lVar11 == 0) {
        pvVar24 = malloc(__size << 1);
      }
      else {
        plVar8 = plVar22;
        if (plVar22 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0297f92c;
        }
        pvVar24 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0297f92c;
      sVar25 = __size;
      DAT_055dca00 = uVar27;
      DAT_055dca08 = pvVar24;
LAB_0297f93c:
      uVar13 = sVar25 & 3;
      if (sVar25 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar11 = uVar18 * 2;
          uVar18 = uVar18 + 4;
          *(undefined2 *)((long)DAT_055dca08 + lVar11) = 0;
          *(undefined2 *)((long)DAT_055dca08 + lVar11 + 2) = 0;
          *(undefined2 *)((long)DAT_055dca08 + lVar11 + 4) = 0;
          *(undefined2 *)((long)DAT_055dca08 + lVar11 + 6) = 0;
        } while ((sVar25 & 0xfffffffc) != uVar18);
      }
      if (uVar13 != 0) {
        lVar11 = uVar18 << 1;
        do {
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)DAT_055dca08 + lVar11) = 0;
          lVar11 = lVar11 + 2;
        } while (uVar13 != 0);
      }
    }
    if ((int)uVar27 < 1) {
LAB_0297fa30:
      sVar25 = (size_t)*(uint *)puVar4;
      if (0 < (int)*(uint *)puVar4) goto LAB_0297fa3c;
    }
    else {
      lVar11 = *(long *)puVar1;
      if (lVar11 == 0) {
        pvVar24 = malloc(__size << 1);
      }
      else {
        plVar8 = plVar22;
        if (plVar22 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0297fa30;
        }
        pvVar24 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0297fa30;
      *(uint *)puVar4 = uVar27;
      *(void **)(puVar4 + 8) = pvVar24;
      sVar25 = __size;
LAB_0297fa3c:
      uVar13 = sVar25 & 3;
      if (sVar25 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          lVar11 = uVar18 * 2;
          uVar18 = uVar18 + 4;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar11) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar11 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar11 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar11 + 6) = 0;
        } while ((sVar25 & 0xfffffffc) != uVar18);
      }
      if (uVar13 != 0) {
        lVar11 = uVar18 << 1;
        do {
          uVar13 = uVar13 - 1;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar11) = 0;
          lVar11 = lVar11 + 2;
        } while (uVar13 != 0);
      }
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02980630();
    }
    if ((int)uVar27 < 1) {
LAB_0297fb3c:
      sVar25 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_0297fb48;
    }
    else {
      lVar11 = *(long *)puVar1;
      if (lVar11 == 0) {
        pvVar24 = malloc(__size);
      }
      else {
        plVar8 = plVar22;
        if (plVar22 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0297fb3c;
        }
        pvVar24 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0297fb3c;
      *(uint *)(param_1 + 200) = uVar27;
      *(void **)(param_1 + 0xd0) = pvVar24;
      sVar25 = __size;
LAB_0297fb48:
      uVar13 = sVar25 & 3;
      if (sVar25 - 1 < 3) {
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
        } while ((sVar25 & 0xfffffffc) != uVar18);
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
      uVar6 = uVar27;
      if (uVar27 < 2) {
        uVar6 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar10 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar10) != '\0')))) &&
             (((uVar10 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
            iVar7 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            if ((ulong)(puVar12[1] * uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar7) + (long)puVar12
                != 0) goto LAB_0297fc40;
          }
LAB_0297fbf4:
          uVar17 = uVar10;
          if (*(uint *)(param_1 + 200) <= uVar10) {
            uVar17 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar17) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar10) goto LAB_0297fbf4;
          uVar17 = uVar10;
          if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
            uVar17 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8) == 0) goto LAB_0297fbf4;
LAB_0297fc40:
          uVar13 = (**(code **)*plVar8)(plVar8);
          if ((uVar13 & 1) == 0) goto LAB_0297fbf4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  uVar10 = uVar27;
  if ((int)uVar27 <= (int)*(uint *)(param_1 + 400)) {
    uVar10 = *(uint *)(param_1 + 400);
  }
  uVar13 = (ulong)uVar10;
  if (uVar10 != 0) {
    if ((int)uVar10 < 1) {
LAB_0297fd58:
      uVar18 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_0297fd68;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar24 = malloc(uVar13 << 3);
      }
      else {
        plVar8 = plVar22;
        if (plVar22 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0297fd58;
        }
        pvVar24 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar13 << 3,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0297fd58;
      *(uint *)(param_1 + 0x1b0) = uVar10;
      *(void **)(param_1 + 0x1b8) = pvVar24;
      uVar18 = uVar13;
LAB_0297fd68:
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
LAB_0297fe5c:
      uVar13 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_0297fef4;
    }
    else {
      lVar11 = *(long *)puVar1;
      if (lVar11 == 0) {
        pvVar24 = malloc(uVar13 << 1);
      }
      else {
        if (plVar22 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
          puVar2 = (undefined8 *)(lVar11 + 8);
          if (lVar9 != 0) {
            puVar2 = (undefined8 *)(lVar9 + 0xa8);
          }
          plVar22 = (long *)*puVar2;
          if (plVar22 == (long *)0x0) goto LAB_0297fe5c;
        }
        pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar13 << 1,8);
      }
      if (pvVar24 == (void *)0x0) goto LAB_0297fe5c;
      *(uint *)(param_1 + 0x1c8) = uVar10;
      *(void **)(param_1 + 0x1d0) = pvVar24;
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
LAB_0297fef4:
  if ((uVar27 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar13 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar13 & 1) == 0) ||
       ((uVar27 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar27 != 0) {
        uVar6 = 0;
        uVar10 = 0;
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if ((((*(long *)(param_1 + 0xb0) != 0) &&
                 (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 200) <= uVar6 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
               (((uVar6 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
              iVar7 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                iVar7 = 0x1c;
              }
              lVar11 = (ulong)(puVar12[1] * uVar6 + (uint)(ushort)puVar12[2] * 8 + iVar7) +
                       (long)puVar12;
              goto joined_r0x02980210;
            }
          }
          else if (uVar6 < *(uint *)(param_1 + 0x1c0)) {
            uVar17 = uVar6;
            if (*(uint *)(param_1 + 0x1b0) <= uVar6) {
              uVar17 = 0;
            }
            lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8);
joined_r0x02980210:
            if (lVar11 != 0) {
              uVar17 = uVar10;
              if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
                uVar17 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar17 * 8) = lVar11;
              uVar17 = uVar6;
              if (*(uint *)(param_1 + 0x1c8) <= uVar6) {
                uVar17 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar17 * 2) = (short)uVar10;
              uVar10 = uVar10 + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar27 != uVar6);
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
            iVar7 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            lVar11 = (ulong)(puVar12[1] * uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar7) +
                     (long)puVar12;
            goto joined_r0x02980120;
          }
        }
        else if (uVar10 < *(uint *)(param_1 + 0x1c0)) {
          uVar6 = uVar10;
          if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
            uVar6 = 0;
          }
          lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x02980120:
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
              uVar6 = (**(code **)*puVar2)(puVar2,&local_70);
              if (-1 < (int)uVar6) {
                uVar17 = uVar6;
                if (*(uint *)(param_1 + 0x1b0) <= uVar6) {
                  uVar17 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar17 * 8) = lVar11;
                uVar17 = uVar10;
                if (*(uint *)(param_1 + 0x1c8) <= uVar10) {
                  uVar17 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar17 * 2) = (short)uVar6;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar27 != uVar10);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x02980268;
  }
  if ((int)uVar27 < 1) {
    uVar6 = 0;
    __ptr = (undefined4 *)0x0;
    uVar10 = 0;
    pvVar24 = (void *)0x0;
  }
  else {
    lVar11 = *(long *)puVar1;
    if (lVar11 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_0297ff64;
LAB_02980280:
      __size = 0;
LAB_02980284:
      uVar6 = (uint)__size;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) goto LAB_029802f4;
      uVar10 = uVar6;
      if (param_3 == (long *)0x0) {
LAB_029802b4:
        uVar6 = uVar10;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
        puVar2 = (undefined8 *)(lVar11 + 8);
        if (lVar9 != 0) {
          puVar2 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          uVar10 = 0;
          pvVar24 = (void *)0x0;
          goto LAB_02980308;
        }
      }
      pvVar24 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar27 << 3),8);
    }
    else {
      plVar22 = param_3;
      if (param_3 != (long *)0x0) {
LAB_0297ff48:
        __ptr = (undefined4 *)(**(code **)(*plVar22 + 0x30))(plVar22,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_02980280;
LAB_0297ff64:
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
        goto LAB_02980284;
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
      plVar22 = (long *)(lVar11 + 8);
      if (lVar9 != 0) {
        plVar22 = (long *)(lVar9 + 0xa8);
      }
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) goto LAB_0297ff48;
      lVar11 = *(long *)puVar1;
      __ptr = (undefined4 *)0x0;
      uVar6 = 0;
      uVar10 = 0;
      if (lVar11 != 0) goto LAB_029802b4;
LAB_029802f4:
      pvVar24 = malloc((long)(int)(uVar27 << 3));
    }
    uVar10 = 0;
    if (pvVar24 != (void *)0x0) {
      uVar10 = uVar27;
    }
  }
LAB_02980308:
  uVar23 = 0;
  uVar17 = 0;
  if (uVar27 < 2) {
    uVar27 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar17 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar17) != '\0')) &&
          (((uVar17 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        lVar11 = (ulong)(puVar12[1] * uVar17 + (uint)(ushort)puVar12[2] * 8 + iVar7) + (long)puVar12
        ;
        goto joined_r0x029803e4;
      }
    }
    else if (uVar17 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar17;
      if (*(uint *)(param_1 + 0x1b0) <= uVar17) {
        uVar3 = 0;
      }
      lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x029803e4:
      if (lVar11 != 0) {
        uVar3 = uVar17;
        if (uVar6 <= uVar17) {
          uVar3 = 0;
        }
        puVar12 = __ptr + (long)(int)uVar3 * 4;
        *puVar12 = uVar17;
        *(long *)(puVar12 + 2) = lVar11;
        if ((int)uVar23 < (int)uVar10) {
          *(uint **)((long)pvVar24 + (long)(int)uVar23 * 8) = puVar12;
          uVar23 = uVar23 + 1;
        }
      }
    }
    uVar17 = uVar17 + 1;
  } while (uVar27 != uVar17);
  if (1 < (int)uVar23) {
    uVar10 = 0;
    uVar27 = uVar23 - 1;
    do {
      if ((int)uVar27 <= (int)uVar10) break;
      uVar18 = (ulong)uVar10;
      uVar14 = (ulong)uVar27;
      uVar13 = uVar18;
      uVar27 = uVar10;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar13 * 8);
        iVar7 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar7) {
          uVar20 = puVar2[1];
          uVar27 = (uint)uVar13;
          puVar2[1] = *(undefined8 *)((long)pvVar24 + uVar13 * 8);
          *(undefined8 *)((long)pvVar24 + uVar13 * 8) = uVar20;
        }
        uVar13 = uVar13 + 1;
      } while (uVar14 != uVar13);
      if ((int)uVar27 <= (int)uVar10) break;
      uVar13 = (ulong)uVar27;
      uVar10 = uVar27;
      do {
        puVar2 = (undefined8 *)((long)pvVar24 + uVar13 * 8);
        iVar7 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar7 < 0) {
          uVar20 = puVar2[-1];
          uVar10 = (uint)uVar13;
          puVar2[-1] = *(undefined8 *)((long)pvVar24 + uVar13 * 8);
          *(undefined8 *)((long)pvVar24 + uVar13 * 8) = uVar20;
        }
        uVar13 = uVar13 - 1;
      } while ((long)uVar18 < (long)uVar13);
    } while (uVar10 != uVar27);
  }
  plVar26 = (long *)PTR_DAT_04bb3350;
  plVar22 = (long *)PTR_DAT_04bb2698;
  if (uVar23 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar22 = (long *)PTR_DAT_04bb2698;
    plVar26 = (long *)PTR_DAT_04bb3350;
    if (pvVar24 != (void *)0x0) goto LAB_02980544;
  }
  else {
    uVar13 = 0;
    do {
      uVar18 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
      uVar10 = (uint)uVar13;
      uVar27 = uVar10;
      if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
        uVar27 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar27 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar24 + uVar18) + 8);
      uVar27 = **(uint **)((long)pvVar24 + uVar18);
      if (*(uint *)(param_1 + 0x1c8) <= uVar27) {
        uVar27 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar27 * 2) = (short)uVar13;
      uVar13 = (ulong)(uVar10 + 1);
    } while (uVar23 != uVar10 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar23;
LAB_02980544:
    if (*plVar22 == 0) {
      free(pvVar24);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*plVar22,pvVar24);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar24);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*plVar22 == 0) {
      free(__ptr);
    }
    else {
      plVar22 = (long *)FUN_038cb610(*plVar22,__ptr);
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x38))(plVar22,__ptr);
      }
    }
  }
joined_r0x02980268:
  if (lVar21 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar26 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar21;
  }
  return;
}

