
/* WARNING: Removing unreachable block (ram,0x0283a22c) */

bool FUN_0283a1b0(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *__s1;
  undefined4 uVar15;
  long lVar16;
  int *__s2;
  undefined8 uVar17;
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
  undefined **local_a8;
  char *pcStack_a0;
  undefined **local_98;
  char *pcStack_90;
  undefined **local_88;
  char *pcStack_80;
  int local_74;
  int local_70;
  int local_6c [3];
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (DAT_05574040 == 0) {
LAB_0283a340:
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
    bVar7 = false;
  }
  else {
    if ((*(long *)(DAT_05574040 + 0x10) == 0) ||
       (plVar9 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0xe8), plVar9 == (long *)0x0)) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x20))();
      if (DAT_05574040 == 0) goto LAB_0283a340;
    }
    __s2 = *(int **)(DAT_05574040 + 0x80);
    if (((pvVar10 == (void *)0x0) || (__s2 == (int *)0x0)) ||
       (plVar9 = &DAT_0556ca20, DAT_0556ca20 == 0)) goto LAB_0283a340;
    uVar1 = *(uint *)(DAT_05574040 + 0x118);
    if (*(int *)(DAT_05574040 + 0x11c) != 1) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 < 8) {
      uVar17 = 1;
    }
    else {
      if (*(int *)(DAT_05574040 + 0x11c) != 2) goto LAB_0283a340;
      uVar17 = 2;
    }
    local_bd = 0;
    local_140 = 0x80;
    local_1d8 = 0x80;
    local_148 = local_13c;
    local_1e0 = local_1d4;
    local_13c[0] = '\0';
    local_1e8 = PTR_DAT_04bb2d88 + 0x10;
    local_155 = 0;
    local_1d4[0] = '\0';
    local_150 = local_1e8;
    uVar11 = FUN_02701810(&local_150,uVar17,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*local_148 != '\0') {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar16 = 0;
        do {
          if (local_148[lVar16] == '\0') goto LAB_0283a364;
          if (local_148[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0283a364;
          }
          if (local_148[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0283a364;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0283a364:
        if ((int)lVar16 < local_140 + -1) {
          (local_148 + (int)lVar16)[0] = '/';
          (local_148 + (int)lVar16)[1] = '\0';
        }
      }
      FUN_02701270(&local_150,4);
    }
    uVar11 = FUN_02701810(&local_1e8,uVar17,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*local_1e0 != '\0') {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar16 = 0;
        do {
          if (local_1e0[lVar16] == '\0') goto LAB_0283a40c;
          if (local_1e0[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0283a40c;
          }
          if (local_1e0[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0283a40c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0283a40c:
        if ((int)lVar16 < local_1d8 + -1) {
          (local_1e0 + (int)lVar16)[0] = '/';
          (local_1e0 + (int)lVar16)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1e8,4);
    }
    pcVar6 = local_148;
    pcVar5 = local_1e0;
    puVar4 = PTR_DAT_04bb2698;
    plVar12 = (long *)*param_1;
    local_88 = &PTR_LAB_048f9770;
    pcStack_80 = local_148;
    local_98 = &PTR_LAB_048f9770;
    pcStack_90 = local_1e0;
    if (((plVar12 == (long *)0x0) || (*local_148 == '\0')) || (*local_1e0 == '\0')) {
      iVar8 = 7;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar13 = malloc(0x69560);
        lVar16 = 0;
      }
      else {
        puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x69560,0x10);
        lVar16 = *(long *)puVar4;
      }
      *(undefined8 *)((long)puVar13 + 6) = 0;
      *puVar13 = 0;
      *(undefined2 *)((long)puVar13 + 0xe) = 0xffff;
      puVar13[8] = 0;
      *(undefined8 *)((long)puVar13 + 0x46) = 0;
      *(undefined2 *)((long)puVar13 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      memset(puVar13 + 0x22,0,0x69061);
      if (lVar16 == 0) {
        __s1 = malloc(0x300);
      }
      else {
        plVar9 = (long *)*param_1;
        if (plVar9 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar9 = (long *)(lVar16 + 8);
          if (lVar14 != 0) {
            plVar9 = (long *)(lVar14 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            __s1 = (undefined8 *)0x0;
            goto LAB_0283a68c;
          }
        }
        __s1 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x300,4);
      }
LAB_0283a68c:
      *(undefined8 *)((long)__s1 + 6) = 0;
      *__s1 = 0;
      *(undefined2 *)((long)__s1 + 0xe) = 0xffff;
      __s1[8] = 0;
      *(undefined8 *)((long)__s1 + 0x46) = 0;
      *(undefined2 *)((long)__s1 + 0x4e) = 0xffff;
      memset(__s1 + 0x20,0,0x200);
      uVar11 = 0;
      do {
        uVar2 = uVar11 << 2;
        uVar3 = uVar11 >> 0x1f;
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar1;
        *(undefined4 *)((long)(__s1 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
      } while (uVar1 != 0x80);
      iVar8 = FUN_026eb860(puVar13,__s1,0x69560,&local_88,&local_98,0);
      if ((iVar8 == 1) && (iVar8 = memcmp(puVar13,pvVar10,0x69560), iVar8 == 0)) {
        iVar8 = memcmp(__s1,__s2,0x300);
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          free(puVar13);
LAB_0283a7ec:
          lVar16 = DAT_05ae7600;
          if (DAT_05ae7600 != 0) goto LAB_0283a7fc;
          free(__s1);
        }
        else {
          if (puVar13 != (undefined8 *)0x0) {
            plVar9 = (long *)FUN_038cb610(lVar16,puVar13);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar13);
            }
            goto LAB_0283a7ec;
          }
LAB_0283a7fc:
          plVar9 = (long *)FUN_038cb610(lVar16,__s1);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,__s1);
          }
        }
        if (iVar8 == 0) {
          iVar8 = 1;
          plVar9 = (long *)PTR_DAT_04bb46a8;
          goto LAB_0283a49c;
        }
      }
      else {
        if (DAT_05ae7600 == 0) {
          free(puVar13);
LAB_0283a750:
          if (DAT_05ae7600 == 0) {
            free(__s1);
            goto LAB_0283a838;
          }
        }
        else if (puVar13 != (undefined8 *)0x0) {
          plVar9 = (long *)FUN_038cb610(DAT_05ae7600,puVar13);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,puVar13);
          }
          goto LAB_0283a750;
        }
        plVar9 = (long *)FUN_038cb610(DAT_05ae7600,__s1);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,__s1);
        }
      }
LAB_0283a838:
      lVar16 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar13 = malloc(0x69560);
      }
      else {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_1 = (long *)(lVar16 + 8);
          if (lVar14 != 0) {
            param_1 = (long *)(lVar14 + 0xa8);
          }
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            puVar13 = (undefined8 *)0x0;
            goto LAB_0283a8a8;
          }
        }
        puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x69560,0x10);
      }
LAB_0283a8a8:
      puVar4 = PTR_DAT_04bb2698;
      *(undefined8 *)((long)puVar13 + 6) = 0;
      *puVar13 = 0;
      *(undefined2 *)((long)puVar13 + 0xe) = 0xffff;
      puVar13[8] = 0;
      *(undefined8 *)((long)puVar13 + 0x46) = 0;
      *(undefined2 *)((long)puVar13 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      memset(puVar13 + 0x22,0,0x69061);
      pvVar10 = memcpy(puVar13,pvVar10,0x69560);
      uVar11 = FUN_0284073c(pvVar10,puVar13);
      plVar9 = (long *)PTR_DAT_04bb46a8;
      if ((uVar11 & 1) == 0) {
        iVar8 = 7;
      }
      else {
        if (DAT_04c47c68 == 999) {
          if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_0283a984;
        }
        else if (*(short *)((long)__s2 + 0xe) != 999) {
LAB_0283a984:
          iVar8 = 7;
          if ((((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) && (__s2[2] == 2)) &&
             ((short)__s2[3] == 2)) {
            uVar17 = FUN_026eb5c0(puVar13,__s2,0x69560,&local_88,&local_98);
            iVar8 = (int)uVar17;
            local_a8 = (undefined **)CONCAT44(local_a8._4_4_,iVar8);
            if (iVar8 == 1) {
              uVar11 = FUN_0284073c(uVar17,puVar13);
              iVar8 = (int)local_a8;
              if ((uVar11 & 1) == 0) {
                iVar8 = 7;
              }
            }
          }
          goto LAB_0283a940;
        }
        iVar8 = 7;
      }
LAB_0283a940:
      if (*(long *)puVar4 == 0) {
        free(puVar13);
      }
      else {
        plVar12 = (long *)FUN_038cb610(*(long *)puVar4,puVar13);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12,puVar13);
        }
      }
    }
LAB_0283a49c:
    if (iVar8 == 1) {
      lVar16 = *plVar9;
      local_a8 = &PTR_LAB_048f9770;
      pcStack_a0 = pcVar5;
      if (lVar16 != 0) {
        local_b8 = (undefined **)((ulong)local_b8._4_4_ << 0x20);
        local_74 = iVar8;
        local_6c[0] = FUN_026d0950(lVar16,&local_b8,&local_a8);
        if ((local_6c[0] == 1) &&
           (((int)local_b8 == 0x300 || (iVar8 = FUN_026d0728(lVar16,&local_a8,0x300), iVar8 == 1))))
        {
          lVar16 = *plVar9;
          local_b8 = &PTR_LAB_048f9770;
          pcStack_b0 = pcVar6;
          if (lVar16 != 0) {
            local_6c[0] = 0;
            local_70 = FUN_026d0950(lVar16,local_6c,&local_b8);
            if ((local_70 == 1) &&
               ((local_6c[0] == 0x69560 || (iVar8 = FUN_026d0728(lVar16,&local_b8), iVar8 == 1)))) {
              iVar8 = 1;
              goto LAB_0283a57c;
            }
          }
        }
      }
      iVar8 = 7;
    }
LAB_0283a57c:
    bVar7 = iVar8 == 1;
    if (bVar7) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar15 = 1;
      goto LAB_0283a5c0;
    }
    if (iVar8 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar15 = 4;
      goto LAB_0283a5c0;
    }
    if (iVar8 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar15 = 5;
      goto LAB_0283a5c0;
    }
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
  }
  uVar15 = 7;
LAB_0283a5c0:
  *param_2 = uVar15;
  return bVar7;
}

