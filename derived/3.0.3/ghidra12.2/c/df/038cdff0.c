
/* WARNING: Type propagation algorithm not settling */

void FUN_038cdff0(uint *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  char *__src;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 *__ptr;
  char *pcVar23;
  uint *local_288;
  uint local_280;
  int local_27c;
  uint uStack_278;
  uint uStack_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined *local_230;
  uint *puStack_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 uStack_194;
  undefined2 uStack_192;
  undefined8 local_190;
  undefined1 local_188;
  uint *local_180;
  undefined8 local_178;
  uint local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  puVar6 = PTR_DAT_04bb2020;
  if ((char)param_1[8] != '\0') {
    return;
  }
  local_238 = 0;
  local_288 = &uStack_274;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  local_270 = 0;
  local_280 = 0x10;
  local_27c = 0;
  local_178 = (undefined1 *)*param_2;
  local_180 = (uint *)(PTR_DAT_04bb2020 + 0x10);
  uVar11 = FUN_038cdc60(&local_288,&local_180);
  if (((uVar11 & 1) == 0) && ((int)uStack_278 < (int)local_280)) {
    uVar15 = uStack_278 + 1;
    uVar9 = 0;
    if ((int)local_280 <= (int)(local_27c + uStack_278)) {
      uVar9 = local_280;
    }
    local_288[(int)((local_27c + uStack_278) - uVar9)] = 0;
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 1;
      uVar15 = uStack_278 + 2;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 2;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 3;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 4;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 5;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 6;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 7;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 8;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 9;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 10;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 0xb;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 0xc;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 0xd;
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 < (int)local_280) {
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 0xe;
      uVar15 = uVar15 + 1;
    }
    uStack_278 = uVar15;
    if ((int)uVar15 < (int)local_280) {
      uStack_278 = uVar15 + 1;
      uVar9 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar9 = local_280;
      }
      local_288[(int)((local_27c + uVar15) - uVar9)] = 0xf;
    }
  }
  *(undefined8 *)(param_1 + 4) = param_2[2];
  if ((param_2[3] != 0) && (DAT_05ae71f0 != 0)) {
    local_1b8 = 0;
    local_1a8 = param_2[5];
    puVar1 = puVar6 + 0x10;
    uStack_194 = 0x101;
    local_1b0 = 0;
    local_190 = 0;
    local_188 = 0;
    local_198 = 0;
    local_170 = 0x100;
    local_6d = 0;
    local_16c[0] = 0;
    local_1a0 = 0xffffffe0;
    local_178 = local_16c;
    local_180 = (uint *)(PTR_DAT_04bb21f8 + 0x10);
    local_1c8 = puVar1;
    local_1c0 = param_2[3];
    plVar12 = (long *)FUN_038b56b0(DAT_05ae71f0,&local_1c8,&local_180);
    if (plVar12 != (long *)0x0) {
      local_208 = CONCAT44(uStack_1ac,local_1b0);
      local_1f8 = local_1a0;
      local_200 = local_1a8;
      local_210 = local_1b8;
      local_1e0 = CONCAT71(local_1e0._1_7_,local_188);
      local_1f0 = CONCAT26(uStack_192,CONCAT24(uStack_194,local_198));
      local_1e8 = local_190;
      local_220 = puVar1;
      (**(code **)(local_180 + 6))(&local_180);
      local_218 = local_178;
      if ((char)plVar12[0xf] == '\0') {
        __src = (char *)0x0;
      }
      else {
        __src = (char *)(**(code **)(*plVar12 + 0x58))(plVar12,&local_220);
      }
      lVar7 = DAT_05ae7600;
      local_190 = local_1e8;
      local_188 = (undefined1)local_1e0;
      if (__src != (char *)0x0) {
        if ((uint)local_1e8 < 0x7fffffff) {
          plVar12 = (long *)param_2[5];
          uVar15 = (uint)local_1e8 + 1;
          if (plVar12 == (long *)0x0) {
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar12 = (long *)(lVar7 + 8);
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
          }
          __ptr = (undefined8 *)
                  (**(code **)(*plVar12 + 0x30))(plVar12,(ulong)uVar15 + 0x10,0xfffffff8);
          *(undefined1 *)(__ptr + 2) = 0;
          *__ptr = __ptr + 2;
          *(undefined4 *)(__ptr + 1) = 0;
          *(uint *)((long)__ptr + 0xc) = uVar15;
          uVar15 = (uint)local_190;
        }
        else {
          __ptr = (undefined8 *)0x0;
          uVar15 = (uint)local_1e8;
        }
        pcVar23 = (char *)*__ptr;
        if (pcVar23 == __src) {
          uVar15 = *(uint *)(__ptr + 1);
          pcVar23 = __src;
        }
        else {
          if (uVar15 == 0xffffffff) {
            uVar15 = 0xffffffff;
            pcVar21 = __src;
            do {
              cVar2 = *pcVar21;
              uVar15 = uVar15 + 1;
              pcVar21 = pcVar21 + 1;
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)__ptr + 0xc) <= (int)uVar15) {
            uVar15 = *(int *)((long)__ptr + 0xc) - 1;
          }
          if ((int)uVar15 < 1) {
            uVar15 = 0;
          }
          else {
            memcpy(pcVar23,__src,(ulong)uVar15);
            pcVar23 = pcVar23 + uVar15;
          }
          *pcVar23 = '\0';
          *(uint *)(__ptr + 1) = uVar15;
          pcVar23 = (char *)*__ptr;
        }
        (**(code **)(PTR_PTR_04c4b980 + 0x18))();
        pcVar21 = (char *)*__ptr;
        uVar9 = *(uint *)(__ptr + 1);
        local_180 = &local_170;
        local_178 = (undefined1 *)0x10000000000;
        local_170 = local_170 & 0xffffff00;
        if ((uVar9 != 0) || (pcVar23 != pcVar21)) {
          bVar4 = false;
          uVar16 = 0;
          do {
            puVar8 = local_180;
            puVar14 = (uint *)(pcVar23 + (int)uVar16);
            uVar22 = uVar15;
            if ((char)*puVar14 == '#' || (char)*puVar14 == '\n') {
              uVar22 = uVar16;
              if ((int)uVar16 < (int)uVar15) {
                do {
                  uVar16 = uVar16 + 1;
                  uVar22 = uVar16;
                  if ((char)*puVar14 == '\n' || (char)*puVar14 == '\r') break;
                  puVar14 = (uint *)((long)puVar14 + 1);
                  uVar22 = uVar15;
                } while (uVar15 != uVar16);
              }
            }
            else {
              uVar17 = uVar16;
              if ((int)uVar16 < (int)uVar15) {
                puVar19 = puVar14;
                do {
                  if ((char)*puVar19 == '\n' || (char)*puVar19 == '\r') {
                    uVar22 = uVar17 + 1;
                    goto LAB_038ce7ac;
                  }
                  uVar17 = uVar17 + 1;
                  puVar19 = (uint *)((long)puVar19 + 1);
                } while (uVar15 != uVar17);
                uVar17 = uVar15;
              }
LAB_038ce7ac:
              uVar17 = uVar17 - uVar16;
              uVar11 = (ulong)uVar17;
              if (local_180 != puVar14) {
                uVar16 = uVar17;
                if (uVar17 == 0xffffffff) {
                  uVar16 = 0xffffffff;
                  puVar19 = puVar14;
                  do {
                    uVar5 = *puVar19;
                    uVar16 = uVar16 + 1;
                    puVar19 = (uint *)((long)puVar19 + 1);
                  } while ((char)uVar5 != '\0');
                }
                if (local_178._4_4_ <= (int)uVar16) {
                  uVar16 = local_178._4_4_ - 1;
                }
                if ((int)uVar16 < 1) {
                  uVar16 = 0;
                  puVar14 = local_180;
                }
                else {
                  memcpy(local_180,puVar14,(ulong)uVar16);
                  puVar14 = (uint *)((long)puVar8 + (ulong)uVar16);
                }
                *(char *)puVar14 = '\0';
                local_178 = (undefined1 *)CONCAT44(local_178._4_4_,uVar16);
              }
              if (bVar4) {
                if (0 < (int)uVar17) {
                  puVar14 = (uint *)FUN_038aa550(uVar17 + 1,param_2[5],8);
                  *(uint **)(param_1 + 6) = puVar14;
                  *(char *)((long)puVar14 + uVar11) = '\0';
                  if (puVar14 != local_180) {
                    memcpy(puVar14,local_180,uVar11);
                    *(char *)((long)puVar14 + uVar11) = '\0';
                  }
                  *(uint **)(param_1 + 4) = puVar14;
                }
                break;
              }
              local_1d0 = 0;
              local_1e0 = 0;
              uStack_1d8 = 0;
              local_1f0 = 0;
              local_1e8 = 0;
              local_218 = &DAT_00000010;
              local_200 = 0;
              local_1f8 = 0;
              local_210 = 0;
              local_208 = 0;
              puStack_228 = local_180;
              local_230 = puVar6 + 0x10;
              local_220 = (undefined *)((long)&local_210 + 4);
              uVar11 = FUN_038cdc60(&local_220,&local_230);
              if ((uVar11 & 1) != 0) {
                local_27c = 0;
                uStack_278 = (uint)local_210;
                if ((int)local_280 <= (int)(uint)local_210) {
                  uStack_278 = local_280;
                }
                if (0 < (int)uStack_278) {
                  if (uStack_278 == 1) {
                    uVar20 = 0;
                  }
                  else {
                    uVar11 = 0;
                    do {
                      iVar18 = (int)uVar11;
                      iVar10 = 0;
                      if ((int)local_218 <= iVar18 + local_218._4_4_) {
                        iVar10 = (int)local_218;
                      }
                      local_288[uVar11] =
                           *(uint *)(local_220 + (long)(iVar18 + (local_218._4_4_ - iVar10)) * 4);
                      iVar10 = 0;
                      if ((int)local_218 <= iVar18 + local_218._4_4_ + 1) {
                        iVar10 = (int)local_218;
                      }
                      uVar20 = uVar11 + 2;
                      local_288[uVar11 + 1] =
                           *(uint *)(local_220 + (long)(iVar18 + (local_218._4_4_ - iVar10) + 1) * 4
                                    );
                      uVar11 = uVar20;
                    } while (((ulong)uStack_278 & 0xfffffffe) != uVar20);
                  }
                  if ((uStack_278 & 1) != 0) {
                    iVar10 = local_218._4_4_ + (int)uVar20;
                    iVar18 = 0;
                    if ((int)local_218 <= iVar10) {
                      iVar18 = (int)local_218;
                    }
                    local_288[uVar20] = *(uint *)(local_220 + (long)(iVar10 - iVar18) * 4);
                  }
                }
              }
              bVar4 = true;
            }
            uVar16 = uVar22;
          } while ((uVar16 != uVar9) || (pcVar23 != pcVar21));
        }
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar12 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x38))(plVar12,__ptr);
          }
        }
        if (DAT_05ae7600 == 0) {
          free(__src);
        }
        else {
          plVar12 = (long *)FUN_038cb610(DAT_05ae7600,__src);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x38))(plVar12,__src);
          }
        }
      }
    }
  }
  uVar9 = FUN_038ceb30();
  iVar10 = FUN_038ced70();
  uVar15 = uVar9 + iVar10 * 6;
  uVar11 = (ulong)uVar15;
  if (0x41 < uVar15) {
    uVar11 = 0;
  }
  bVar3 = (&DAT_0419b5db)[uVar11];
  if (-1 < (char)bVar3) {
    if (uStack_278 == 0) goto LAB_038cea9c;
    uVar15 = 0;
    do {
      uVar16 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar16 = local_280;
      }
      if ((uint)bVar3 == local_288[(int)((local_27c + uVar15) - uVar16)]) {
        *param_1 = (uint)bVar3;
        goto LAB_038ceab8;
      }
      uVar15 = uVar15 + 1;
    } while (uStack_278 != uVar15);
  }
  if (uStack_278 != 0) {
    uVar15 = 0;
    do {
      uVar16 = 0;
      if ((int)local_280 <= (int)(local_27c + uVar15)) {
        uVar16 = local_280;
      }
      iVar10 = (local_27c + uVar15) - uVar16;
      uVar11 = (ulong)(local_288[iVar10] << 1);
      if (0x1f < local_288[iVar10] << 1) {
        uVar11 = 0;
      }
      if (uVar9 == (byte)(&DAT_04058440)[uVar11]) {
        uVar15 = local_288[iVar10];
        goto LAB_038ceab4;
      }
      uVar15 = uVar15 + 1;
    } while (uStack_278 != uVar15);
    if (0 < (int)uStack_278) {
      uVar15 = 0;
      if ((int)local_280 <= local_27c) {
        uVar15 = local_280;
      }
      local_288 = local_288 + (int)(local_27c - uVar15);
    }
  }
LAB_038cea9c:
  uVar15 = *local_288;
LAB_038ceab4:
  *param_1 = uVar15;
LAB_038ceab8:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

