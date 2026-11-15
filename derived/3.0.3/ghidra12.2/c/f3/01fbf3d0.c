
void FUN_01fbf3d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  void *__dest;
  void *__src;
  char *pcVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong local_a0;
  float local_98;
  
  puVar5 = PTR_DAT_04bb5ce0;
  puVar4 = PTR_DAT_04bb27c0;
  puVar3 = PTR_DAT_04bb2720;
  lVar19 = *(long *)(param_1 + 0xe740);
  if (lVar19 == param_1 + 0xe738) {
LAB_01fbf718:
    lVar19 = *(long *)(param_1 + 0x18);
    uVar10 = FUN_02085a50(lVar19,1,0);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)(lVar19 + 0x801) = 1;
      lVar14 = lVar19 + 0x10 + (ulong)*(uint *)(lVar19 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar19 + 0x294)) {
        lVar14 = lVar19 + 0x10;
      }
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined4 *)(lVar14 + 0x14) = 0;
    }
    return;
  }
  plVar1 = (long *)(param_1 + 0x12008);
  fVar21 = 3.4028235e+38;
  plVar16 = (long *)0x0;
  plVar17 = (long *)(lVar19 + -0x58);
  do {
    if (((*(long *)puVar5 == 0) || (lVar14 = *(long *)puVar3, lVar14 == 0)) ||
       (*(long *)(lVar14 + 0x330) == 0)) {
LAB_01fbf500:
      uVar13 = *(uint *)((long)plVar17 + 0x3c);
      local_a0 = local_a0 & 0xffffffff;
      if (uVar13 != 0) {
        lVar14 = *(long *)puVar4;
        if (lVar14 != 0) {
          lVar20 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8));
          if (((lVar20 == 0) || ((*(uint *)(lVar20 + 0x248) >> 1 & 1) != 0)) ||
             (*(uint *)(lVar20 + 0x230) != uVar13)) {
            lVar20 = 0;
          }
          if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar14 = *(long *)puVar4;
            iVar7 = (**(code **)(*plVar9 + 0x60))();
            if (iVar7 < 0x11) {
              uVar13 = 1;
            }
            else {
              uVar13 = 0;
              if (*(uint *)(lVar14 + 0x5e8) < 5) {
                uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
              }
            }
          }
          else {
            uVar13 = 0;
          }
          if (lVar20 != 0) {
            uVar13 = uVar13 ^ 1;
            if (*(int *)(lVar20 + 0x150) != 1) {
              uVar13 = 1;
            }
            if (uVar13 == 0) {
              local_a0 = *(ulong *)(*(long *)(lVar20 + 0x68) + 0x278);
              local_98 = *(float *)(*(long *)(lVar20 + 0x68) + 0x280);
              goto LAB_01fbf650;
            }
          }
        }
        goto LAB_01fbf470;
      }
      local_a0 = plVar17[6];
      local_98 = *(float *)(plVar17 + 7);
      if (((*(float *)(plVar17 + 6) == 0.0) && (*(float *)((long)plVar17 + 0x34) == 0.0)) &&
         (local_98 == 0.0)) {
        local_98 = ((float)*(int *)((long)plVar17 + 0x1c) * 5.0 +
                   (float)*(int *)((long)plVar17 + 0x2c) * 5.0 + 5.0) * 0.5;
        local_a0 = (ulong)(uint)(((float)(int)plVar17[3] * 5.0 + (float)(int)plVar17[5] * 5.0 + 5.0)
                                * 0.5);
      }
LAB_01fbf650:
      iVar7 = FUN_01318f40(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,&local_a0);
      fVar22 = *(float *)(plVar17 + 9);
      if (fVar21 <= *(float *)(plVar17 + 9)) {
        plVar17 = plVar16;
        fVar22 = fVar21;
      }
      if (iVar7 == 0) goto LAB_01fbf480;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar7 = FUN_006bd550(*puVar8,0);
      if (((iVar7 != 0x758f7eaf) || (lVar14 = *(long *)puVar3, lVar14 == 0)) ||
         ((lVar14 = *(long *)(lVar14 + 0x330), lVar14 == 0 || (*(int *)(lVar14 + 0x244) == 0))))
      goto LAB_01fbf500;
LAB_01fbf470:
      fVar22 = *(float *)(plVar17 + 9);
      if (fVar21 <= *(float *)(plVar17 + 9)) {
        plVar17 = plVar16;
        fVar22 = fVar21;
      }
LAB_01fbf480:
      plVar16 = plVar17;
      fVar21 = fVar22;
    }
    lVar19 = *(long *)(lVar19 + 8);
    plVar17 = (long *)(lVar19 + -0x58);
  } while (plVar17 != (long *)(param_1 + 0xe6e0));
  if (plVar16 == (long *)0x0) goto LAB_01fbf718;
  if ((*(byte *)((long)plVar16 + 0x4d) >> 4 & 1) != 0) {
    if (0 < *(int *)(param_1 + 0x12044)) {
      return;
    }
    uVar10 = FUN_02087ce0(*(undefined8 *)(param_1 + 0x18),(long)plVar16 + 0x3c,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar19 = *(long *)(param_1 + 8);
    uVar13 = *(uint *)(lVar19 + 0x288);
    *(undefined4 *)(lVar19 + 0x288) = *(undefined4 *)(lVar19 + 0x28c);
    uVar13 = uVar13 ^ uVar13 << 0xb;
    *(undefined4 *)(lVar19 + 0x28c) = *(undefined4 *)(lVar19 + 0x290);
    uVar2 = *(uint *)(lVar19 + 0x294);
    *(uint *)(lVar19 + 0x290) = uVar2;
    uVar13 = uVar13 >> 8 ^ uVar2 >> 0x13 ^ uVar13 ^ uVar2;
    *(uint *)(lVar19 + 0x294) = uVar13;
    puVar11 = (uint *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 96000) + 0xf0))();
    if ((uint)((ulong)uVar13 * 100 >> 0x20) < *puVar11) {
      *(undefined1 *)(param_1 + 0x7878) = 1;
      FUN_01fb6f6c(param_1,(long)plVar16 + 0x3c);
      return;
    }
    return;
  }
  if (*plVar16 != 0) {
    uVar10 = FUN_01fbc6d8(param_1,*plVar16,plVar16 + 1,plVar16 + 10);
    if ((uVar10 & 1) == 0) {
      return;
    }
    fVar21 = *(float *)(plVar16 + 6);
    fVar23 = *(float *)((long)plVar16 + 0x34);
    fVar22 = *(float *)(plVar16 + 7);
    if (((fVar21 == 0.0) && (fVar23 == 0.0)) && (fVar22 == 0.0)) {
      fVar23 = 0.0;
      fVar22 = ((float)*(int *)((long)plVar16 + 0x1c) * 5.0 +
               (float)*(int *)((long)plVar16 + 0x2c) * 5.0 + 5.0) * 0.5;
      fVar21 = ((float)(int)plVar16[3] * 5.0 + (float)(int)plVar16[5] * 5.0 + 5.0) * 0.5;
    }
    lVar19 = *(long *)(param_1 + 0x18);
    uVar10 = FUN_02085a50(lVar19,3,0);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)(lVar19 + 0x801) = 1;
      lVar14 = lVar19 + 0x10;
      lVar20 = lVar14 + (ulong)*(uint *)(lVar19 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar19 + 0x294)) {
        lVar20 = lVar14;
      }
      *(float *)(lVar20 + 0xc) = fVar21;
      *(float *)(lVar20 + 0x10) = fVar23;
      *(float *)(lVar20 + 0x14) = fVar22;
      lVar20 = lVar14 + (ulong)*(uint *)(lVar19 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar19 + 0x294)) {
        lVar20 = lVar14;
      }
      *(undefined1 *)(lVar20 + 0x7e) = 0;
    }
    puVar3 = PTR_PTR_04bb2238;
    __dest = *(void **)(param_1 + 0x12010);
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(void **)(puVar3 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar19) == '\0') goto LAB_01fbfa2c;
        lVar14 = *(long *)(puVar3 + 8) + lVar19;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_01fbfa2c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_01fbfa2c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_01fbfa2c:
      iVar7 = (int)lVar19;
      if (*(int *)(param_1 + 0x12018) <= (int)lVar19) {
        iVar7 = *(int *)(param_1 + 0x12018) + -1;
      }
      memcpy(__dest,__src,(long)iVar7);
      *(undefined1 *)((long)__dest + (long)iVar7) = 0;
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 2) {
      return;
    }
    uVar10 = FUN_0277e294(*plVar16);
    if ((uVar10 & 1) != 0) {
      FUN_01fbfeb0(param_1,plVar16);
      return;
    }
    uVar10 = FUN_0277db54(*plVar16);
    if ((uVar10 & 1) == 0) {
      return;
    }
    FUN_01fc02dc(param_1,plVar16);
    return;
  }
  if (*(int *)((long)plVar16 + 0x3c) == 0) {
    if ((*(byte *)((long)plVar16 + 0x4d) >> 6 & 1) == 0) {
      return;
    }
    plVar1 = plVar16 + 6;
    FUN_02085d90(*(undefined8 *)(param_1 + 0x18),0,plVar1,0);
    local_98 = 0.0;
    local_a0 = 0;
    uVar10 = FUN_01fa4014(param_1,&local_a0,plVar1,*(byte *)((long)plVar16 + 0x4c) >> 3 & 1);
    if ((uVar10 & 1) == 0) {
      return;
    }
    FUN_01fb6d80(param_1,&local_a0,plVar1);
    return;
  }
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,*(int *)((long)plVar16 + 0x3c),PTR_DAT_04bb6928,0);
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 2) {
    return;
  }
  lVar19 = *(long *)puVar4;
  if (lVar19 == 0) {
    return;
  }
  uVar13 = *(uint *)((long)plVar16 + 0x3c);
  if (((uVar13 == 0) ||
      (lVar14 = *(long *)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                         ((ulong)(uVar13 >> 0x11) & 0x7ff8)), lVar14 == 0)) ||
     (((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar14 + 0x230) != uVar13)))) {
    lVar14 = 0;
  }
  if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar17 + 0x60))();
    if (iVar7 < 0x11) {
      uVar13 = 1;
      goto LAB_01fbfab0;
    }
    if (*(uint *)(lVar19 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
      goto LAB_01fbfab0;
    }
  }
  uVar13 = 0;
LAB_01fbfab0:
  if (lVar14 == 0) {
    return;
  }
  uVar13 = uVar13 ^ 1;
  if (*(int *)(lVar14 + 0x150) != 1) {
    uVar13 = 1;
  }
  if (uVar13 != 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x15c) != 10) {
    return;
  }
  lVar19 = *(long *)puVar4;
  if (lVar19 == 0) {
    plVar17 = (long *)0x0;
  }
  else {
    uVar13 = *(uint *)((long)plVar16 + 0x3c);
    if ((((uVar13 == 0) ||
         (plVar17 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
        ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar13)) {
      plVar17 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar16 + 0x60))();
    }
    if (plVar17 != (long *)0x0) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
    }
  }
  plVar16 = plVar17 + 0x7c;
  iVar7 = FUN_021d5df0(plVar16);
  if (iVar7 == 2) {
    return;
  }
  pcVar18 = *(char **)(param_1 + 0x12010);
  if (*pcVar18 != '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcVar18 = *(char **)(param_1 + 0x12010);
    (**(code **)(plVar17[0x7c] + 0x18))(plVar16);
    pcVar15 = (char *)plVar17[0x7d];
    if (pcVar18 == pcVar15) {
      return;
    }
    pcVar18 = *(char **)(param_1 + 0x12010);
    if (*pcVar18 == *pcVar15) {
      if (*pcVar18 == '\0') {
        return;
      }
      lVar19 = 0;
      while ((lVar19 != 0x80000 && (pcVar18[lVar19 + 1] == pcVar15[lVar19 + 1]))) {
        if (pcVar18[lVar19 + 1] == '\0') {
          return;
        }
        lVar14 = lVar19 + 2;
        if (pcVar18[lVar14] != pcVar15[lVar19 + 2]) break;
        lVar19 = lVar19 + 2;
        if (pcVar18[lVar14] == '\0') {
          return;
        }
      }
    }
  }
  (**(code **)(plVar17[0x7c] + 0x18))(plVar16);
  pcVar15 = (char *)plVar17[0x7d];
  if (pcVar18 != pcVar15) {
    (**(code **)(plVar17[0x7c] + 0x18))(plVar16);
    lVar19 = 0;
    do {
      if (*(char *)(plVar17[0x7d] + lVar19) == '\0') goto LAB_01fbfcec;
      lVar14 = plVar17[0x7d] + lVar19;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_01fbfcec;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_01fbfcec;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_01fbfcec:
    iVar7 = (int)lVar19;
    if (*(int *)(param_1 + 0x12018) <= (int)lVar19) {
      iVar7 = *(int *)(param_1 + 0x12018) + -1;
    }
    memcpy(pcVar18,pcVar15,(long)iVar7);
    pcVar18[iVar7] = '\0';
  }
  lVar19 = *(long *)PTR_DAT_04bb4e28;
  sVar6 = FUN_0376baa0(plVar16);
  if ((sVar6 != -1) && (iVar7 = *(int *)(lVar19 + 0xe0), iVar7 != 0)) {
    lVar20 = *(long *)(lVar19 + 0xe8);
    lVar19 = 0;
    lVar14 = (long)iVar7 << 3;
    do {
      if (*(short *)(*(long *)(lVar20 + lVar19 * 8) + 0x38) == sVar6) {
        if ((*(ushort *)(*(long *)(lVar20 + lVar19 * 8) + 0x114) >> 5 & 1) != 0) {
          return;
        }
        break;
      }
      lVar19 = lVar19 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  puVar8 = (undefined8 *)plVar17[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  uVar10 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6708);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar10 = FUN_01fa2670(puVar8);
  if ((uVar10 & 1) == 0) {
    if (-1 < *(int *)(param_1 + 0x12048)) {
      return;
    }
    local_a0._0_4_ = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
    uVar10 = FUN_01fa2040(puVar8,&local_a0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    uVar10 = FUN_01fa25c0(puVar8);
    if ((uVar10 & 1) == 0) {
      return;
    }
    local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar8[1] + 0x230));
    uVar10 = FUN_01fa01e8(param_1,&local_a0);
  }
  else {
    uVar12 = FUN_01fa2530(plVar17);
    uVar10 = FUN_01fbd8e0(param_1,uVar12);
  }
  if ((uVar10 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xaf8c) = 7;
  *(undefined1 *)(param_1 + 0x7878) = 1;
  return;
}

