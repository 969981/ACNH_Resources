
long * FUN_03f38518(long param_1,long **param_2,undefined8 param_3,undefined4 *param_4,uint *param_5
                   ,undefined1 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  ulong uVar10;
  void *__ptr;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  long *local_1f0;
  undefined1 *local_1e8;
  int local_1e0;
  undefined1 local_1dc [4];
  long *local_1d8;
  uint local_1cc;
  undefined *local_1c8;
  long *local_1c0;
  long *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_190;
  long *local_188;
  long **pplStack_180;
  uint local_178;
  uint local_174 [63];
  undefined1 local_75;
  uint local_6c [3];
  
  plVar18 = param_2[3];
  if (plVar18 == (long *)0x0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar14 + 8);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar18 = (long *)*puVar1;
  }
  puVar12 = PTR_DAT_04bb60d8;
  if ((*(byte *)((long)param_2 + 0x34) & 0x1f) != 0) {
    return (long *)0x0;
  }
  local_1a0 = 0;
  uStack_198 = 0;
  local_1a8 = 0;
  plVar15 = param_2[8];
  local_1c8 = PTR_DAT_04bb60d8 + 0x10;
  local_1b8 = (long *)0x0;
  uStack_1b0 = 0;
  local_190 = 0;
  local_1c0 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    local_178 = 0x100;
    local_75 = 0;
    local_174[0] = local_174[0] & 0xffffff00;
    uVar17 = *(uint *)(param_2 + 9);
    pplStack_180 = (long **)local_174;
    local_188 = (long *)(PTR_DAT_04bb21f8 + 0x10);
    plVar15 = (long *)FUN_038b56b0(*(undefined8 *)PTR_DAT_04bb2130,param_2,&local_188);
    if ((plVar15 != (long *)0x0) && ((char)plVar15[0xf] != '\0')) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
      pplVar8 = &local_188;
      lVar6 = *plVar15;
      local_190 = uVar17;
      goto LAB_03f38694;
    }
  }
  else if ((char)plVar15[0xf] != '\0') {
    uVar17 = *(uint *)(param_2 + 9);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar6 = *plVar15;
    pplVar8 = param_2;
    local_190 = uVar17;
LAB_03f38694:
    local_1c0 = (long *)(**(code **)(lVar6 + 0x68))(plVar15,&local_1c8,pplVar8,0);
    if (local_1c0 != (long *)0x0) {
      __ptr = *(void **)(param_1 + 0x80);
      uVar17 = *(int *)(param_1 + 0x78) * 2 + 0x47217;
      local_1e8 = param_6;
      local_1b8 = plVar15;
      if (__ptr == (void *)0x0) {
        lVar6 = *(long *)PTR_DAT_04bb2698;
        if (lVar6 == 0) {
          __ptr = malloc((ulong)uVar17);
        }
        else {
          plVar15 = plVar18;
          if (plVar18 == (long *)0x0) {
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar1 = (undefined8 *)(lVar6 + 8);
            if (lVar14 != 0) {
              puVar1 = (undefined8 *)(lVar14 + 0xa8);
            }
            plVar15 = (long *)*puVar1;
            if (plVar15 == (long *)0x0) goto LAB_03f38870;
          }
          __ptr = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,(ulong)uVar17,0xfffffff8);
        }
        if (__ptr == (void *)0x0) goto LAB_03f38870;
      }
      plVar16 = local_1c0;
      if ((uVar17 < 0x471f9) || (((ulong)__ptr & 7) != 0)) {
LAB_03f38820:
        plVar15 = (long *)0x0;
        lVar6 = *(long *)(param_1 + 0x80);
      }
      else {
        uVar10 = (long)__ptr + 0x47217U & 0xffffffffffffffe0;
        uVar9 = ((long)__ptr + (ulong)uVar17 & 0xffffffffffffffe0) - uVar10;
        if (((long)uVar9 < 1) || ((uVar9 & 0xffffffe0) == 0)) goto LAB_03f38820;
        local_1cc = 0;
        if ((local_1c0 == (long *)0x0) || ((char)local_1c0[0xf] == '\0')) {
LAB_03f38948:
          plVar15 = (long *)0x0;
        }
        else {
          uVar17 = *(uint *)(param_1 + 0x78);
          local_200 = uVar10;
          local_1f8 = __ptr;
          uVar9 = (**(code **)(*local_1c0 + 0x48))(local_1c0,&local_1c8);
          plVar15 = (long *)0x0;
          if (local_200 != 0) {
            __ptr = local_1f8;
            if ((uVar9 & 1) == 0) goto LAB_03f38cb4;
            if (local_190 == 0) {
              uVar9 = (**(code **)(*plVar16 + 0x90))(plVar16,&local_1cc,&local_1c8,local_200,uVar17)
              ;
              if ((uVar9 & 1) == 0) {
LAB_03f38950:
                plVar15 = (long *)0x0;
                goto LAB_03f38cb0;
              }
            }
            else {
              local_1f0 = plVar16;
              uVar13 = 0;
              uVar9 = local_200;
              do {
                local_188 = (long *)((ulong)local_188 & 0xffffffff00000000);
                uVar2 = uVar17;
                if ((int)local_190 <= (int)uVar17) {
                  uVar2 = local_190;
                }
                uVar10 = (**(code **)(*local_1f0 + 0x90))
                                   (local_1f0,&local_188,&local_1c8,uVar9,uVar2);
                if ((uVar10 & 1) == 0) goto LAB_03f38950;
                uVar13 = (uint)local_188 + uVar13;
                if ((uint)local_188 < uVar2) break;
                uVar9 = uVar9 + ((ulong)local_188 & 0xffffffff);
                uVar17 = uVar17 - uVar2;
              } while (uVar17 != 0);
              local_1cc = uVar13;
            }
            uVar17 = local_1cc;
            lVar6 = FUN_03c2fb70(&local_188,local_200,local_1cc,0);
            puVar19 = local_1e8;
            plVar15 = (long *)0x0;
            plVar16 = (long *)0x0;
            if (local_174[0] != 1) {
              plVar16 = local_188;
            }
            if (lVar6 != 0) {
              plVar16 = (long *)0xfffffffffffffffe;
            }
            if ((long *)0xfffffffffffffffd < plVar16) goto LAB_03f38cb0;
            uVar13 = (uint)plVar16;
            __ptr = local_1f8;
            if (uVar13 == 0xffffffff) goto LAB_03f38cb4;
            if ((*(uint *)(param_2 + 6) < uVar13) && (*(uint *)(param_2 + 6) != 0))
            goto LAB_03f38948;
            uVar2 = *(uint *)((long)param_2 + 0x34);
            if (uVar2 == 0) {
              uVar11 = uVar13 + 0x1f & 0xffffffe0;
            }
            else {
              uVar11 = 0;
              if (uVar2 != 0) {
                uVar11 = ((uVar13 + uVar2) - 1) / uVar2;
              }
              uVar11 = uVar11 * uVar2;
            }
            local_188 = (long *)local_1dc;
            pplStack_180 = &local_1d8;
            local_1d8 = param_2[5];
            local_1dc[0] = 0;
            local_178 = local_178 & 0xffffff00;
            if (local_1d8 == (long *)0x0) {
              plVar15 = (long *)FUN_038d8270(param_3);
              if (plVar15 == (long *)0x0) {
                iVar5 = 0x20;
                if (-1 < *(int *)(param_2 + 4)) {
                  iVar5 = -0x20;
                }
              }
              else {
                iVar5 = *(int *)((long)param_2 + 0x24);
                if (iVar5 == 0) {
                  iVar4 = (**(code **)(*plVar15 + 0x20))();
                  if (iVar4 < 0x21) {
                    iVar4 = 0x20;
                  }
                  iVar5 = -iVar4;
                  if (-1 < *(int *)(param_2 + 4)) {
                    iVar5 = iVar4;
                  }
                }
                else if (iVar5 < 0x21) {
                  iVar5 = 0x20;
                }
              }
              local_1d8 = (long *)FUN_038aa690(uVar11,plVar18,iVar5,PTR_nothrow_04bb2988);
              if (local_1d8 != (long *)0x0) {
                local_1dc[0] = 1;
                uVar17 = local_1cc;
                goto LAB_03f38a2c;
              }
LAB_03f38a54:
              plVar15 = (long *)0x0;
            }
            else {
LAB_03f38a2c:
              uVar13 = *(uint *)(param_1 + 0x78);
              if (uVar17 < uVar13) {
                iVar5 = FUN_03c2fab0(local_1d8,uVar11,local_200,uVar17,local_1f8);
                if (iVar5 < 0) goto LAB_03f38a54;
              }
              else {
                lVar6 = (long)local_1f8 + 0x271f8;
                local_1f0 = plVar16;
                if (local_1c0 == (long *)0x0) {
                  uVar17 = 0;
                }
                else {
                  local_6c[0] = 0;
                  uVar17 = local_6c[0];
                  if ((char)local_1c0[0xf] != '\0') {
                    (**(code **)(*local_1c0 + 0xb8))(local_1c0,local_6c,&local_1c8);
                    uVar13 = *(uint *)(param_1 + 0x78);
                    uVar17 = local_6c[0];
                  }
                }
                uVar9 = local_200;
                lVar14 = param_1 + 0x88;
                FUN_03f38cc8(lVar14,local_1d8,local_1f0,local_1f8,lVar6,local_200,uVar17,uVar13);
                if (local_1cc < uVar17) {
                  uVar10 = 0;
                  local_208 = uVar9 + *(uint *)(param_1 + 0x78);
                  local_1e8 = puVar19;
                  do {
                    if (*(int *)(param_1 + 0x238) < 0) goto LAB_03f38a54;
                    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x218));
                    (**(code **)(*(long *)(param_1 + 0x88) + 0x18))(lVar14,uVar10 + 1,0);
                    plVar18 = local_1c0;
                    uVar13 = (int)uVar10 + 1;
                    uVar10 = (ulong)uVar13;
                    local_1e0 = 0;
                    puVar3 = &local_200;
                    if ((uVar13 & 1) != 0) {
                      puVar3 = &local_208;
                    }
                    uVar9 = *puVar3;
                    uVar13 = *(uint *)(param_1 + 0x78);
                    if (uVar17 - local_1cc <= *(uint *)(param_1 + 0x78)) {
                      uVar13 = uVar17 - local_1cc;
                    }
                    if ((((local_1c0 == (long *)0x0) || ((char)local_1c0[0xf] == '\0')) ||
                        (uVar7 = (**(code **)(*local_1c0 + 0x48))(local_1c0,&local_1c8), uVar9 == 0)
                        ) || ((uVar7 & 1) == 0)) goto LAB_03f38a54;
                    if (local_190 == 0) {
                      uVar9 = (**(code **)(*plVar18 + 0x90))
                                        (plVar18,&local_1e0,&local_1c8,uVar9,uVar13);
                      if ((uVar9 & 1) == 0) goto LAB_03f38a54;
                    }
                    else {
                      iVar5 = 0;
                      do {
                        local_6c[0] = 0;
                        uVar2 = uVar13;
                        if ((int)local_190 <= (int)uVar13) {
                          uVar2 = local_190;
                        }
                        uVar7 = (**(code **)(*plVar18 + 0x90))
                                          (plVar18,local_6c,&local_1c8,uVar9,uVar2);
                        if ((uVar7 & 1) == 0) goto LAB_03f38a54;
                        iVar5 = local_6c[0] + iVar5;
                        if (local_6c[0] < uVar2) break;
                        uVar9 = uVar9 + local_6c[0];
                        uVar13 = uVar13 - uVar2;
                      } while (uVar13 != 0);
                      local_1e0 = iVar5;
                    }
                    local_1cc = local_1cc + local_1e0;
                    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
                  } while (local_1cc < uVar17);
                  lVar6 = uVar10 + 1;
                  puVar19 = local_1e8;
                }
                else {
                  lVar6 = 1;
                }
                nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x218));
                (**(code **)(*(long *)(param_1 + 0x88) + 0x18))(lVar14,lVar6,0);
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
                plVar16 = local_1f0;
              }
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = (int)plVar16;
              }
              if (param_5 != (uint *)0x0) {
                *param_5 = uVar11;
              }
              if (puVar19 != (undefined1 *)0x0) {
                *puVar19 = local_1dc[0];
              }
              local_178 = CONCAT31(local_178._1_3_,1);
              plVar15 = local_1d8;
            }
            FUN_03f38d64(&local_188);
          }
LAB_03f38cb0:
          __ptr = local_1f8;
        }
LAB_03f38cb4:
        lVar6 = *(long *)(param_1 + 0x80);
        puVar12 = PTR_DAT_04bb60d8;
      }
      if (lVar6 == 0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr);
        }
        else if ((__ptr != (void *)0x0) &&
                (plVar18 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr),
                plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x38))(plVar18,__ptr);
        }
      }
      goto LAB_03f38874;
    }
  }
LAB_03f38870:
  plVar15 = (long *)0x0;
LAB_03f38874:
  plVar18 = local_1b8;
  local_1c8 = puVar12 + 0x10;
  if (((local_1b8 != (long *)0x0) && ((char)local_1b8[0xf] != '\0')) &&
     (uVar9 = (**(code **)(*local_1b8 + 0x48))(local_1b8,&local_1c8), (uVar9 & 1) != 0)) {
    (**(code **)(*plVar18 + 0x70))(plVar18,&local_1c8);
  }
  return plVar15;
}

