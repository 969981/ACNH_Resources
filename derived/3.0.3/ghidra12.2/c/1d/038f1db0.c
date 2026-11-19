
long * FUN_038f1db0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  void *pvVar18;
  void *pvVar19;
  long *local_88;
  long *local_78;
  uint local_64;
  
  lVar12 = DAT_05ae7600;
  plVar1 = (long *)(param_1 + 0x98);
  local_88 = *(long **)(param_1 + 200);
  if (param_3 != (long *)0x0) {
    local_88 = param_3;
  }
  if (*(long *)(param_1 + 0xb8) == 0) {
    if ((int)param_2 < 1) {
      return plVar1;
    }
    if (DAT_05ae7600 == 0) {
      pvVar18 = malloc((long)(int)(param_2 << 6));
    }
    else {
      if (local_88 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar13 = (undefined8 *)(lVar12 + 8);
        if (lVar4 != 0) {
          puVar13 = (undefined8 *)(lVar4 + 0xa8);
        }
        local_88 = (long *)*puVar13;
        if (local_88 == (long *)0x0) {
          return plVar1;
        }
      }
      pvVar18 = (void *)(**(code **)(*local_88 + 0x30))(local_88,(long)(int)(param_2 << 6),8);
    }
    if (pvVar18 == (void *)0x0) {
      return plVar1;
    }
    *(void **)(param_1 + 0xb0) = pvVar18;
    uVar8 = (long)(int)param_2 - 1;
    if (1 < param_2) {
      if ((int)uVar8 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        plVar5 = (long *)((long)pvVar18 + 0x40);
        do {
          uVar7 = uVar7 + 2;
          plVar5[-8] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 8);
          plVar5 = plVar5 + 0x10;
        } while ((uVar8 & 0xfffffffe) != uVar7);
      }
      if ((uVar8 & 1) != 0) {
        plVar5 = (long *)((long)pvVar18 + uVar7 * 0x40);
        *plVar5 = (long)(plVar5 + 8);
      }
    }
    *(undefined8 *)((long)pvVar18 + uVar8 * 0x40) = 0;
    *(void **)(param_1 + 0xb8) = pvVar18;
    *(uint *)(param_1 + 0xc0) = param_2;
    return plVar1;
  }
  uVar14 = *(uint *)(param_1 + 0xa8);
  if ((int)param_2 <= (int)uVar14) {
    return plVar1;
  }
  if ((int)uVar14 < 1) {
    local_64 = 0;
    plVar5 = (long *)0x0;
    local_78 = (long *)0x0;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      plVar5 = malloc((ulong)uVar14 * 0x838);
    }
    else {
      plVar5 = local_88;
      if (local_88 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar12 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          local_64 = 0;
          local_78 = (long *)0x0;
          plVar5 = (long *)0x0;
          goto LAB_038f2028;
        }
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar14 * 0x838,0xfffffff8);
    }
    if (plVar5 == (long *)0x0) {
      local_64 = 0;
      local_78 = (long *)0x0;
    }
    else {
      uVar3 = uVar14 - 1;
      if (1 < uVar14) {
        if (uVar3 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar16 = plVar5 + 0x106;
          do {
            uVar8 = uVar8 + 2;
            plVar16[-0x106] = (long)plVar16;
            *plVar16 = (long)(plVar16 + 0x106);
            plVar16 = plVar16 + 0x20c;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
        }
        if ((uVar3 & 1) != 0) {
          plVar5[uVar8 * 0x106] = (long)(plVar5 + uVar8 * 0x106 + 0x106);
        }
      }
      plVar5[(int)(uVar3 * 0x106)] = 0;
      local_78 = plVar5 + (ulong)uVar14 * 0x106;
      local_64 = 0;
      if (local_78 != (long *)0x0) {
        local_64 = uVar14;
      }
    }
  }
LAB_038f2028:
  plVar16 = *(long **)(param_1 + 0xa0);
  uVar14 = 0;
  if (plVar16 == plVar1) {
    plVar11 = plVar5;
  }
  else {
    plVar17 = plVar16 + -6;
    puVar2 = PTR_DAT_04bb2f40 + 0x10;
    plVar9 = plVar5;
    do {
      if ((int)uVar14 < (int)local_64) {
        if (plVar9 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = (long *)*plVar9;
        }
        memset(plVar9 + 2,0,0x820);
        plVar9[0x83] = (long)puVar2;
        *(undefined1 *)((long)plVar9 + 0x14) = 0;
        *plVar9 = (long)puVar2;
        plVar9[1] = (long)plVar9 + 0x14;
        *(undefined1 *)((long)plVar9 + 0x42c) = 0;
        plVar9[0x84] = (long)plVar9 + 0x42c;
        *(undefined4 *)(plVar9 + 2) = 0x400;
        *(undefined4 *)(plVar9 + 0x85) = 0x400;
        local_78[(int)uVar14] = (long)plVar9;
        uVar14 = uVar14 + 1;
        plVar15 = plVar9;
      }
      else {
        plVar15 = (long *)0x0;
        plVar11 = plVar9;
      }
      pvVar18 = (void *)plVar15[1];
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar19 = (void *)plVar17[1];
      if (pvVar18 != pvVar19) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
        lVar12 = 0;
        do {
          if (*(char *)(plVar17[1] + lVar12) == '\0') goto LAB_038f218c;
          lVar4 = plVar17[1] + lVar12;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_038f218c;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_038f218c;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_038f218c:
        iVar6 = (int)lVar12;
        if ((int)plVar15[2] <= (int)lVar12) {
          iVar6 = (int)plVar15[2] + -1;
        }
        memcpy(pvVar18,pvVar19,(long)iVar6);
        *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
      }
      pvVar18 = (void *)plVar15[0x84];
      plVar9 = plVar17 + 3;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      pvVar19 = (void *)plVar17[4];
      if (pvVar18 != pvVar19) {
        (**(code **)(plVar17[3] + 0x18))(plVar9);
        lVar12 = 0;
        do {
          if (*(char *)(plVar17[4] + lVar12) == '\0') goto LAB_038f2068;
          lVar4 = plVar17[4] + lVar12;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_038f2068;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_038f2068;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_038f2068:
        iVar6 = (int)lVar12;
        if ((int)plVar15[0x85] <= (int)lVar12) {
          iVar6 = (int)plVar15[0x85] + -1;
        }
        memcpy(pvVar18,pvVar19,(long)iVar6);
        *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
      }
      plVar16 = (long *)plVar16[1];
      plVar17 = plVar16 + -6;
      plVar9 = plVar11;
    } while (plVar17 != (long *)(param_1 + 0x68));
  }
  FUN_038f1ad0(plVar1);
  lVar12 = DAT_05ae7600;
  if (0 < (int)param_2) {
    if (DAT_05ae7600 == 0) {
      pvVar18 = malloc((long)(int)(param_2 << 6));
    }
    else {
      plVar16 = local_88;
      if (local_88 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar16 = (long *)(lVar12 + 8);
        if (lVar4 != 0) {
          plVar16 = (long *)(lVar4 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_038f2338;
      }
      pvVar18 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,(long)(int)(param_2 << 6),8);
    }
    if (pvVar18 != (void *)0x0) {
      *(void **)(param_1 + 0xb0) = pvVar18;
      uVar8 = (long)(int)param_2 - 1;
      if (1 < param_2) {
        if ((int)uVar8 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          plVar16 = (long *)((long)pvVar18 + 0x40);
          do {
            uVar7 = uVar7 + 2;
            plVar16[-8] = (long)plVar16;
            *plVar16 = (long)(plVar16 + 8);
            plVar16 = plVar16 + 0x10;
          } while ((uVar8 & 0xfffffffe) != uVar7);
        }
        if ((uVar8 & 1) != 0) {
          plVar16 = (long *)((long)pvVar18 + uVar7 * 0x40);
          *plVar16 = (long)(plVar16 + 8);
        }
      }
      *(undefined8 *)((long)pvVar18 + uVar8 * 0x40) = 0;
      *(void **)(param_1 + 0xb8) = pvVar18;
      *(uint *)(param_1 + 0xc0) = param_2;
    }
  }
LAB_038f2338:
  if (uVar14 == 0) {
    if (local_78 == (long *)0x0) {
      return plVar1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar8 = (ulong)(int)uVar14;
    if (iVar6 < *(int *)(param_1 + 0xc0)) {
      lVar12 = uVar8 << 3;
      plVar16 = local_78;
      do {
        if (iVar6 < *(int *)(param_1 + 0xc0)) {
          lVar4 = *plVar16;
          puVar13 = *(undefined8 **)(param_1 + 0xb0);
          if (puVar13 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xb0) = *puVar13;
          }
          FUN_038f1770(puVar13,local_88,lVar4,8);
          FUN_038f1770(puVar13 + 3,local_88,lVar4 + 0x418,8);
          plVar9 = puVar13 + 6;
          *plVar9 = 0;
          puVar13[7] = 0;
          lVar4 = *plVar1;
          *plVar1 = (long)plVar9;
          *plVar9 = lVar4;
          puVar13[7] = plVar1;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 8) = plVar9;
          }
          iVar6 = *(int *)(param_1 + 0xa8) + 1;
          *(int *)(param_1 + 0xa8) = iVar6;
        }
        plVar16 = plVar16 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    if (local_78 == (long *)0x0) {
      return plVar1;
    }
    if (0 < (int)uVar14) {
      uVar7 = uVar8 & 3;
      if (uVar14 < 4) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        plVar16 = local_78 + 2;
        do {
          plVar9 = (long *)plVar16[-2];
          lVar12 = lVar12 + -4;
          *plVar9 = (long)plVar11;
          puVar10 = (undefined8 *)plVar16[-1];
          *puVar10 = plVar9;
          puVar13 = (undefined8 *)*plVar16;
          *puVar13 = puVar10;
          plVar11 = (long *)plVar16[1];
          plVar16 = plVar16 + 4;
          *plVar11 = (long)puVar13;
        } while (-lVar12 != (uVar8 & 0xfffffffffffffffc));
        lVar12 = -lVar12;
      }
      if (uVar7 != 0) {
        plVar16 = local_78 + lVar12;
        do {
          plVar9 = (long *)*plVar16;
          uVar7 = uVar7 - 1;
          *plVar9 = (long)plVar11;
          plVar16 = plVar16 + 1;
          plVar11 = plVar9;
        } while (uVar7 != 0);
      }
    }
  }
  if (plVar5 != (long *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(plVar5);
    }
    else {
      plVar16 = (long *)FUN_038cb610(DAT_05ae7600,plVar5);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,plVar5);
      }
    }
  }
  return plVar1;
}

