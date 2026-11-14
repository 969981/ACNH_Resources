
/* WARNING: Removing unreachable block (ram,0x0184cbbc) */
/* WARNING: Removing unreachable block (ram,0x0184cbcc) */
/* WARNING: Removing unreachable block (ram,0x0184cbd8) */

undefined8 FUN_0184cac0(long *param_1,int *param_2,float *param_3,undefined1 *param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  undefined4 in_w10;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_104 [4];
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  uint local_e0;
  ulong local_d8;
  undefined **ppuStack_d0;
  long local_c8;
  long lStack_c0;
  byte *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  char local_8e;
  byte local_78 [4];
  undefined4 local_74;
  
  if (param_3 == (float *)0x0) {
    return 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  lVar14 = param_1[9];
  if (lVar14 != 0) {
    in_w10 = *(undefined4 *)(lVar14 + 0x230);
  }
  fVar21 = *(float *)(param_1[0x60] + 0x27c);
  uVar3 = *(undefined4 *)PTR_DAT_04bb3238;
  if (lVar14 != 0) {
    uVar3 = in_w10;
  }
  local_d8 = CONCAT44(local_d8._4_4_,uVar3);
  FUN_0071cb58(&local_98,PTR_DAT_04bb4b88,&local_d8,0);
  plVar6 = (long *)CONCAT44(uStack_94,local_98);
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar10 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb4b70);
    if ((uVar10 & 1) == 0) {
      local_8e = '\0';
    }
  }
  if (CONCAT44(uStack_94,local_98) == 0) {
    return 0;
  }
  if (local_90 == '\0') {
    return 0;
  }
  if (local_8e == '\0') {
    return 0;
  }
  local_d8 = local_d8 & 0xffffffff00000000;
  uVar10 = *(ulong *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (uVar10 == 0) {
    return 0;
  }
  local_a8 = 0;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar15 + 7);
  local_a0 = FUN_017baf44();
  puVar7 = PTR_DAT_04bb37e0;
  local_a0 = local_a0 & 1;
  lStack_c0 = *(long *)(CONCAT44(uStack_94,local_98) + 0x2a0);
  if (lStack_c0 == 0) {
    return 0;
  }
  local_c8 = lStack_c0 + 0x770;
  lStack_c0 = lStack_c0 + 0x780;
  ppuStack_d0 = &local_b0;
  local_b8 = local_78;
  local_74 = 0;
  local_78[0] = *(byte *)((long)param_1 + 0x494) ^ 1;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  local_d8 = uVar10;
  do {
    fVar19 = *(float *)(param_1[0x60] + 0x278);
    fVar20 = *(float *)(param_1[0x60] + 0x280);
    uVar13 = uVar18;
    if (7 < uVar18) {
      uVar13 = 0;
    }
    iVar8 = *(int *)((long)&DAT_04177458 +
                    (-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3));
    local_104[0] = '\x01';
    uVar13 = uVar18;
    if (7 < uVar18) {
      uVar13 = 0;
    }
    iVar9 = (&DAT_0417745c)[(long)(int)uVar13 * 2];
    local_e8 = ((int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0)) + iVar8;
    iStack_e4 = iVar9 + ((int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    local_f8 = local_e8 + (iVar8 >> 1);
    iStack_f4 = iStack_e4 + (iVar9 >> 1);
    local_100 = puVar1;
    local_f0 = puVar1;
    local_e0 = uVar18;
    if ((param_5 & 1) == 0) {
      local_128 = PTR_DAT_04bb2018 + 0x10;
      fVar19 = (float)local_e8 * 0.5;
      uVar13 = 0;
      if (fVar19 != (float)(int)fVar19) {
        uVar13 = (uint)(fVar19 < 0.0);
      }
      local_120 = (int)fVar19 - uVar13;
      fVar19 = (float)iStack_e4 * 0.5;
      uVar13 = 0;
      if (fVar19 != (float)(int)fVar19) {
        uVar13 = (uint)(fVar19 < 0.0);
      }
      iStack_11c = (int)fVar19 - uVar13;
      uVar10 = FUN_0184d5f0(fVar21,param_1,local_104,&local_128,&local_d8);
      if ((uVar10 & 1) != 0) goto LAB_0184cf70;
LAB_0184cd00:
      uVar13 = 1 << (ulong)(uVar18 & 0x1f);
      uVar17 = uVar17 & (uVar13 ^ 0xffffffff);
    }
    else {
      local_10c = *(undefined4 *)puVar7;
      local_108 = *(undefined4 *)(puVar7 + 4);
      puVar11 = (undefined4 *)FUN_01a5190c(&local_b0,0,&local_f0,0);
      local_10c = *puVar11;
      local_108 = puVar11[1];
      local_114 = *(undefined4 *)puVar7;
      local_110 = *(undefined4 *)(puVar7 + 4);
      puVar11 = (undefined4 *)FUN_01a5190c(&local_b0,0,&local_100,0);
      local_114 = *puVar11;
      local_110 = puVar11[1];
      uVar10 = FUN_01a1cf00(fVar21,&local_10c,&local_f0);
      if ((uVar10 & 1) == 0) {
        fVar19 = (float)local_e8 * 0.5;
        uVar13 = 0;
        if (fVar19 != (float)(int)fVar19) {
          uVar13 = (uint)(fVar19 < 0.0);
        }
        local_120 = (int)fVar19 - uVar13;
        fVar19 = (float)iStack_e4 * 0.5;
        uVar13 = 0;
        if (fVar19 != (float)(int)fVar19) {
          uVar13 = (uint)(fVar19 < 0.0);
        }
        iStack_11c = (int)fVar19 - uVar13;
        local_128 = puVar2;
        uVar10 = FUN_0184d5f0(fVar21,param_1,local_104,&local_128,&local_d8);
        if ((uVar10 & 1) == 0) goto LAB_0184cd00;
      }
      uVar10 = FUN_01a1cf00(fVar21,&local_114,&local_100);
      if ((uVar10 & 1) == 0) {
LAB_0184cf70:
        uVar10 = (**(code **)(*param_1 + 0x2a8))(fVar21,param_1,local_104,&local_100,&local_d8);
        if ((uVar10 & 1) == 0) goto LAB_0184cd00;
      }
      uVar13 = 1 << (ulong)(uVar18 & 0x1f);
      uVar17 = uVar17 | uVar13;
    }
    uVar5 = uVar13 | uVar16;
    uVar18 = uVar18 + 1;
    uVar16 = uVar16 & (uVar13 ^ 0xffffffff);
    if (local_104[0] != '\0') {
      uVar16 = uVar5;
    }
  } while (uVar18 != 8);
  uVar18 = uVar17 & 0x7d;
  if ((uVar17 & 1) != 0) {
    uVar18 = uVar17;
  }
  uVar17 = uVar18 & 0xfffffff5;
  if ((uVar18 & 4) != 0) {
    uVar17 = uVar18;
  }
  uVar18 = uVar17 & 0xffffffd7;
  if ((uVar17 & 0x10) != 0) {
    uVar18 = uVar17;
  }
  if (((uVar18 >> 6 & 1) == 0) && (uVar18 = uVar18 & 0x5f, uVar18 == 0)) {
    return 1;
  }
  uVar17 = *param_2 + 0x10000000U >> 0x1d;
  local_d8 = CONCAT44(local_d8._4_4_,uVar17);
  if ((uVar18 & uVar16 & 0xff) != 0) {
    uVar18 = uVar18 & uVar16;
  }
  cVar4 = *(char *)((long)param_1 + 0x419);
  uVar16 = uVar18 & 1 << (ulong)uVar17 & 0xff;
  *(bool *)((long)param_1 + 0x496) = uVar16 == 0;
  puVar7 = PTR_DAT_04bb39d8;
  local_b0._0_4_ = uVar17;
  puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar17 = *puVar12 ^ *puVar12 << 0xb;
  uVar13 = puVar12[3];
  *puVar12 = puVar12[1];
  puVar12[1] = puVar12[2];
  uVar17 = uVar17 >> 8 ^ uVar13 >> 0x13 ^ uVar17 ^ uVar13;
  puVar12[2] = uVar13;
  puVar12[3] = uVar17;
  if ((uVar16 == 0) || (cVar4 != '\0')) {
    iVar8 = (uVar17 & 2) * 0x1000000 + -0x1000000;
    iVar9 = iVar8 >> 0x18;
    uVar17 = (uint)local_d8 + iVar9;
    if ((int)uVar17 < 0) {
      uVar16 = 0;
      if ((-uVar17 & 7) != 0) {
        uVar16 = 8 - (-uVar17 & 7);
      }
    }
    else {
      uVar16 = uVar17 & 7;
    }
    if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) == 0) {
      uVar17 = (uint)local_d8 - iVar9;
      if ((int)uVar17 < 0) {
        uVar16 = 0;
        if ((-uVar17 & 7) != 0) {
          uVar16 = 8 - (-uVar17 & 7);
        }
      }
      else {
        uVar16 = uVar17 & 7;
      }
      if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) == 0) {
        uVar17 = (uint)local_d8 + (iVar8 >> 0x17);
        if ((int)uVar17 < 0) {
          uVar16 = 0;
          if ((-uVar17 & 7) != 0) {
            uVar16 = 8 - (-uVar17 & 7);
          }
        }
        else {
          uVar16 = uVar17 & 7;
        }
        if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) != 0) goto LAB_0184d0ec;
        uVar17 = (uint)local_d8 - (iVar8 >> 0x17);
        if ((int)uVar17 < 0) {
          uVar16 = 0;
          if ((-uVar17 & 7) != 0) {
            uVar16 = 8 - (-uVar17 & 7);
          }
        }
        else {
          uVar16 = uVar17 & 7;
        }
        if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) == 0) {
          uVar17 = (uint)local_d8 + iVar9 * 3;
          if ((int)uVar17 < 0) {
            uVar16 = 0;
            if ((-uVar17 & 7) != 0) {
              uVar16 = 8 - (-uVar17 & 7);
            }
          }
          else {
            uVar16 = uVar17 & 7;
          }
          if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) != 0) goto LAB_0184d0ec;
          uVar17 = (uint)local_d8 + iVar9 * -3;
          if ((int)uVar17 < 0) {
            uVar16 = 0;
            if ((-uVar17 & 7) != 0) {
              uVar16 = 8 - (-uVar17 & 7);
            }
          }
          else {
            uVar16 = uVar17 & 7;
          }
          if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) == 0) {
            uVar17 = (uint)local_d8 + (iVar8 >> 0x16);
            if ((int)uVar17 < 0) {
              uVar16 = 0;
              if ((-uVar17 & 7) != 0) {
                uVar16 = 8 - (-uVar17 & 7);
              }
            }
            else {
              uVar16 = uVar17 & 7;
            }
            if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) != 0) goto LAB_0184d0ec;
            local_d8._0_4_ = (uint)local_d8 - (iVar8 >> 0x16);
            if ((int)(uint)local_d8 < 0) {
              uVar16 = 0;
              if ((-(uint)local_d8 & 7) != 0) {
                uVar16 = 8 - (-(uint)local_d8 & 7);
              }
            }
            else {
              uVar16 = (uint)local_d8 & 7;
            }
            if ((uVar18 & 1 << (ulong)(uVar16 & 0x1f) & 0xff) == 0) goto LAB_0184d328;
          }
        }
      }
      local_b0._0_4_ = uVar16;
    }
    else {
LAB_0184d0ec:
      local_b0._0_4_ = uVar16;
    }
    goto LAB_0184d328;
  }
  iVar8 = (uVar17 & 2) - 1;
  uVar17 = (uint)local_d8 + iVar8;
  if ((int)uVar17 < 0) {
    local_b0._0_4_ = 0;
    if ((-uVar17 & 7) != 0) {
      local_b0._0_4_ = 8 - (-uVar17 & 7);
    }
  }
  else {
    local_b0._0_4_ = uVar17 & 7;
  }
  if ((uVar18 & 1 << (ulong)((uint)local_b0 & 0x1f) & 0xff) == 0) {
    uVar17 = (uint)local_d8 - iVar8;
    if ((int)uVar17 < 0) {
      local_b0._0_4_ = 0;
      if ((-uVar17 & 7) != 0) {
        local_b0._0_4_ = 8 - (-uVar17 & 7);
      }
    }
    else {
      local_b0._0_4_ = uVar17 & 7;
    }
    if ((uVar18 & 1 << (ulong)((uint)local_b0 & 0x1f) & 0xff) != 0) {
      iVar9 = FUN_016b285c();
      if (-1 < iVar9) goto LAB_0184d328;
      uVar17 = (uint)local_b0 - iVar8;
      if ((int)uVar17 < 0) {
        local_b0._0_4_ = 0;
        if ((-uVar17 & 7) != 0) {
          local_b0._0_4_ = 8 - (-uVar17 & 7);
        }
      }
      else {
        local_b0._0_4_ = uVar17 & 7;
      }
      if ((uVar18 & 1 << (ulong)((uint)local_b0 & 0x1f) & 0xff) != 0) goto LAB_0184d328;
      local_b0._0_4_ = (uint)local_b0 + iVar8;
      goto joined_r0x0184d308;
    }
  }
  else {
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar7);
    uVar17 = *puVar12 ^ *puVar12 << 0xb;
    uVar16 = puVar12[3];
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar17 = uVar17 >> 8 ^ uVar16 >> 0x13 ^ uVar17 ^ uVar16;
    puVar12[2] = uVar16;
    puVar12[3] = uVar17;
    if ((uVar17 >> 1 & 1) != 0) goto LAB_0184d328;
    uVar17 = (uint)local_b0 + iVar8;
    if ((int)uVar17 < 0) {
      local_b0._0_4_ = 0;
      if ((-uVar17 & 7) != 0) {
        local_b0._0_4_ = 8 - (-uVar17 & 7);
      }
    }
    else {
      local_b0._0_4_ = uVar17 & 7;
    }
    if ((uVar18 & 1 << (ulong)((uint)local_b0 & 0x1f) & 0xff) != 0) goto LAB_0184d328;
    local_b0._0_4_ = (uint)local_b0 - iVar8;
joined_r0x0184d308:
    if ((int)(uint)local_b0 < 0) {
      local_d8._0_4_ = 0;
      if ((-(uint)local_b0 & 7) != 0) {
        local_d8._0_4_ = 8 - (-(uint)local_b0 & 7);
      }
    }
    else {
      local_d8._0_4_ = (uint)local_b0 & 7;
    }
  }
  local_b0._0_4_ = (uint)local_d8;
LAB_0184d328:
  fVar19 = *(float *)(param_1[0x60] + 0x278);
  fVar20 = *(float *)(param_1[0x60] + 0x280);
  uVar17 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  uVar16 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  uVar18 = (uint)local_b0;
  if (7 < (uint)local_b0) {
    uVar18 = 0;
  }
  iVar8 = (uVar17 - ((uVar17 & 0x80000001) == 1)) +
          *(int *)((long)&DAT_04177458 +
                  (-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3));
  if (7 < (uint)local_b0) {
    local_b0._0_4_ = 0;
  }
  iVar9 = (uVar16 - ((uVar16 & 0x80000001) == 1)) + (&DAT_0417745c)[(long)(int)(uint)local_b0 * 2];
  *param_3 = ((float)iVar8 * 5.0 + (float)(iVar8 + 1) * 5.0 + 5.0) * 0.5;
  param_3[1] = fVar21;
  param_3[2] = ((float)iVar9 * 5.0 + (float)(iVar9 + 1) * 5.0 + 5.0) * 0.5;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  return 0;
}

