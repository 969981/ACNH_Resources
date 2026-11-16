
bool FUN_02838e10(long *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  int *__s2;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *__s1;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
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
  puVar22 = PTR_DAT_04bb46b0;
  plVar16 = (long *)PTR_DAT_04bb46a8;
  lVar23 = *(long *)PTR_DAT_04bb46a8;
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (param_3 == 1) {
    if (lVar11 != 0) {
      if (param_4 < 8) {
        pvVar12 = (void *)FUN_026f35ec(lVar11,param_4);
        lVar11 = *(long *)puVar22;
        if (lVar11 == 0) goto LAB_02839120;
      }
      else {
        pvVar12 = (void *)0x0;
      }
      __s2 = (int *)FUN_026f3708(lVar11,param_4);
      if (lVar23 != 0) goto LAB_02839054;
    }
LAB_02839120:
    bVar9 = false;
  }
  else {
    if (lVar11 == 0) goto LAB_02839120;
    bVar9 = *(int *)(lVar11 + 0xd4) == 2;
    iVar10 = *(int *)(lVar11 + 0xf4);
    bVar5 = *(int *)(lVar11 + 0xdc) == 2;
    bVar6 = *(int *)(lVar11 + 0xe4) == 2;
    bVar7 = *(int *)(lVar11 + 0xec) == 2;
    bVar8 = *(int *)(lVar11 + 0xfc) == 2;
    if ((bVar8 || (iVar10 == 2 || (bVar7 || (bVar6 || (bVar9 || bVar5))))) ||
       (*(int *)(lVar11 + 0x104) == 2)) {
      uVar13 = 2;
      if (*(int *)(lVar11 + 0xe4) != 2) {
        uVar13 = 3;
      }
      uVar20 = (ulong)(*(int *)(lVar11 + 0xd4) != 2);
      if (!bVar9 && !bVar5) {
        uVar20 = uVar13;
      }
      uVar13 = 4;
      if (iVar10 != 2) {
        uVar13 = 5;
      }
      if (!bVar7 && (!bVar6 && (!bVar9 && !bVar5))) {
        uVar20 = uVar13;
      }
      if (!bVar8 && (iVar10 != 2 && (!bVar7 && (!bVar6 && (!bVar9 && !bVar5))))) {
        uVar20 = 6;
      }
      lVar21 = *(long *)(lVar11 + 0x10);
      if (lVar21 == 0) goto LAB_02838f88;
LAB_02838f5c:
      plVar14 = *(long **)(lVar21 + uVar20 * 8 + 0xa0);
      if (plVar14 == (long *)0x0) goto LAB_02838f88;
      pvVar12 = (void *)(**(code **)(*plVar14 + 0x28))(plVar14);
      lVar11 = *(long *)puVar22;
      if (lVar11 == 0) goto LAB_02839120;
    }
    else {
      if (*(int *)(lVar11 + 0x10c) == 2) {
        uVar20 = 7;
        lVar21 = *(long *)(lVar11 + 0x10);
        if (lVar21 != 0) goto LAB_02838f5c;
      }
LAB_02838f88:
      pvVar12 = (void *)0x0;
    }
    if (*(int *)(lVar11 + 0xd4) == 2) {
      uVar18 = 0;
    }
    else if (*(int *)(lVar11 + 0xdc) == 2) {
      uVar18 = 1;
    }
    else {
      uVar18 = *(uint *)(lVar11 + 0xe4);
      if (uVar18 != 2) {
        if (*(int *)(lVar11 + 0xec) == 2) {
          uVar18 = 3;
        }
        else if (*(int *)(lVar11 + 0xf4) == 2) {
          uVar18 = 4;
        }
        else if (*(int *)(lVar11 + 0xfc) == 2) {
          uVar18 = 5;
        }
        else if (*(int *)(lVar11 + 0x104) == 2) {
          uVar18 = 6;
        }
        else {
          if (*(int *)(lVar11 + 0x10c) != 2) goto LAB_02839120;
          uVar18 = 7;
        }
      }
    }
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (*(long *)(*(long *)(lVar11 + 0x10) + (ulong)uVar18 * 8 + 0xa0) == 0)) goto LAB_02839120;
    __s2 = (int *)(*(long *)(lVar11 + 0x70) + (ulong)uVar18 * 0x300);
    if (*(uint *)(lVar11 + 0x68) <= uVar18) {
      __s2 = (int *)0x0;
    }
    if (lVar23 == 0) goto LAB_02839120;
LAB_02839054:
    if ((pvVar12 == (void *)0x0) || (__s2 == (int *)0x0)) goto LAB_02839120;
    local_bd = 0;
    local_148 = local_13c;
    local_140 = 0x80;
    local_1d8 = 0x80;
    local_1e0 = local_1d4;
    local_13c[0] = '\0';
    local_1e8 = PTR_DAT_04bb2d88 + 0x10;
    local_155 = 0;
    local_1d4[0] = '\0';
    uVar17 = 1;
    if (param_3 != 1) {
      uVar17 = 2;
    }
    local_150 = local_1e8;
    uVar13 = FUN_02701810(&local_150,uVar17,param_4);
    if ((uVar13 & 1) != 0) {
      if (*local_148 != '\0') {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar11 = 0;
        do {
          if (local_148[lVar11] == '\0') goto LAB_0283915c;
          if (local_148[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0283915c;
          }
          if (local_148[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0283915c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0283915c:
        if ((int)lVar11 < local_140 + -1) {
          (local_148 + (int)lVar11)[0] = '/';
          (local_148 + (int)lVar11)[1] = '\0';
        }
      }
      FUN_02701270(&local_150,2);
    }
    uVar13 = FUN_02701810(&local_1e8,uVar17,param_4);
    if ((uVar13 & 1) != 0) {
      if (*local_1e0 != '\0') {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar11 = 0;
        do {
          if (local_1e0[lVar11] == '\0') goto LAB_028391fc;
          if (local_1e0[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_028391fc;
          }
          if (local_1e0[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_028391fc;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_028391fc:
        if ((int)lVar11 < local_1d8 + -1) {
          (local_1e0 + (int)lVar11)[0] = '/';
          (local_1e0 + (int)lVar11)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1e8,2);
    }
    pcVar4 = local_148;
    pcVar3 = local_1e0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    plVar14 = (long *)*param_1;
    pcStack_80 = local_148;
    pcStack_90 = local_1e0;
    local_88 = local_98;
    if (((plVar14 == (long *)0x0) || (*local_148 == '\0')) || (*local_1e0 == '\0')) {
      iVar10 = 7;
      puVar22 = PTR_DAT_04bb2020;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar15 = malloc(0x47430);
      }
      else {
        puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x47430,0x10);
      }
      *(undefined8 *)((long)puVar15 + 6) = 0;
      *puVar15 = 0;
      *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
      puVar15[8] = 0;
      *(undefined8 *)((long)puVar15 + 0x46) = 0;
      *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar15 + 0x20) = 0;
      memset(puVar15 + 0x22,0,0x46e60);
      lVar11 = 300;
      lVar23 = 0;
      do {
        *(undefined2 *)((long)puVar15 + lVar23 + 0x110) = 0;
        *(undefined1 *)((long)puVar15 + lVar23 + 0x16c) = 0;
        *(undefined1 *)((long)puVar15 + lVar23 + 0x1c8) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x1cc) = 0xfffe00000000;
        *(undefined4 *)((long)puVar15 + lVar23 + 0x1d4) = 0;
        FUN_0277d4ac((long)puVar15 + lVar23 + 0x1d0);
        *(undefined1 *)((long)puVar15 + lVar23 + 0x1d8) = 0;
        *(undefined1 *)((long)puVar15 + lVar23 + 0x1dc) = 0;
        memset((void *)((long)puVar15 + lVar23 + 0x1de),0,0x2a2);
        lVar11 = lVar11 + -1;
        *(undefined2 *)((long)puVar15 + lVar23 + 0x480) = 0xfffe;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x484) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x48c) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x494) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x49c) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x4a4) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x4ac) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x4b4) = 0;
        *(undefined8 *)((long)puVar15 + lVar23 + 0x4bc) = 0;
        lVar23 = lVar23 + 0x3c8;
      } while (lVar11 != 0);
      memset(puVar15 + 0x8dee,0,0x4b0);
      iVar10 = 0;
      uVar13 = 0;
      do {
        uVar20 = uVar13 << 2;
        uVar1 = uVar13 >> 0x1f;
        uVar18 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar18;
        *(int *)((long)(puVar15 + 0x8dee) + (-uVar1 & 0xfffffffc00000000 | uVar20)) = iVar10;
        iVar10 = iVar10 + 1;
      } while (uVar18 != 300);
      *(undefined4 *)(puVar15 + 0x8e84) = 0;
      puVar22 = PTR_DAT_04bb2698;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        __s1 = malloc(0x300);
      }
      else {
        plVar16 = (long *)*param_1;
        if (plVar16 == (long *)0x0) {
          lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar11 + 8);
          if (lVar23 != 0) {
            plVar16 = (long *)(lVar23 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
            __s1 = (undefined8 *)0x0;
            goto LAB_028393f8;
          }
        }
        __s1 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x300,4);
      }
LAB_028393f8:
      *(undefined8 *)((long)__s1 + 6) = 0;
      *__s1 = 0;
      *(undefined2 *)((long)__s1 + 0xe) = 0xffff;
      __s1[8] = 0;
      *(undefined8 *)((long)__s1 + 0x46) = 0;
      *(undefined2 *)((long)__s1 + 0x4e) = 0xffff;
      memset(__s1 + 0x20,0,0x200);
      uVar13 = 0;
      do {
        uVar20 = uVar13 << 2;
        uVar1 = uVar13 >> 0x1f;
        uVar18 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar18;
        *(undefined4 *)((long)(__s1 + 0x20) + (-uVar1 & 0xfffffffc00000000 | uVar20)) = 0;
      } while (uVar18 != 0x80);
      iVar10 = FUN_026eb860(puVar15,__s1,0x47430,&local_88,&local_98,0);
      if ((iVar10 == 1) && (iVar10 = memcmp(puVar15,pvVar12,0x47430), iVar10 == 0)) {
        iVar10 = memcmp(__s1,__s2,0x300);
        lVar11 = *(long *)puVar22;
        if (lVar11 == 0) {
          free(puVar15);
LAB_0283953c:
          lVar11 = *(long *)puVar22;
          if (lVar11 != 0) goto LAB_02839544;
          free(__s1);
        }
        else {
          if (puVar15 != (undefined8 *)0x0) {
            plVar16 = (long *)FUN_038cb610(lVar11,puVar15);
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16,puVar15);
            }
            goto LAB_0283953c;
          }
LAB_02839544:
          plVar16 = (long *)FUN_038cb610(lVar11,__s1);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16,__s1);
          }
        }
        if (iVar10 != 0) goto LAB_02839570;
        iVar10 = 1;
        puVar22 = PTR_DAT_04bb2020;
        plVar16 = (long *)PTR_DAT_04bb46a8;
      }
      else {
        lVar11 = *(long *)puVar22;
        if (lVar11 == 0) {
          free(puVar15);
LAB_028394b8:
          lVar11 = *(long *)puVar22;
          if (lVar11 == 0) {
            free(__s1);
            goto LAB_02839570;
          }
        }
        else if (puVar15 != (undefined8 *)0x0) {
          plVar16 = (long *)FUN_038cb610(lVar11,puVar15);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16,puVar15);
          }
          goto LAB_028394b8;
        }
        plVar16 = (long *)FUN_038cb610(lVar11,__s1);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x38))(plVar16,__s1);
        }
LAB_02839570:
        lVar11 = *(long *)puVar22;
        if (lVar11 == 0) {
          puVar15 = malloc(0x47430);
        }
        else {
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            param_1 = (long *)(lVar11 + 8);
            if (lVar23 != 0) {
              param_1 = (long *)(lVar23 + 0xa8);
            }
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              puVar15 = (undefined8 *)0x0;
              goto LAB_028395d8;
            }
          }
          puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x47430,0x10);
        }
LAB_028395d8:
        *(undefined8 *)((long)puVar15 + 6) = 0;
        *puVar15 = 0;
        *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
        puVar15[8] = 0;
        *(undefined8 *)((long)puVar15 + 0x46) = 0;
        *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
        *(undefined4 *)(puVar15 + 0x20) = 0;
        memset(puVar15 + 0x22,0,0x46e60);
        lVar11 = 300;
        lVar23 = 0;
        do {
          *(undefined2 *)((long)puVar15 + lVar23 + 0x110) = 0;
          *(undefined1 *)((long)puVar15 + lVar23 + 0x16c) = 0;
          *(undefined1 *)((long)puVar15 + lVar23 + 0x1c8) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x1cc) = 0xfffe00000000;
          *(undefined4 *)((long)puVar15 + lVar23 + 0x1d4) = 0;
          FUN_0277d4ac((long)puVar15 + lVar23 + 0x1d0);
          *(undefined1 *)((long)puVar15 + lVar23 + 0x1d8) = 0;
          *(undefined1 *)((long)puVar15 + lVar23 + 0x1dc) = 0;
          memset((void *)((long)puVar15 + lVar23 + 0x1de),0,0x2a2);
          lVar11 = lVar11 + -1;
          *(undefined2 *)((long)puVar15 + lVar23 + 0x480) = 0xfffe;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x484) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x48c) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x494) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x49c) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x4a4) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x4ac) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x4b4) = 0;
          *(undefined8 *)((long)puVar15 + lVar23 + 0x4bc) = 0;
          lVar23 = lVar23 + 0x3c8;
        } while (lVar11 != 0);
        memset(puVar15 + 0x8dee,0,0x4b0);
        iVar10 = 0;
        uVar13 = 0;
        do {
          uVar20 = uVar13 << 2;
          uVar1 = uVar13 >> 0x1f;
          uVar18 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar18;
          *(int *)((long)(puVar15 + 0x8dee) + (-uVar1 & 0xfffffffc00000000 | uVar20)) = iVar10;
          iVar10 = iVar10 + 1;
        } while (uVar18 != 300);
        *(undefined4 *)(puVar15 + 0x8e84) = 0;
        pvVar12 = memcpy(puVar15,pvVar12,0x47430);
        uVar13 = FUN_02840524(pvVar12,puVar15);
        plVar16 = (long *)PTR_DAT_04bb46a8;
        puVar2 = PTR_DAT_04bb2698;
        puVar22 = PTR_DAT_04bb2020;
        if ((uVar13 & 1) == 0) {
LAB_02839720:
          iVar10 = 7;
        }
        else {
          if (*(short *)PTR_DAT_04bb21a8 == 999) {
            if (*(short *)((long)__s2 + 0xe) != 999) goto LAB_02839720;
          }
          else if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_02839720;
          iVar10 = 7;
          if (((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) &&
             ((__s2[2] == 2 && ((short)__s2[3] == 2)))) {
            uVar17 = FUN_026eb5c0(puVar15,__s2,0x47430,&local_88,&local_98);
            iVar10 = (int)uVar17;
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar10);
            if (iVar10 == 1) {
              uVar13 = FUN_02840524(uVar17,puVar15);
              iVar10 = (int)local_a8;
              if ((uVar13 & 1) == 0) {
                iVar10 = 7;
              }
            }
          }
        }
        if (*(long *)puVar2 == 0) {
          free(puVar15);
        }
        else {
          plVar14 = (long *)FUN_038cb610(*(long *)puVar2,puVar15);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14,puVar15);
          }
        }
      }
    }
    if (iVar10 == 1) {
      lVar11 = *plVar16;
      local_a8 = puVar22 + 0x10;
      if (lVar11 != 0) {
        local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
        pcStack_a0 = pcVar3;
        local_74 = iVar10;
        local_6c[0] = FUN_026d0950(lVar11,&local_b8,&local_a8);
        if ((local_6c[0] == 1) &&
           (((int)local_b8 == 0x300 || (iVar10 = FUN_026d0728(lVar11,&local_a8,0x300), iVar10 == 1))
           )) {
          lVar11 = *plVar16;
          local_b8 = puVar22 + 0x10;
          if (lVar11 != 0) {
            local_6c[0] = 0;
            pcStack_b0 = pcVar4;
            local_70 = FUN_026d0950(lVar11,local_6c,&local_b8);
            if ((local_70 == 1) &&
               ((local_6c[0] == 0x47430 || (iVar10 = FUN_026d0728(lVar11,&local_b8), iVar10 == 1))))
            {
              iVar10 = 1;
              goto LAB_02839838;
            }
          }
        }
      }
      iVar10 = 7;
    }
LAB_02839838:
    bVar9 = iVar10 == 1;
    if (bVar9) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar19 = 1;
      goto LAB_0283912c;
    }
    if (iVar10 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar19 = 4;
      goto LAB_0283912c;
    }
    if (iVar10 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar19 = 5;
      goto LAB_0283912c;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return bVar9;
  }
  uVar19 = 7;
LAB_0283912c:
  *param_2 = uVar19;
  return bVar9;
}

