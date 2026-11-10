
undefined8 FUN_0034d730(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  void *__src;
  size_t __n;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  ulong local_2e0 [9];
  ulong local_298;
  undefined8 uStack_290;
  long *local_288;
  ulong local_280;
  undefined8 local_278;
  void *local_270;
  ulong local_268;
  undefined8 uStack_260;
  void *local_258;
  ulong local_250;
  undefined8 local_248;
  void *local_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  ulong local_220;
  undefined8 local_218;
  void *local_210;
  long *local_208 [4];
  ulong local_1e8;
  undefined8 uStack_1e0;
  ulong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulong *local_160;
  ulong *local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_cc;
  size_t local_c8 [6];
  ulong local_98 [7];
  
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  param_1[1] = *param_3;
  (**(code **)PTR_DAT_04bcf5d8)(param_1 + 0x10,*param_2);
  if (param_3[1] == 0) {
    if ((*param_3 >> 1 & 1) == 0) {
      local_1b8 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208[2] = (long *)0x0;
      local_208[3] = (long *)0x0;
      local_208[0] = (long *)0x0;
      local_208[1] = (long *)0x0;
      puVar13 = (undefined8 *)FUN_0034fbe4(param_3,0);
      if (puVar13 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)FUN_0034fbe4(param_3,1);
      }
      else {
        local_208[0] = (long *)*puVar13;
        local_208[1] = (long *)puVar13[1];
        puVar14 = (undefined8 *)FUN_0034fbe4(param_3,1);
      }
      bVar5 = puVar13 != (undefined8 *)0x0;
      uVar11 = (ulong)bVar5;
      uVar15 = uVar11;
      if (puVar14 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar14[1];
        uVar15 = (ulong)(bVar5 + 1);
        local_208[uVar11 * 2] = (long *)*puVar14;
        local_208[uVar11 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0034fbe4(param_3,2);
      uVar11 = uVar15;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar11 = (ulong)((int)uVar15 + 1);
        local_208[uVar15 * 2] = (long *)*puVar13;
        local_208[uVar15 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0034fbe4(param_3,3);
      uVar15 = uVar11;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar15 = (ulong)((int)uVar11 + 1);
        local_208[uVar11 * 2] = (long *)*puVar13;
        local_208[uVar11 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0034fbe4(param_3,4);
      uVar11 = uVar15;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar11 = (ulong)((int)uVar15 + 1);
        local_208[uVar15 * 2] = (long *)*puVar13;
        local_208[uVar15 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0034fbe4(param_3,5);
      uVar15 = uVar11;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar15 = (ulong)((int)uVar11 + 1);
        local_208[uVar11 * 2] = (long *)*puVar13;
        local_208[uVar11 * 2 + 1] = plVar19;
      }
      cVar8 = (**(code **)PTR_DAT_04bcf5f0)(*(undefined8 *)(param_1 + 8),uVar15,local_208);
      if (cVar8 == '\0') {
        return 3;
      }
    }
    else {
      iVar22 = 0;
      iVar10 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208[2] = (long *)0x0;
      local_208[3] = (long *)0x0;
      local_208[0] = (long *)0x0;
      local_208[1] = (long *)0x0;
      do {
        puVar13 = (undefined8 *)FUN_0034fbe4(param_3,iVar10);
        if (puVar13 != (undefined8 *)0x0) {
          lVar12 = (long)iVar22;
          iVar22 = iVar22 + 1;
          local_208[lVar12 * 3] = (long *)*puVar13;
          local_208[lVar12 * 3 + 1] = (long *)puVar13[1];
          local_208[lVar12 * 3 + 2] = (long *)puVar13[6];
          puVar14 = (undefined8 *)puVar13[4];
          if (puVar14 != (undefined8 *)0x0) {
            pvVar16 = (void *)*puVar14;
            pvVar17 = (void *)puVar13[1];
            memcpy(pvVar17,pvVar16,(long)*(int *)((long)pvVar16 + 0x14));
            if ((void *)puVar14[1] != (void *)0x0) {
              memcpy((void *)((long)pvVar17 + (long)*(int *)((long)pvVar16 + 0x14)),
                     (void *)puVar14[1],(long)*(int *)((long)pvVar16 + 0x18));
            }
            if ((void *)puVar14[4] != (void *)0x0) {
              memcpy((void *)((long)pvVar17 + (long)*(int *)((long)pvVar16 + 0x20)),
                     (void *)puVar14[4],(long)*(int *)((long)pvVar16 + 0x1c));
            }
            if ((void *)puVar14[2] != (void *)0x0) {
              memcpy((void *)((long)pvVar17 + (long)*(int *)((long)pvVar16 + 0x6f0)),
                     (void *)puVar14[2],(long)*(int *)((long)pvVar16 + 0x6f4));
            }
            if ((void *)puVar14[3] != (void *)0x0) {
              memcpy((void *)((long)pvVar17 + (long)*(int *)((long)pvVar16 + 0x7c8)),
                     (void *)puVar14[3],(long)*(int *)((long)pvVar16 + 0x7cc));
            }
            if ((void *)puVar14[5] != (void *)0x0) {
              memcpy((void *)((long)pvVar17 + (long)*(int *)((long)pvVar16 + 0x7e8)),
                     (void *)puVar14[5],(long)*(int *)((long)pvVar16 + 0x7ec));
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 6);
      cVar8 = (**(code **)PTR_DAT_04bcf5f8)(*(undefined8 *)(param_1 + 8),iVar22,local_208);
      if (cVar8 == '\0') {
        return 3;
      }
      if ((*param_3 >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x78);
      }
    }
    bVar4 = *param_3;
    goto joined_r0x0034daec;
  }
  if (param_3[1] != 2) {
    return 1;
  }
  if (((DAT_04c62da0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c62da0), iVar10 != 0)) {
    FUN_001001d0(&LAB_0034e890,&DAT_04be2ae8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c62da0);
  }
  nn::os::LockMutex((MutexType *)&DAT_04be2ae8);
  FUN_0034d57c();
  uVar11 = FUN_0034e938();
  if ((uVar11 & 1) == 0) {
    FUN_0034d57c();
    FUN_0034e8a8();
  }
  local_2e8 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  local_310 = 0;
  lVar12 = FUN_0034d57c();
  (**(code **)(lVar12 + 0x28))(&local_318);
  puVar7 = PTR_DAT_04bcf028;
  local_328 = 0;
  local_320 = 0;
  (**(code **)PTR_DAT_04bcf028)(*param_2,0x2f,(long)&local_320 + 4);
  (**(code **)puVar7)(*param_2,0x2e,&local_320);
  (**(code **)puVar7)(*param_2,0x31,(long)&local_328 + 4);
  (**(code **)puVar7)(*param_2,0x30,&local_328);
  if (((int)local_310 < local_320._4_4_) ||
     (((int)local_310 == local_320._4_4_ && (local_310._4_4_ < local_328._4_4_))))
  goto LAB_0034d86c;
  if (((int)local_320 < (int)local_310) ||
     (((int)local_310 == (int)local_320 && ((int)local_328 < local_310._4_4_)))) goto LAB_0034d86c;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (ulong *)0x0;
  local_150 = 0;
  local_168 = 0;
  local_160 = (ulong *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_208[2] = (long *)0x0;
  local_208[3] = (long *)0x0;
  local_208[0] = (long *)0x0;
  local_208[1] = (long *)0x0;
  lVar12 = FUN_0034d57c();
  cVar8 = (**(code **)(lVar12 + 0x10))(local_208);
  if ((cVar8 == '\0') || ((int)local_130 != 1)) goto LAB_0034d86c;
  local_1e8 = local_1e8 & 0xfffffffffffe0000 | (ulong)*param_3 & 1 | 0x2214;
  uVar15 = FUN_0034e950();
  uVar11 = 0x20000;
  if ((uVar15 & 1) == 0) {
    uVar11 = 0;
  }
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  local_1b0 = 0;
  local_208[3] = (long *)0x0;
  local_218 = 0;
  local_210 = (void *)0x0;
  local_1e8 = local_1e8 & 0xfffffffffff9ffff | uVar11;
  local_2e0[0] = 0;
  local_150 = local_150 & 0xffffffffffffff00;
  uStack_1e0 = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  local_240 = (void *)0x0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
  local_288 = (void *)0x0;
  local_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2e0[7] = 0;
  local_2e0[8] = 0;
  local_2e0[5] = 0;
  local_2e0[6] = 0;
  local_2e0[3] = 0;
  local_2e0[4] = 0;
  local_2e0[1] = 0;
  local_2e0[2] = 0;
  local_160 = local_2e0 + 3;
  local_158 = local_2e0;
  lVar12 = FUN_0034fbe4(param_3,0);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    (local_2e0 + 3)[uVar11] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(0);
    uVar11 = local_150 & 0xff;
    local_150 = CONCAT71(local_150._1_7_,(char)local_150 + '\x01');
    *(undefined4 *)((long)local_2e0 + uVar11 * 4) = uVar9;
  }
  lVar12 = FUN_0034fbe4(param_3,1);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    local_2e0[uVar11 + 3] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(1);
    cVar8 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar9;
    local_150 = CONCAT71(local_150._1_7_,cVar8 + '\x01');
  }
  lVar12 = FUN_0034fbe4(param_3,2);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    local_2e0[uVar11 + 3] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(2);
    cVar8 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar9;
    local_150 = CONCAT71(local_150._1_7_,cVar8 + '\x01');
  }
  lVar12 = FUN_0034fbe4(param_3,3);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    local_2e0[uVar11 + 3] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(3);
    cVar8 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar9;
    local_150 = CONCAT71(local_150._1_7_,cVar8 + '\x01');
  }
  lVar12 = FUN_0034fbe4(param_3,4);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    local_2e0[uVar11 + 3] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(4);
    cVar8 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar9;
    local_150 = CONCAT71(local_150._1_7_,cVar8 + '\x01');
  }
  lVar12 = FUN_0034fbe4(param_3,5);
  if (lVar12 != 0) {
    std::string::assign((char *)(local_2e0 + (local_150 & 0xff) * 3 + 9),*(ulong *)(lVar12 + 8));
    uVar11 = local_150 & 0xff;
    plVar19 = (long *)((ulong)(local_2e0 + uVar11 * 3 + 9) | 1);
    if ((local_2e0[uVar11 * 3 + 9] & 1) != 0) {
      plVar19 = local_208[uVar11 * 3 + -0x10];
    }
    local_2e0[uVar11 + 3] = (ulong)plVar19;
    uVar9 = FUN_0034cdc0(5);
    cVar8 = (char)local_150;
    *(undefined4 *)((long)local_2e0 + (local_150 & 0xff) * 4) = uVar9;
    local_150 = CONCAT71(local_150._1_7_,cVar8 + '\x01');
  }
  lVar12 = FUN_0034d57c();
  cVar8 = (**(code **)(lVar12 + 0x20))(local_208);
  plVar19 = local_208[0];
  bVar5 = false;
  uVar23 = 3;
  if ((cVar8 != '\0') && (*(char *)(*local_208[0] + 0xd) == '\0')) {
    if (*(char *)(*local_208[0] + 0xc) == '\0') {
      bVar5 = false;
    }
    else {
      pvVar16 = malloc(400);
      *(void **)(param_1 + 0xd8) = pvVar16;
      *(undefined8 *)((long)pvVar16 + 0x108) = 0;
      *(undefined8 *)((long)pvVar16 + 0x110) = 0;
      __src = (void *)plVar19[1];
      pvVar17 = malloc((ulong)*(uint *)((long)__src + 0x44));
      *(void **)((long)pvVar16 + 0x110) = pvVar17;
      if (pvVar17 != (void *)0x0) {
        memcpy(pvVar17,__src,(ulong)*(uint *)((long)__src + 0x44));
        iVar10 = *(int *)((long)pvVar17 + 0x4c);
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        local_98[0] = 0;
        local_98[1] = 0;
        *(undefined4 *)((long)pvVar16 + 0x178) = 0;
        *(undefined8 *)((long)pvVar16 + 0x180) = 0;
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        if (iVar10 < 1) {
          uVar11 = 0;
        }
        else {
          lVar18 = 0;
          lVar12 = 0;
          uVar11 = 0;
          uVar15 = 0;
          do {
            iVar10 = *(int *)((long)pvVar17 + lVar18 + 0x98);
            if (iVar10 == 3) {
              *(long *)((long)pvVar16 + 0x188) = (long)pvVar17 + lVar18 + 0x90;
            }
            else if (iVar10 == 0) {
              uVar20 = (ulong)*(uint *)((long)pvVar17 + lVar18 + 200);
              uVar21 = -(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
              uVar11 = uVar11 + uVar20 + 0xff & 0xffffffffffffff00;
              uVar2 = *(uint *)((long)pvVar17 + lVar18 + 0x94);
              *(ulong *)((long)local_c8 + uVar21 + 0x30) = uVar20;
              *(ulong *)((long)local_c8 + uVar21) =
                   (long)pvVar17 + (ulong)*(uint *)((long)pvVar17 + lVar18 + 0xc4) + (ulong)uVar2;
              uVar3 = *(uint *)((long)pvVar17 + lVar18 + 0xc0);
              iVar10 = (int)uVar15;
              uVar1 = iVar10 + 1;
              uVar15 = (ulong)uVar1;
              *(uint *)((long)pvVar16 + 0x178) = uVar1;
              *(ulong *)((long)pvVar16 + (long)iVar10 * 0x10 + 0x120) =
                   (long)pvVar17 + (ulong)uVar3 + (ulong)uVar2;
              uVar21 = (ulong)*(uint *)((long)pvVar17 + lVar18 + 0xd0);
              pvVar17 = *(void **)((long)pvVar16 + 0x110);
              uVar20 = *(ulong *)((long)pvVar16 + 0x180);
              if (*(ulong *)((long)pvVar16 + 0x180) <= uVar21) {
                uVar20 = uVar21;
              }
              *(ulong *)((long)pvVar16 + 0x180) = uVar20;
            }
            lVar12 = lVar12 + 1;
            lVar18 = lVar18 + 0x90;
          } while (lVar12 < *(int *)((long)pvVar17 + 0x4c));
        }
        local_cc = 0;
        (**(code **)puVar7)(*param_2,0x4e,&local_cc);
        uVar11 = uVar11 + (long)local_cc + 0xfff & 0xfffffffffffff000;
        pvVar17 = malloc(uVar11 + 0x1000);
        *(void **)((long)pvVar16 + 0x100) = pvVar17;
        if (pvVar17 != (void *)0x0) {
          pvVar17 = (void *)((long)pvVar17 + 0xfffU & 0xfffffffffffff000);
          *(void **)((long)pvVar16 + 0x108) = pvVar17;
          if (0 < *(int *)((long)pvVar16 + 0x178)) {
            lVar12 = 0;
            do {
              __n = local_c8[lVar12 + 6];
              memcpy(pvVar17,(void *)local_c8[lVar12],__n);
              lVar12 = lVar12 + 1;
              pvVar17 = (void *)((long)pvVar17 + __n + 0xff & 0xffffffffffffff00);
            } while (lVar12 < *(int *)((long)pvVar16 + 0x178));
          }
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = 0;
          uStack_108 = 0;
          (**(code **)PTR_DAT_04bcf330)(&local_110,*param_2);
          (**(code **)PTR_DAT_04bcf610)(&local_110);
          (**(code **)PTR_DAT_04bcf620)(&local_110,0x62);
          (**(code **)PTR_DAT_04bcf618)(&local_110,*(undefined8 *)((long)pvVar16 + 0x108),uVar11);
          (**(code **)PTR_DAT_04bcf338)(pvVar16,&local_110);
          lVar12 = (**(code **)PTR_DAT_04bcf640)(pvVar16);
          if (0 < *(int *)((long)pvVar16 + 0x178)) {
            lVar18 = 0;
            uVar11 = 0;
            plVar19 = (long *)((long)pvVar16 + 0x118);
            do {
              *plVar19 = uVar11 + lVar12;
              lVar6 = lVar18 + 6;
              lVar18 = lVar18 + 1;
              uVar11 = (uVar11 | 0xff) + local_c8[lVar6] & 0xffffffffffffff00;
              plVar19 = plVar19 + 2;
            } while (lVar18 < *(int *)((long)pvVar16 + 0x178));
          }
          uVar23 = 0;
          bVar5 = true;
          goto LAB_0034e1e4;
        }
      }
      bVar5 = false;
      uVar23 = 3;
    }
  }
LAB_0034e1e4:
  if ((local_220 & 1) == 0) {
    if ((local_238 & 1) != 0) goto LAB_0034e27c;
LAB_0034e1f4:
    if ((local_250 & 1) != 0) goto LAB_0034e28c;
LAB_0034e1fc:
    if ((local_268 & 1) != 0) goto LAB_0034e29c;
LAB_0034e204:
    if ((local_280 & 1) != 0) goto LAB_0034e2ac;
LAB_0034e20c:
    if ((local_298 & 1) != 0) goto LAB_0034e2bc;
LAB_0034e214:
    lVar12 = FUN_0034d57c();
    (**(code **)(lVar12 + 0x18))(local_208);
  }
  else {
    operator_delete(local_210);
    if ((local_238 & 1) == 0) goto LAB_0034e1f4;
LAB_0034e27c:
    operator_delete(local_228);
    if ((local_250 & 1) == 0) goto LAB_0034e1fc;
LAB_0034e28c:
    operator_delete(local_240);
    if ((local_268 & 1) == 0) goto LAB_0034e204;
LAB_0034e29c:
    operator_delete(local_258);
    if ((local_280 & 1) == 0) goto LAB_0034e20c;
LAB_0034e2ac:
    operator_delete(local_270);
    if ((local_298 & 1) == 0) goto LAB_0034e214;
LAB_0034e2bc:
    operator_delete(local_288);
    lVar12 = FUN_0034d57c();
    (**(code **)(lVar12 + 0x18))(local_208);
  }
  if (!bVar5) {
    nn::os::UnlockMutex((MutexType *)&DAT_04be2ae8);
    return uVar23;
  }
  cVar8 = (**(code **)PTR_DAT_04bcf5f0)
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x178)
                     ,*(long *)(param_1 + 0xd8) + 0x118);
  if (cVar8 != '\x01') {
LAB_0034d86c:
    nn::os::UnlockMutex((MutexType *)&DAT_04be2ae8);
    return 3;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_04be2ae8);
  bVar4 = *param_3;
joined_r0x0034daec:
  if ((bVar4 & 1) == 0) {
    lVar12 = FUN_0034fbe4(param_3,5);
    uVar9 = 0x1f;
    if (lVar12 != 0) {
      uVar9 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = uVar9;
  }
  param_1[1] = param_1[1] & 0xfb;
  *param_1 = 1;
  return 0;
}

