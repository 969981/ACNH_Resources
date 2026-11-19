
void FUN_03bb0690(long param_1,long param_2,undefined4 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  void *pvVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  char *pcVar40;
  byte *pbVar41;
  float fVar42;
  float fVar43;
  undefined *local_440;
  char *pcStack_438;
  long local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined1 local_420;
  undefined8 *local_418;
  undefined *puStack_410;
  undefined *local_408;
  long *plStack_400;
  undefined4 local_3f8;
  undefined *local_3f0;
  char *pcStack_3e8;
  int *local_3e0;
  char *local_3d8;
  undefined4 local_3d0;
  char local_3cc [255];
  undefined1 local_2cd;
  char local_2c8;
  undefined *local_2c0;
  long local_2b8;
  long *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  char *local_280;
  undefined *local_278;
  char *local_270;
  int local_268;
  char local_264 [31];
  undefined1 local_245;
  int *local_240;
  char *local_238;
  undefined8 local_230;
  undefined4 local_228;
  long *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined2 local_20c;
  undefined8 local_208;
  undefined1 local_200;
  undefined1 local_12d;
  undefined *local_128;
  char *local_120;
  int local_118;
  char local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 8);
  plVar11 = param_4;
  if (param_5 != (long *)0x0) {
    plVar11 = param_5;
  }
  if (*(long **)(param_1 + 0x10) != plVar1) {
    lVar27 = (long)*(int *)(param_1 + 0x1c);
    plVar31 = (long *)((long)*(long **)(param_1 + 0x10) - lVar27);
    lVar38 = (long)plVar31 + lVar27;
    do {
      plVar32 = (long *)((long)plVar31 + (long)*(int *)(param_1 + 0x1c));
      lVar38 = *(long *)(lVar38 + 8);
      if (*plVar32 != 0) {
        *(long *)(*plVar32 + 8) = plVar32[1];
      }
      if ((long *)plVar32[1] != (long *)0x0) {
        *(long *)plVar32[1] = *plVar32;
      }
      *plVar32 = 0;
      plVar32[1] = 0;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      FUN_03bbe3a0(plVar31);
      (**(code **)(*plVar31 + 8))(plVar31);
      plVar31 = (long *)(lVar38 - lVar27);
    } while (plVar31 != (long *)((long)plVar1 - lVar27));
  }
  plVar31 = (long *)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x30) != plVar31) {
    lVar27 = (long)*(int *)(param_1 + 0x3c);
    plVar32 = (long *)((long)*(long **)(param_1 + 0x30) - lVar27);
    lVar38 = (long)plVar32 + lVar27;
    do {
      plVar33 = (long *)((long)plVar32 + (long)*(int *)(param_1 + 0x3c));
      lVar38 = *(long *)(lVar38 + 8);
      if (*plVar33 != 0) {
        *(long *)(*plVar33 + 8) = plVar33[1];
      }
      if ((long *)plVar33[1] != (long *)0x0) {
        *(long *)plVar33[1] = *plVar33;
      }
      *plVar33 = 0;
      plVar33[1] = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if (*(long **)(param_1 + 0x10) != plVar1) {
        lVar39 = (long)*(int *)(param_1 + 0x1c);
        lVar36 = (long)*(long **)(param_1 + 0x10) - lVar39;
        do {
          FUN_03bbf760(lVar36);
          lVar36 = *(long *)(lVar36 + lVar39 + 8) - lVar39;
        } while (lVar36 != (long)plVar1 - lVar39);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar36 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar36 != 0)) &&
         (*(long *)(lVar36 + 8) != lVar36)) {
        lVar24 = (long)*(int *)(lVar36 + 0x14);
        lVar29 = *(long *)(lVar36 + 8) - lVar24;
        lVar39 = lVar29;
        do {
          lVar39 = *(long *)(lVar39 + lVar24 + 8) + -lVar24;
        } while (lVar39 != lVar36 - lVar24);
        do {
          lVar29 = *(long *)(lVar29 + lVar24 + 8) + -lVar24;
        } while (lVar29 != lVar36 - lVar24);
      }
      (**(code **)(*plVar32 + 8))(plVar32);
      plVar32 = (long *)(lVar38 - lVar27);
    } while (plVar32 != (long *)((long)plVar31 - lVar27));
  }
  plVar32 = (long *)(param_1 + 0x48);
  if (*(long **)(param_1 + 0x50) != plVar32) {
    lVar27 = (long)*(int *)(param_1 + 0x5c);
    plVar33 = (long *)((long)*(long **)(param_1 + 0x50) - lVar27);
    lVar38 = (long)plVar33 + lVar27;
    do {
      plVar34 = (long *)((long)plVar33 + (long)*(int *)(param_1 + 0x5c));
      lVar38 = *(long *)(lVar38 + 8);
      if (*plVar34 != 0) {
        *(long *)(*plVar34 + 8) = plVar34[1];
      }
      if ((long *)plVar34[1] != (long *)0x0) {
        *(long *)plVar34[1] = *plVar34;
      }
      *plVar34 = 0;
      plVar34[1] = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      if (*(long **)(param_1 + 0x10) != plVar1) {
        lVar39 = (long)*(int *)(param_1 + 0x1c);
        lVar36 = (long)*(long **)(param_1 + 0x10) - lVar39;
        do {
          FUN_03bbf760(lVar36);
          lVar36 = *(long *)(lVar36 + lVar39 + 8) - lVar39;
        } while (lVar36 != (long)plVar1 - lVar39);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar36 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar36 != 0)) &&
         (*(long *)(lVar36 + 8) != lVar36)) {
        lVar24 = (long)*(int *)(lVar36 + 0x14);
        lVar29 = *(long *)(lVar36 + 8) - lVar24;
        lVar39 = lVar29;
        do {
          lVar39 = *(long *)(lVar39 + lVar24 + 8) + -lVar24;
        } while (lVar39 != lVar36 - lVar24);
        do {
          lVar29 = *(long *)(lVar29 + lVar24 + 8) + -lVar24;
        } while (lVar29 != lVar36 - lVar24);
      }
      (**(code **)(*plVar33 + 8))(plVar33);
      plVar33 = (long *)(lVar38 - lVar27);
    } while (plVar33 != (long *)((long)plVar32 - lVar27));
  }
  plVar33 = (long *)(param_1 + 0x68);
  if (*(long **)(param_1 + 0x70) != plVar33) {
    lVar27 = (long)*(int *)(param_1 + 0x7c);
    plVar34 = (long *)((long)*(long **)(param_1 + 0x70) - lVar27);
    lVar38 = (long)plVar34 + lVar27;
    do {
      plVar19 = (long *)((long)plVar34 + (long)*(int *)(param_1 + 0x7c));
      lVar38 = *(long *)(lVar38 + 8);
      if (*plVar19 != 0) {
        *(long *)(*plVar19 + 8) = plVar19[1];
      }
      if ((long *)plVar19[1] != (long *)0x0) {
        *(long *)plVar19[1] = *plVar19;
      }
      *plVar19 = 0;
      plVar19[1] = 0;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
      if (*(long **)(param_1 + 0x10) != plVar1) {
        lVar39 = (long)*(int *)(param_1 + 0x1c);
        lVar36 = (long)*(long **)(param_1 + 0x10) - lVar39;
        do {
          FUN_03bbf760(lVar36);
          lVar36 = *(long *)(lVar36 + lVar39 + 8) - lVar39;
        } while (lVar36 != (long)plVar1 - lVar39);
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar36 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar36 != 0)) &&
         (*(long *)(lVar36 + 8) != lVar36)) {
        lVar24 = (long)*(int *)(lVar36 + 0x14);
        lVar29 = *(long *)(lVar36 + 8) - lVar24;
        lVar39 = lVar29;
        do {
          lVar39 = *(long *)(lVar39 + lVar24 + 8) + -lVar24;
        } while (lVar39 != lVar36 - lVar24);
        do {
          lVar29 = *(long *)(lVar29 + lVar24 + 8) + -lVar24;
        } while (lVar29 != lVar36 - lVar24);
      }
      (**(code **)(*plVar34 + 8))(plVar34);
      plVar34 = (long *)(lVar38 - lVar27);
    } while (plVar34 != (long *)((long)plVar33 - lVar27));
  }
  puVar3 = PTR_DAT_04bb2020;
  local_420 = 0;
  local_408 = PTR_DAT_04bb2120;
  puStack_410 = PTR_DAT_04bb2020 + 0x10;
  local_418 = &DAT_05aec030;
  local_3f8 = 0xffffffe0;
  local_430 = param_2;
  local_428 = param_3;
  uStack_424 = param_3;
  plStack_400 = plVar11;
  plVar34 = (long *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_430);
  if (((*PTR_DAT_04bb2868 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar17 != 0)) {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (plVar34 == (long *)0x0) {
    return;
  }
  uVar18 = (**(code **)*plVar34)(plVar34,PTR_DAT_04bb2860);
  if ((uVar18 & 1) == 0) {
    return;
  }
  lVar38 = *(long *)PTR_DAT_04bb2698;
  if (lVar38 == 0) {
    plVar19 = malloc(0x88);
  }
  else {
    plVar19 = plVar11;
    if (plVar11 == (long *)0x0) {
      lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar38 + 8);
      if (lVar27 != 0) {
        plVar19 = (long *)(lVar27 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        plVar19 = (long *)0x0;
        goto LAB_03bb0bc4;
      }
    }
    plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x88,0xffffffe0);
  }
LAB_03bb0bc4:
  FUN_006cd430(plVar19,plVar34);
  local_440 = puVar3 + 0x10;
  pcStack_438 = "Attenuation";
  if (((plVar19 != (long *)0x0) && ((char)plVar19[0xf] != '\0')) &&
     (uVar18 = (**(code **)(*plVar19 + 0x50))(plVar19), (uVar18 & 1) != 0)) {
    local_3e0 = (int *)(puVar3 + 0x10);
    local_290 = 0;
    local_298 = 0;
    local_2c0 = PTR_DAT_04bb2818 + 0x10;
    local_2a0 = 0;
    local_2a8 = 0;
    local_2b0 = (long *)0x0;
    local_2b8 = 0;
    local_3d8 = "/";
    if (((char)plVar19[0xf] != '\0') &&
       (local_2b8 = (**(code **)(*plVar19 + 0xd0))(plVar19,&local_2c0,&local_3e0), local_2b8 != 0))
    {
      local_3d8 = local_3cc;
      local_2cd = 0;
      local_2c8 = '\0';
      piVar2 = (int *)(PTR_DAT_04bb21f8 + 0x10);
      local_3cc[0] = '\0';
      local_3d0 = 0x100;
      local_3e0 = piVar2;
      local_2b0 = plVar19;
      if ((char)plVar19[0xf] != '\0') {
        puVar3 = puVar3 + 0x10;
        puVar4 = PTR_DAT_04bb2bc0 + 0x10;
        puVar5 = PTR_DAT_04bb2a08 + 0x10;
        puVar6 = PTR_DAT_04bb2028 + 0x10;
        plVar30 = (long *)PTR_DAT_04bc3ee8;
        do {
          uVar18 = (**(code **)(*plVar19 + 0x48))(plVar19,&local_2c0);
          if ((uVar18 & 1) == 0) {
LAB_03bb1b4c:
            if (((char)plVar19[0xf] != '\0') &&
               ((uVar18 = (**(code **)(*plVar19 + 0x48))(plVar19,&local_2c0), (uVar18 & 1) != 0 &&
                (uVar18 = (**(code **)(*plVar19 + 0xd8))(plVar19,&local_2c0), (uVar18 & 1) != 0))))
            {
              local_2b8 = 0;
              local_2b0 = (long *)0x0;
            }
            break;
          }
          local_240 = (int *)((ulong)local_240 & 0xffffffff00000000);
          uVar18 = (**(code **)(*plVar19 + 0xe0))(plVar19,&local_240,&local_2c0,&local_3e0,1);
          if (((uVar18 & 1) == 0) || ((int)local_240 != 1)) goto LAB_03bb1b4c;
          if (local_2c8 == '\0') {
            pcStack_3e8 = local_3d8;
            local_3f0 = puVar3;
            if (*plVar30 != 0) {
              lVar38 = *(long *)(*plVar30 + 0x28);
              if (lVar38 != 0) {
                local_c0 = 0x40;
                local_7d = 0;
                local_bc[0] = 0;
                local_d0 = puVar4;
                local_c8 = local_bc;
                uVar18 = FUN_038b6c10(&local_d0,&local_3f0);
                if ((uVar18 & 1) != 0) {
                  local_118 = 0x40;
                  lVar27 = 0;
                  local_d5 = 0;
                  local_128 = PTR_DAT_04bb2bc0 + 0x10;
                  local_120 = local_114;
                  local_114[0] = '.';
                  local_114[1] = '\0';
                  do {
                    if (local_114[lVar27] == '\0') goto LAB_03bb0e54;
                    if (local_114[lVar27 + 1] == '\0') {
                      lVar27 = lVar27 + 1;
                      goto LAB_03bb0e54;
                    }
                    if (local_114[lVar27 + 2] == '\0') {
                      lVar27 = lVar27 + 2;
                      goto LAB_03bb0e54;
                    }
                    lVar27 = lVar27 + 3;
                  } while (lVar27 != 0x80001);
                  lVar27 = 0;
LAB_03bb0e54:
                  uVar9 = (uint)lVar27 & ((int)(uint)lVar27 >> 0x1f ^ 0xffffffffU);
                  (**(code **)(local_d0 + 0x18))(&local_d0);
                  lVar27 = 0;
                  do {
                    if (local_c8[lVar27] == '\0') goto LAB_03bb0eb4;
                    if (local_c8[lVar27 + 1] == '\0') {
                      lVar27 = lVar27 + 1;
                      goto LAB_03bb0eb4;
                    }
                    if (local_c8[lVar27 + 2] == '\0') {
                      lVar27 = lVar27 + 2;
                      goto LAB_03bb0eb4;
                    }
                    lVar27 = lVar27 + 3;
                  } while (lVar27 != 0x80001);
                  lVar27 = 0;
LAB_03bb0eb4:
                  uVar10 = (uint)lVar27;
                  if ((int)(local_118 - uVar9) <= (int)(uint)lVar27) {
                    uVar10 = local_118 + ~uVar9;
                  }
                  if (0 < (int)uVar10) {
                    (**(code **)(local_d0 + 0x18))(&local_d0);
                    memcpy(local_114 + uVar9,local_c8,(ulong)uVar10);
                    local_114[(int)(uVar10 + uVar9)] = '\0';
                  }
                  local_12d = 0;
                  local_230 = CONCAT35(local_230._5_3_,0x100);
                  local_240 = piVar2;
                  local_238 = (char *)((long)&local_230 + 4);
                  uVar18 = FUN_038b71f0(&local_240,&local_3f0);
                  plVar30 = (long *)PTR_DAT_04bc3ee8;
                  if ((uVar18 & 1) != 0) {
                    (**(code **)(local_240 + 6))(&local_240);
                    lVar27 = 0;
                    do {
                      if (local_238[lVar27] == '\0') {
LAB_03bb0fb4:
                        if (0x1f < (int)lVar27) goto LAB_03bb0d4c;
                        break;
                      }
                      if (local_238[lVar27 + 1] == '\0') {
                        lVar27 = lVar27 + 1;
                        goto LAB_03bb0fb4;
                      }
                      if (local_238[lVar27 + 2] == '\0') {
                        lVar27 = lVar27 + 2;
                        goto LAB_03bb0fb4;
                      }
                      lVar27 = lVar27 + 3;
                    } while (lVar27 != 0x80001);
                    local_245 = 0;
                    local_268 = 0x20;
                    local_278 = puVar5;
                    local_270 = local_264;
                    (**(code **)(local_240 + 6))(&local_240);
                    pcVar40 = local_238;
                    if (local_264 != local_238) {
                      (**(code **)(local_240 + 6))(&local_240);
                      lVar27 = 0;
                      do {
                        if (local_238[lVar27] == '\0') {
LAB_03bb1050:
                          iVar17 = (int)lVar27;
                          goto LAB_03bb1054;
                        }
                        if (local_238[lVar27 + 1] == '\0') {
                          lVar27 = lVar27 + 1;
                          goto LAB_03bb1050;
                        }
                        if (local_238[lVar27 + 2] == '\0') {
                          lVar27 = lVar27 + 2;
                          goto LAB_03bb1050;
                        }
                        lVar27 = lVar27 + 3;
                      } while (lVar27 != 0x80001);
                      iVar17 = 0;
LAB_03bb1054:
                      if (local_268 <= iVar17) {
                        iVar17 = local_268 + -1;
                      }
                      memcpy(local_264,pcVar40,(long)iVar17);
                      local_264[iVar17] = '\0';
                    }
                    local_278 = puVar6;
                    (**(code **)(local_128 + 0x18))(&local_128);
                    (**(code **)(local_128 + 0x18))(&local_128);
                    if (local_120 == ".baatn") {
LAB_03bb114c:
                      if ((*local_270 != '\0') &&
                         (lVar27 = FUN_03baddf0(lVar38,&local_278), lVar27 == 0)) {
                        lVar27 = *(long *)PTR_DAT_04bb2698;
                        if (lVar27 == 0) {
                          pvVar21 = malloc(0x170);
                        }
                        else {
                          plVar30 = param_4;
                          if (param_4 == (long *)0x0) {
                            lVar36 = nn::os::GetTlsValue(*(undefined4 *)
                                                          (*(long *)PTR_DAT_04bb3350 + 0x68));
                            plVar30 = (long *)(lVar27 + 8);
                            if (lVar36 != 0) {
                              plVar30 = (long *)(lVar36 + 0xa8);
                            }
                            plVar30 = (long *)*plVar30;
                            if (plVar30 == (long *)0x0) goto LAB_03bb0d38;
                          }
                          pvVar21 = (void *)(**(code **)(*plVar30 + 0x30))(plVar30,0x170,8);
                        }
                        if (pvVar21 != (void *)0x0) {
                          FUN_03bbe490(pvVar21,&local_278);
                          uVar18 = FUN_03bbdecc(pvVar21,param_4);
                          if ((uVar18 & 1) != 0) {
                            plVar23 = (long *)(lVar38 + 8);
                            lVar27 = *plVar23;
                            plVar30 = (long *)((long)*(int *)(lVar38 + 0x1c) + (long)pvVar21);
                            *plVar23 = (long)plVar30;
                            *plVar30 = lVar27;
                            plVar30[1] = (long)plVar23;
                            if (lVar27 != 0) {
                              *(long **)(lVar27 + 8) = plVar30;
                            }
                            *(int *)(lVar38 + 0x18) = *(int *)(lVar38 + 0x18) + 1;
                            if (((*(long *)(lVar38 + 0x20) != 0) &&
                                (lVar27 = *(long *)(*(long *)(lVar38 + 0x20) + 8), lVar27 != 0)) &&
                               (*(long *)(lVar27 + 8) != lVar27)) {
                              lVar29 = (long)*(int *)(lVar27 + 0x14);
                              lVar39 = *(long *)(lVar27 + 8) - lVar29;
                              lVar36 = lVar39;
                              do {
                                lVar36 = *(long *)(lVar36 + lVar29 + 8) + -lVar29;
                              } while (lVar36 != lVar27 - lVar29);
                              do {
                                lVar39 = *(long *)(lVar39 + lVar29 + 8) + -lVar29;
                              } while (lVar39 != lVar27 - lVar29);
                            }
                            if (*(long *)(lVar38 + 0x90) != 0) {
                              uVar20 = FUN_03baddf0(lVar38);
                              *(undefined8 *)(lVar38 + 0x88) = uVar20;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar18 = 0;
                      bVar15 = true;
                      do {
                        if (local_120[uVar18] != (&DAT_040f1cd4)[uVar18]) break;
                        if (local_120[uVar18] == '\0') {
                          if (bVar15) goto LAB_03bb114c;
                          break;
                        }
                        if (local_120[uVar18 + 1] != (&DAT_040f1cd5)[uVar18]) break;
                        if (local_120[uVar18 + 1] == '\0') goto LAB_03bb114c;
                        if (local_120[uVar18 + 2] != (&DAT_040f1cd6)[uVar18]) break;
                        if (local_120[uVar18 + 2] == '\0') goto LAB_03bb114c;
                        bVar15 = uVar18 < 0x7fffe;
                        uVar18 = uVar18 + 3;
                      } while (uVar18 != 0x80001);
                      (**(code **)(local_128 + 0x18))(&local_128);
                      (**(code **)(local_128 + 0x18))(&local_128);
                      puVar7 = PTR_DAT_04bb2020;
                      if (local_120 == ".baroc") {
LAB_03bb1368:
                        if (*local_270 != '\0') {
                          lVar27 = lVar38 + 0x28;
                          if (*(long *)(lVar38 + 0x30) != lVar27) {
                            lVar39 = (long)*(int *)(lVar38 + 0x3c);
                            lVar36 = *(long *)(lVar38 + 0x30) - lVar39;
                            do {
                              plVar30 = (long *)(lVar36 + 8);
                              (**(code **)(*plVar30 + 0x18))(plVar30);
                              (**(code **)(*plVar30 + 0x18))(plVar30);
                              pcVar40 = *(char **)(lVar36 + 0x10);
                              (**(code **)(local_278 + 0x18))(&local_278);
                              if (pcVar40 == local_270) goto LAB_03bb0d38;
                              uVar18 = 0;
                              bVar15 = true;
                              lVar29 = *(long *)(lVar36 + 0x10) + 1;
                              do {
                                lVar24 = lVar29 + uVar18;
                                cVar14 = *(char *)(lVar24 + -1);
                                if (cVar14 != local_270[uVar18]) break;
                                if (cVar14 == '\0') {
                                  if (bVar15) {
LAB_03bb1540:
                                    if (lVar36 == 0) goto LAB_03bb1544;
                                    goto LAB_03bb0d38;
                                  }
                                  break;
                                }
                                cVar14 = *(char *)(lVar29 + uVar18);
                                if (cVar14 != local_270[uVar18 + 1]) break;
                                if (cVar14 == '\0') goto LAB_03bb1540;
                                cVar14 = *(char *)(lVar24 + 1);
                                if (cVar14 != local_270[uVar18 + 2]) break;
                                if (cVar14 == '\0') goto LAB_03bb1540;
                                bVar15 = uVar18 < 0x7fffe;
                                uVar18 = uVar18 + 3;
                              } while (uVar18 != 0x80001);
                              lVar36 = *(long *)(lVar36 + lVar39 + 8) - lVar39;
                            } while (lVar36 != lVar27 - lVar39);
                          }
LAB_03bb1544:
                          lVar36 = *(long *)PTR_DAT_04bb2698;
                          if (lVar36 == 0) {
                            pvVar21 = malloc(0x110);
                          }
                          else {
                            plVar30 = param_4;
                            if (param_4 == (long *)0x0) {
                              lVar39 = nn::os::GetTlsValue(*(undefined4 *)
                                                            (*(long *)PTR_DAT_04bb3350 + 0x68));
                              plVar30 = (long *)(lVar36 + 8);
                              if (lVar39 != 0) {
                                plVar30 = (long *)(lVar39 + 0xa8);
                              }
                              plVar30 = (long *)*plVar30;
                              if (plVar30 == (long *)0x0) goto LAB_03bb0d38;
                            }
                            pvVar21 = (void *)(**(code **)(*plVar30 + 0x30))(plVar30,0x110,8);
                          }
                          if (pvVar21 != (void *)0x0) {
                            FUN_03bb43e0(pvVar21,&local_278);
                            lVar36 = *(long *)(lVar38 + 0x28);
                            plVar30 = (long *)((long)*(int *)(lVar38 + 0x3c) + (long)pvVar21);
                            *(long **)(lVar38 + 0x28) = plVar30;
                            *plVar30 = lVar36;
                            plVar30[1] = lVar27;
                            if (lVar36 != 0) {
                              *(long **)(lVar36 + 8) = plVar30;
                            }
                            *(int *)(lVar38 + 0x38) = *(int *)(lVar38 + 0x38) + 1;
                            if (*(long *)(lVar38 + 0x10) != lVar38 + 8) {
                              lVar36 = (long)*(int *)(lVar38 + 0x1c);
                              lVar27 = *(long *)(lVar38 + 0x10) - lVar36;
                              do {
                                FUN_03bbf760(lVar27);
                                lVar27 = *(long *)(lVar27 + lVar36 + 8) - lVar36;
                              } while (lVar27 != (lVar38 + 8) - lVar36);
                            }
                            if (((*(long *)(lVar38 + 0x20) != 0) &&
                                (lVar27 = *(long *)(*(long *)(lVar38 + 0x20) + 8), lVar27 != 0)) &&
                               (*(long *)(lVar27 + 8) != lVar27)) {
                              lVar29 = (long)*(int *)(lVar27 + 0x14);
                              lVar39 = *(long *)(lVar27 + 8) - lVar29;
                              lVar36 = lVar39;
                              do {
                                lVar36 = *(long *)(lVar36 + lVar29 + 8) + -lVar29;
                              } while (lVar36 != lVar27 - lVar29);
                              do {
                                lVar39 = *(long *)(lVar39 + lVar29 + 8) + -lVar29;
                              } while (lVar39 != lVar27 - lVar29);
                            }
                            if (((*(long *)(lVar38 + 0x40) != 0) &&
                                (lVar38 = *(long *)(*(long *)(lVar38 + 0x40) + 8), lVar38 != 0)) &&
                               (*(long *)(lVar38 + 8) != lVar38)) {
                              lVar39 = (long)*(int *)(lVar38 + 0x14);
                              lVar36 = *(long *)(lVar38 + 8) - lVar39;
                              lVar27 = lVar36;
                              do {
                                lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
                              } while (lVar27 != lVar38 - lVar39);
                              do {
                                lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
                              } while (lVar36 != lVar38 - lVar39);
                            }
                          }
                        }
                      }
                      else {
                        uVar18 = 0;
                        bVar15 = true;
                        do {
                          if (local_120[uVar18] != (&DAT_040c790c)[uVar18]) break;
                          if (local_120[uVar18] == '\0') {
                            if (bVar15) goto LAB_03bb1368;
                            break;
                          }
                          if (local_120[uVar18 + 1] != (&DAT_040c790d)[uVar18]) break;
                          if (local_120[uVar18 + 1] == '\0') goto LAB_03bb1368;
                          if (local_120[uVar18 + 2] != (&DAT_040c790e)[uVar18]) break;
                          if (local_120[uVar18 + 2] == '\0') goto LAB_03bb1368;
                          bVar15 = uVar18 < 0x7fffe;
                          uVar18 = uVar18 + 3;
                        } while (uVar18 != 0x80001);
                        (**(code **)(local_128 + 0x18))(&local_128);
                        (**(code **)(local_128 + 0x18))(&local_128);
                        if (local_120 == ".bactc") {
LAB_03bb170c:
                          if (*local_270 != '\0') {
                            lVar27 = lVar38 + 0x28;
                            if (*(long *)(lVar38 + 0x30) != lVar27) {
                              lVar39 = (long)*(int *)(lVar38 + 0x3c);
                              lVar36 = *(long *)(lVar38 + 0x30) - lVar39;
                              do {
                                plVar30 = (long *)(lVar36 + 8);
                                (**(code **)(*plVar30 + 0x18))(plVar30);
                                (**(code **)(*plVar30 + 0x18))(plVar30);
                                pcVar40 = *(char **)(lVar36 + 0x10);
                                (**(code **)(local_278 + 0x18))(&local_278);
                                if (pcVar40 == local_270) goto LAB_03bb0d38;
                                uVar18 = 0;
                                bVar15 = true;
                                lVar29 = *(long *)(lVar36 + 0x10) + 1;
                                do {
                                  lVar24 = lVar29 + uVar18;
                                  cVar14 = *(char *)(lVar24 + -1);
                                  if (cVar14 != local_270[uVar18]) break;
                                  if (cVar14 == '\0') {
                                    if (bVar15) {
LAB_03bb1944:
                                      if (lVar36 == 0) goto LAB_03bb1948;
                                      goto LAB_03bb0d38;
                                    }
                                    break;
                                  }
                                  cVar14 = *(char *)(lVar29 + uVar18);
                                  if (cVar14 != local_270[uVar18 + 1]) break;
                                  if (cVar14 == '\0') goto LAB_03bb1944;
                                  cVar14 = *(char *)(lVar24 + 1);
                                  if (cVar14 != local_270[uVar18 + 2]) break;
                                  if (cVar14 == '\0') goto LAB_03bb1944;
                                  bVar15 = uVar18 < 0x7fffe;
                                  uVar18 = uVar18 + 3;
                                } while (uVar18 != 0x80001);
                                lVar36 = *(long *)(lVar36 + lVar39 + 8) - lVar39;
                              } while (lVar36 != lVar27 - lVar39);
                            }
LAB_03bb1948:
                            lVar36 = *(long *)PTR_DAT_04bb2698;
                            if (lVar36 == 0) {
                              pvVar21 = malloc(0x110);
                            }
                            else {
                              plVar30 = param_4;
                              if (param_4 == (long *)0x0) {
                                lVar39 = nn::os::GetTlsValue(*(undefined4 *)
                                                              (*(long *)PTR_DAT_04bb3350 + 0x68));
                                plVar30 = (long *)(lVar36 + 8);
                                if (lVar39 != 0) {
                                  plVar30 = (long *)(lVar39 + 0xa8);
                                }
                                plVar30 = (long *)*plVar30;
                                if (plVar30 == (long *)0x0) goto LAB_03bb0d38;
                              }
                              pvVar21 = (void *)(**(code **)(*plVar30 + 0x30))(plVar30,0x110,8);
                            }
                            if (pvVar21 != (void *)0x0) {
                              FUN_03b74160(pvVar21,&local_278);
                              lVar36 = *(long *)(lVar38 + 0x28);
                              plVar30 = (long *)((long)*(int *)(lVar38 + 0x3c) + (long)pvVar21);
                              *(long **)(lVar38 + 0x28) = plVar30;
                              *plVar30 = lVar36;
                              plVar30[1] = lVar27;
                              if (lVar36 != 0) {
                                *(long **)(lVar36 + 8) = plVar30;
                              }
                              *(int *)(lVar38 + 0x38) = *(int *)(lVar38 + 0x38) + 1;
                              if (*(long *)(lVar38 + 0x10) != lVar38 + 8) {
                                lVar36 = (long)*(int *)(lVar38 + 0x1c);
                                lVar27 = *(long *)(lVar38 + 0x10) - lVar36;
                                do {
                                  FUN_03bbf760(lVar27);
                                  lVar27 = *(long *)(lVar27 + lVar36 + 8) - lVar36;
                                } while (lVar27 != (lVar38 + 8) - lVar36);
                              }
                              if (((*(long *)(lVar38 + 0x20) != 0) &&
                                  (lVar27 = *(long *)(*(long *)(lVar38 + 0x20) + 8), lVar27 != 0))
                                 && (*(long *)(lVar27 + 8) != lVar27)) {
                                lVar29 = (long)*(int *)(lVar27 + 0x14);
                                lVar39 = *(long *)(lVar27 + 8) - lVar29;
                                lVar36 = lVar39;
                                do {
                                  lVar36 = *(long *)(lVar36 + lVar29 + 8) + -lVar29;
                                } while (lVar36 != lVar27 - lVar29);
                                do {
                                  lVar39 = *(long *)(lVar39 + lVar29 + 8) + -lVar29;
                                } while (lVar39 != lVar27 - lVar29);
                              }
                              if (((*(long *)(lVar38 + 0x40) != 0) &&
                                  (lVar38 = *(long *)(*(long *)(lVar38 + 0x40) + 8), lVar38 != 0))
                                 && (*(long *)(lVar38 + 8) != lVar38)) {
                                lVar39 = (long)*(int *)(lVar38 + 0x14);
                                lVar36 = *(long *)(lVar38 + 8) - lVar39;
                                lVar27 = lVar36;
                                do {
                                  lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
                                } while (lVar27 != lVar38 - lVar39);
                                do {
                                  lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
                                } while (lVar36 != lVar38 - lVar39);
                              }
                            }
                          }
                        }
                        else {
                          uVar18 = 0;
                          bVar15 = true;
                          do {
                            if (local_120[uVar18] != (&DAT_0406a032)[uVar18]) break;
                            if (local_120[uVar18] == '\0') {
                              if (bVar15) goto LAB_03bb170c;
                              break;
                            }
                            if (local_120[uVar18 + 1] != (&DAT_0406a033)[uVar18]) break;
                            if (local_120[uVar18 + 1] == '\0') goto LAB_03bb170c;
                            if (local_120[uVar18 + 2] != (&DAT_0406a034)[uVar18]) break;
                            if (local_120[uVar18 + 2] == '\0') goto LAB_03bb170c;
                            bVar15 = uVar18 < 0x7fffe;
                            uVar18 = uVar18 + 3;
                          } while (uVar18 != 0x80001);
                          local_288 = puVar7 + 0x10;
                          local_280 = ".baudc";
                          (**(code **)(local_128 + 0x18))(&local_128);
                          (**(code **)(local_128 + 0x18))(&local_128);
                          pcVar40 = local_120;
                          (**(code **)(local_288 + 0x18))(&local_288);
                          if (pcVar40 != local_280) {
                            if (*local_120 != *local_280) {
LAB_03bb1814:
                              puVar7 = PTR_DAT_04bb2020 + 0x10;
                              local_280 = ".baadr";
                              local_288 = puVar7;
                              uVar18 = FUN_00710cb0(&local_128,&local_288);
                              if ((uVar18 & 1) == 0) {
                                local_280 = ".baacl";
                                local_288 = puVar7;
                                uVar18 = FUN_00710cb0(&local_128,&local_288);
                                if ((uVar18 & 1) != 0) {
                                  FUN_03bb3730(lVar38,&local_278,param_4);
                                }
                              }
                              else {
                                FUN_03bb3320(lVar38,&local_278,param_4);
                              }
                              goto LAB_03bb0d38;
                            }
                            if (*local_120 != '\0') {
                              lVar27 = 0x7fffe;
                              pcVar28 = local_120;
                              pcVar40 = local_280;
                              do {
                                if (pcVar28[1] != pcVar40[1]) goto LAB_03bb1814;
                                if (pcVar28[1] == '\0') break;
                                if (pcVar28[2] != pcVar40[2]) goto LAB_03bb1814;
                                if (pcVar28[2] == '\0') break;
                                if ((lVar27 == 0) || (cVar14 = pcVar28[3], cVar14 != pcVar40[3]))
                                goto LAB_03bb1814;
                                lVar27 = lVar27 + -3;
                                pcVar28 = pcVar28 + 3;
                                pcVar40 = pcVar40 + 3;
                              } while (cVar14 != '\0');
                            }
                          }
                          FUN_03bb3010(lVar38,&local_278,param_4);
                        }
                      }
                    }
LAB_03bb0d38:
                    plVar30 = (long *)PTR_DAT_04bc3ee8;
                  }
                }
              }
            }
          }
LAB_03bb0d4c:
        } while ((char)plVar19[0xf] != '\0');
      }
      if ((1 < *(int *)(param_1 + 0x18)) &&
         (plVar30 = *(long **)(*(long *)(param_1 + 0x10) + 8), plVar30 != plVar1)) {
        lVar38 = -(long)*(int *)(param_1 + 0x1c);
LAB_03bb1bc0:
        plVar23 = (long *)*plVar30;
        plVar12 = (long *)plVar30[1];
        plVar35 = (long *)((long)plVar23 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
        plVar35 = (long *)((long)plVar30 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
        if (pbVar41 != pbVar25) {
          pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
          lVar27 = 0x7ffff;
          do {
            bVar13 = *pbVar41;
            if (bVar13 != *pbVar25) {
              if (*pbVar25 <= bVar13) goto LAB_03bb1c48;
              break;
            }
            if (bVar13 == 0) break;
            bVar15 = lVar27 != 0;
            pbVar25 = pbVar25 + 1;
            pbVar41 = pbVar41 + 1;
            lVar27 = lVar27 + -1;
          } while (bVar15);
        }
        goto LAB_03bb1bb4;
      }
LAB_03bb1d10:
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar38 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar38 != 0)) &&
         (*(long *)(lVar38 + 8) != lVar38)) {
        lVar39 = (long)*(int *)(lVar38 + 0x14);
        lVar36 = *(long *)(lVar38 + 8) - lVar39;
        lVar27 = lVar36;
        do {
          lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
        } while (lVar27 != lVar38 - lVar39);
        do {
          lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
        } while (lVar36 != lVar38 - lVar39);
      }
      if ((1 < *(int *)(param_1 + 0x38)) &&
         (plVar30 = *(long **)(*(long *)(param_1 + 0x30) + 8), plVar30 != plVar31)) {
        lVar38 = -(long)*(int *)(param_1 + 0x3c);
LAB_03bb1da4:
        plVar23 = (long *)*plVar30;
        plVar12 = (long *)plVar30[1];
        plVar35 = (long *)((long)plVar23 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
        plVar35 = (long *)((long)plVar30 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
        if (pbVar41 != pbVar25) {
          pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
          lVar27 = 0x7ffff;
          do {
            bVar13 = *pbVar41;
            if (bVar13 != *pbVar25) {
              if (*pbVar25 <= bVar13) goto LAB_03bb1e28;
              break;
            }
            if (bVar13 == 0) break;
            bVar15 = lVar27 != 0;
            pbVar25 = pbVar25 + 1;
            pbVar41 = pbVar41 + 1;
            lVar27 = lVar27 + -1;
          } while (bVar15);
        }
        goto LAB_03bb1d94;
      }
LAB_03bb1efc:
      if (((*(long *)(param_1 + 0x40) != 0) &&
          (lVar38 = *(long *)(*(long *)(param_1 + 0x40) + 8), lVar38 != 0)) &&
         (*(long *)(lVar38 + 8) != lVar38)) {
        lVar39 = (long)*(int *)(lVar38 + 0x14);
        lVar36 = *(long *)(lVar38 + 8) - lVar39;
        lVar27 = lVar36;
        do {
          lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
        } while (lVar27 != lVar38 - lVar39);
        do {
          lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
        } while (lVar36 != lVar38 - lVar39);
      }
      if ((1 < *(int *)(param_1 + 0x58)) &&
         (plVar30 = *(long **)(*(long *)(param_1 + 0x50) + 8), plVar30 != plVar32)) {
        lVar38 = -(long)*(int *)(param_1 + 0x5c);
LAB_03bb1f90:
        plVar23 = (long *)*plVar30;
        plVar12 = (long *)plVar30[1];
        plVar35 = (long *)((long)plVar23 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
        plVar35 = (long *)((long)plVar30 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
        if (pbVar41 != pbVar25) {
          pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
          lVar27 = 0x7ffff;
          do {
            bVar13 = *pbVar41;
            if (bVar13 != *pbVar25) {
              if (*pbVar25 <= bVar13) goto LAB_03bb2018;
              break;
            }
            if (bVar13 == 0) break;
            bVar15 = lVar27 != 0;
            pbVar25 = pbVar25 + 1;
            pbVar41 = pbVar41 + 1;
            lVar27 = lVar27 + -1;
          } while (bVar15);
        }
        goto LAB_03bb1f80;
      }
LAB_03bb20ec:
      if (((*(long *)(param_1 + 0x60) != 0) &&
          (lVar38 = *(long *)(*(long *)(param_1 + 0x60) + 8), lVar38 != 0)) &&
         (*(long *)(lVar38 + 8) != lVar38)) {
        lVar39 = (long)*(int *)(lVar38 + 0x14);
        lVar36 = *(long *)(lVar38 + 8) - lVar39;
        lVar27 = lVar36;
        do {
          lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
        } while (lVar27 != lVar38 - lVar39);
        do {
          lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
        } while (lVar36 != lVar38 - lVar39);
      }
      if ((1 < *(int *)(param_1 + 0x78)) &&
         (plVar30 = *(long **)(*(long *)(param_1 + 0x70) + 8), plVar30 != plVar33)) {
        lVar38 = -(long)*(int *)(param_1 + 0x7c);
LAB_03bb2180:
        plVar23 = (long *)*plVar30;
        plVar12 = (long *)plVar30[1];
        plVar35 = (long *)((long)plVar23 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
        plVar35 = (long *)((long)plVar30 + lVar38 + 8);
        (**(code **)(*plVar35 + 0x18))(plVar35);
        pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
        if (pbVar41 != pbVar25) {
          pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
          lVar27 = 0x7ffff;
          do {
            bVar13 = *pbVar41;
            if (bVar13 != *pbVar25) {
              if (*pbVar25 <= bVar13) goto LAB_03bb2208;
              break;
            }
            if (bVar13 == 0) break;
            bVar15 = lVar27 != 0;
            pbVar25 = pbVar25 + 1;
            pbVar41 = pbVar41 + 1;
            lVar27 = lVar27 + -1;
          } while (bVar15);
        }
        goto LAB_03bb2170;
      }
LAB_03bb22dc:
      if (((*(long *)(param_1 + 0x80) != 0) &&
          (lVar38 = *(long *)(*(long *)(param_1 + 0x80) + 8), lVar38 != 0)) &&
         (*(long *)(lVar38 + 8) != lVar38)) {
        lVar39 = (long)*(int *)(lVar38 + 0x14);
        lVar36 = *(long *)(lVar38 + 8) - lVar39;
        lVar27 = lVar36;
        do {
          lVar27 = *(long *)(lVar27 + lVar39 + 8) + -lVar39;
        } while (lVar27 != lVar38 - lVar39);
        do {
          lVar36 = *(long *)(lVar36 + lVar39 + 8) + -lVar39;
        } while (lVar36 != lVar38 - lVar39);
      }
      if (*(long **)(param_1 + 0x30) != plVar31) {
        lVar38 = (long)*(int *)(param_1 + 0x3c);
        plVar30 = (long *)((long)*(long **)(param_1 + 0x30) - lVar38);
        puVar3 = PTR_DAT_04bc3e30 + 0x10;
        piVar2 = (int *)(PTR_DAT_04bb21f8 + 0x10);
        piVar8 = (int *)(PTR_DAT_04bb2020 + 0x10);
        do {
          if (((*PTR_DAT_04bc3e50 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_04bc3e50), iVar17 != 0)) {
            *(undefined **)PTR_DAT_04bc3e48 = puVar3;
            __cxa_guard_release(PTR_DAT_04bc3e50);
          }
          if ((plVar30 == (long *)0x0) ||
             (uVar18 = (**(code **)(*plVar30 + 0x18))(plVar30,PTR_DAT_04bc3e48), (uVar18 & 1) == 0))
          {
            if (((*PTR_DAT_04bd20a8 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_04bd20a8), iVar17 != 0)) {
              *(undefined **)PTR_DAT_04bd20a0 = PTR_DAT_04bc3e30 + 0x10;
              __cxa_guard_release(PTR_DAT_04bd20a8);
            }
            if ((plVar30 == (long *)0x0) ||
               (uVar18 = (**(code **)(*plVar30 + 0x18))(plVar30,PTR_DAT_04bd20a0), (uVar18 & 1) == 0
               )) {
              if (((*PTR_DAT_04bc3e28 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04bc3e28), iVar17 != 0)) {
                *(undefined **)PTR_DAT_04bc3e20 = PTR_DAT_04bc3e30 + 0x10;
                __cxa_guard_release(PTR_DAT_04bc3e28);
              }
              if (plVar30 != (long *)0x0) {
                uVar18 = (**(code **)(*plVar30 + 0x18))(plVar30,PTR_DAT_04bc3e20);
                if ((uVar18 & 1) != 0) {
                  local_3d0 = 0x100;
                  local_2cd = 0;
                  local_3cc[0] = '\0';
                  local_238 = ".baudc";
                  local_3e0 = piVar2;
                  local_3d8 = local_3cc;
                  local_240 = piVar8;
                  FUN_03bb2e90(&local_3e0,&local_440,plVar30 + 1,&local_240);
                  local_230 = 0;
                  local_20c = 0x101;
                  local_228 = 0;
                  local_210 = 0;
                  local_208 = 0;
                  local_200 = 0;
                  local_218 = 0xffffffe0;
                  local_238 = local_3d8;
                  local_240 = piVar8;
                  local_220 = plVar11;
                  if ((char)plVar19[0xf] != '\0') {
                    piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
                    if (piVar22 != (int *)0x0) {
                      local_240 = (int *)0x0;
                      if ((*piVar22 == 0x43445541) &&
                         ((((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                           ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)) &&
                          (*(short *)((long)piVar22 + 6) == 1)))) {
                        local_240 = piVar22;
                      }
                      FUN_03bb99b8(plVar30,&local_240,param_4);
                      goto LAB_03bb2778;
                    }
                  }
                }
              }
            }
            else {
              local_2cd = 0;
              local_3d0 = 0x100;
              local_3cc[0] = '\0';
              local_3e0 = (int *)(PTR_DAT_04bb21f8 + 0x10);
              piVar22 = (int *)(PTR_DAT_04bb2020 + 0x10);
              local_238 = ".bactc";
              local_3d8 = local_3cc;
              local_240 = piVar22;
              FUN_03bb2e90(&local_3e0,&local_440,plVar30 + 1,&local_240);
              local_230 = 0;
              local_20c = 0x101;
              local_228 = 0;
              local_210 = 0;
              local_208 = 0;
              local_200 = 0;
              local_218 = 0xffffffe0;
              local_238 = local_3d8;
              local_240 = piVar22;
              local_220 = plVar11;
              if ((char)plVar19[0xf] != '\0') {
                piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
                if (piVar22 != (int *)0x0) {
                  local_240 = (int *)0x0;
                  if (((*piVar22 == 0x43544341) &&
                      (((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                       ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)))) &&
                     (*(short *)((long)piVar22 + 6) == 1)) {
                    local_240 = piVar22;
                  }
                  FUN_03b744d0(plVar30,&local_240,param_4);
                  goto LAB_03bb2778;
                }
              }
            }
          }
          else {
            local_2cd = 0;
            local_3d0 = 0x100;
            local_3cc[0] = '\0';
            local_3e0 = (int *)(PTR_DAT_04bb21f8 + 0x10);
            piVar22 = (int *)(PTR_DAT_04bb2020 + 0x10);
            local_238 = ".baroc";
            local_3d8 = local_3cc;
            local_240 = piVar22;
            FUN_03bb2e90(&local_3e0,&local_440,plVar30 + 1,&local_240);
            local_230 = 0;
            local_20c = 0x101;
            local_228 = 0;
            local_210 = 0;
            local_208 = 0;
            local_200 = 0;
            local_218 = 0xffffffe0;
            local_238 = local_3d8;
            local_240 = piVar22;
            local_220 = plVar11;
            if ((char)plVar19[0xf] != '\0') {
              piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
              if (piVar22 != (int *)0x0) {
                local_240 = (int *)0x0;
                uVar18 = (ulong)local_238 >> 8;
                local_238 = (char *)((ulong)local_238 & 0xffffffffffffff00);
                if ((*piVar22 == 0x434f5241) &&
                   (((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                    ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)))) {
                  if (*(short *)((long)piVar22 + 6) != 2) {
                    if (*(short *)((long)piVar22 + 6) != 1) goto LAB_03bb2500;
                    local_238 = (char *)CONCAT71((int7)uVar18,1);
                  }
                  local_240 = piVar22;
                }
LAB_03bb2500:
                FUN_03bb489c(plVar30,&local_240,param_4);
LAB_03bb2778:
                if (*(long *)PTR_DAT_04bb2698 == 0) {
                  free(piVar22);
                }
                else {
                  plVar23 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,piVar22);
                  if (plVar23 != (long *)0x0) {
                    (**(code **)(*plVar23 + 0x38))(plVar23,piVar22);
                  }
                }
              }
            }
          }
          plVar30 = (long *)(*(long *)((long)plVar30 + lVar38 + 8) - lVar38);
        } while (plVar30 != (long *)((long)plVar31 - lVar38));
      }
      if (*(long **)(param_1 + 0x50) != plVar32) {
        lVar27 = (long)*(int *)(param_1 + 0x5c);
        lVar38 = (long)*(long **)(param_1 + 0x50) - lVar27;
        piVar2 = (int *)(PTR_DAT_04bb21f8 + 0x10);
        piVar8 = (int *)(PTR_DAT_04bb2020 + 0x10);
        do {
          local_3d0 = 0x100;
          local_2cd = 0;
          local_3cc[0] = '\0';
          local_238 = ".baadr";
          local_3e0 = piVar2;
          local_3d8 = local_3cc;
          local_240 = piVar8;
          FUN_03bb2e90(&local_3e0,&local_440,lVar38 + 8,&local_240);
          local_20c = 0x101;
          local_230 = 0;
          local_228 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_218 = 0xffffffe0;
          local_238 = local_3d8;
          local_240 = piVar8;
          local_220 = plVar11;
          if ((char)plVar19[0xf] != '\0') {
            piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
            if (piVar22 != (int *)0x0) {
              if ((*piVar22 == 0x52444141) &&
                 ((((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                   ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)) &&
                  (*(short *)((long)piVar22 + 6) == 1)))) {
                fVar42 = (float)piVar22[2];
                if ((0.0 <= fVar42) && (fVar42 <= 180.0)) {
                  *(float *)(lVar38 + 0x50) = fVar42;
                }
                fVar42 = (float)piVar22[3];
                if ((0.0 <= fVar42) && (fVar42 <= 180.0)) {
                  *(float *)(lVar38 + 0x54) = fVar42;
                }
                fVar42 = (float)piVar22[4];
                if ((0.0 <= fVar42) && (fVar42 <= 1.0)) {
                  *(float *)(lVar38 + 0x58) = fVar42;
                }
                fVar42 = (float)piVar22[5];
                if ((0.0 <= fVar42) && (fVar42 <= 1.0)) {
                  *(float *)(lVar38 + 0x5c) = fVar42;
                }
              }
              if (*(long *)PTR_DAT_04bb2698 == 0) {
                free(piVar22);
              }
              else {
                plVar31 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,piVar22);
                if (plVar31 != (long *)0x0) {
                  (**(code **)(*plVar31 + 0x38))(plVar31,piVar22);
                }
              }
            }
          }
          lVar38 = *(long *)(lVar38 + lVar27 + 8) - lVar27;
        } while (lVar38 != (long)plVar32 - lVar27);
      }
      if (*(long **)(param_1 + 0x70) != plVar33) {
        lVar27 = (long)*(int *)(param_1 + 0x7c);
        lVar38 = (long)*(long **)(param_1 + 0x70) - lVar27;
        piVar2 = (int *)(PTR_DAT_04bb21f8 + 0x10);
        piVar8 = (int *)(PTR_DAT_04bb2020 + 0x10);
        do {
          local_3d0 = 0x100;
          local_2cd = 0;
          local_3cc[0] = '\0';
          local_238 = ".baacl";
          local_3e0 = piVar2;
          local_3d8 = local_3cc;
          local_240 = piVar8;
          FUN_03bb2e90(&local_3e0,&local_440,lVar38 + 8,&local_240);
          local_20c = 0x101;
          local_230 = 0;
          local_228 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_218 = 0xffffffe0;
          local_238 = local_3d8;
          local_240 = piVar8;
          local_220 = plVar11;
          if ((char)plVar19[0xf] != '\0') {
            piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
            if (piVar22 != (int *)0x0) {
              if ((*piVar22 == 0x4c434141) &&
                 (((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                  ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)))) {
                if (*(short *)((long)piVar22 + 6) == 2) {
                  bVar15 = true;
                }
                else {
                  if (*(short *)((long)piVar22 + 6) != 1) goto LAB_03bb2c10;
                  bVar15 = false;
                }
                fVar42 = (float)piVar22[2];
                if (0.0 <= fVar42) {
                  fVar43 = *(float *)(lVar38 + 0x54);
                  *(float *)(lVar38 + 0x50) = fVar42;
                  if (fVar42 < fVar43) {
                    *(float *)(lVar38 + 0x50) = fVar43;
                    fVar42 = fVar43;
                  }
                  *(float *)(lVar38 + 0x70) = fVar42 - fVar43;
                }
                fVar42 = (float)piVar22[3];
                if (0.0 <= fVar42) {
                  *(float *)(lVar38 + 0x54) = fVar42;
                  fVar43 = *(float *)(lVar38 + 0x50);
                  if (*(float *)(lVar38 + 0x50) < fVar42) {
                    *(float *)(lVar38 + 0x50) = fVar42;
                    fVar43 = fVar42;
                  }
                  *(float *)(lVar38 + 0x70) = fVar43 - fVar42;
                }
                bVar16 = false;
                if (bVar15) {
                  bVar16 = (char)piVar22[4] != '\0';
                }
                *(bool *)(lVar38 + 0x58) = bVar16;
              }
LAB_03bb2c10:
              if (*(long *)PTR_DAT_04bb2698 == 0) {
                free(piVar22);
              }
              else {
                plVar31 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,piVar22);
                if (plVar31 != (long *)0x0) {
                  (**(code **)(*plVar31 + 0x38))(plVar31,piVar22);
                }
              }
            }
          }
          lVar38 = *(long *)(lVar38 + lVar27 + 8) - lVar27;
        } while (lVar38 != (long)plVar33 - lVar27);
      }
      if (*(long **)(param_1 + 0x10) != plVar1) {
        lVar27 = (long)*(int *)(param_1 + 0x1c);
        lVar38 = (long)*(long **)(param_1 + 0x10) - lVar27;
        piVar2 = (int *)(PTR_DAT_04bb21f8 + 0x10);
        piVar8 = (int *)(PTR_DAT_04bb2020 + 0x10);
        do {
          local_2cd = 0;
          local_3d0 = 0x100;
          local_3cc[0] = '\0';
          local_238 = ".baatn";
          local_3e0 = piVar2;
          local_3d8 = local_3cc;
          local_240 = piVar8;
          FUN_03bb2e90(&local_3e0,&local_440,lVar38 + 8,&local_240);
          local_20c = 0x101;
          local_230 = 0;
          local_228 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_218 = 0xffffffe0;
          local_238 = local_3d8;
          local_240 = piVar8;
          local_220 = plVar11;
          if ((char)plVar19[0xf] != '\0') {
            piVar22 = (int *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_240);
            if (piVar22 != (int *)0x0) {
              local_240 = (int *)0x0;
              if ((*piVar22 == 0x4e544141) &&
                 ((((char)(*(ushort *)(piVar22 + 1) >> 8) != -1 ||
                   ((*(ushort *)(piVar22 + 1) & 0xff) != 0xfe)) &&
                  (*(short *)((long)piVar22 + 6) == 1)))) {
                local_240 = piVar22;
              }
              FUN_03bbecb0(lVar38,&local_240);
              if (*(long *)PTR_DAT_04bb2698 == 0) {
                free(piVar22);
              }
              else {
                plVar31 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,piVar22);
                if (plVar31 != (long *)0x0) {
                  (**(code **)(*plVar31 + 0x38))(plVar31,piVar22);
                }
              }
            }
          }
          lVar38 = *(long *)(lVar38 + lVar27 + 8) - lVar27;
        } while (lVar38 != (long)plVar1 - lVar27);
      }
    }
    plVar1 = local_2b0;
    local_2c0 = PTR_DAT_04bb2818 + 0x10;
    if (((local_2b0 != (long *)0x0) && ((char)local_2b0[0xf] != '\0')) &&
       (uVar18 = (**(code **)(*local_2b0 + 0x48))(local_2b0,&local_2c0), (uVar18 & 1) != 0)) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,&local_2c0);
    }
  }
  (**(code **)(*plVar19 + 8))(plVar19);
  (**(code **)(*plVar34 + 0x18))(plVar34);
  return;
LAB_03bb1c48:
  plVar23 = (long *)*plVar23;
  if (plVar23 != plVar1) {
    plVar37 = (long *)((long)plVar23 + lVar38 + 8);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    (**(code **)(*(long *)((long)plVar30 + lVar38 + 8) + 0x18))(plVar35);
    pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
    if (pbVar41 == pbVar25) goto LAB_03bb1cd4;
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    lVar27 = 0x7ffff;
    while( true ) {
      bVar13 = *pbVar41;
      if (bVar13 != *pbVar25) break;
      if (bVar13 == 0) goto LAB_03bb1cd4;
      bVar15 = lVar27 == 0;
      pbVar25 = pbVar25 + 1;
      pbVar41 = pbVar41 + 1;
      lVar27 = lVar27 + -1;
      if (bVar15) goto LAB_03bb1cd4;
    }
    if (bVar13 < *pbVar25) goto LAB_03bb1cd4;
    goto LAB_03bb1c48;
  }
  plVar23 = plVar1;
LAB_03bb1cd4:
  if (*plVar30 != 0) {
    *(long *)(*plVar30 + 8) = plVar30[1];
  }
  if ((long *)plVar30[1] != (long *)0x0) {
    *(long *)plVar30[1] = *plVar30;
  }
  *plVar30 = 0;
  plVar30[1] = 0;
  puVar26 = (undefined8 *)plVar23[1];
  plVar23[1] = (long)plVar30;
  *plVar30 = (long)plVar23;
  plVar30[1] = (long)puVar26;
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = plVar30;
  }
LAB_03bb1bb4:
  plVar30 = plVar12;
  if (plVar12 == plVar1) goto LAB_03bb1d10;
  goto LAB_03bb1bc0;
LAB_03bb1e28:
  plVar23 = (long *)*plVar23;
  if (plVar23 != plVar31) {
    plVar37 = (long *)((long)plVar23 + lVar38 + 8);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    (**(code **)(*(long *)((long)plVar30 + lVar38 + 8) + 0x18))(plVar35);
    pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
    if (pbVar41 == pbVar25) goto LAB_03bb1ec0;
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    lVar27 = 0x7ffff;
    while( true ) {
      bVar13 = *pbVar41;
      if (bVar13 != *pbVar25) break;
      if (bVar13 == 0) goto LAB_03bb1ec0;
      bVar15 = lVar27 == 0;
      pbVar25 = pbVar25 + 1;
      pbVar41 = pbVar41 + 1;
      lVar27 = lVar27 + -1;
      if (bVar15) goto LAB_03bb1ec0;
    }
    if (bVar13 < *pbVar25) goto LAB_03bb1ec0;
    goto LAB_03bb1e28;
  }
  plVar23 = plVar31;
LAB_03bb1ec0:
  if (*plVar30 != 0) {
    *(long *)(*plVar30 + 8) = plVar30[1];
  }
  if ((long *)plVar30[1] != (long *)0x0) {
    *(long *)plVar30[1] = *plVar30;
  }
  *plVar30 = 0;
  plVar30[1] = 0;
  puVar26 = (undefined8 *)plVar23[1];
  plVar23[1] = (long)plVar30;
  *plVar30 = (long)plVar23;
  plVar30[1] = (long)puVar26;
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = plVar30;
  }
LAB_03bb1d94:
  plVar30 = plVar12;
  if (plVar12 == plVar31) goto LAB_03bb1efc;
  goto LAB_03bb1da4;
LAB_03bb2018:
  plVar23 = (long *)*plVar23;
  if (plVar23 != plVar32) {
    plVar37 = (long *)((long)plVar23 + lVar38 + 8);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    (**(code **)(*(long *)((long)plVar30 + lVar38 + 8) + 0x18))(plVar35);
    pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
    if (pbVar41 == pbVar25) goto LAB_03bb20b0;
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    lVar27 = 0x7ffff;
    while( true ) {
      bVar13 = *pbVar41;
      if (bVar13 != *pbVar25) break;
      if (bVar13 == 0) goto LAB_03bb20b0;
      bVar15 = lVar27 == 0;
      pbVar25 = pbVar25 + 1;
      pbVar41 = pbVar41 + 1;
      lVar27 = lVar27 + -1;
      if (bVar15) goto LAB_03bb20b0;
    }
    if (bVar13 < *pbVar25) goto LAB_03bb20b0;
    goto LAB_03bb2018;
  }
  plVar23 = plVar32;
LAB_03bb20b0:
  if (*plVar30 != 0) {
    *(long *)(*plVar30 + 8) = plVar30[1];
  }
  if ((long *)plVar30[1] != (long *)0x0) {
    *(long *)plVar30[1] = *plVar30;
  }
  *plVar30 = 0;
  plVar30[1] = 0;
  puVar26 = (undefined8 *)plVar23[1];
  plVar23[1] = (long)plVar30;
  *plVar30 = (long)plVar23;
  plVar30[1] = (long)puVar26;
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = plVar30;
  }
LAB_03bb1f80:
  plVar30 = plVar12;
  if (plVar12 == plVar32) goto LAB_03bb20ec;
  goto LAB_03bb1f90;
LAB_03bb2208:
  plVar23 = (long *)*plVar23;
  if (plVar23 != plVar33) {
    plVar37 = (long *)((long)plVar23 + lVar38 + 8);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    (**(code **)(*plVar37 + 0x18))(plVar37);
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    (**(code **)(*(long *)((long)plVar30 + lVar38 + 8) + 0x18))(plVar35);
    pbVar25 = *(byte **)((long)plVar30 + lVar38 + 0x10);
    if (pbVar41 == pbVar25) goto LAB_03bb22a0;
    pbVar41 = *(byte **)((long)plVar23 + lVar38 + 0x10);
    lVar27 = 0x7ffff;
    while( true ) {
      bVar13 = *pbVar41;
      if (bVar13 != *pbVar25) break;
      if (bVar13 == 0) goto LAB_03bb22a0;
      bVar15 = lVar27 == 0;
      pbVar25 = pbVar25 + 1;
      pbVar41 = pbVar41 + 1;
      lVar27 = lVar27 + -1;
      if (bVar15) goto LAB_03bb22a0;
    }
    if (bVar13 < *pbVar25) goto LAB_03bb22a0;
    goto LAB_03bb2208;
  }
  plVar23 = plVar33;
LAB_03bb22a0:
  if (*plVar30 != 0) {
    *(long *)(*plVar30 + 8) = plVar30[1];
  }
  if ((long *)plVar30[1] != (long *)0x0) {
    *(long *)plVar30[1] = *plVar30;
  }
  *plVar30 = 0;
  plVar30[1] = 0;
  puVar26 = (undefined8 *)plVar23[1];
  plVar23[1] = (long)plVar30;
  *plVar30 = (long)plVar23;
  plVar30[1] = (long)puVar26;
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = plVar30;
  }
LAB_03bb2170:
  plVar30 = plVar12;
  if (plVar12 == plVar33) goto LAB_03bb22dc;
  goto LAB_03bb2180;
}

