
bool FUN_02838430(long *param_1,undefined4 *param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int *__s2;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *__s1;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  void *pvVar16;
  undefined *puVar17;
  long lVar18;
  undefined *local_1e8;
  char *local_1e0;
  int local_1d8;
  char local_1d4 [127];
  undefined1 local_155;
  undefined *local_150;
  char *local_148;
  int local_140;
  char local_13c [127];
  undefined1 local_bd;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  int local_74;
  int local_70;
  int local_6c [3];
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puVar17 = PTR_DAT_04bb46b0;
  puVar3 = PTR_DAT_04bb46a8;
  lVar18 = *(long *)PTR_DAT_04bb46a8;
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (param_3 == 1) {
    pvVar16 = (void *)0x0;
    if ((param_4 != -1) && (lVar8 != 0)) {
      pvVar16 = (void *)FUN_026f6c2c(lVar8,param_4);
      lVar8 = *(long *)puVar17;
    }
    if ((lVar8 == 0) || (__s2 = (int *)FUN_026f9328(lVar8,param_4), lVar18 == 0)) goto LAB_02838720;
LAB_02838650:
    if ((pvVar16 == (void *)0x0) || (__s2 == (int *)0x0)) goto LAB_02838720;
    local_bd = 0;
    local_148 = local_13c;
    local_140 = 0x80;
    local_1d8 = 0x80;
    local_1e0 = local_1d4;
    local_13c[0] = '\0';
    local_1e8 = PTR_DAT_04bb2d88 + 0x10;
    local_155 = 0;
    local_1d4[0] = '\0';
    uVar12 = 1;
    if (param_3 != 1) {
      uVar12 = 2;
    }
    local_150 = local_1e8;
    uVar9 = FUN_02701810(&local_150,uVar12,param_4);
    if ((uVar9 & 1) != 0) {
      if (*local_148 != '\0') {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar8 = 0;
        do {
          if (local_148[lVar8] == '\0') goto LAB_0283875c;
          if (local_148[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0283875c;
          }
          if (local_148[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0283875c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0283875c:
        if ((int)lVar8 < local_140 + -1) {
          (local_148 + (int)lVar8)[0] = '/';
          (local_148 + (int)lVar8)[1] = '\0';
        }
      }
      FUN_02701270(&local_150,1);
    }
    uVar9 = FUN_02701810(&local_1e8,uVar12,param_4);
    if ((uVar9 & 1) != 0) {
      if (*local_1e0 != '\0') {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar8 = 0;
        do {
          if (local_1e0[lVar8] == '\0') goto LAB_028387fc;
          if (local_1e0[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_028387fc;
          }
          if (local_1e0[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_028387fc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_028387fc:
        if ((int)lVar8 < local_1d8 + -1) {
          (local_1e0 + (int)lVar8)[0] = '/';
          (local_1e0 + (int)lVar8)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1e8,1);
    }
    pcVar5 = local_148;
    pcVar4 = local_1e0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    plVar10 = (long *)*param_1;
    pcStack_80 = local_148;
    pcStack_90 = local_1e0;
    local_88 = local_98;
    if (((plVar10 == (long *)0x0) || (*local_148 == '\0')) || (*local_1e0 == '\0')) {
      iVar7 = 7;
      puVar17 = PTR_DAT_04bb2020;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar11 = malloc(0x74a40);
      }
      else {
        puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x74a40,0x10);
      }
      *(undefined8 *)((long)puVar11 + 6) = 0;
      *puVar11 = 0;
      *(undefined2 *)((long)puVar11 + 0xe) = 0xffff;
      puVar11[8] = 0;
      *(undefined8 *)((long)puVar11 + 0x46) = 0;
      *(undefined2 *)((long)puVar11 + 0x4e) = 0xffff;
      FUN_027ee494(puVar11 + 0x22);
      FUN_028119e0(puVar11 + 0x6f7c);
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 == 0) {
        __s1 = malloc(0x300);
      }
      else {
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar8 + 8);
          if (lVar18 != 0) {
            plVar10 = (long *)(lVar18 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            __s1 = (undefined8 *)0x0;
            goto LAB_02838a5c;
          }
        }
        __s1 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x300,4);
      }
LAB_02838a5c:
      *(undefined8 *)((long)__s1 + 6) = 0;
      *__s1 = 0;
      *(undefined2 *)((long)__s1 + 0xe) = 0xffff;
      __s1[8] = 0;
      *(undefined8 *)((long)__s1 + 0x46) = 0;
      *(undefined2 *)((long)__s1 + 0x4e) = 0xffff;
      memset(__s1 + 0x20,0,0x200);
      uVar9 = 0;
      do {
        uVar1 = uVar9 << 2;
        uVar2 = uVar9 >> 0x1f;
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar13;
        *(undefined4 *)((long)(__s1 + 0x20) + (-uVar2 & 0xfffffffc00000000 | uVar1)) = 0;
      } while (uVar13 != 0x80);
      iVar7 = FUN_026eb860(puVar11,__s1,0x74a40,&local_88,&local_98,0);
      if ((iVar7 == 1) && (iVar7 = memcmp(puVar11,pvVar16,0x74a40), iVar7 == 0)) {
        iVar7 = memcmp(__s1,__s2,0x300);
        FUN_0282cba8(puVar11 + 0x964f);
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 == 0) {
          free(puVar11);
LAB_02838bdc:
          lVar8 = *(long *)PTR_DAT_04bb2698;
          if (lVar8 != 0) goto LAB_02838bec;
          free(__s1);
        }
        else {
          if (puVar11 != (undefined8 *)0x0) {
            plVar10 = (long *)FUN_038cb610(lVar8,puVar11);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10,puVar11);
            }
            goto LAB_02838bdc;
          }
LAB_02838bec:
          plVar10 = (long *)FUN_038cb610(lVar8,__s1);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,__s1);
          }
        }
        if (iVar7 == 0) {
          iVar7 = 1;
          puVar17 = PTR_DAT_04bb2020;
          goto LAB_02838884;
        }
      }
      else {
        FUN_0282cba8(puVar11 + 0x964f);
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 == 0) {
          free(puVar11);
LAB_02838b2c:
          lVar8 = *(long *)PTR_DAT_04bb2698;
          if (lVar8 == 0) {
            free(__s1);
            goto LAB_02838c28;
          }
        }
        else if (puVar11 != (undefined8 *)0x0) {
          plVar10 = (long *)FUN_038cb610(lVar8,puVar11);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,puVar11);
          }
          goto LAB_02838b2c;
        }
        plVar10 = (long *)FUN_038cb610(lVar8,__s1);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,__s1);
        }
      }
LAB_02838c28:
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 == 0) {
        puVar11 = malloc(0x74a40);
      }
      else {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          param_1 = (long *)(lVar8 + 8);
          if (lVar18 != 0) {
            param_1 = (long *)(lVar18 + 0xa8);
          }
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            puVar11 = (undefined8 *)0x0;
            goto LAB_02838c90;
          }
        }
        puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x74a40,0x10);
      }
LAB_02838c90:
      *(undefined8 *)((long)puVar11 + 6) = 0;
      *puVar11 = 0;
      *(undefined2 *)((long)puVar11 + 0xe) = 0xffff;
      puVar11[8] = 0;
      *(undefined8 *)((long)puVar11 + 0x46) = 0;
      *(undefined2 *)((long)puVar11 + 0x4e) = 0xffff;
      FUN_027ee494(puVar11 + 0x22);
      FUN_028119e0(puVar11 + 0x6f7c);
      pvVar16 = memcpy(puVar11,pvVar16,0x74a40);
      uVar9 = FUN_028403e0(pvVar16,puVar11);
      puVar17 = PTR_DAT_04bb2020;
      if ((uVar9 & 1) == 0) {
LAB_02838d08:
        iVar7 = 7;
      }
      else {
        if (*(short *)PTR_DAT_04bb21a8 == 999) {
          if (*(short *)((long)__s2 + 0xe) != 999) goto LAB_02838d08;
        }
        else if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_02838d08;
        iVar7 = 7;
        if (((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) &&
           ((__s2[2] == 2 && ((short)__s2[3] == 2)))) {
          uVar12 = FUN_026eb5c0(puVar11,__s2,0x74a40,&local_88,&local_98);
          iVar7 = (int)uVar12;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar7);
          if (iVar7 == 1) {
            uVar9 = FUN_028403e0(uVar12,puVar11);
            iVar7 = (int)local_a8;
            if ((uVar9 & 1) == 0) {
              iVar7 = 7;
            }
          }
        }
      }
      FUN_0282cba8(puVar11 + 0x964f);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(puVar11);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,puVar11);
        }
      }
    }
LAB_02838884:
    if (iVar7 == 1) {
      lVar8 = *(long *)puVar3;
      local_a8 = puVar17 + 0x10;
      pcStack_a0 = pcVar4;
      if (lVar8 != 0) {
        local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
        local_74 = iVar7;
        local_6c[0] = FUN_026d0950(lVar8,&local_b8,&local_a8);
        if ((local_6c[0] == 1) &&
           (((int)local_b8 == 0x300 || (iVar7 = FUN_026d0728(lVar8,&local_a8,0x300), iVar7 == 1))))
        {
          lVar8 = *(long *)puVar3;
          local_b8 = puVar17 + 0x10;
          if (lVar8 != 0) {
            local_6c[0] = 0;
            pcStack_b0 = pcVar5;
            local_70 = FUN_026d0950(lVar8,local_6c,&local_b8);
            if ((local_70 == 1) &&
               ((local_6c[0] == 0x74a40 || (iVar7 = FUN_026d0728(lVar8,&local_b8), iVar7 == 1)))) {
              iVar7 = 1;
              goto LAB_02838964;
            }
          }
        }
      }
      iVar7 = 7;
    }
LAB_02838964:
    bVar6 = iVar7 == 1;
    if (bVar6) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar14 = 1;
      goto LAB_0283872c;
    }
    if (iVar7 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar14 = 4;
      goto LAB_0283872c;
    }
    if (iVar7 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar14 = 5;
      goto LAB_0283872c;
    }
  }
  else {
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x94) == 2) {
        lVar15 = 0;
LAB_02838560:
        if ((*(long *)(lVar8 + 0x10) == 0) ||
           (lVar15 = *(long *)(*(long *)(lVar8 + 0x10) + lVar15 * 8 + 0x60), lVar15 == 0)) {
          pvVar16 = (void *)0x0;
        }
        else {
          pvVar16 = *(void **)(lVar15 + 0x18);
        }
        if (*(int *)(lVar8 + 0x94) != 2) goto LAB_0283859c;
        uVar13 = 0;
      }
      else {
        if (*(int *)(lVar8 + 0x9c) == 2) {
          lVar15 = 1;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xa4) == 2) {
          lVar15 = 2;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xac) == 2) {
          lVar15 = 3;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xb4) == 2) {
          lVar15 = 4;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xbc) == 2) {
          lVar15 = 5;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xc4) == 2) {
          lVar15 = 6;
          goto LAB_02838560;
        }
        if (*(int *)(lVar8 + 0xcc) == 2) {
          lVar15 = 7;
          goto LAB_02838560;
        }
        pvVar16 = (void *)0x0;
LAB_0283859c:
        if (*(int *)(lVar8 + 0x9c) == 2) {
          uVar13 = 1;
        }
        else {
          uVar13 = *(uint *)(lVar8 + 0xa4);
          if (uVar13 != 2) {
            if (*(int *)(lVar8 + 0xac) == 2) {
              uVar13 = 3;
            }
            else if (*(int *)(lVar8 + 0xb4) == 2) {
              uVar13 = 4;
            }
            else if (*(int *)(lVar8 + 0xbc) == 2) {
              uVar13 = 5;
            }
            else if (*(int *)(lVar8 + 0xc4) == 2) {
              uVar13 = 6;
            }
            else {
              if (*(int *)(lVar8 + 0xcc) != 2) goto LAB_02838720;
              uVar13 = 7;
            }
          }
        }
      }
      if ((*(long *)(lVar8 + 0x10) != 0) &&
         (*(long *)(*(long *)(lVar8 + 0x10) + (ulong)uVar13 * 8 + 0x60) != 0)) {
        __s2 = (int *)(*(long *)(lVar8 + 0x60) + (ulong)uVar13 * 0x300);
        if (*(uint *)(lVar8 + 0x58) <= uVar13) {
          __s2 = (int *)0x0;
        }
        if (lVar18 != 0) goto LAB_02838650;
      }
    }
LAB_02838720:
    bVar6 = false;
  }
  if (param_2 == (undefined4 *)0x0) {
    return bVar6;
  }
  uVar14 = 7;
LAB_0283872c:
  *param_2 = uVar14;
  return bVar6;
}

