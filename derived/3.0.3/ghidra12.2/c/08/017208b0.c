
void FUN_017208b0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined4 *__ptr;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  code *pcVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  void *pvVar25;
  size_t sVar26;
  void *__src;
  uint uVar27;
  size_t __size;
  undefined *local_70;
  long lStack_68;
  
  pvVar25 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar25 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[1] + lVar12) == '\0') goto LAB_0172095c;
      lVar22 = param_2[1] + lVar12;
      if (*(char *)(lVar22 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0172095c;
      }
      if (*(char *)(lVar22 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0172095c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0172095c:
    iVar8 = (int)lVar12;
    if (*(int *)(param_1 + 0x18) <= (int)lVar12) {
      iVar8 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar25,__src,(long)iVar8);
    *(undefined1 *)((long)pvVar25 + (long)iVar8) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  puVar4 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  plVar23 = param_3;
  if (param_3 == (long *)0x0) {
    lVar22 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar22 + 8);
    if (lVar12 != 0) {
      puVar2 = (undefined8 *)(lVar12 + 0xa8);
    }
    plVar23 = (long *)*puVar2;
    if (plVar23 != (long *)0x0) goto LAB_017209e4;
    lVar22 = 1;
  }
  else {
LAB_017209e4:
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar22 = *(long *)(lVar12 + 0xa8);
    *(long **)(lVar12 + 0xa8) = plVar23;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  puVar4 = PTR_DAT_04bbe028;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 == (uint *)0x0)) {
    __size = 0;
  }
  else {
    __size = (size_t)*puVar13;
  }
  pvVar25 = *(void **)(PTR_DAT_04bbe028 + 8);
  if (pvVar25 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar25);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar1,pvVar25);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar25);
      }
    }
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined4 *)puVar4 = 0;
  }
  puVar5 = PTR_DAT_04bbdff8;
  pvVar25 = *(void **)(PTR_DAT_04bbdff8 + 8);
  if (pvVar25 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar25);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar1,pvVar25);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar25);
      }
    }
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined4 *)puVar5 = 0;
  }
  uVar27 = (uint)__size;
  if (uVar27 == 0) {
    if (((*(long *)(param_1 + 0xb0) != 0) &&
        (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
       (uVar11 = *puVar13, uVar11 != 0)) {
      uVar7 = 0;
      do {
        if (((uVar7 < *puVar13) && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)) {
          iVar8 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          lVar12 = (ulong)(puVar13[1] * uVar7 + (uint)(ushort)puVar13[2] * 8 + iVar8) +
                   (long)puVar13;
          if (lVar12 != 0) {
            FUN_01721910(lVar12);
            FUN_01721af0(lVar12);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
    }
  }
  else {
    if ((int)uVar27 < 1) {
LAB_01720bb8:
      sVar26 = (size_t)*(uint *)puVar4;
      if (0 < (int)*(uint *)puVar4) goto LAB_01720bc4;
    }
    else {
      lVar12 = *(long *)puVar1;
      if (lVar12 == 0) {
        pvVar25 = malloc(__size << 1);
      }
      else {
        plVar9 = plVar23;
        if (plVar23 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar12 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01720bb8;
        }
        pvVar25 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,__size << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_01720bb8;
      *(uint *)puVar4 = uVar27;
      *(void **)(puVar4 + 8) = pvVar25;
      sVar26 = __size;
LAB_01720bc4:
      uVar14 = sVar26 & 3;
      if (sVar26 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar12 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar12) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar12 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar12 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar12 + 6) = 0;
        } while ((sVar26 & 0xfffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        lVar12 = uVar19 << 1;
        do {
          uVar14 = uVar14 - 1;
          *(undefined2 *)(*(long *)(puVar4 + 8) + lVar12) = 0;
          lVar12 = lVar12 + 2;
        } while (uVar14 != 0);
      }
    }
    if ((int)uVar27 < 1) {
LAB_01720cc4:
      sVar26 = (size_t)*(uint *)puVar5;
      if (0 < (int)*(uint *)puVar5) goto LAB_01720cd0;
    }
    else {
      lVar12 = *(long *)puVar1;
      if (lVar12 == 0) {
        pvVar25 = malloc(__size << 1);
      }
      else {
        plVar9 = plVar23;
        if (plVar23 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar12 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01720cc4;
        }
        pvVar25 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,__size << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_01720cc4;
      *(uint *)puVar5 = uVar27;
      *(void **)(puVar5 + 8) = pvVar25;
      sVar26 = __size;
LAB_01720cd0:
      uVar14 = sVar26 & 3;
      if (sVar26 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          lVar12 = uVar19 * 2;
          uVar19 = uVar19 + 4;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar12) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar12 + 2) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar12 + 4) = 0;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar12 + 6) = 0;
        } while ((sVar26 & 0xfffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        lVar12 = uVar19 << 1;
        do {
          uVar14 = uVar14 - 1;
          *(undefined2 *)(*(long *)(puVar5 + 8) + lVar12) = 0;
          lVar12 = lVar12 + 2;
        } while (uVar14 != 0);
      }
    }
    if (((*(long *)(param_1 + 0xb0) != 0) &&
        (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
       (uVar11 = *puVar13, uVar11 != 0)) {
      uVar7 = 0;
      do {
        if (((uVar7 < *puVar13) && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)) {
          iVar8 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          lVar12 = (ulong)(puVar13[1] * uVar7 + (uint)(ushort)puVar13[2] * 8 + iVar8) +
                   (long)puVar13;
          if (lVar12 != 0) {
            FUN_01721910(lVar12);
            FUN_01721af0(lVar12);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
    }
    if ((int)uVar27 < 1) {
LAB_01720e4c:
      sVar26 = (size_t)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_01720e58;
    }
    else {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        pvVar25 = malloc(__size);
      }
      else {
        plVar9 = plVar23;
        if (plVar23 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar12 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01720e4c;
        }
        pvVar25 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,__size,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_01720e4c;
      *(uint *)(param_1 + 200) = uVar27;
      *(void **)(param_1 + 0xd0) = pvVar25;
      sVar26 = __size;
LAB_01720e58:
      uVar14 = sVar26 & 3;
      if (sVar26 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19 + 2) = 1;
          lVar12 = *(long *)(param_1 + 0xd0) + uVar19;
          uVar19 = uVar19 + 4;
          *(undefined1 *)(lVar12 + 3) = 1;
        } while ((sVar26 & 0xfffffffc) != uVar19);
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar19) = 1;
        uVar19 = uVar19 + 1;
      }
    }
    plVar9 = (long *)(param_1 + 0xf8);
    uVar14 = (**(code **)(*plVar9 + 0x10))(plVar9);
    if ((uVar14 & 1) != 0) {
      uVar11 = 0;
      uVar7 = uVar27;
      if (uVar27 < 2) {
        uVar7 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar11 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar11) != '\0')) &&
              (((uVar11 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            if ((ulong)(puVar13[1] * uVar11 + (uint)(ushort)puVar13[2] * 8 + iVar8) + (long)puVar13
                != 0) goto LAB_01720f50;
          }
LAB_01720f04:
          uVar18 = uVar11;
          if (*(uint *)(param_1 + 200) <= uVar11) {
            uVar18 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar18) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar11) goto LAB_01720f04;
          uVar18 = uVar11;
          if (*(uint *)(param_1 + 0x1b0) <= uVar11) {
            uVar18 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar18 * 8) == 0) goto LAB_01720f04;
LAB_01720f50:
          uVar14 = (**(code **)*plVar9)(plVar9);
          if ((uVar14 & 1) == 0) goto LAB_01720f04;
        }
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  uVar11 = uVar27;
  if ((int)uVar27 <= (int)*(uint *)(param_1 + 400)) {
    uVar11 = *(uint *)(param_1 + 400);
  }
  uVar14 = (ulong)uVar11;
  if (uVar11 != 0) {
    if ((int)uVar11 < 1) {
LAB_01721070:
      uVar19 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_01721080;
    }
    else {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        pvVar25 = malloc(uVar14 << 3);
      }
      else {
        plVar9 = plVar23;
        if (plVar23 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar12 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01721070;
        }
        pvVar25 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar14 << 3,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_01721070;
      *(uint *)(param_1 + 0x1b0) = uVar11;
      *(void **)(param_1 + 0x1b8) = pvVar25;
      uVar19 = uVar14;
LAB_01721080:
      uVar15 = uVar19 & 3;
      if (uVar19 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          lVar12 = uVar20 * 8;
          uVar20 = uVar20 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar12) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar12 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar12 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar12 + 0x18) = 0;
        } while ((uVar19 & 0xfffffffc) != uVar20);
      }
      if (uVar15 != 0) {
        lVar12 = uVar20 << 3;
        do {
          uVar15 = uVar15 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar12) = 0;
          lVar12 = lVar12 + 8;
        } while (uVar15 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar11 < 1) {
LAB_01721174:
      uVar14 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_01721204;
    }
    else {
      lVar12 = *(long *)puVar1;
      if (lVar12 == 0) {
        pvVar25 = malloc(uVar14 << 1);
      }
      else {
        if (plVar23 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar2 = (undefined8 *)(lVar12 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar23 = (long *)*puVar2;
          if (plVar23 == (long *)0x0) goto LAB_01721174;
        }
        pvVar25 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,uVar14 << 1,8);
      }
      if (pvVar25 == (void *)0x0) goto LAB_01721174;
      *(uint *)(param_1 + 0x1c8) = uVar11;
      *(void **)(param_1 + 0x1d0) = pvVar25;
    }
    uVar19 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        lVar12 = uVar15 * 2;
        uVar15 = uVar15 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar12) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar12 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar12 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar12 + 6) = 0xffff;
      } while ((uVar14 & 0xfffffffc) != uVar15);
    }
    if (uVar19 != 0) {
      lVar12 = uVar15 << 1;
      do {
        uVar19 = uVar19 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar12) = 0xffff;
        lVar12 = lVar12 + 2;
      } while (uVar19 != 0);
    }
  }
LAB_01721204:
  if ((uVar27 == 0) || (*(long *)(param_1 + 0x1a8) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar14 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if (((uVar14 & 1) == 0) ||
       ((uVar27 == 0 || ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0))
       )) {
      if (uVar27 != 0) {
        uVar7 = 0;
        uVar11 = 0;
        do {
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if (((*(long *)(param_1 + 0xb0) != 0) &&
                (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
               (((*(uint *)(param_1 + 200) <= uVar7 ||
                 (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar7) != '\0')) &&
                (((uVar7 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))))) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              lVar12 = (ulong)(puVar13[1] * uVar7 + (uint)(ushort)puVar13[2] * 8 + iVar8) +
                       (long)puVar13;
              goto joined_r0x01721530;
            }
          }
          else if (uVar7 < *(uint *)(param_1 + 0x1c0)) {
            uVar18 = uVar7;
            if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
              uVar18 = 0;
            }
            lVar12 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar18 * 8);
joined_r0x01721530:
            if (lVar12 != 0) {
              uVar18 = uVar11;
              if (*(uint *)(param_1 + 0x1b0) <= uVar11) {
                uVar18 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar18 * 8) = lVar12;
              uVar18 = uVar7;
              if (*(uint *)(param_1 + 0x1c8) <= uVar7) {
                uVar18 = 0;
              }
              *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar18 * 2) = (short)uVar11;
              uVar11 = uVar11 + 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar27 != uVar7);
        *(uint *)(param_1 + 0x1c0) = uVar11;
        (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
      }
    }
    else {
      uVar11 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((((*(long *)(param_1 + 0xb0) != 0) &&
                (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
               ((*(uint *)(param_1 + 200) <= uVar11 ||
                (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar11) != '\0')))) &&
              ((uVar11 < *puVar13 && (puVar13[1] != 0)))) && ((ushort)puVar13[2] != 0)) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar12 = (ulong)(puVar13[1] * uVar11 + (uint)(ushort)puVar13[2] * 8 + iVar8) +
                     (long)puVar13;
            goto joined_r0x01721440;
          }
        }
        else if (uVar11 < *(uint *)(param_1 + 0x1c0)) {
          uVar7 = uVar11;
          if (*(uint *)(param_1 + 0x1b0) <= uVar11) {
            uVar7 = 0;
          }
          lVar12 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01721440:
          if (lVar12 != 0) {
            pcVar17 = *(code **)(param_1 + 0x198);
            if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
              pcVar17 = *(code **)(pcVar17 +
                                  *(long *)(lVar12 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
            }
            lVar10 = (*pcVar17)();
            if (lVar10 != 0) {
              local_70 = puVar1;
              lStack_68 = lVar10;
              uVar7 = (**(code **)*puVar2)(puVar2,&local_70);
              if (-1 < (int)uVar7) {
                uVar18 = uVar7;
                if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
                  uVar18 = 0;
                }
                *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar18 * 8) = lVar12;
                uVar18 = uVar11;
                if (*(uint *)(param_1 + 0x1c8) <= uVar11) {
                  uVar18 = 0;
                }
                *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar18 * 2) = (short)uVar7;
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar27 != uVar11);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    }
    goto joined_r0x01721584;
  }
  if ((int)uVar27 < 1) {
    uVar7 = 0;
    __ptr = (undefined4 *)0x0;
    uVar11 = 0;
    pvVar25 = (void *)0x0;
  }
  else {
    lVar12 = *(long *)puVar1;
    if (lVar12 == 0) {
      __ptr = malloc(__size << 4);
      if (__ptr != (undefined4 *)0x0) goto LAB_0172127c;
LAB_0172159c:
      __size = 0;
LAB_017215a0:
      uVar7 = (uint)__size;
      lVar12 = *(long *)puVar1;
      if (lVar12 == 0) goto LAB_01721610;
      uVar11 = uVar7;
      if (param_3 == (long *)0x0) {
LAB_017215c8:
        uVar7 = uVar11;
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar12 + 8);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          uVar11 = 0;
          pvVar25 = (void *)0x0;
          goto LAB_01721624;
        }
      }
      pvVar25 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar27 << 3),8);
    }
    else {
      plVar23 = param_3;
      if (param_3 != (long *)0x0) {
LAB_01721260:
        __ptr = (undefined4 *)(**(code **)(*plVar23 + 0x30))(plVar23,__size << 4,8);
        if (__ptr == (undefined4 *)0x0) goto LAB_0172159c;
LAB_0172127c:
        uVar14 = __size & 3;
        puVar16 = __ptr;
        if (uVar14 != 0) {
          do {
            *puVar16 = 0;
            uVar14 = uVar14 - 1;
            *(undefined8 *)(puVar16 + 2) = 0;
            puVar16 = puVar16 + 4;
          } while (uVar14 != 0);
        }
        if (2 < (__size - 1 & 0xfffffffffffffff)) {
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
          } while (puVar16 != __ptr + __size * 4);
        }
        goto LAB_017215a0;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar12 + 8);
      if (lVar10 != 0) {
        plVar23 = (long *)(lVar10 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 != (long *)0x0) goto LAB_01721260;
      lVar12 = *(long *)puVar1;
      __ptr = (undefined4 *)0x0;
      uVar7 = 0;
      uVar11 = 0;
      if (lVar12 != 0) goto LAB_017215c8;
LAB_01721610:
      pvVar25 = malloc((long)(int)(uVar27 << 3));
    }
    uVar11 = 0;
    if (pvVar25 != (void *)0x0) {
      uVar11 = uVar27;
    }
  }
LAB_01721624:
  uVar24 = 0;
  uVar18 = 0;
  if (uVar27 < 2) {
    uVar27 = 1;
  }
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if ((((*(long *)(param_1 + 0xb0) != 0) &&
           (puVar13 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 200) <= uVar18 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar18) != '\0')))) &&
         (((uVar18 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar12 = (ulong)(puVar13[1] * uVar18 + (uint)(ushort)puVar13[2] * 8 + iVar8) + (long)puVar13
        ;
        goto joined_r0x01721700;
      }
    }
    else if (uVar18 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar18;
      if (*(uint *)(param_1 + 0x1b0) <= uVar18) {
        uVar3 = 0;
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01721700:
      if (lVar12 != 0) {
        uVar3 = uVar18;
        if (uVar7 <= uVar18) {
          uVar3 = 0;
        }
        puVar13 = __ptr + (long)(int)uVar3 * 4;
        *puVar13 = uVar18;
        *(long *)(puVar13 + 2) = lVar12;
        if ((int)uVar24 < (int)uVar11) {
          *(uint **)((long)pvVar25 + (long)(int)uVar24 * 8) = puVar13;
          uVar24 = uVar24 + 1;
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar27 != uVar18);
  if (1 < (int)uVar24) {
    uVar11 = 0;
    uVar27 = uVar24 - 1;
    do {
      if ((int)uVar27 <= (int)uVar11) break;
      uVar15 = (ulong)uVar11;
      uVar19 = (ulong)uVar27;
      uVar14 = uVar15;
      uVar27 = uVar11;
      do {
        puVar2 = (undefined8 *)((long)pvVar25 + uVar14 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar8) {
          uVar21 = puVar2[1];
          uVar27 = (uint)uVar14;
          puVar2[1] = *(undefined8 *)((long)pvVar25 + uVar14 * 8);
          *(undefined8 *)((long)pvVar25 + uVar14 * 8) = uVar21;
        }
        uVar14 = uVar14 + 1;
      } while (uVar19 != uVar14);
      if ((int)uVar27 <= (int)uVar11) break;
      uVar14 = (ulong)uVar27;
      uVar11 = uVar27;
      do {
        puVar2 = (undefined8 *)((long)pvVar25 + uVar14 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar8 < 0) {
          uVar21 = puVar2[-1];
          uVar11 = (uint)uVar14;
          puVar2[-1] = *(undefined8 *)((long)pvVar25 + uVar14 * 8);
          *(undefined8 *)((long)pvVar25 + uVar14 * 8) = uVar21;
        }
        uVar14 = uVar14 - 1;
      } while ((long)uVar15 < (long)uVar14);
    } while (uVar11 != uVar27);
  }
  plVar23 = (long *)PTR_DAT_04bb2698;
  if (uVar24 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar23 = (long *)PTR_DAT_04bb2698;
    if (pvVar25 != (void *)0x0) goto LAB_0172184c;
  }
  else {
    uVar14 = 0;
    do {
      uVar19 = -(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
      uVar11 = (uint)uVar14;
      uVar27 = uVar11;
      if (*(uint *)(param_1 + 0x1b0) <= uVar11) {
        uVar27 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar27 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar25 + uVar19) + 8);
      uVar27 = **(uint **)((long)pvVar25 + uVar19);
      if (*(uint *)(param_1 + 0x1c8) <= uVar27) {
        uVar27 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar27 * 2) = (short)uVar14;
      uVar14 = (ulong)(uVar11 + 1);
    } while (uVar24 != uVar11 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar24;
LAB_0172184c:
    if (*plVar23 == 0) {
      free(pvVar25);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*plVar23,pvVar25);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar25);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (*plVar23 == 0) {
      free(__ptr);
    }
    else {
      plVar23 = (long *)FUN_038cb610(*plVar23,__ptr);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x38))(plVar23,__ptr);
      }
    }
  }
joined_r0x01721584:
  if (lVar22 != 1) {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar12 + 0xa8) = lVar22;
  }
  return;
}

