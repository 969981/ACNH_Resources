
void FUN_01c7f900(uint *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  void *pvVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  size_t __size;
  ulong uVar29;
  void *pvVar30;
  uint uVar31;
  undefined1 *__dest;
  byte bVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  undefined *local_1d8;
  undefined8 *puStack_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [255];
  undefined1 local_b5;
  char local_b0;
  undefined *local_a8;
  long local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c [3];
  
  uVar11 = nn::aoc::CountAddOnContent();
  *param_1 = uVar11;
  if ((int)uVar11 < 1) {
    return;
  }
  lVar27 = *(long *)PTR_DAT_04bb2698;
  if (lVar27 == 0) {
    piVar16 = malloc((ulong)uVar11 << 2);
    if (piVar16 != (int *)0x0) goto LAB_01c7f99c;
LAB_01c7f9b4:
    piVar16 = *(int **)(param_1 + 4);
  }
  else {
    plVar15 = param_2;
    if (param_2 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar27 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_01c7f9b4;
    }
    piVar16 = (int *)(**(code **)(*plVar15 + 0x30))(plVar15,(ulong)uVar11 << 2,8);
    if (piVar16 == (int *)0x0) goto LAB_01c7f9b4;
LAB_01c7f99c:
    param_1[2] = uVar11;
    *(int **)(param_1 + 4) = piVar16;
  }
  nn::aoc::ListAddOnContent(piVar16,0,*param_1);
  uVar11 = *param_1;
  if (0 < (int)uVar11) {
    __size = (ulong)uVar11 * 0x18;
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar17 = malloc(__size);
    }
    else {
      plVar15 = param_2;
      if (param_2 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar27 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_01c7fac4;
      }
      pvVar17 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
    }
    if (pvVar17 != (void *)0x0) {
      uVar34 = ((uint)((__size - 0x18) / 0x18) & 0xfffffff) + 1;
      uVar29 = (ulong)uVar34 & 3;
      pvVar30 = pvVar17;
      if ((uVar34 & 3) != 0) {
        do {
          *(undefined4 *)((long)pvVar30 + 8) = 0;
          uVar29 = uVar29 - 1;
          *(undefined8 *)((long)pvVar30 + 0x10) = 0;
          pvVar30 = (void *)((long)pvVar30 + 0x18);
        } while (uVar29 != 0);
      }
      if (0x47 < __size - 0x18) {
        do {
          *(undefined4 *)((long)pvVar30 + 8) = 0;
          *(undefined8 *)((long)pvVar30 + 0x10) = 0;
          *(undefined4 *)((long)pvVar30 + 0x20) = 0;
          *(undefined8 *)((long)pvVar30 + 0x28) = 0;
          *(undefined4 *)((long)pvVar30 + 0x38) = 0;
          *(undefined8 *)((long)pvVar30 + 0x40) = 0;
          *(undefined4 *)((long)pvVar30 + 0x50) = 0;
          *(undefined8 *)((long)pvVar30 + 0x58) = 0;
          pvVar30 = (void *)((long)pvVar30 + 0x60);
        } while (pvVar30 != (void *)((long)pvVar17 + __size));
      }
      param_1[6] = uVar11;
      *(void **)(param_1 + 8) = pvVar17;
    }
  }
LAB_01c7fac4:
  lVar27 = *(long *)(param_1 + 8);
  param_1[10] = 0;
  uVar11 = param_1[2];
  if (uVar11 != 0) {
    lVar14 = *(long *)(param_1 + 4);
    uVar29 = 0;
    iVar33 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2818 + 0x10;
    puVar3 = PTR_DAT_04bb21f8 + 0x10;
    do {
      iVar13 = *(int *)(lVar14 + (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2));
      *(int *)(lVar27 + (long)iVar33 * 0x18) = iVar13;
      iVar12 = nn::fs::QueryMountAddOnContentCacheSize((ulong *)&local_1c8,iVar13);
      if ((iVar12 == 0) &&
         (pvVar17 = (void *)(**(code **)(*param_2 + 0x30))(param_2,local_1c8,0xfffffff8),
         pvVar17 != (void *)0x0)) {
        (**(code **)(DAT_04ca7ad0 + 0x18))(&DAT_04ca7ad0);
        iVar13 = nn::fs::MountAddOnContent(DAT_04ca7ad8,iVar13,pvVar17,(ulong)local_1c8);
        if (iVar13 != 0) {
          (**(code **)(*param_2 + 0x38))(param_2,pvVar17);
          pvVar17 = (void *)0x0;
        }
        plVar15 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x108);
        if (plVar15 != (long *)0x0) {
          *(int *)(lVar27 + (long)iVar33 * 0x18 + 4) = (int)local_1c8;
          puStack_1d0 = &DAT_0407ebb1;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          local_98 = (long *)0x0;
          local_1d8 = puVar1;
          if ((char)plVar15[0xf] == '\0') {
LAB_01c7fd54:
            uVar34 = 0;
          }
          else {
            local_a8 = puVar2;
            local_a0 = (**(code **)(*plVar15 + 0xd0))(plVar15,&local_a8,&local_1d8);
            puVar9 = PTR_DAT_04bb21f8;
            if (local_a0 == 0) goto LAB_01c7fd54;
            uVar34 = 0;
            cVar6 = (char)plVar15[0xf];
            local_98 = plVar15;
            while( true ) {
              local_b0 = '\0';
              local_1b4[0] = 0;
              local_b5 = 0;
              local_1b8 = 0x100;
              local_1c8 = puVar9 + 0x10;
              local_1c0 = local_1b4;
              if (cVar6 == '\0') break;
              local_1c8 = puVar9 + 0x10;
              local_b0 = '\0';
              local_b5 = 0;
              local_1b4[0] = 0;
              local_1b8 = 0x100;
              uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8);
              if ((uVar18 & 1) == 0) {
LAB_01c7fe14:
                if (((char)plVar15[0xf] != '\0') &&
                   ((uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8), (uVar18 & 1) != 0
                    && (uVar18 = (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a8),
                       (uVar18 & 1) != 0)))) {
                  local_a0 = 0;
                  local_98 = (long *)0x0;
                }
                break;
              }
              local_6c[0] = 0;
              uVar18 = (**(code **)(*plVar15 + 0xe0))(plVar15,local_6c,&local_a8,&local_1c8,1);
              if (((uVar18 & 1) == 0) || (1 < local_6c[0])) goto LAB_01c7fe14;
              if (local_6c[0] == 0) {
                if ((((char)plVar15[0xf] != '\0') &&
                    (uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8), (uVar18 & 1) != 0))
                   && (uVar18 = (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a8), (uVar18 & 1) != 0
                      )) {
                  bVar8 = true;
                  local_a0 = 0;
                  local_98 = (long *)0x0;
                  goto LAB_01c7fd5c;
                }
                break;
              }
              cVar6 = (char)plVar15[0xf];
              if (local_b0 == '\0') {
                uVar34 = uVar34 + 1;
              }
            }
          }
          bVar8 = false;
LAB_01c7fd5c:
          plVar21 = local_98;
          local_a8 = PTR_DAT_04bb2818 + 0x10;
          if (((local_98 != (long *)0x0) && ((char)local_98[0xf] != '\0')) &&
             (uVar18 = (**(code **)(*local_98 + 0x48))(local_98,&local_a8), (uVar18 & 1) != 0)) {
            (**(code **)(*plVar21 + 0xd8))(plVar21,&local_a8);
          }
          puVar9 = PTR_DAT_04bb21f8;
          bVar7 = false;
          if (uVar34 != 0) {
            bVar7 = bVar8;
          }
          if (bVar7) {
            puVar4 = (uint *)(lVar27 + (long)iVar33 * 0x18 + 8);
            if (0 < (int)uVar34) {
              uVar28 = (ulong)uVar34;
              uVar18 = (uVar28 + (ulong)uVar34 * 8) * 0x20 | 8;
              if (*(long *)PTR_DAT_04bb2698 == 0) {
                puVar19 = malloc(uVar18);
              }
              else {
                puVar19 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,uVar18,8);
              }
              if (puVar19 != (ulong *)0x0) {
                puVar20 = puVar19 + 1;
                *puVar19 = uVar28;
                uVar25 = uVar28 * 0x120 - 0x120;
                uVar31 = ((uint)(uVar25 / 0x120) & 0xffffff) + 1;
                uVar18 = (ulong)uVar31 & 3;
                puVar24 = puVar20;
                if ((uVar31 & 3) != 0) {
                  uVar10 = 0;
                  do {
                    uVar23 = uVar10;
                    puVar26 = (undefined1 *)((long)puVar19 + uVar23 + 0x1c);
                    *puVar26 = 0;
                    *(undefined1 **)((long)puVar19 + uVar23 + 0x10) = puVar26;
                    *(undefined4 *)((long)puVar19 + uVar23 + 0x18) = 0x100;
                    *(undefined1 *)((long)puVar19 + uVar23 + 0x11b) = 0;
                    *(undefined **)((long)puVar19 + uVar23 + 8) = puVar9 + 0x10;
                    uVar10 = uVar23 + 0x120;
                  } while ((uVar18 << 5 | uVar18 << 8) != uVar23 + 0x120);
                  puVar24 = (ulong *)((long)puVar19 + uVar23 + 0x128);
                }
                if (0x35f < uVar25) {
                  do {
                    *(undefined4 *)(puVar24 + 2) = 0x100;
                    *(undefined1 *)((long)puVar24 + 0x113) = 0;
                    *(undefined1 *)((long)puVar24 + 0x14) = 0;
                    *(undefined4 *)(puVar24 + 0x26) = 0x100;
                    *(undefined1 *)((long)puVar24 + 0x233) = 0;
                    *(undefined1 *)((long)puVar24 + 0x134) = 0;
                    *(undefined4 *)(puVar24 + 0x4a) = 0x100;
                    *(undefined1 *)((long)puVar24 + 0x353) = 0;
                    *(undefined1 *)((long)puVar24 + 0x254) = 0;
                    puVar24[0x48] = (ulong)puVar3;
                    *(undefined4 *)(puVar24 + 0x6e) = 0x100;
                    *(undefined1 *)((long)puVar24 + 0x473) = 0;
                    *(undefined1 *)((long)puVar24 + 0x374) = 0;
                    puVar24[0x6c] = (ulong)puVar3;
                    *puVar24 = (ulong)puVar3;
                    puVar24[1] = (ulong)((long)puVar24 + 0x14);
                    puVar24[0x24] = (ulong)puVar3;
                    puVar24[0x25] = (long)puVar24 + 0x134;
                    puVar24[0x49] = (long)puVar24 + 0x254;
                    puVar24[0x6d] = (long)puVar24 + 0x374;
                    puVar24 = puVar24 + 0x90;
                  } while (puVar24 != puVar20 + uVar28 * 0x24);
                }
                *puVar4 = uVar34;
                *(ulong **)(lVar27 + (long)iVar33 * 0x18 + 0x10) = puVar20;
              }
            }
            plVar21 = (long *)(lVar27 + (long)iVar33 * 0x18 + 0x10);
            lVar35 = *plVar21;
            local_1d8 = PTR_DAT_04bb2020 + 0x10;
            puStack_1d0 = &DAT_0407ebb1;
            local_80 = 0;
            uStack_78 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_a0 = 0;
            local_98 = (long *)0x0;
            puVar5 = PTR_DAT_04bb2818 + 0x10;
            if ((char)plVar15[0xf] == '\0') {
              uVar34 = 0;
LAB_01c802b8:
              bVar32 = 0;
            }
            else {
              local_a8 = puVar5;
              local_a0 = (**(code **)(*plVar15 + 0xd0))(plVar15,&local_a8,&local_1d8);
              if (local_a0 != 0) {
                local_b5 = 0;
                local_b0 = '\0';
                local_1b8 = 0x100;
                local_1c8 = puVar9 + 0x10;
                uVar34 = 0;
                local_1b4[0] = 0;
                local_1c0 = local_1b4;
                local_98 = plVar15;
                if ((char)plVar15[0xf] != '\0') {
                  do {
                    local_b0 = '\0';
                    local_b5 = 0;
                    local_1b4[0] = 0;
                    local_1b8 = 0x100;
                    local_1c0 = local_1b4;
                    uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8);
                    if ((uVar18 & 1) == 0) {
LAB_01c801dc:
                      if ((char)plVar15[0xf] != '\0') {
                        uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8);
                        if ((uVar18 & 1) != 0) {
                          uVar18 = (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a8);
                          if ((uVar18 & 1) != 0) {
                            local_a0 = 0;
                            local_98 = (long *)0x0;
                          }
                        }
                      }
                      break;
                    }
                    local_6c[0] = 0;
                    uVar18 = (**(code **)(*plVar15 + 0xe0))(plVar15,local_6c,&local_a8,&local_1c8,1)
                    ;
                    if (((uVar18 & 1) == 0) || (1 < local_6c[0])) goto LAB_01c801dc;
                    if (local_6c[0] == 0) {
                      if ((char)plVar15[0xf] != '\0') {
                        uVar18 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a8);
                        if ((uVar18 & 1) != 0) {
                          uVar18 = (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a8);
                          if ((uVar18 & 1) != 0) {
                            bVar32 = 1;
                            local_a0 = 0;
                            local_98 = (long *)0x0;
                            goto LAB_01c802bc;
                          }
                        }
                      }
                      break;
                    }
                    uVar31 = uVar34;
                    if ((local_b0 == '\0') && (*puVar4 != uVar34)) {
                      lVar36 = lVar35 + (long)(int)uVar34 * 0x120;
                      __dest = *(undefined1 **)(lVar36 + 8);
                      (**(code **)(local_1c8 + 0x18))(&local_1c8);
                      puVar26 = local_1c0;
                      if (__dest != local_1c0) {
                        (**(code **)(local_1c8 + 0x18))(&local_1c8);
                        lVar22 = 0;
                        do {
                          if (local_1c0[lVar22] == '\0') goto LAB_01c80194;
                          if (local_1c0[lVar22 + 1] == '\0') {
                            lVar22 = lVar22 + 1;
                            goto LAB_01c80194;
                          }
                          if (local_1c0[lVar22 + 2] == '\0') {
                            lVar22 = lVar22 + 2;
                            goto LAB_01c80194;
                          }
                          lVar22 = lVar22 + 3;
                        } while (lVar22 != 0x80001);
                        lVar22 = 0;
LAB_01c80194:
                        iVar12 = *(int *)(lVar36 + 0x10);
                        iVar13 = (int)lVar22;
                        if (iVar12 <= (int)lVar22) {
                          iVar13 = iVar12 + -1;
                        }
                        memcpy(__dest,puVar26,(long)iVar13);
                        __dest[iVar13] = 0;
                      }
                      local_6c[0] = 0;
                      if ((char)plVar15[0xf] == '\0') {
                        uVar18 = 0;
                      }
                      else {
                        (**(code **)(*plVar15 + 0xb0))(plVar15,local_6c,&local_1c8);
                        uVar18 = (ulong)local_6c[0];
                      }
                      uVar31 = uVar34 + 1;
                      *(ulong *)(lVar35 + (long)(int)uVar34 * 0x120 + 0x118) = uVar18;
                    }
                    local_b5 = 0;
                    local_1b4[0] = 0;
                    local_1b8 = 0x100;
                    local_1c8 = PTR_DAT_04bb21f8 + 0x10;
                    local_b0 = '\0';
                    local_1c0 = local_1b4;
                    uVar34 = uVar31;
                  } while ((char)plVar15[0xf] != '\0');
                }
                goto LAB_01c802b8;
              }
              uVar34 = 0;
              bVar32 = 0;
            }
LAB_01c802bc:
            plVar15 = local_98;
            local_a8 = puVar5;
            if ((local_98 != (long *)0x0) && ((char)local_98[0xf] != '\0')) {
              uVar18 = (**(code **)(*local_98 + 0x48))(local_98,&local_a8);
              if ((uVar18 & 1) != 0) {
                (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a8);
              }
            }
            bVar8 = (bool)(bVar32 ^ 1);
            if (*puVar4 != uVar34) {
              bVar8 = true;
            }
            if (bVar8) {
              if (*plVar21 != 0) {
                pvVar30 = (void *)(*plVar21 + -8);
                if (*(long *)PTR_DAT_04bb2698 == 0) {
                  free(pvVar30);
                }
                else {
                  plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar30);
                  if (plVar15 != (long *)0x0) {
                    (**(code **)(*plVar15 + 0x38))(plVar15,pvVar30);
                  }
                }
                *plVar21 = 0;
                *puVar4 = 0;
              }
            }
            else {
              iVar33 = iVar33 + 1;
              param_1[10] = param_1[10] + 1;
            }
          }
          (**(code **)(*param_2 + 0x38))(param_2,pvVar17);
          (**(code **)(DAT_04ca7ad0 + 0x18))(&DAT_04ca7ad0);
          nn::fs::Unmount(DAT_04ca7ad8);
        }
      }
      uVar18 = uVar29 + 1;
      uVar29 = uVar18 & 0xffffffff;
    } while (uVar11 != (uint)uVar18);
  }
  return;
}

