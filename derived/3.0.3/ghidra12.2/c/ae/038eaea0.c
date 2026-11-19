
/* WARNING: Type propagation algorithm not settling */

void FUN_038eaea0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *******ppppppplVar7;
  long lVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *******ppppppplVar11;
  long *plVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  uint uVar15;
  void *pvVar16;
  long ******pppppplVar17;
  long *plVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  long *plVar21;
  long ******local_148 [19];
  long *local_b0;
  ulong local_a8;
  long ******local_a0;
  long ******local_98;
  long *******local_90;
  long *******local_88;
  int local_80;
  long *******local_78;
  long *******local_70;
  uint local_68;
  
  lVar8 = DAT_05ae7600;
  local_a8 = (ulong)param_2;
  plVar18 = *(long **)(param_1 + 0x60);
  if (param_3 != (long *)0x0) {
    plVar18 = param_3;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    if ((int)param_2 < 1) {
      return;
    }
    if (DAT_05ae7600 == 0) {
      pvVar16 = malloc((long)(int)(param_2 * 200));
    }
    else {
      if (plVar18 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar8 + 8);
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 0xa8);
        }
        plVar18 = (long *)*puVar2;
        if (plVar18 == (long *)0x0) {
          return;
        }
      }
      pvVar16 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,(long)(int)(param_2 * 200),8);
    }
    if (pvVar16 == (void *)0x0) {
      return;
    }
    *(void **)(param_1 + 0x48) = pvVar16;
    uVar9 = (long)(int)param_2 - 1;
    if (1 < param_2) {
      if ((int)uVar9 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        plVar18 = (long *)((long)pvVar16 + 200);
        do {
          uVar13 = uVar13 + 2;
          plVar18[-0x19] = (long)plVar18;
          *plVar18 = (long)(plVar18 + 0x19);
          plVar18 = plVar18 + 0x32;
        } while ((uVar9 & 0xfffffffe) != uVar13);
      }
      if ((uVar9 & 1) != 0) {
        plVar18 = (long *)((long)pvVar16 + uVar13 * 200);
        *plVar18 = (long)(plVar18 + 0x19);
      }
    }
    *(undefined8 *)((long)pvVar16 + uVar9 * 200) = 0;
    *(void **)(param_1 + 0x50) = pvVar16;
    *(uint *)(param_1 + 0x58) = param_2;
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x40);
  if ((int)param_2 <= (int)uVar15) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x30);
  local_90 = (long *******)&local_90;
  uVar4 = uVar15 - 1;
  local_80 = 0;
  local_68 = 0;
  local_78 = (long *******)0x0;
  local_70 = (long *******)0x0;
  local_88 = local_90;
  if (0 < (int)uVar15) {
    if (DAT_05ae7600 == 0) {
      ppppppplVar7 = malloc((long)(int)uVar15 * 200);
    }
    else {
      plVar6 = plVar18;
      if (plVar18 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar8 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_038eb0f8;
      }
      ppppppplVar7 = (long *******)
                     (**(code **)(*plVar6 + 0x30))(plVar6,(long)(int)uVar15 * 200,0xfffffff8);
    }
    if (ppppppplVar7 != (long *******)0x0) {
      if (1 < uVar15) {
        if (uVar4 == 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          ppppppplVar11 = ppppppplVar7 + 0x19;
          do {
            uVar9 = uVar9 + 2;
            ppppppplVar11[-0x19] = (long ******)ppppppplVar11;
            *ppppppplVar11 = (long ******)(ppppppplVar11 + 0x19);
            ppppppplVar11 = ppppppplVar11 + 0x32;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar9);
        }
        if ((uVar4 & 1) != 0) {
          ppppppplVar7[uVar9 * 0x19] = (long ******)(ppppppplVar7 + uVar9 * 0x19 + 0x19);
        }
      }
      ppppppplVar7[(int)(uVar4 * 0x19)] = (long ******)0x0;
      local_78 = ppppppplVar7;
      local_70 = ppppppplVar7;
      local_68 = uVar15;
    }
  }
LAB_038eb0f8:
  plVar6 = *(long **)(param_1 + 0x38);
  local_b0 = plVar18;
  if (plVar6 != plVar1) {
    plVar18 = plVar6 + -0x17;
    local_98 = (long ******)(PTR_DAT_04bb3768 + 0x10);
    local_a0 = (long ******)&DAT_048fc708;
    do {
      ppppppplVar7 = local_78;
      if (local_80 < (int)local_68) {
        if (local_78 != (long *******)0x0) {
          local_78 = (long *******)*local_78;
        }
        *(undefined1 *)((long)ppppppplVar7 + 0x1b) = 0;
        *(undefined1 *)((long)ppppppplVar7 + 0x14) = 0;
        *(undefined4 *)(ppppppplVar7 + 2) = 8;
        ppppppplVar7[1] = (long ******)((long)ppppppplVar7 + 0x14);
        *(undefined1 *)((long)ppppppplVar7 + 0xb3) = 0;
        *(undefined1 *)((long)ppppppplVar7 + 0x34) = 0;
        ppppppplVar7[5] = (long ******)((long)ppppppplVar7 + 0x34);
        *ppppppplVar7 = local_98;
        ppppppplVar7[4] = local_a0;
        *(undefined4 *)(ppppppplVar7 + 6) = 0x80;
        ppppppplVar11 = ppppppplVar7 + 0x17;
        *ppppppplVar11 = (long ******)0x0;
        ppppppplVar7[0x18] = (long ******)&local_90;
        *ppppppplVar11 = (long ******)local_90;
        if (local_90 != (long *******)0x0) {
          local_90[1] = (long ******)ppppppplVar11;
        }
        local_80 = local_80 + 1;
        local_90 = ppppppplVar11;
      }
      else {
        ppppppplVar7 = (long *******)0x0;
      }
      pppppplVar17 = ppppppplVar7[1];
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pppppplVar20 = (long ******)plVar18[1];
      if (pppppplVar17 != pppppplVar20) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
        lVar8 = 0;
        do {
          if (*(char *)(plVar18[1] + lVar8) == '\0') goto LAB_038eb28c;
          lVar5 = plVar18[1] + lVar8;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038eb28c;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038eb28c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038eb28c:
        iVar3 = (int)lVar8;
        if (*(int *)(ppppppplVar7 + 2) <= (int)lVar8) {
          iVar3 = *(int *)(ppppppplVar7 + 2) + -1;
        }
        memcpy(pppppplVar17,pppppplVar20,(long)iVar3);
        *(undefined1 *)((long)pppppplVar17 + (long)iVar3) = 0;
      }
      pppppplVar17 = ppppppplVar7[5];
      plVar21 = plVar18 + 4;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      pppppplVar20 = (long ******)plVar18[5];
      if (pppppplVar17 != pppppplVar20) {
        (**(code **)(plVar18[4] + 0x18))(plVar21);
        lVar8 = 0;
        do {
          if (*(char *)(plVar18[5] + lVar8) == '\0') goto LAB_038eb140;
          lVar5 = plVar18[5] + lVar8;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038eb140;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038eb140;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038eb140:
        iVar3 = (int)lVar8;
        if (*(int *)(ppppppplVar7 + 6) <= (int)lVar8) {
          iVar3 = *(int *)(ppppppplVar7 + 6) + -1;
        }
        memcpy(pppppplVar17,pppppplVar20,(long)iVar3);
        *(undefined1 *)((long)pppppplVar17 + (long)iVar3) = 0;
      }
      plVar6 = (long *)plVar6[1];
      plVar18 = plVar6 + -0x17;
    } while (plVar18 != (long *)(param_1 + -0x88));
  }
  uVar9 = local_a8;
  plVar18 = local_b0;
  pvVar16 = *(void **)(param_1 + 0x50);
  if (pvVar16 != (void *)0x0) {
    plVar6 = *(long **)(param_1 + 0x38);
    if (*(long **)(param_1 + 0x38) == plVar1) {
LAB_038eb3a4:
      if (DAT_05ae7600 == 0) {
        free(pvVar16);
      }
      else {
        plVar6 = (long *)FUN_038cb610(DAT_05ae7600,pvVar16);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar16);
        }
      }
    }
    else {
      do {
        plVar21 = (long *)plVar6[1];
        plVar12 = plVar21;
        if (*plVar6 != 0) {
          *(long **)(*plVar6 + 8) = plVar21;
          plVar12 = (long *)plVar6[1];
        }
        if (plVar12 != (long *)0x0) {
          *plVar12 = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        plVar6[-0x17] = *(long *)(param_1 + 0x48);
        *(long **)(param_1 + 0x48) = plVar6 + -0x17;
        plVar6 = plVar21;
      } while (plVar21 != plVar1);
      pvVar16 = *(void **)(param_1 + 0x50);
      if (pvVar16 != (void *)0x0) goto LAB_038eb3a4;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar8 = DAT_05ae7600;
  uVar15 = (uint)uVar9;
  if (0 < (int)uVar15) {
    if (DAT_05ae7600 == 0) {
      pvVar16 = malloc((long)(int)(uVar15 * 200));
    }
    else {
      if (plVar18 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar8 + 8);
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 0xa8);
        }
        plVar18 = (long *)*puVar2;
        if (plVar18 == (long *)0x0) goto LAB_038eb4e4;
      }
      pvVar16 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,(long)(int)(uVar15 * 200),8);
    }
    if (pvVar16 != (void *)0x0) {
      *(void **)(param_1 + 0x48) = pvVar16;
      uVar9 = (long)(int)uVar15 - 1;
      if (1 < uVar15) {
        if ((int)uVar9 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          plVar18 = (long *)((long)pvVar16 + 200);
          do {
            uVar13 = uVar13 + 2;
            plVar18[-0x19] = (long)plVar18;
            *plVar18 = (long)(plVar18 + 0x19);
            plVar18 = plVar18 + 0x32;
          } while ((uVar9 & 0xfffffffe) != uVar13);
        }
        if ((uVar9 & 1) != 0) {
          plVar18 = (long *)((long)pvVar16 + uVar13 * 200);
          *plVar18 = (long)(plVar18 + 0x19);
        }
      }
      *(undefined8 *)((long)pvVar16 + uVar9 * 200) = 0;
      *(void **)(param_1 + 0x50) = pvVar16;
      *(uint *)(param_1 + 0x58) = uVar15;
    }
  }
LAB_038eb4e4:
  if ((long ********)local_88 != &local_90) {
    ppppppplVar11 = local_88 + -0x17;
    local_98 = (long ******)&PTR_LAB_04908da0;
    local_a0 = (long ******)&DAT_048fc708;
    ppppppplVar7 = local_88;
    do {
      if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x58)) {
        plVar18 = *(long **)(param_1 + 0x48);
        if (plVar18 != (long *)0x0) {
          *(long *)(param_1 + 0x48) = *plVar18;
        }
        *(undefined1 *)((long)plVar18 + 0x1b) = 0;
        *(undefined1 *)((long)plVar18 + 0x14) = 0;
        *(undefined4 *)(plVar18 + 2) = 8;
        *(undefined1 *)((long)plVar18 + 0x34) = 0;
        plVar18[1] = (long)plVar18 + 0x14;
        plVar18[5] = (long)plVar18 + 0x34;
        *(undefined4 *)(plVar18 + 6) = 0x80;
        *(undefined1 *)((long)plVar18 + 0xb3) = 0;
        *plVar18 = (long)local_98;
        plVar18[0x18] = 0;
        plVar6 = plVar18 + 0x17;
        *plVar6 = 0;
        plVar18[4] = (long)local_a0;
        lVar8 = *plVar1;
        *plVar1 = (long)plVar6;
        plVar18[0x18] = (long)plVar1;
        *plVar6 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar6;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      else {
        plVar18 = (long *)0x0;
      }
      pppppplVar17 = (long ******)plVar18[1];
      (*(code *)(*ppppppplVar11)[3])(ppppppplVar11);
      pppppplVar20 = ppppppplVar11[1];
      if (pppppplVar17 != pppppplVar20) {
        (*(code *)(*ppppppplVar11)[3])(ppppppplVar11);
        pppppplVar10 = ppppppplVar11[1];
        lVar8 = 0;
        do {
          if (*(char *)((long)pppppplVar10 + lVar8) == '\0') goto LAB_038eb66c;
          if (*(char *)((long)pppppplVar10 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038eb66c;
          }
          if (*(char *)((long)pppppplVar10 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038eb66c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038eb66c:
        iVar3 = (int)lVar8;
        if ((int)plVar18[2] <= (int)lVar8) {
          iVar3 = (int)plVar18[2] + -1;
        }
        memcpy(pppppplVar17,pppppplVar20,(long)iVar3);
        *(undefined1 *)((long)pppppplVar17 + (long)iVar3) = 0;
      }
      pppppplVar17 = (long ******)plVar18[5];
      ppppppplVar19 = ppppppplVar11 + 4;
      (*(code *)(*ppppppplVar19)[3])(ppppppplVar19);
      pppppplVar20 = ppppppplVar11[5];
      if (pppppplVar17 != pppppplVar20) {
        (*(code *)ppppppplVar11[4][3])(ppppppplVar19);
        pppppplVar10 = ppppppplVar11[5];
        lVar8 = 0;
        do {
          if (*(char *)((long)pppppplVar10 + lVar8) == '\0') goto LAB_038eb524;
          if (*(char *)((long)pppppplVar10 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038eb524;
          }
          if (*(char *)((long)pppppplVar10 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038eb524;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038eb524:
        iVar3 = (int)lVar8;
        if ((int)plVar18[6] <= (int)lVar8) {
          iVar3 = (int)plVar18[6] + -1;
        }
        memcpy(pppppplVar17,pppppplVar20,(long)iVar3);
        *(undefined1 *)((long)pppppplVar17 + (long)iVar3) = 0;
      }
      ppppppplVar7 = (long *******)ppppppplVar7[1];
      ppppppplVar11 = ppppppplVar7 + -0x17;
    } while (ppppppplVar11 != local_148);
  }
  ppppppplVar7 = local_70;
  if (local_70 != (long *******)0x0) {
    ppppppplVar11 = local_88;
    if ((long ********)local_88 != &local_90) {
      do {
        ppppppplVar19 = (long *******)ppppppplVar11[1];
        ppppppplVar14 = ppppppplVar19;
        if (*ppppppplVar11 != (long ******)0x0) {
          (*ppppppplVar11)[1] = (long *****)ppppppplVar19;
          ppppppplVar14 = (long *******)ppppppplVar11[1];
        }
        if (ppppppplVar14 != (long *******)0x0) {
          *ppppppplVar14 = *ppppppplVar11;
        }
        *ppppppplVar11 = (long ******)0x0;
        ppppppplVar11[1] = (long ******)0x0;
        iVar3 = local_80 + -1;
        ppppppplVar14 = ppppppplVar11 + -0x17;
        *ppppppplVar14 = (long ******)local_78;
        ppppppplVar11 = ppppppplVar19;
        local_80 = iVar3;
        local_78 = ppppppplVar14;
      } while ((long ********)ppppppplVar19 != &local_90);
      if (local_70 == (long *******)0x0) {
        return;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(local_70);
    }
    else {
      plVar18 = (long *)FUN_038cb610(DAT_05ae7600,local_70);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x38))(plVar18,ppppppplVar7);
      }
    }
  }
  return;
}

