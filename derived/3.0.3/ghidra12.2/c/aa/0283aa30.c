
/* WARNING: Removing unreachable block (ram,0x0283aaac) */
/* WARNING: Removing unreachable block (ram,0x0283aaf0) */
/* WARNING: Removing unreachable block (ram,0x0283ab28) */

bool FUN_0283aa30(long *param_1,undefined4 *param_2)

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
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  int *__s2;
  undefined8 uVar18;
  undefined *puVar19;
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
  puVar19 = PTR_DAT_04bb46b0;
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 == 0) {
LAB_0283ac00:
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
    bVar7 = false;
  }
  else {
    if ((*(long *)(lVar17 + 0x10) == 0) ||
       (plVar9 = *(long **)(*(long *)(lVar17 + 0x10) + 0x188), plVar9 == (long *)0x0)) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x20))();
      lVar17 = *(long *)puVar19;
      if (lVar17 == 0) goto LAB_0283ac00;
    }
    plVar9 = (long *)PTR_DAT_04bb46a8;
    __s2 = *(int **)(lVar17 + 0x88);
    if (((pvVar10 == (void *)0x0) || (__s2 == (int *)0x0)) || (*(long *)PTR_DAT_04bb46a8 == 0))
    goto LAB_0283ac00;
    uVar18 = 1;
    uVar1 = *(uint *)(lVar17 + 0x120);
    if (*(int *)(lVar17 + 0x124) != 1 || ((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) != 0) {
      uVar1 = 0xffffffff;
    }
    if (7 < uVar1) {
      if ((((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) != 0) || (*(int *)(lVar17 + 0x124) != 2))
      goto LAB_0283ac00;
      uVar18 = 2;
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
    uVar11 = FUN_02701810(&local_150,uVar18,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*local_148 != '\0') {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar17 = 0;
        do {
          if (local_148[lVar17] == '\0') goto LAB_0283ac24;
          if (local_148[lVar17 + 1] == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_0283ac24;
          }
          if (local_148[lVar17 + 2] == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_0283ac24;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_0283ac24:
        if ((int)lVar17 < local_140 + -1) {
          (local_148 + (int)lVar17)[0] = '/';
          (local_148 + (int)lVar17)[1] = '\0';
        }
      }
      FUN_02701270(&local_150,6);
    }
    uVar11 = FUN_02701810(&local_1e8,uVar18,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*local_1e0 != '\0') {
        (**(code **)(local_1e8 + 0x18))(&local_1e8);
        lVar17 = 0;
        do {
          if (local_1e0[lVar17] == '\0') goto LAB_0283accc;
          if (local_1e0[lVar17 + 1] == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_0283accc;
          }
          if (local_1e0[lVar17 + 2] == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_0283accc;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_0283accc:
        if ((int)lVar17 < local_1d8 + -1) {
          (local_1e0 + (int)lVar17)[0] = '/';
          (local_1e0 + (int)lVar17)[1] = '\0';
        }
      }
      FUN_027014c0(&local_1e8,6);
    }
    pcVar6 = local_148;
    pcVar5 = local_1e0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    plVar12 = (long *)*param_1;
    pcStack_80 = local_148;
    pcStack_90 = local_1e0;
    local_88 = local_98;
    if (((plVar12 == (long *)0x0) || (*local_148 == '\0')) || (*local_1e0 == '\0')) {
      iVar8 = 7;
      puVar19 = PTR_DAT_04bb2020;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar13 = malloc(0xb8a4e0);
      }
      else {
        puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0xb8a4e0,0x10);
      }
      *(undefined8 *)((long)puVar13 + 6) = 0;
      *puVar13 = 0;
      *(undefined2 *)((long)puVar13 + 0xe) = 0xffff;
      puVar13[8] = 0;
      *(undefined8 *)((long)puVar13 + 0x46) = 0;
      *(undefined2 *)((long)puVar13 + 0x4e) = 0xffff;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      FUN_028f2ec0(puVar13 + 0x22);
      puVar15 = puVar13 + 0xf005;
      memset(puVar15,0,0xb0c200);
      lVar17 = 500;
      do {
        FUN_028f4074(puVar15);
        lVar17 = lVar17 + -1;
        puVar15 = puVar15 + 0xb50;
      } while (lVar17 != 0);
      FUN_028f7b30(puVar13 + 0x170845);
      *(undefined2 *)(puVar13 + 0x17149a) = 0;
      *(undefined4 *)((long)puVar13 + 0xb8a4d2) = 0x101;
      *(undefined1 *)((long)puVar13 + 0xb8a4d6) = 0;
      *(undefined4 *)(puVar13 + 0x17149b) = 0;
      puVar4 = PTR_DAT_04bb2698;
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        puVar15 = malloc(0x300);
      }
      else {
        plVar9 = (long *)*param_1;
        if (plVar9 == (long *)0x0) {
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar17 + 8);
          if (lVar14 != 0) {
            plVar9 = (long *)(lVar14 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            puVar15 = (undefined8 *)0x0;
            goto LAB_0283ae5c;
          }
        }
        puVar15 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x300,4);
      }
LAB_0283ae5c:
      *(undefined8 *)((long)puVar15 + 6) = 0;
      *puVar15 = 0;
      *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
      puVar15[8] = 0;
      *(undefined8 *)((long)puVar15 + 0x46) = 0;
      *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
      memset(puVar15 + 0x20,0,0x200);
      uVar11 = 0;
      do {
        uVar2 = uVar11 << 2;
        uVar3 = uVar11 >> 0x1f;
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar1;
        *(undefined4 *)((long)(puVar15 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
      } while (uVar1 != 0x80);
      iVar8 = FUN_026eb860(puVar13,puVar15,0xb8a4e0,&local_88,&local_98,0);
      if ((iVar8 == 1) && (iVar8 = memcmp(puVar13,pvVar10,0xb8a4e0), iVar8 == 0)) {
        iVar8 = memcmp(puVar15,__s2,0x300);
        if (puVar13 != (undefined8 *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(puVar13);
          }
          else {
            plVar9 = (long *)FUN_038cb610(*(long *)puVar4,puVar13);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar13);
            }
          }
        }
        if (*(long *)puVar4 == 0) {
          free(puVar15);
        }
        else {
          plVar9 = (long *)FUN_038cb610(*(long *)puVar4,puVar15);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,puVar15);
          }
        }
        if (iVar8 != 0) goto LAB_0283afd0;
        iVar8 = 1;
        puVar19 = PTR_DAT_04bb2020;
        plVar9 = (long *)PTR_DAT_04bb46a8;
      }
      else {
        if (puVar13 != (undefined8 *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(puVar13);
          }
          else {
            plVar9 = (long *)FUN_038cb610(*(long *)puVar4,puVar13);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x38))(plVar9,puVar13);
            }
          }
        }
        if (*(long *)puVar4 == 0) {
          free(puVar15);
        }
        else {
          plVar9 = (long *)FUN_038cb610(*(long *)puVar4,puVar15);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x38))(plVar9,puVar15);
          }
        }
LAB_0283afd0:
        lVar17 = *(long *)puVar4;
        if (lVar17 == 0) {
          puVar13 = malloc(0xb8a4e0);
        }
        else {
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            param_1 = (long *)(lVar17 + 8);
            if (lVar14 != 0) {
              param_1 = (long *)(lVar14 + 0xa8);
            }
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              puVar13 = (undefined8 *)0x0;
              goto LAB_0283b038;
            }
          }
          puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0xb8a4e0,0x10);
        }
LAB_0283b038:
        *(undefined8 *)((long)puVar13 + 6) = 0;
        *puVar13 = 0;
        *(undefined2 *)((long)puVar13 + 0xe) = 0xffff;
        puVar13[8] = 0;
        *(undefined8 *)((long)puVar13 + 0x46) = 0;
        *(undefined2 *)((long)puVar13 + 0x4e) = 0xffff;
        *(undefined4 *)(puVar13 + 0x20) = 0;
        FUN_028f2ec0(puVar13 + 0x22);
        puVar15 = puVar13 + 0xf005;
        memset(puVar15,0,0xb0c200);
        lVar17 = 500;
        do {
          FUN_028f4074(puVar15);
          lVar17 = lVar17 + -1;
          puVar15 = puVar15 + 0xb50;
        } while (lVar17 != 0);
        FUN_028f7b30(puVar13 + 0x170845);
        *(undefined2 *)(puVar13 + 0x17149a) = 0;
        *(undefined4 *)((long)puVar13 + 0xb8a4d2) = 0x101;
        *(undefined1 *)((long)puVar13 + 0xb8a4d6) = 0;
        *(undefined4 *)(puVar13 + 0x17149b) = 0;
        pvVar10 = memcpy(puVar13,pvVar10,0xb8a4e0);
        uVar11 = FUN_02840954(pvVar10,puVar13);
        plVar9 = (long *)PTR_DAT_04bb46a8;
        puVar19 = PTR_DAT_04bb2020;
        if ((uVar11 & 1) == 0) {
          iVar8 = 7;
        }
        else {
          if (*(short *)PTR_DAT_04bb21a8 == 999) {
            if (*(short *)((long)__s2 + 0xe) == 999) goto LAB_0283b2c4;
          }
          else if (*(short *)((long)__s2 + 0xe) != 999) {
LAB_0283b2c4:
            iVar8 = 7;
            if ((((__s2[1] == 0xa0028) && (*__s2 == 0xa0002)) && (__s2[2] == 2)) &&
               ((short)__s2[3] == 2)) {
              uVar18 = FUN_026eb5c0(puVar13,__s2,0xb8a4e0,&local_88,&local_98);
              iVar8 = (int)uVar18;
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar8);
              if (iVar8 == 1) {
                uVar11 = FUN_02840954(uVar18,puVar13);
                iVar8 = (int)local_a8;
                if ((uVar11 & 1) == 0) {
                  iVar8 = 7;
                }
              }
            }
            goto LAB_0283b138;
          }
          iVar8 = 7;
        }
LAB_0283b138:
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
    }
    if (iVar8 == 1) {
      lVar17 = *plVar9;
      local_a8 = puVar19 + 0x10;
      if (lVar17 != 0) {
        local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
        pcStack_a0 = pcVar5;
        local_74 = iVar8;
        local_6c[0] = FUN_026d0950(lVar17,&local_b8,&local_a8);
        if ((local_6c[0] == 1) &&
           (((int)local_b8 == 0x300 || (iVar8 = FUN_026d0728(lVar17,&local_a8,0x300), iVar8 == 1))))
        {
          lVar17 = *plVar9;
          local_b8 = puVar19 + 0x10;
          if (lVar17 != 0) {
            local_6c[0] = 0;
            pcStack_b0 = pcVar6;
            local_70 = FUN_026d0950(lVar17,local_6c,&local_b8);
            if ((local_70 == 1) &&
               ((local_6c[0] == 0xb8a4e0 || (iVar8 = FUN_026d0728(lVar17,&local_b8), iVar8 == 1))))
            {
              iVar8 = 1;
              goto LAB_0283b24c;
            }
          }
        }
      }
      iVar8 = 7;
    }
LAB_0283b24c:
    bVar7 = iVar8 == 1;
    if (bVar7) {
      if (param_2 == (undefined4 *)0x0) {
        return true;
      }
      uVar16 = 1;
      goto LAB_0283b290;
    }
    if (iVar8 == 5) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar16 = 4;
      goto LAB_0283b290;
    }
    if (iVar8 == 2) {
      if (param_2 == (undefined4 *)0x0) {
        return false;
      }
      uVar16 = 5;
      goto LAB_0283b290;
    }
    if (param_2 == (undefined4 *)0x0) {
      return false;
    }
  }
  uVar16 = 7;
LAB_0283b290:
  *param_2 = uVar16;
  return bVar7;
}

