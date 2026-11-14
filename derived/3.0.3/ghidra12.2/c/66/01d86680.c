
void FUN_01d86680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined4 *__ptr;
  long *plVar16;
  undefined *puVar17;
  long lVar18;
  uint uVar19;
  undefined8 *__dest;
  undefined *puVar20;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_19f;
  undefined8 uStack_197;
  undefined8 local_18f;
  undefined8 uStack_187;
  undefined8 local_17f;
  undefined8 uStack_177;
  undefined8 local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined8 uStack_127;
  byte local_11f;
  char local_11e;
  undefined *local_118 [4];
  long local_f8;
  uint local_e8;
  void *local_e0;
  int local_d8;
  undefined **local_d0;
  undefined *local_b0;
  uint local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined **ppuStack_80;
  undefined *local_78;
  undefined *puStack_70;
  
  FUN_007b142c(local_118);
  puVar1 = PTR_DAT_04bb43f8;
  puVar17 = PTR_DAT_04bb43f0;
  local_a8 = 0;
  local_a0 = 0;
  local_118[0] = PTR_DAT_04bb43f0 + 0x10;
  if (((*PTR_DAT_04bb4400 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4400), iVar10 != 0)) {
    *(undefined **)puVar1 = PTR_DAT_04bb43c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4400);
  }
  local_d0 = &PTR_LAB_04a5a8a8;
  local_b0 = puVar1;
  FUN_007b1690(local_118,1,*(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 8));
  plVar14 = (long *)PTR_DAT_04bb2698;
  if (0 < local_d8) {
    uVar19 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar20 = PTR_DAT_04bc1198;
    iVar10 = local_d8;
    do {
      uVar5 = uVar19;
      if (local_a8 <= uVar19) {
        uVar5 = 0;
      }
      if (*(long *)(local_a0 + (ulong)uVar5 * 8) != 0) {
        if ((local_f8 != 0) && ((int)uVar19 < iVar10)) {
          uVar5 = uVar19;
          if (local_e8 <= uVar19) {
            uVar5 = 0;
          }
          if (*(int *)((long)local_e0 + (ulong)uVar5 * 0x10 + 0xc) != 0) {
            FUN_00699eb4(&local_88);
            uVar11 = FUN_0069aa28(&local_88);
            if ((uVar11 & 1) != 0) {
              local_260 = &local_88;
              local_250 = &DAT_0409f795;
              local_268 = &local_98;
              local_258 = puVar1;
              uVar11 = (*(code *)**(undefined8 **)(puVar20 + 0x30))(puVar20 + 0x30,&local_268);
              if (((uVar11 & 1) != 0) && ((uint)local_98 < 10)) {
                local_1b0 = 0;
                uStack_1a8 = 0;
                local_1c0 = 0;
                uStack_1b8 = 0;
                local_1d0 = 0;
                uStack_1c8 = 0;
                local_1e0 = 0;
                uStack_1d8 = 0;
                local_1f0 = 0;
                uStack_1e8 = 0;
                local_200 = 0;
                uStack_1f8 = 0;
                local_210 = 0;
                uStack_208 = 0;
                local_220 = 0;
                uStack_218 = 0;
                local_230 = 0;
                uStack_228 = 0;
                local_240 = 0;
                uStack_238 = 0;
                local_250 = (undefined *)0x0;
                uStack_248 = 0;
                local_260 = (undefined8 **)0x0;
                local_258 = (undefined *)0x0;
                local_12f = 0;
                uStack_127 = 0;
                local_13f = 0;
                uStack_137 = 0;
                local_14f = 0;
                uStack_147 = 0;
                local_15f = 0;
                uStack_157 = 0;
                local_16f = 0;
                uStack_167 = 0;
                local_17f = 0;
                uStack_177 = 0;
                local_18f = 0;
                uStack_187 = 0;
                local_19f = 0;
                uStack_197 = 0;
                if ((local_f8 != 0) && ((int)uVar19 < local_d8)) {
                  uVar5 = uVar19;
                  if (local_e8 <= uVar19) {
                    uVar5 = 0;
                  }
                  if (*(int *)((long)local_e0 + (ulong)uVar5 * 0x10 + 0xc) != 0) {
                    uVar5 = uVar19;
                    if (local_a8 <= uVar19) {
                      uVar5 = 0;
                    }
                    FUN_00699eb4(&local_98,*(undefined8 *)(local_a0 + (ulong)uVar5 * 8));
                    uVar11 = FUN_0069aa28(&local_98);
                    puVar17 = PTR_DAT_04bc11a0;
                    if ((uVar11 & 1) != 0) {
                      local_88 = &local_268;
                      local_78 = PTR_DAT_04bb2020 + 0x10;
                      puStack_70 = &DAT_0409f795;
                      ppuStack_80 = &local_98;
                      uVar5 = (*(code *)**(undefined8 **)(PTR_DAT_04bc11a0 + 0x30))
                                        (PTR_DAT_04bc11a0 + 0x30,&local_88);
                      uVar6 = (*(code *)**(undefined8 **)(puVar17 + 0xe0))(puVar17 + 0xe0,&local_88)
                      ;
                      uVar7 = (*(code *)**(undefined8 **)(puVar17 + 400))(puVar17 + 400,&local_88);
                      uVar8 = (*(code *)**(undefined8 **)(puVar17 + 0x240))
                                        (puVar17 + 0x240,&local_88);
                      uVar9 = (*(code *)**(undefined8 **)(puVar17 + 0x2f0))
                                        (puVar17 + 0x2f0,&local_88);
                      uVar11 = (*(code *)**(undefined8 **)(puVar17 + 0x3a0))
                                         (puVar17 + 0x3a0,&local_88);
                      uVar12 = (*(code *)**(undefined8 **)(puVar17 + 0x450))
                                         (puVar17 + 0x450,&local_88);
                      uVar13 = (*(code *)**(undefined8 **)(puVar17 + 0x500))
                                         (puVar17 + 0x500,&local_88);
                      if (((((((uVar5 & 1) != 0) || ((uVar6 & 1) != 0)) || ((uVar7 & 1) != 0)) ||
                           (((uVar8 & 1) != 0 || ((uVar9 & 1) != 0)))) ||
                          (((uVar11 & 1) != 0 || (((uVar12 & 1) != 0 || ((uVar13 & 1) != 0)))))) &&
                         (uVar11 = FUN_01d86d10(&local_268), (uVar11 & 1) != 0)) {
                        lVar18 = *(long *)PTR_DAT_04bb2698;
                        if (lVar18 == 0) {
                          __ptr = malloc(0xb0);
                        }
                        else {
                          plVar14 = *(long **)(param_1 + 8);
                          if (plVar14 == (long *)0x0) {
                            lVar15 = nn::os::GetTlsValue(*(undefined4 *)
                                                          (*(long *)PTR_DAT_04bb3350 + 0x68));
                            plVar14 = (long *)(lVar18 + 8);
                            if (lVar15 != 0) {
                              plVar14 = (long *)(lVar15 + 0xa8);
                            }
                            plVar14 = (long *)*plVar14;
                            if (plVar14 == (long *)0x0) goto LAB_01d86778;
                          }
                          __ptr = (undefined4 *)(**(code **)(*plVar14 + 0x30))(plVar14,0xb0,8);
                        }
                        if (__ptr != (undefined4 *)0x0) {
                          *(undefined1 *)((long)__ptr + 0x5b) = 0;
                          __ptr[6] = 0x40;
                          __dest = (undefined8 *)(__ptr + 7);
                          *(undefined1 *)__dest = 0;
                          *(undefined8 *)(__ptr + 0x23) = 0;
                          *(undefined8 *)(__ptr + 0x28) = 0;
                          *(undefined8 *)(__ptr + 0x2a) = 0;
                          *(undefined8 *)((long)__ptr + 0x91) = 0;
                          *(undefined **)(__ptr + 2) = puVar2;
                          *(undefined8 **)(__ptr + 4) = __dest;
                          *(undefined8 *)(__ptr + 0x18) = 0x1000007b2;
                          *(undefined8 *)(__ptr + 0x1a) = 0x400000001;
                          *(undefined8 *)(__ptr + 0x1c) = 0;
                          *(undefined8 *)(__ptr + 0x1e) = 0x7b200000000;
                          *(undefined8 *)(__ptr + 0x20) = 0x100000001;
                          __ptr[0x22] = 4;
                          *__ptr = local_268._4_4_;
                          if (__dest != &local_260) {
                            lVar18 = 0;
                            do {
                              if (*(char *)((long)&local_260 + lVar18) == '\0') goto LAB_01d86b10;
                              if (*(char *)((long)&local_260 + lVar18 + 1) == '\0') {
                                lVar18 = lVar18 + 1;
                                goto LAB_01d86b10;
                              }
                              if (*(char *)((long)&local_260 + lVar18 + 2) == '\0') {
                                lVar18 = lVar18 + 2;
                                goto LAB_01d86b10;
                              }
                              lVar18 = lVar18 + 3;
                            } while (lVar18 != 0x80001);
                            lVar18 = 0;
LAB_01d86b10:
                            iVar10 = (int)lVar18;
                            if (0x3e < iVar10) {
                              iVar10 = 0x3f;
                            }
                            memcpy(__dest,&local_260,(long)iVar10);
                            *(undefined1 *)((long)__dest + (long)iVar10) = 0;
                          }
                          local_88 = (undefined8 *)0x0;
                          ppuStack_80 = (undefined **)0x0;
                          puVar17 = PTR_DAT_04bb2020 + 0x10;
                          local_98 = puVar17;
                          puStack_90 = &local_19f;
                          uVar11 = FUN_038e9c10(__ptr + 0x18,&local_88,&local_98);
                          if ((uVar11 & 1) != 0) {
                            local_98 = puVar17;
                            puStack_90 = &local_15f;
                            uVar11 = FUN_038e9c10(__ptr + 0x1f,&local_88,&local_98);
                            if ((uVar11 & 1) != 0) {
                              bVar3 = *(byte *)(__ptr + 0x26) & 0xfe | local_11f;
                              *(byte *)(__ptr + 0x26) = bVar3;
                              *(byte *)(__ptr + 0x26) = bVar3 & 0xf9 | local_11e << 1 | 4;
                              lVar18 = *(long *)(param_1 + 0x10);
                              plVar14 = (long *)((long)*(int *)(param_1 + 0x24) + (long)__ptr);
                              *(long **)(param_1 + 0x10) = plVar14;
                              *plVar14 = lVar18;
                              plVar14[1] = param_1 + 0x10;
                              if (lVar18 != 0) {
                                *(long **)(lVar18 + 8) = plVar14;
                              }
                              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                              goto LAB_01d86778;
                            }
                          }
                          if (*(long *)PTR_DAT_04bb2698 == 0) {
                            free(__ptr);
                          }
                          else {
                            plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
                            if (plVar14 != (long *)0x0) {
                              (**(code **)(*plVar14 + 0x38))(plVar14,__ptr);
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_01d86778:
                puVar17 = PTR_DAT_04bb43f0;
                plVar14 = (long *)PTR_DAT_04bb2698;
                puVar20 = PTR_DAT_04bc1198;
              }
            }
          }
        }
        iVar10 = local_d8;
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar10);
  }
  (**(code **)(local_118[0] + 0x30))(local_118);
  if (local_e0 != (void *)0x0) {
    if (*plVar14 == 0) {
      free(local_e0);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*plVar14,local_e0);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,local_e0);
      }
    }
    local_e0 = (void *)0x0;
    local_e8 = 0;
  }
  local_118[0] = puVar17 + 0x10;
  local_d8 = 0;
  local_f8 = 0;
  FUN_007b24e0(local_118);
  pvVar4 = local_e0;
  if (local_e0 != (void *)0x0) {
    if (*plVar14 == 0) {
      free(local_e0);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*plVar14,local_e0);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,pvVar4);
      }
    }
    local_e0 = (void *)0x0;
    local_e8 = 0;
  }
  local_f8 = 0;
  local_d8 = 0;
  FUN_007b1510(local_118);
  return;
}

