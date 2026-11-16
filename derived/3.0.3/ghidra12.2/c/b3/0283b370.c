
/* WARNING: Type propagation algorithm not settling */

bool FUN_0283b370(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *__s1;
  undefined8 uVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  int *__s2;
  undefined *local_210;
  char *local_208;
  int local_200;
  char local_1fc [127];
  undefined1 local_17d;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [127];
  undefined1 local_e5;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined *local_d0;
  char *pcStack_c8;
  undefined *local_c0;
  char *pcStack_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  char *local_98;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(long *)PTR_DAT_04bb46a8 == 0) {
      return false;
    }
LAB_0283b3c4:
    puVar18 = PTR_DAT_04bb46b0;
    lVar16 = *(long *)PTR_DAT_04bb46b0;
    if (((((lVar16 == 0) || (*(long *)(lVar16 + 0x4c0) == 0)) ||
         (plVar10 = *(long **)(*(long *)(lVar16 + 0x10) + 0x180), plVar10 == (long *)0x0)) ||
        ((pvVar11 = (void *)(**(code **)(*plVar10 + 0x20))(), pvVar11 == (void *)0x0 ||
         (*(long *)puVar18 == 0)))) ||
       (__s2 = *(int **)(*(long *)puVar18 + 0x4c0), __s2 == (int *)0x0)) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      goto LAB_0283b4d4;
    }
    local_168 = 0x80;
    local_200 = 0x80;
    local_170 = local_164;
    local_208 = local_1fc;
    local_e5 = 0;
    local_17d = 0;
    local_210 = PTR_DAT_04bb2d88 + 0x10;
    local_1fc[0] = '\0';
    local_164[0] = '\0';
    local_178 = local_210;
    FUN_006d8678(&local_a0,"Moved");
    pcVar6 = local_170;
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar7 = local_98;
    if (pcVar6 != local_98) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar16 = 0;
      do {
        if (local_98[lVar16] == '\0') goto LAB_0283b514;
        if (local_98[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_0283b514;
        }
        if (local_98[lVar16 + 2] == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_0283b514;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_0283b514:
      iVar9 = (int)lVar16;
      if (local_168 <= (int)lVar16) {
        iVar9 = local_168 + -1;
      }
      memcpy(pcVar6,pcVar7,(long)iVar9);
      pcVar6[iVar9] = '\0';
    }
    if (*local_170 != '\0') {
      (**(code **)(local_178 + 0x18))(&local_178);
      lVar16 = 0;
      do {
        if (local_170[lVar16] == '\0') goto LAB_0283b59c;
        if (local_170[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_0283b59c;
        }
        if (local_170[lVar16 + 2] == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_0283b59c;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_0283b59c:
      if ((int)lVar16 < local_168 + -1) {
        (local_170 + (int)lVar16)[0] = '/';
        (local_170 + (int)lVar16)[1] = '\0';
      }
    }
    FUN_02701270(&local_178,5);
    *local_208 = '\0';
    FUN_006d8678(&local_a0,"Moved");
    pcVar6 = local_208;
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar7 = local_98;
    if (pcVar6 != local_98) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar16 = 0;
      do {
        if (local_98[lVar16] == '\0') goto LAB_0283b64c;
        if (local_98[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_0283b64c;
        }
        if (local_98[lVar16 + 2] == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_0283b64c;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_0283b64c:
      iVar9 = (int)lVar16;
      if (local_200 <= (int)lVar16) {
        iVar9 = local_200 + -1;
      }
      memcpy(pcVar6,pcVar7,(long)iVar9);
      pcVar6[iVar9] = '\0';
    }
    if (*local_208 != '\0') {
      (**(code **)(local_210 + 0x18))(&local_210);
      lVar16 = 0;
      do {
        if (local_208[lVar16] == '\0') goto LAB_0283b6d4;
        if (local_208[lVar16 + 1] == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_0283b6d4;
        }
        if (local_208[lVar16 + 2] == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_0283b6d4;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_0283b6d4:
      if ((int)lVar16 < local_200 + -1) {
        (local_208 + (int)lVar16)[0] = '/';
        (local_208 + (int)lVar16)[1] = '\0';
      }
    }
    FUN_027014c0(&local_210,5);
    pcVar7 = local_170;
    pcVar6 = local_208;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    plVar10 = (long *)*param_1;
    local_98 = local_170;
    pcStack_b8 = local_208;
    local_a0 = local_c0;
    if (((plVar10 == (long *)0x0) || (*local_170 == '\0')) || (*local_208 == '\0')) {
      iVar9 = 7;
      puVar18 = PTR_DAT_04bb2020;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar12 = malloc(0x74080);
      }
      else {
        puVar12 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x74080,0x10);
      }
      *(undefined8 *)((long)puVar12 + 6) = 0;
      *puVar12 = 0;
      *(undefined2 *)((long)puVar12 + 0xe) = 0xffff;
      puVar12[8] = 0;
      *(undefined8 *)((long)puVar12 + 0x46) = 0;
      *(undefined2 *)((long)puVar12 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar12 + 0x20) = 0;
      FUN_027f3760(puVar12 + 0x22);
      FUN_02785660(puVar12 + 0x5167);
      puVar2 = puVar12 + 0xe7dc;
      puVar12[0xe7f3] = 0xffffffffffffffff;
      puVar12[0xe7f4] = 0xffffffffffffffff;
      puVar12[0xe7f1] = 0xffffffffffffffff;
      puVar12[0xe7f2] = 0xffffffffffffffff;
      *puVar2 = 0xffffffffffffffff;
      puVar12[0xe7ef] = 0xffffffffffffffff;
      puVar12[0xe7f0] = 0xffffffffffffffff;
      puVar12[0xe7ed] = 0xffffffffffffffff;
      puVar12[0xe7ee] = 0xffffffffffffffff;
      puVar12[0xe7eb] = 0xffffffffffffffff;
      puVar12[0xe7ec] = 0xffffffffffffffff;
      puVar12[0xe7e9] = 0xffffffffffffffff;
      puVar12[0xe7ea] = 0xffffffffffffffff;
      puVar12[0xe7e7] = 0xffffffffffffffff;
      puVar12[0xe7e8] = 0xffffffffffffffff;
      puVar12[0xe7e5] = 0xffffffffffffffff;
      puVar12[0xe7e6] = 0xffffffffffffffff;
      puVar12[0xe7e3] = 0xffffffffffffffff;
      puVar12[0xe7e4] = 0xffffffffffffffff;
      puVar12[0xe7e1] = 0xffffffffffffffff;
      puVar12[0xe7e2] = 0xffffffffffffffff;
      puVar12[0xe7df] = 0xffffffffffffffff;
      puVar12[0xe7e0] = 0xffffffffffffffff;
      puVar12[0xe7dd] = 0xffffffffffffffff;
      puVar12[0xe7de] = 0xffffffffffffffff;
      FUN_027c1184(puVar12 + 0xe7f5);
      *(undefined4 *)((long)puVar12 + 0x74072) = 0;
      *(undefined4 *)(puVar12 + 0xe80f) = 0;
      *(undefined1 *)(puVar12 + 0xe80e) = 0xff;
      lVar16 = *(long *)PTR_DAT_04bb2698;
      if (lVar16 == 0) {
        __s1 = malloc(0x300);
      }
      else {
        plVar10 = (long *)*param_1;
        if (plVar10 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar10 = (long *)(lVar16 + 8);
          if (lVar13 != 0) {
            plVar10 = (long *)(lVar13 + 0xa8);
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            __s1 = (undefined8 *)0x0;
            goto LAB_0283b87c;
          }
        }
        __s1 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x300,4);
      }
LAB_0283b87c:
      *(undefined8 *)((long)__s1 + 6) = 0;
      *__s1 = 0;
      *(undefined2 *)((long)__s1 + 0xe) = 0xffff;
      __s1[8] = 0;
      *(undefined8 *)((long)__s1 + 0x46) = 0;
      *(undefined2 *)((long)__s1 + 0x4e) = 0xffff;
      memset(__s1 + 0x20,0,0x200);
      uVar17 = 0;
      do {
        uVar3 = uVar17 << 2;
        uVar4 = uVar17 >> 0x1f;
        uVar1 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar1;
        *(undefined4 *)((long)(__s1 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar1 != 0x80);
      iVar9 = FUN_026eb860(puVar12,__s1,0x74080,&local_a0,&local_c0,0);
      if ((iVar9 == 1) && (iVar9 = memcmp(puVar12,pvVar11,0x74080), iVar9 == 0)) {
        iVar9 = memcmp(__s1,__s2,0x300);
        FUN_027c10a4((long)puVar12 + 0x73f44);
        FUN_027c10a4(puVar2);
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          free(puVar12);
LAB_0283ba0c:
          lVar16 = *(long *)PTR_DAT_04bb2698;
          if (lVar16 != 0) goto LAB_0283ba1c;
          free(__s1);
        }
        else {
          if (puVar12 != (undefined8 *)0x0) {
            plVar10 = (long *)FUN_038cb610(lVar16,puVar12);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10,puVar12);
            }
            goto LAB_0283ba0c;
          }
LAB_0283ba1c:
          plVar10 = (long *)FUN_038cb610(lVar16,__s1);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,__s1);
          }
        }
        if (iVar9 != 0) goto LAB_0283ba48;
        iVar9 = 1;
        puVar18 = PTR_DAT_04bb2020;
      }
      else {
        FUN_027c10a4((long)puVar12 + 0x73f44);
        FUN_027c10a4(puVar2);
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          free(puVar12);
LAB_0283b95c:
          lVar16 = *(long *)PTR_DAT_04bb2698;
          if (lVar16 == 0) {
            free(__s1);
            goto LAB_0283ba48;
          }
        }
        else if (puVar12 != (undefined8 *)0x0) {
          plVar10 = (long *)FUN_038cb610(lVar16,puVar12);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,puVar12);
          }
          goto LAB_0283b95c;
        }
        plVar10 = (long *)FUN_038cb610(lVar16,__s1);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,__s1);
        }
LAB_0283ba48:
        lVar16 = *(long *)PTR_DAT_04bb2698;
        if (lVar16 == 0) {
          puVar12 = malloc(0x74080);
        }
        else {
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            param_1 = (long *)(lVar16 + 8);
            if (lVar13 != 0) {
              param_1 = (long *)(lVar13 + 0xa8);
            }
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              puVar12 = (undefined8 *)0x0;
              goto LAB_0283bac0;
            }
          }
          puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x74080,0x10);
        }
LAB_0283bac0:
        *(undefined8 *)((long)puVar12 + 6) = 0;
        *puVar12 = 0;
        *(undefined2 *)((long)puVar12 + 0xe) = 0xffff;
        puVar12[8] = 0;
        *(undefined8 *)((long)puVar12 + 0x46) = 0;
        *(undefined2 *)((long)puVar12 + 0x4e) = 0xffff;
        *(undefined4 *)(puVar12 + 0x20) = 0;
        FUN_027f3760(puVar12 + 0x22);
        FUN_02785660(puVar12 + 0x5167);
        puVar12[0xe7f3] = 0xffffffffffffffff;
        puVar12[0xe7f4] = 0xffffffffffffffff;
        puVar12[0xe7f1] = 0xffffffffffffffff;
        puVar12[0xe7f2] = 0xffffffffffffffff;
        puVar12[0xe7dc] = 0xffffffffffffffff;
        puVar12[0xe7ef] = 0xffffffffffffffff;
        puVar12[0xe7f0] = 0xffffffffffffffff;
        puVar12[0xe7ed] = 0xffffffffffffffff;
        puVar12[0xe7ee] = 0xffffffffffffffff;
        puVar12[0xe7eb] = 0xffffffffffffffff;
        puVar12[0xe7ec] = 0xffffffffffffffff;
        puVar12[0xe7e9] = 0xffffffffffffffff;
        puVar12[0xe7ea] = 0xffffffffffffffff;
        puVar12[0xe7e7] = 0xffffffffffffffff;
        puVar12[0xe7e8] = 0xffffffffffffffff;
        puVar12[0xe7e5] = 0xffffffffffffffff;
        puVar12[0xe7e6] = 0xffffffffffffffff;
        puVar12[0xe7e3] = 0xffffffffffffffff;
        puVar12[0xe7e4] = 0xffffffffffffffff;
        puVar12[0xe7e1] = 0xffffffffffffffff;
        puVar12[0xe7e2] = 0xffffffffffffffff;
        puVar12[0xe7df] = 0xffffffffffffffff;
        puVar12[0xe7e0] = 0xffffffffffffffff;
        puVar12[0xe7dd] = 0xffffffffffffffff;
        puVar12[0xe7de] = 0xffffffffffffffff;
        FUN_027c1184(puVar12 + 0xe7f5);
        *(undefined1 *)(puVar12 + 0xe80e) = 0xff;
        *(undefined4 *)((long)puVar12 + 0x74072) = 0;
        *(undefined4 *)(puVar12 + 0xe80f) = 0;
        pvVar11 = memcpy(puVar12,pvVar11,0x74080);
        uVar17 = FUN_02840848(pvVar11,puVar12);
        puVar18 = PTR_DAT_04bb2020;
        if ((uVar17 & 1) == 0) {
          iVar9 = 7;
        }
        else {
          if (*(short *)PTR_DAT_04bb21a8 == 999) {
            if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_0283bd40;
          }
          else if (*(short *)((long)__s2 + 0xe) != 999) {
LAB_0283bd40:
            iVar9 = 7;
            if ((((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) && (__s2[2] == 2)) &&
               ((short)__s2[3] == 2)) {
              uVar14 = FUN_026eb5c0(puVar12,__s2,0x74080,&local_a0,&local_c0);
              iVar9 = (int)uVar14;
              local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar9);
              if (iVar9 == 1) {
                uVar17 = FUN_02840848(uVar14,puVar12);
                iVar9 = (int)local_d0;
                if ((uVar17 & 1) == 0) {
                  iVar9 = 7;
                }
              }
            }
            goto LAB_0283bbb0;
          }
          iVar9 = 7;
        }
LAB_0283bbb0:
        FUN_027c10a4((long)puVar12 + 0x73f44);
        FUN_027c10a4(puVar12 + 0xe7dc);
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(puVar12);
        }
        else {
          plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar12);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,puVar12);
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb46a8;
    if (iVar9 == 1) {
      local_d0 = puVar18 + 0x10;
      lVar16 = *(long *)PTR_DAT_04bb46a8;
      if (lVar16 != 0) {
        local_e0 = (undefined *)((ulong)local_e0._4_4_ << 0x20);
        pcStack_c8 = pcVar6;
        local_ac = iVar9;
        local_a4 = FUN_026d0950(lVar16,&local_e0,&local_d0);
        if ((local_a4 == 1) &&
           (((int)local_e0 == 0x300 || (iVar9 = FUN_026d0728(lVar16,&local_d0,0x300), iVar9 == 1))))
        {
          lVar16 = *(long *)puVar5;
          local_e0 = puVar18 + 0x10;
          pcStack_d8 = pcVar7;
          if (lVar16 != 0) {
            local_a4 = 0;
            local_a8 = FUN_026d0950(lVar16,&local_a4,&local_e0);
            if ((local_a8 == 1) &&
               ((local_a4 == 0x74080 || (iVar9 = FUN_026d0728(lVar16,&local_e0), iVar9 == 1)))) {
              iVar9 = 1;
              goto LAB_0283bce8;
            }
          }
        }
      }
      iVar9 = 7;
    }
LAB_0283bce8:
    bVar8 = iVar9 == 1;
    if (bVar8) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar15 = 1;
      goto LAB_0283b4dc;
    }
    if (iVar9 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar15 = 4;
      goto LAB_0283b4dc;
    }
    if (iVar9 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar15 = 5;
      goto LAB_0283b4dc;
    }
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
  }
  else {
    *param_2 = 0;
    if (*(long *)PTR_DAT_04bb46a8 != 0) goto LAB_0283b3c4;
LAB_0283b4d4:
    bVar8 = false;
  }
  uVar15 = 7;
LAB_0283b4dc:
  *param_2 = uVar15;
  return bVar8;
}

