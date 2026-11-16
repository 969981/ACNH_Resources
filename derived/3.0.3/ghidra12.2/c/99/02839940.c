
/* WARNING: Removing unreachable block (ram,0x028399bc) */

bool FUN_02839940(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *__s1;
  undefined4 uVar14;
  long lVar15;
  int *__s2;
  undefined8 uVar16;
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
LAB_02839ad0:
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
    bVar6 = false;
  }
  else {
    if ((*(long *)(DAT_05574040 + 0x10) == 0) ||
       (plVar8 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0xe0), plVar8 == (long *)0x0)) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x20))();
      if (DAT_05574040 == 0) goto LAB_02839ad0;
    }
    __s2 = *(int **)(DAT_05574040 + 0x78);
    if (((pvVar9 == (void *)0x0) || (__s2 == (int *)0x0)) ||
       (plVar8 = &DAT_0556ca20, DAT_0556ca20 == 0)) goto LAB_02839ad0;
    uVar1 = *(uint *)(DAT_05574040 + 0x110);
    if (*(int *)(DAT_05574040 + 0x114) != 1) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 < 8) {
      uVar16 = 1;
    }
    else {
      if (*(int *)(DAT_05574040 + 0x114) != 2) goto LAB_02839ad0;
      uVar16 = 2;
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
    uVar10 = FUN_02701810(&local_150,uVar16,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*local_148 != '\0') {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar15 = 0;
        do {
          if (local_148[lVar15] == '\0') goto LAB_02839af4;
          if (local_148[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_02839af4;
          }
          if (local_148[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_02839af4;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_02839af4:
        if ((int)lVar15 < local_140 + -1) {
          (local_148 + (int)lVar15)[0] = '/';
          (local_148 + (int)lVar15)[1] = '\0';
        }
      }
      FUN_02701270(&local_150,3);
    }
    uVar10 = FUN_02701810(&local_1e8,uVar16,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*local_1e0 != '\0') {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar15 = 0;
        do {
          if (local_1e0[lVar15] == '\0') goto LAB_02839b9c;
          if (local_1e0[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_02839b9c;
          }
          if (local_1e0[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_02839b9c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_02839b9c:
        if ((int)lVar15 < local_1d8 + -1) {
          (local_1e0 + (int)lVar15)[0] = '/';
          (local_1e0 + (int)lVar15)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1e8,3);
    }
    pcVar5 = local_148;
    pcVar4 = local_1e0;
    plVar11 = (long *)*param_1;
    local_88 = &PTR_LAB_048f9770;
    pcStack_80 = local_148;
    local_98 = &PTR_LAB_048f9770;
    pcStack_90 = local_1e0;
    if (((plVar11 == (long *)0x0) || (*local_148 == '\0')) || (*local_1e0 == '\0')) {
      iVar7 = 7;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar12 = malloc(0x2f650);
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2f650,0x10);
      }
      *(undefined8 *)((long)puVar12 + 6) = 0;
      *puVar12 = 0;
      *(undefined2 *)((long)puVar12 + 0xe) = 0xffff;
      puVar12[8] = 0;
      *(undefined8 *)((long)puVar12 + 0x46) = 0;
      *(undefined2 *)((long)puVar12 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar12 + 0x20) = 0;
      FUN_027ecb34(puVar12 + 0x22);
      lVar15 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        __s1 = malloc(0x300);
      }
      else {
        plVar8 = (long *)*param_1;
        if (plVar8 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar15 + 8);
          if (lVar13 != 0) {
            plVar8 = (long *)(lVar13 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            __s1 = (undefined8 *)0x0;
            goto LAB_02839e10;
          }
        }
        __s1 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x300,4);
      }
LAB_02839e10:
      *(undefined8 *)((long)__s1 + 6) = 0;
      *__s1 = 0;
      *(undefined2 *)((long)__s1 + 0xe) = 0xffff;
      __s1[8] = 0;
      *(undefined8 *)((long)__s1 + 0x46) = 0;
      *(undefined2 *)((long)__s1 + 0x4e) = 0xffff;
      memset(__s1 + 0x20,0,0x200);
      uVar10 = 0;
      do {
        uVar2 = uVar10 << 2;
        uVar3 = uVar10 >> 0x1f;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
        *(undefined4 *)((long)(__s1 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
      } while (uVar1 != 0x80);
      iVar7 = FUN_026eb860(puVar12,__s1,0x2f650,&local_88,&local_98,0);
      if ((iVar7 == 1) && (iVar7 = memcmp(puVar12,pvVar9,0x2f650), iVar7 == 0)) {
        iVar7 = memcmp(__s1,__s2,0x300);
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          free(puVar12);
LAB_02839f78:
          lVar15 = DAT_05ae7600;
          if (DAT_05ae7600 != 0) goto LAB_02839f88;
          free(__s1);
        }
        else {
          if (puVar12 != (undefined8 *)0x0) {
            plVar8 = (long *)FUN_038cb610(lVar15,puVar12);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x38))(plVar8,puVar12);
            }
            goto LAB_02839f78;
          }
LAB_02839f88:
          plVar8 = (long *)FUN_038cb610(lVar15,__s1);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,__s1);
          }
        }
        if (iVar7 == 0) {
          iVar7 = 1;
          plVar8 = (long *)PTR_DAT_04bb46a8;
          goto LAB_02839c24;
        }
      }
      else {
        if (DAT_05ae7600 == 0) {
          free(puVar12);
LAB_02839ed4:
          if (DAT_05ae7600 == 0) {
            free(__s1);
            goto LAB_02839fc4;
          }
        }
        else if (puVar12 != (undefined8 *)0x0) {
          plVar8 = (long *)FUN_038cb610(DAT_05ae7600,puVar12);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,puVar12);
          }
          goto LAB_02839ed4;
        }
        plVar8 = (long *)FUN_038cb610(DAT_05ae7600,__s1);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,__s1);
        }
      }
LAB_02839fc4:
      lVar15 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar12 = malloc(0x2f650);
      }
      else {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_1 = (long *)(lVar15 + 8);
          if (lVar13 != 0) {
            param_1 = (long *)(lVar13 + 0xa8);
          }
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            puVar12 = (undefined8 *)0x0;
            goto LAB_0283a034;
          }
        }
        puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x2f650,0x10);
      }
LAB_0283a034:
      *(undefined8 *)((long)puVar12 + 6) = 0;
      *puVar12 = 0;
      *(undefined2 *)((long)puVar12 + 0xe) = 0xffff;
      puVar12[8] = 0;
      *(undefined8 *)((long)puVar12 + 0x46) = 0;
      *(undefined2 *)((long)puVar12 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar12 + 0x20) = 0;
      FUN_027ecb34(puVar12 + 0x22);
      pvVar9 = memcpy(puVar12,pvVar9,0x2f650);
      uVar10 = FUN_02840630(pvVar9,puVar12);
      plVar8 = (long *)PTR_DAT_04bb46a8;
      if ((uVar10 & 1) == 0) {
        iVar7 = 7;
      }
      else {
        if (DAT_04c47c68 == 999) {
          if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_0283a104;
        }
        else if (*(short *)((long)__s2 + 0xe) != 999) {
LAB_0283a104:
          iVar7 = 7;
          if ((((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) && (__s2[2] == 2)) &&
             ((short)__s2[3] == 2)) {
            uVar16 = FUN_026eb5c0(puVar12,__s2,0x2f650,&local_88,&local_98);
            iVar7 = (int)uVar16;
            local_a8 = (undefined **)CONCAT44(local_a8._4_4_,iVar7);
            if (iVar7 == 1) {
              uVar10 = FUN_02840630(uVar16,puVar12);
              iVar7 = (int)local_a8;
              if ((uVar10 & 1) == 0) {
                iVar7 = 7;
              }
            }
          }
          goto LAB_0283a0b8;
        }
        iVar7 = 7;
      }
LAB_0283a0b8:
      if (DAT_05ae7600 == 0) {
        free(puVar12);
      }
      else {
        plVar11 = (long *)FUN_038cb610(DAT_05ae7600,puVar12);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,puVar12);
        }
      }
    }
LAB_02839c24:
    if (iVar7 == 1) {
      lVar15 = *plVar8;
      local_a8 = &PTR_LAB_048f9770;
      pcStack_a0 = pcVar4;
      if (lVar15 != 0) {
        local_b8 = (undefined **)((ulong)local_b8._4_4_ << 0x20);
        local_74 = iVar7;
        local_6c[0] = FUN_026d0950(lVar15,&local_b8,&local_a8);
        if ((local_6c[0] == 1) &&
           (((int)local_b8 == 0x300 || (iVar7 = FUN_026d0728(lVar15,&local_a8,0x300), iVar7 == 1))))
        {
          lVar15 = *plVar8;
          local_b8 = &PTR_LAB_048f9770;
          pcStack_b0 = pcVar5;
          if (lVar15 != 0) {
            local_6c[0] = 0;
            local_70 = FUN_026d0950(lVar15,local_6c,&local_b8);
            if ((local_70 == 1) &&
               ((local_6c[0] == 0x2f650 || (iVar7 = FUN_026d0728(lVar15,&local_b8), iVar7 == 1)))) {
              iVar7 = 1;
              goto LAB_02839d04;
            }
          }
        }
      }
      iVar7 = 7;
    }
LAB_02839d04:
    bVar6 = iVar7 == 1;
    if (bVar6) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar14 = 1;
      goto LAB_02839d48;
    }
    if (iVar7 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar14 = 4;
      goto LAB_02839d48;
    }
    if (iVar7 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar14 = 5;
      goto LAB_02839d48;
    }
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
  }
  uVar14 = 7;
LAB_02839d48:
  *param_2 = uVar14;
  return bVar6;
}

