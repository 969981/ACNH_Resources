
void FUN_007b1690(long *param_1,int param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  void *pvVar19;
  undefined1 *__src;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  int local_6c;
  
  local_6c = param_2;
  (**(code **)(*param_1 + 0x30))();
  pvVar19 = (void *)param_1[7];
  if (pvVar19 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar19);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar19);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar19);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = (long)param_3;
  *(int *)(param_1 + 5) = local_6c;
  if (*(int *)(&DAT_04101df4 + (long)local_6c * 8) < *(int *)(&DAT_04101df0 + (long)local_6c * 8))
  goto LAB_007b1870;
  uVar20 = 0;
  piVar16 = *(int **)PTR_DAT_04bb43e8;
  iVar13 = *(int *)(&DAT_04101df0 + (long)local_6c * 8);
  do {
    if ((0 < *piVar16) && (piVar16[6] != 0)) {
      iVar14 = 0;
      do {
        if (*(int *)(*(long *)(piVar16 + 8) + (long)iVar14 * 0x18) == iVar13) {
          iVar14 = *(int *)(*(long *)(piVar16 + 8) + (long)iVar14 * 0x18 + 8);
          goto LAB_007b1768;
        }
        iVar14 = iVar14 + 1;
      } while (piVar16[6] != iVar14);
    }
    iVar14 = 0;
LAB_007b1768:
    uVar4 = iVar14 + (int)uVar20;
    uVar20 = (ulong)uVar4;
    bVar1 = iVar13 < *(int *)(&DAT_04101df4 + (long)local_6c * 8);
    iVar13 = iVar13 + 1;
  } while (bVar1);
  if ((int)uVar4 < 1) goto LAB_007b1870;
  lVar22 = *(long *)PTR_DAT_04bb2698;
  if (lVar22 == 0) {
    pvVar19 = malloc(uVar20 << 4);
joined_r0x007b1cd4:
    if (pvVar19 != (void *)0x0) {
      *(uint *)(param_1 + 6) = uVar4;
      param_1[7] = (long)pvVar19;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_007b1820:
      pvVar19 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar20 << 4,8);
      goto joined_r0x007b1cd4;
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar22 + 8);
    if (lVar12 != 0) {
      puVar6 = (undefined8 *)(lVar12 + 0xa8);
    }
    param_3 = (long *)*puVar6;
    if (param_3 != (long *)0x0) goto LAB_007b1820;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  puVar9 = PTR_DAT_04bb2d88;
  if (*(int *)(&DAT_04101df0 + (long)local_6c * 8) <= *(int *)(&DAT_04101df4 + (long)local_6c * 8))
  {
    piVar16 = *(int **)PTR_DAT_04bb43e8;
    puVar2 = PTR_DAT_04bb2e90 + 0x10;
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    iVar13 = *(int *)(&DAT_04101df0 + (long)local_6c * 8);
LAB_007b1900:
    if ((0 < *piVar16) && (piVar16[6] != 0)) {
      iVar14 = 0;
      do {
        if (*(int *)(*(long *)(piVar16 + 8) + (long)iVar14 * 0x18) == iVar13) {
          uVar4 = *(uint *)(*(long *)(piVar16 + 8) + (long)iVar14 * 0x18 + 8);
          if (0 < (int)uVar4) {
            uVar21 = 0;
            goto LAB_007b196c;
          }
          break;
        }
        iVar14 = iVar14 + 1;
      } while (piVar16[6] != iVar14);
    }
    goto LAB_007b18e0;
  }
LAB_007b1870:
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
  while( true ) {
    if (local_100[lVar22 + 1] == '\0') {
      lVar22 = lVar22 + 1;
      goto LAB_007b1bd4;
    }
    if (local_100[lVar22 + 2] == '\0') {
      lVar22 = lVar22 + 2;
      goto LAB_007b1bd4;
    }
    lVar22 = lVar22 + 3;
    if (lVar22 == 0x80001) break;
LAB_007b1b98:
    if (local_100[lVar22] == '\0') goto LAB_007b1bd4;
  }
  lVar22 = 0;
LAB_007b1bd4:
  iVar15 = (int)lVar22;
  iVar14 = iVar15;
  if (7 < iVar15) {
    iVar14 = 8;
  }
  local_100[iVar15 - iVar14] = 0;
LAB_007b1bf0:
  uVar7 = *(uint *)(param_1 + 8);
  lVar22 = param_1[7];
  if (*(uint *)(param_1 + 6) <= uVar7) {
    uVar7 = 0;
  }
  piVar16 = (int *)(lVar22 + (long)(int)uVar7 * 0x10);
  *piVar16 = iVar13;
  piVar16[2] = uVar21;
  piVar18 = *(int **)puVar10;
  if ((0 < *piVar18) && (piVar18[6] != 0)) {
    lVar12 = *(long *)(piVar18 + 8);
    iVar14 = 0;
    do {
      if (*(int *)(lVar12 + (long)iVar14 * 0x18) == iVar13) {
        uVar8 = *(uint *)(lVar12 + (long)iVar14 * 0x18 + 8);
        if ((int)uVar21 < (int)uVar8) {
          uVar5 = uVar21;
          if (uVar8 <= uVar21) {
            uVar5 = 0;
          }
          uVar17 = (undefined4)
                   *(undefined8 *)
                    (*(long *)(lVar12 + (long)iVar14 * 0x18 + 0x10) + (ulong)uVar5 * 0x120 + 0x118);
          goto LAB_007b1c94;
        }
        break;
      }
      iVar14 = iVar14 + 1;
    } while (piVar18[6] != iVar14);
  }
  uVar17 = 0;
LAB_007b1c94:
  *(undefined4 *)(lVar22 + (long)(int)uVar7 * 0x10 + 0xc) = uVar17;
  uVar20 = (**(code **)(*param_1 + 0x20))(param_1,piVar16,&local_108);
  piVar16 = *(int **)puVar10;
  if ((uVar20 & 1) != 0) {
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  }
  while (uVar21 = uVar21 + 1, uVar21 != uVar4) {
LAB_007b196c:
    plVar11 = (long *)PTR_PTR_04bb2238;
    if ((0 < *piVar16) && (piVar16[6] != 0)) {
      lVar22 = *(long *)(piVar16 + 8);
      iVar14 = 0;
      do {
        if (*(int *)(lVar22 + (long)iVar14 * 0x18) == iVar13) {
          uVar7 = *(uint *)(lVar22 + (long)iVar14 * 0x18 + 8);
          if ((int)uVar21 < (int)uVar7) {
            uVar8 = uVar21;
            if (uVar7 <= uVar21) {
              uVar8 = 0;
            }
            plVar11 = (long *)(*(long *)(lVar22 + (long)iVar14 * 0x18 + 0x10) + (ulong)uVar8 * 0x120
                              );
          }
          break;
        }
        iVar14 = iVar14 + 1;
      } while (piVar16[6] != iVar14);
    }
    if (*(char *)plVar11[1] != '\0') {
      local_75 = 0;
      local_f8 = 0x80;
      local_108 = puVar2;
      local_100 = local_f4;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      __src = (undefined1 *)plVar11[1];
      if (local_f4 != __src) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar22 = 0;
        do {
          if (*(char *)(plVar11[1] + lVar22) == '\0') goto LAB_007b1a84;
          lVar12 = plVar11[1] + lVar22;
          if (*(char *)(lVar12 + 1) == '\0') {
            lVar22 = lVar22 + 1;
            goto LAB_007b1a84;
          }
          if (*(char *)(lVar12 + 2) == '\0') {
            lVar22 = lVar22 + 2;
            goto LAB_007b1a84;
          }
          lVar22 = lVar22 + 3;
        } while (lVar22 != 0x80001);
        lVar22 = 0;
LAB_007b1a84:
        iVar14 = (int)lVar22;
        if (local_f8 <= (int)lVar22) {
          iVar14 = local_f8 + -1;
        }
        memcpy(local_f4,__src,(long)iVar14);
        local_f4[iVar14] = 0;
      }
      lVar22 = 0;
      local_100[(long)local_f8 + -1] = 0;
      puVar10 = PTR_DAT_04bb43e8;
      do {
        local_108 = puVar3;
        if (local_100[lVar22] == '\0') {
LAB_007b1b00:
          iVar14 = (int)lVar22;
joined_r0x007b1b04:
          if ((((((7 < iVar14) && (uVar20 = (ulong)(iVar14 - 8), local_100[uVar20] == '.')) &&
                (local_100[uVar20 + 1] == 'm')) &&
               ((local_100[uVar20 + 2] == 's' && (local_100[uVar20 + 3] == 'g')))) &&
              ((local_100[uVar20 + 4] == 'p' &&
               ((local_100[uVar20 + 5] == 'a' && (local_100[uVar20 + 6] == 'c')))))) &&
             (local_100[uVar20 + 7] == 'k')) {
            (**(code **)(puVar9 + 0x28))(&local_108);
            lVar22 = 0;
            goto LAB_007b1b98;
          }
          break;
        }
        if (local_100[lVar22 + 1] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_007b1b00;
        }
        if (local_100[lVar22 + 2] == '\0') {
          iVar14 = (int)lVar22 + 2;
          goto joined_r0x007b1b04;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      goto LAB_007b1bf0;
    }
  }
LAB_007b18e0:
  bVar1 = *(int *)(&DAT_04101df4 + (long)local_6c * 8) <= iVar13;
  iVar13 = iVar13 + 1;
  if (bVar1) goto LAB_007b1870;
  goto LAB_007b1900;
}

