
void FUN_00993500(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *__dest;
  undefined **ppuVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  undefined1 *__src;
  undefined1 local_1b8 [7];
  undefined4 uStack_1b1;
  undefined1 local_1ad;
  undefined1 local_195;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined **local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  pvVar9 = (void *)*param_2;
  if ((pvVar9 != (void *)0x0) && (pvVar19 = (void *)param_1[0xb], pvVar19 != pvVar9)) {
    lVar11 = 0;
    do {
      if (*(char *)((long)pvVar9 + lVar11) == '\0') goto LAB_0099358c;
      if (*(char *)((long)pvVar9 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0099358c;
      }
      if (*(char *)((long)pvVar9 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0099358c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0099358c:
    iVar10 = (int)lVar11;
    if ((int)param_1[0xc] <= (int)lVar11) {
      iVar10 = (int)param_1[0xc] + -1;
    }
    memcpy(pvVar19,pvVar9,(long)iVar10);
    *(undefined1 *)((long)pvVar19 + (long)iVar10) = 0;
  }
  pvVar9 = (void *)param_2[10];
  if ((pvVar9 != (void *)0x0) && (pvVar19 = (void *)param_1[0x12], pvVar19 != pvVar9)) {
    lVar11 = 0;
    do {
      if (*(char *)((long)pvVar9 + lVar11) == '\0') goto LAB_0099360c;
      if (*(char *)((long)pvVar9 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0099360c;
      }
      if (*(char *)((long)pvVar9 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0099360c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0099360c:
    iVar10 = (int)lVar11;
    if ((int)param_1[0x13] <= (int)lVar11) {
      iVar10 = (int)param_1[0x13] + -1;
    }
    memcpy(pvVar19,pvVar9,(long)iVar10);
    *(undefined1 *)((long)pvVar19 + (long)iVar10) = 0;
  }
  pvVar9 = (void *)param_2[0xb];
  if ((pvVar9 != (void *)0x0) && (pvVar19 = (void *)param_1[0x1d], pvVar19 != pvVar9)) {
    lVar11 = 0;
    do {
      if (*(char *)((long)pvVar9 + lVar11) == '\0') goto LAB_0099368c;
      if (*(char *)((long)pvVar9 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0099368c;
      }
      if (*(char *)((long)pvVar9 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0099368c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0099368c:
    iVar10 = (int)lVar11;
    if ((int)param_1[0x1e] <= (int)lVar11) {
      iVar10 = (int)param_1[0x1e] + -1;
    }
    memcpy(pvVar19,pvVar9,(long)iVar10);
    *(undefined1 *)((long)pvVar19 + (long)iVar10) = 0;
  }
  local_195 = 0;
  __dest = local_1b8 + 4;
  local_1ad = 0;
  local_1b8 = (undefined1  [7])0x6e752a00000020;
  uStack_1b1 = 0x2a746573;
  __src = (undefined1 *)param_2[1];
  if ((__src != (undefined1 *)0x0) && (__dest != __src)) {
    lVar11 = 0;
    do {
      if (__src[lVar11] == '\0') goto LAB_0099373c;
      if (__src[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0099373c;
      }
      if (__src[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0099373c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0099373c:
    iVar10 = (int)lVar11;
    if (0x1e < iVar10) {
      iVar10 = 0x1f;
    }
    memcpy(__dest,__src,(long)iVar10);
    __dest[iVar10] = 0;
  }
  uVar4 = *(uint *)(param_2 + 2);
  uVar18 = (ulong)uVar4;
  if (uVar4 != 0) {
    if ((int)uVar4 < 1) {
LAB_009937e8:
      uVar18 = (ulong)*(uint *)(param_1 + 1);
      if (0 < (int)*(uint *)(param_1 + 1)) goto LAB_009937f4;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar9 = malloc(uVar18 << 3);
      }
      else {
        plVar7 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar11 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_009937e8;
        }
        pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar18 << 3,8);
      }
      if (pvVar9 == (void *)0x0) goto LAB_009937e8;
      *(uint *)(param_1 + 1) = uVar4;
      param_1[2] = (long)pvVar9;
LAB_009937f4:
      uVar12 = uVar18 & 3;
      if (uVar18 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          lVar11 = uVar15 * 8;
          uVar15 = uVar15 + 4;
          *(undefined8 *)(param_1[2] + lVar11) = 0;
          *(undefined8 *)(param_1[2] + lVar11 + 8) = 0;
          *(undefined8 *)(param_1[2] + lVar11 + 0x10) = 0;
          *(undefined8 *)(param_1[2] + lVar11 + 0x18) = 0;
        } while ((uVar18 & 0xfffffffc) != uVar15);
      }
      if (uVar12 != 0) {
        lVar11 = uVar15 << 3;
        do {
          uVar12 = uVar12 - 1;
          *(undefined8 *)(param_1[2] + lVar11) = 0;
          lVar11 = lVar11 + 8;
        } while (uVar12 != 0);
      }
    }
    uVar4 = *(uint *)(param_2 + 2);
    if (uVar4 != 0) {
      lVar11 = param_2[3];
      uVar16 = 0;
      do {
        lVar6 = *(long *)(lVar11 + ((long)((ulong)uVar16 << 0x20) >> 0x1c) + 8);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar11 + (long)(int)uVar16 * 0x10);
          if (*(uint *)(param_1 + 1) <= uVar5) {
            uVar5 = 0;
          }
          *(long *)(param_1[2] + (long)(int)uVar5 * 8) = lVar6;
        }
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
  }
  uVar4 = *(uint *)(param_2 + 4);
  uVar18 = (ulong)uVar4;
  if (uVar4 != 0) {
    if ((int)uVar4 < 1) {
LAB_0099395c:
      uVar18 = (ulong)*(uint *)(param_1 + 3);
      if (0 < (int)*(uint *)(param_1 + 3)) goto LAB_00993968;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar9 = malloc(uVar18 << 3);
      }
      else {
        plVar7 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar11 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0099395c;
        }
        pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar18 << 3,8);
      }
      if (pvVar9 == (void *)0x0) goto LAB_0099395c;
      *(uint *)(param_1 + 3) = uVar4;
      param_1[4] = (long)pvVar9;
LAB_00993968:
      uVar12 = uVar18 & 3;
      if (uVar18 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          lVar11 = uVar15 * 8;
          uVar15 = uVar15 + 4;
          *(undefined8 *)(param_1[4] + lVar11) = 0;
          *(undefined8 *)(param_1[4] + lVar11 + 8) = 0;
          *(undefined8 *)(param_1[4] + lVar11 + 0x10) = 0;
          *(undefined8 *)(param_1[4] + lVar11 + 0x18) = 0;
        } while ((uVar18 & 0xfffffffc) != uVar15);
      }
      if (uVar12 != 0) {
        lVar11 = uVar15 << 3;
        do {
          uVar12 = uVar12 - 1;
          *(undefined8 *)(param_1[4] + lVar11) = 0;
          lVar11 = lVar11 + 8;
        } while (uVar12 != 0);
      }
    }
    uVar4 = *(uint *)(param_2 + 4);
    if (uVar4 != 0) {
      lVar11 = param_2[5];
      uVar16 = 0;
      do {
        lVar6 = lVar11 + ((long)((ulong)uVar16 << 0x20) >> 0x1b);
        pcVar13 = *(code **)(lVar6 + 0x10);
        if (pcVar13 != (code *)0x0 && *(long *)(lVar6 + 0x18) != 0) {
          uVar5 = *(uint *)(lVar11 + (long)(int)uVar16 * 0x20);
          uVar8 = (*pcVar13)(param_3);
          if (*(uint *)(param_1 + 3) <= uVar5) {
            uVar5 = 0;
          }
          *(undefined8 *)(param_1[4] + (long)(int)uVar5 * 8) = uVar8;
        }
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
    (**(code **)(*param_1 + 0x40))(param_1);
    uVar4 = *(uint *)(param_2 + 4);
    if (uVar4 != 0) {
      lVar11 = param_2[5];
      uVar16 = 0;
      ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      do {
        pcVar13 = *(code **)(lVar11 + ((long)((ulong)uVar16 << 0x20) >> 0x1b) + 0x18);
        if (pcVar13 != (code *)0x0) {
          puVar3 = (uint *)(lVar11 + (long)(int)uVar16 * 0x20);
          uVar5 = *puVar3;
          puStack_178 = *(undefined1 **)(puVar3 + 2);
          if (*(uint *)(param_1 + 3) <= uVar5) {
            uVar5 = 0;
          }
          local_180 = ppuVar1;
          (*pcVar13)(*(undefined8 *)(param_1[4] + (long)(int)uVar5 * 8),&local_180,param_3);
        }
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
  }
  if (__src != (undefined1 *)0x0) {
    uVar4 = *(uint *)(param_2 + 6);
    uVar18 = (ulong)uVar4;
    if (uVar4 != 0) {
      if ((int)uVar4 < 1) {
LAB_00993b6c:
        uVar18 = (ulong)*(uint *)(param_1 + 6);
        if (0 < (int)*(uint *)(param_1 + 6)) goto LAB_00993b78;
      }
      else {
        lVar11 = *(long *)PTR_DAT_04bb2698;
        if (lVar11 == 0) {
          pvVar9 = malloc(uVar18 << 3);
        }
        else {
          plVar7 = param_3;
          if (param_3 == (long *)0x0) {
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar7 = (long *)(lVar11 + 8);
            if (lVar6 != 0) {
              plVar7 = (long *)(lVar6 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_00993b6c;
          }
          pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar18 << 3,8);
        }
        if (pvVar9 == (void *)0x0) goto LAB_00993b6c;
        *(uint *)(param_1 + 6) = uVar4;
        param_1[7] = (long)pvVar9;
LAB_00993b78:
        uVar12 = uVar18 & 3;
        if (uVar18 - 1 < 3) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            lVar11 = uVar15 * 8;
            uVar15 = uVar15 + 4;
            *(undefined8 *)(param_1[7] + lVar11) = 0;
            *(undefined8 *)(param_1[7] + lVar11 + 8) = 0;
            *(undefined8 *)(param_1[7] + lVar11 + 0x10) = 0;
            *(undefined8 *)(param_1[7] + lVar11 + 0x18) = 0;
          } while ((uVar18 & 0xfffffffc) != uVar15);
        }
        if (uVar12 != 0) {
          lVar11 = uVar15 << 3;
          do {
            uVar12 = uVar12 - 1;
            *(undefined8 *)(param_1[7] + lVar11) = 0;
            lVar11 = lVar11 + 8;
          } while (uVar12 != 0);
        }
      }
      if (*(char *)param_1[0x12] != '\0') {
        (**(code **)(param_1[0x11] + 0x18))();
      }
      uVar4 = *(uint *)(param_2 + 6);
      if (uVar4 != 0) {
        uVar16 = 0;
        lVar11 = param_2[7];
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          plVar7 = (long *)(lVar11 + ((long)((ulong)uVar16 << 0x20) >> 0x1b) + 0x18);
          if (*plVar7 != 0) {
            lVar6 = (long)(int)uVar16;
            local_190 = puVar2;
            if (*(char *)(lVar11 + lVar6 * 0x20) == '\0') {
              lVar17 = param_1[7];
              puStack_188 = __src;
              if (lVar17 != 0) {
                lVar6 = lVar11 + lVar6 * 0x20;
                uVar5 = *(uint *)(lVar6 + 4);
                puStack_178 = *(undefined1 **)(lVar6 + 0x10);
                if (*(uint *)(param_1 + 6) <= uVar5) {
                  uVar5 = 0;
                }
                local_180 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                plVar7 = (long *)(*(code *)*plVar7)(&local_190,&local_180,0,param_3);
                *(long **)(lVar17 + (long)(int)uVar5 * 8) = plVar7;
                if (plVar7 != (long *)0x0) {
                  local_6d = 0;
                  local_170 = 0x100;
                  local_16c[0] = 0;
                  local_180 = &PTR_LAB_048f9a70;
                  puStack_178 = local_16c;
                  uVar18 = (**(code **)(*plVar7 + 0xf0))(plVar7,&local_180,1);
                  if ((uVar18 & 1) != 0) {
                    (**(code **)(*plVar7 + 0x108))(plVar7,&local_180);
                  }
                }
              }
            }
            else {
              puStack_178 = *(undefined1 **)(lVar11 + lVar6 * 0x20 + 0x10);
              local_180 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
              puStack_188 = __src;
              plVar7 = (long *)(*(code *)*plVar7)(&local_190,&local_180,0,param_3);
              if (plVar7 != (long *)0x0) {
                local_6d = 0;
                local_170 = 0x100;
                local_16c[0] = 0;
                local_180 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
                puStack_178 = local_16c;
                uVar18 = (**(code **)(*plVar7 + 0xf0))(plVar7,&local_180,1);
                if ((uVar18 & 1) != 0) {
                  (**(code **)(*plVar7 + 0x108))(plVar7,&local_180);
                }
              }
              param_1[5] = (long)plVar7;
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar4 != uVar16);
      }
      lVar11 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        pvVar9 = malloc(400);
      }
      else {
        plVar7 = param_3;
        if (param_3 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar11 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00993e30;
        }
        pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,400,8);
      }
      if (pvVar9 != (void *)0x0) {
        param_1[0x27] = 0x3200000000;
        param_1[0x28] = (long)pvVar9;
      }
    }
  }
LAB_00993e30:
  if (__src == (undefined1 *)0x0) {
    return;
  }
  uVar4 = *(uint *)(param_2 + 8);
  uVar18 = (ulong)uVar4;
  if (uVar4 == 0) {
    return;
  }
  if ((int)uVar4 < 1) {
LAB_00993ed8:
    uVar18 = (ulong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 1) goto LAB_00993f64;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar9 = malloc(uVar18 << 3);
    }
    else {
      plVar7 = param_3;
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00993ed8;
      }
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar18 << 3,8);
    }
    if (pvVar9 == (void *)0x0) goto LAB_00993ed8;
    *(uint *)(param_1 + 8) = uVar4;
    param_1[9] = (long)pvVar9;
  }
  uVar12 = uVar18 & 3;
  if (uVar18 - 1 < 3) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    do {
      lVar11 = uVar15 * 8;
      uVar15 = uVar15 + 4;
      *(undefined8 *)(param_1[9] + lVar11) = 0;
      *(undefined8 *)(param_1[9] + lVar11 + 8) = 0;
      *(undefined8 *)(param_1[9] + lVar11 + 0x10) = 0;
      *(undefined8 *)(param_1[9] + lVar11 + 0x18) = 0;
    } while ((uVar18 & 0xfffffffc) != uVar15);
  }
  if (uVar12 != 0) {
    lVar11 = uVar15 << 3;
    do {
      uVar12 = uVar12 - 1;
      *(undefined8 *)(param_1[9] + lVar11) = 0;
      lVar11 = lVar11 + 8;
    } while (uVar12 != 0);
  }
LAB_00993f64:
  if (*(char *)param_1[0x1d] != '\0') {
    (**(code **)(param_1[0x1c] + 0x18))();
  }
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 != 0) {
    lVar11 = param_2[9];
    uVar16 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      puVar3 = (uint *)(lVar11 + ((long)((ulong)uVar16 << 0x20) >> 0x1b));
      puVar14 = puVar3 + 6;
      if ((*(long *)puVar14 != 0) && (lVar6 = param_1[9], lVar6 != 0)) {
        uVar5 = *puVar3;
        if (*(uint *)(param_1 + 8) <= uVar5) {
          uVar5 = 0;
        }
        puStack_178 = *(undefined1 **)(lVar11 + (long)(int)uVar16 * 0x20 + 0x10);
        local_180 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_190 = puVar2;
        puStack_188 = __src;
        plVar7 = (long *)(**(code **)puVar14)(&local_190,&local_180,0,param_3);
        *(long **)(lVar6 + (long)(int)uVar5 * 8) = plVar7;
        if (plVar7 != (long *)0x0) {
          local_6d = 0;
          local_170 = 0x100;
          local_16c[0] = 0;
          local_180 = &PTR_LAB_048f9a70;
          puStack_178 = local_16c;
          uVar18 = (**(code **)(*plVar7 + 0xf0))(plVar7,&local_180,1);
          if ((uVar18 & 1) != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,&local_180);
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar4 != uVar16);
  }
  return;
}

