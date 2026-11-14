
undefined8 FUN_016f4908(float *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 uVar11;
  bool bVar12;
  ulong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_104;
  float local_fc;
  float local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_d0;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  
  fVar16 = *param_1;
  fVar20 = param_1[1];
  fVar15 = param_1[2];
  fVar17 = (float)(int)((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0));
  fVar22 = fVar17 * 5.0;
  fVar19 = (float)(int)((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
  fVar23 = fVar19 * 5.0;
  if (fVar17 * 5.0 + 2.5 < fVar16) {
    fVar22 = fVar22 + 5.0;
  }
  if (fVar19 * 5.0 + 2.5 < fVar15) {
    fVar23 = fVar23 + 5.0;
  }
  bVar3 = true;
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2a0) + 0xf0))(lVar8 + 0x2a0);
  fVar16 = *pfVar9;
  fVar17 = fVar22 + 5.0;
  local_b4 = 0x8f73f800000;
  fVar19 = fVar22 + -5.0;
  fVar25 = fVar23 + -5.0;
  fVar24 = fVar23 + 5.0;
  local_ac = 0;
  fStack_b8 = fVar16 * 0.6;
  local_c4 = fVar17;
  fStack_c0 = fVar20;
  local_bc = fVar23;
  iVar4 = FUN_016ed290(&local_c4,0,0,0);
  local_c4 = fVar19;
  fStack_c0 = fVar20;
  local_bc = fVar23;
  iVar5 = FUN_016ed290(&local_c4,0,0,0);
  local_c4 = fVar22;
  fStack_c0 = fVar20;
  local_bc = fVar25;
  iVar6 = FUN_016ed290(&local_c4,0,0,0);
  local_c4 = fVar22;
  fStack_c0 = fVar20;
  local_bc = fVar24;
  iVar7 = FUN_016ed290(&local_c4,0,0,0);
  fVar15 = param_1[3];
  if ((uint)fVar15 >> 0x1e == 0) {
    uVar13 = 0x20000000;
    bVar14 = true;
    bVar3 = true;
LAB_016f4ab8:
    bVar12 = true;
  }
  else {
    if ((int)fVar15 < 0) {
      if ((uint)fVar15 >> 0x1e < 3) {
        bVar14 = false;
        uVar13 = 0xa0000000;
        bVar3 = true;
      }
      else {
        bVar14 = true;
        uVar13 = 0xe0000000;
        bVar3 = false;
      }
      goto LAB_016f4ab8;
    }
    bVar12 = false;
    uVar13 = 0x60000000;
    bVar14 = true;
  }
  uVar10 = FUN_016eb1a0(param_1,1);
  if (((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16 * 0.95,param_1,0), (uVar10 & 1) != 0))
  goto LAB_016f5688;
  local_e0 = CONCAT62(local_e0._2_6_,0x101);
  fVar18 = fVar16 * 0.92;
  local_e4 = fVar18;
  if ((iVar4 == 0) || ((iVar7 == 0 || ((uint)fVar15 >> 0x1e != 0)))) {
    if (iVar6 == 0) {
      bVar12 = true;
    }
    local_e8 = fVar25;
    if ((iVar4 == 0) || (bVar12)) {
      if (iVar7 == 0) {
        bVar3 = true;
      }
      if ((iVar5 == 0) || (bVar3)) {
        if (iVar6 == 0) {
          bVar14 = true;
        }
        if ((iVar5 == 0) || (bVar14)) goto LAB_016f5688;
        local_f0 = CONCAT44(fVar20,fVar19);
        fVar26 = (fVar22 + fVar19) * 0.5;
        fVar24 = (fVar20 + fVar20) * 0.5;
        fVar17 = (fVar23 + fVar25) * 0.5;
        local_104 = CONCAT44(fVar24,fVar26);
        local_fc = fVar17;
        local_c4 = fVar19;
        fStack_c0 = fVar20;
        local_bc = fVar25;
        fStack_b8 = fVar18;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 == 0) {
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if ((uVar10 & 1) == 0) {
            local_f0 = CONCAT44(fVar24,fVar26);
            local_e4 = fVar16 * 0.4;
            local_e8 = fVar17;
            local_c4 = fVar26;
            fStack_c0 = fVar24;
            local_bc = fVar17;
            fStack_b8 = local_e4;
            iVar4 = FUN_016ed290(&local_c4,0,0,0);
            if (iVar4 == 0) {
              uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
              if (((uVar10 & 1) == 0) &&
                 (uVar10 = FUN_016f5abc(fVar16,&local_104), (uVar10 & 1) == 0)) {
                param_1[4] = fVar19;
                goto LAB_016f5aa0;
              }
            }
          }
        }
        fVar27 = fVar20 + 0.0;
        fVar21 = fVar23 + -10.0;
        local_f0 = CONCAT44(fVar27,fVar19);
        fVar24 = (fVar20 + fVar27) * 0.5;
        fVar23 = (fVar23 + fVar21) * 0.5;
        fVar20 = fVar16 * 0.2;
        local_104 = CONCAT44(fVar24,fVar26);
        local_fc = fVar23;
        local_e8 = fVar21;
        local_e4 = fVar18;
        local_c4 = fVar19;
        fStack_c0 = fVar27;
        local_bc = fVar21;
        fStack_b8 = fVar18;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 == 0) {
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if ((uVar10 & 1) != 0) goto LAB_016f55ac;
          local_f0 = CONCAT44(fVar24,fVar26);
          local_e8 = fVar23;
          local_e4 = fVar20;
          local_c4 = fVar26;
          fStack_c0 = fVar24;
          local_bc = fVar23;
          fStack_b8 = fVar20;
          iVar4 = FUN_016ed290(&local_c4,0,0,0);
          if (iVar4 != 0) goto LAB_016f55ac;
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if ((((uVar10 & 1) != 0) ||
              (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0)) ||
             (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), (uVar10 & 1) != 0)) goto LAB_016f55ac;
        }
        else {
LAB_016f55ac:
          fVar19 = fVar22 + -10.0;
          local_f0 = CONCAT44(fVar27,fVar19);
          fVar22 = (fVar22 + fVar19) * 0.5;
          local_104 = CONCAT44(fVar24,fVar22);
          local_fc = fVar17;
          local_e8 = fVar25;
          local_e4 = fVar18;
          local_c4 = fVar19;
          fStack_c0 = fVar27;
          local_bc = fVar25;
          fStack_b8 = fVar18;
          iVar4 = FUN_016ed290(&local_c4,0,0,0);
          if (iVar4 != 0) goto LAB_016f5688;
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if ((uVar10 & 1) != 0) goto LAB_016f5688;
          local_f0 = CONCAT44(fVar24,fVar22);
          local_e8 = fVar17;
          local_e4 = fVar20;
          local_c4 = fVar22;
          fStack_c0 = fVar24;
          local_bc = fVar17;
          fStack_b8 = fVar20;
          iVar4 = FUN_016ed290(&local_c4,0,0,0);
          if (iVar4 != 0) goto LAB_016f5688;
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if ((((uVar10 & 1) != 0) ||
              (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0)) ||
             (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), fVar21 = fVar25, (uVar10 & 1) != 0))
          goto LAB_016f5688;
        }
        param_1[4] = fVar19;
        param_1[5] = fVar27;
        goto LAB_016f5ab0;
      }
      local_f0 = CONCAT44(fVar20,fVar19);
      fVar26 = (fVar22 + fVar19) * 0.5;
      fVar25 = (fVar20 + fVar20) * 0.5;
      fVar17 = (fVar23 + fVar24) * 0.5;
      local_104 = CONCAT44(fVar25,fVar26);
      local_fc = fVar17;
      local_e8 = fVar24;
      local_c4 = fVar19;
      fStack_c0 = fVar20;
      local_bc = fVar24;
      fStack_b8 = fVar18;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 == 0) {
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if ((uVar10 & 1) == 0) {
          local_f0 = CONCAT44(fVar25,fVar26);
          local_e4 = fVar16 * 0.4;
          local_e8 = fVar17;
          local_c4 = fVar26;
          fStack_c0 = fVar25;
          local_bc = fVar17;
          fStack_b8 = local_e4;
          iVar4 = FUN_016ed290(&local_c4,0,0,0);
          if (iVar4 == 0) {
            uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
            if (((uVar10 & 1) == 0) && (uVar10 = FUN_016f5abc(fVar16,&local_104), (uVar10 & 1) == 0)
               ) {
              param_1[4] = fVar19;
              goto LAB_016f5a7c;
            }
          }
        }
      }
      fVar27 = fVar20 + 0.0;
      fVar21 = fVar23 + 10.0;
      local_f0 = CONCAT44(fVar27,fVar19);
      fVar25 = (fVar20 + fVar27) * 0.5;
      fVar23 = (fVar23 + fVar21) * 0.5;
      fVar20 = fVar16 * 0.2;
      local_104 = CONCAT44(fVar25,fVar26);
      local_fc = fVar23;
      local_e8 = fVar21;
      local_e4 = fVar18;
      local_c4 = fVar19;
      fStack_c0 = fVar27;
      local_bc = fVar21;
      fStack_b8 = fVar18;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 == 0) {
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if ((uVar10 & 1) != 0) goto LAB_016f52d8;
        local_f0 = CONCAT44(fVar25,fVar26);
        local_e8 = fVar23;
        local_e4 = fVar20;
        local_c4 = fVar26;
        fStack_c0 = fVar25;
        local_bc = fVar23;
        fStack_b8 = fVar20;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 != 0) goto LAB_016f52d8;
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0))
           || (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), (uVar10 & 1) != 0)) goto LAB_016f52d8;
      }
      else {
LAB_016f52d8:
        fVar19 = fVar22 + -10.0;
        local_f0 = CONCAT44(fVar27,fVar19);
        fVar22 = (fVar22 + fVar19) * 0.5;
        local_104 = CONCAT44(fVar25,fVar22);
        local_fc = fVar17;
        local_e8 = fVar24;
        local_e4 = fVar18;
        local_c4 = fVar19;
        fStack_c0 = fVar27;
        local_bc = fVar24;
        fStack_b8 = fVar18;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 != 0) goto LAB_016f5688;
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if ((uVar10 & 1) != 0) goto LAB_016f5688;
        local_f0 = CONCAT44(fVar25,fVar22);
        local_e8 = fVar17;
        local_e4 = fVar20;
        local_c4 = fVar22;
        fStack_c0 = fVar25;
        local_bc = fVar17;
        fStack_b8 = fVar20;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 != 0) goto LAB_016f5688;
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0))
           || (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), fVar21 = fVar24, (uVar10 & 1) != 0))
        goto LAB_016f5688;
      }
      param_1[4] = fVar19;
      param_1[5] = fVar27;
LAB_016f5ab0:
      param_1[6] = fVar21;
      return 3;
    }
    local_f0 = CONCAT44(fVar20,fVar17);
    fVar26 = (fVar22 + fVar17) * 0.5;
    fVar24 = (fVar20 + fVar20) * 0.5;
    fVar19 = (fVar23 + fVar25) * 0.5;
    local_104 = CONCAT44(fVar24,fVar26);
    local_fc = fVar19;
    local_c4 = fVar17;
    fStack_c0 = fVar20;
    local_bc = fVar25;
    fStack_b8 = fVar18;
    iVar4 = FUN_016ed290(&local_c4,0,0,0);
    if (iVar4 == 0) {
      uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
      if ((uVar10 & 1) == 0) {
        local_f0 = CONCAT44(fVar24,fVar26);
        local_e4 = fVar16 * 0.4;
        local_e8 = fVar19;
        local_c4 = fVar26;
        fStack_c0 = fVar24;
        local_bc = fVar19;
        fStack_b8 = local_e4;
        iVar4 = FUN_016ed290(&local_c4,0,0,0);
        if (iVar4 == 0) {
          uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
          if (((uVar10 & 1) == 0) && (uVar10 = FUN_016f5abc(fVar16,&local_104), (uVar10 & 1) == 0))
          {
            param_1[4] = fVar17;
LAB_016f5aa0:
            param_1[5] = fVar20;
            param_1[6] = fVar25;
            return 2;
          }
        }
      }
    }
    fVar27 = fVar20 + 0.0;
    fVar21 = fVar23 + -10.0;
    local_f0 = CONCAT44(fVar27,fVar17);
    fVar24 = (fVar20 + fVar27) * 0.5;
    fVar23 = (fVar23 + fVar21) * 0.5;
    fVar20 = fVar16 * 0.2;
    local_104 = CONCAT44(fVar24,fVar26);
    local_fc = fVar23;
    local_e8 = fVar21;
    local_e4 = fVar18;
    local_c4 = fVar17;
    fStack_c0 = fVar27;
    local_bc = fVar21;
    fStack_b8 = fVar18;
    iVar4 = FUN_016ed290(&local_c4,0,0,0);
    if (iVar4 == 0) {
      uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
      if ((uVar10 & 1) != 0) goto LAB_016f4ff0;
      local_f0 = CONCAT44(fVar24,fVar26);
      local_e8 = fVar23;
      local_e4 = fVar20;
      local_c4 = fVar26;
      fStack_c0 = fVar24;
      local_bc = fVar23;
      fStack_b8 = fVar20;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 != 0) goto LAB_016f4ff0;
      uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
      if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0))
         || (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), (uVar10 & 1) != 0)) goto LAB_016f4ff0;
    }
    else {
LAB_016f4ff0:
      fVar17 = fVar22 + 10.0;
      local_f0 = CONCAT44(fVar27,fVar17);
      fVar22 = (fVar22 + fVar17) * 0.5;
      local_104 = CONCAT44(fVar24,fVar22);
      local_fc = fVar19;
      local_e8 = fVar25;
      local_e4 = fVar18;
      local_c4 = fVar17;
      fStack_c0 = fVar27;
      local_bc = fVar25;
      fStack_b8 = fVar18;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 != 0) goto LAB_016f5688;
      uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
      if ((uVar10 & 1) != 0) goto LAB_016f5688;
      local_f0 = CONCAT44(fVar24,fVar22);
      local_e8 = fVar19;
      local_e4 = fVar20;
      local_c4 = fVar22;
      fStack_c0 = fVar24;
      local_bc = fVar19;
      fStack_b8 = fVar20;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 != 0) goto LAB_016f5688;
      uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
      if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0))
         || (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), fVar21 = fVar25, (uVar10 & 1) != 0))
      goto LAB_016f5688;
    }
    param_1[4] = fVar17;
    param_1[5] = fVar27;
    goto LAB_016f50d0;
  }
  local_f0 = CONCAT44(fVar20,fVar17);
  fVar26 = (fVar22 + fVar17) * 0.5;
  fVar25 = (fVar20 + fVar20) * 0.5;
  fVar19 = (fVar23 + fVar24) * 0.5;
  local_104 = CONCAT44(fVar25,fVar26);
  local_fc = fVar19;
  local_e8 = fVar24;
  local_c4 = fVar17;
  fStack_c0 = fVar20;
  local_bc = fVar24;
  fStack_b8 = fVar18;
  iVar4 = FUN_016ed290(&local_c4,0,0,0);
  if (iVar4 == 0) {
    uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
    if ((uVar10 & 1) == 0) {
      local_f0 = CONCAT44(fVar25,fVar26);
      local_e4 = fVar16 * 0.4;
      local_e8 = fVar19;
      local_c4 = fVar26;
      fStack_c0 = fVar25;
      local_bc = fVar19;
      fStack_b8 = local_e4;
      iVar4 = FUN_016ed290(&local_c4,0,0,0);
      if (iVar4 == 0) {
        uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
        if (((uVar10 & 1) == 0) && (uVar10 = FUN_016f5abc(fVar16,&local_104), (uVar10 & 1) == 0)) {
          param_1[4] = fVar17;
LAB_016f5a7c:
          param_1[5] = fVar20;
          param_1[6] = fVar24;
          return 2;
        }
      }
    }
  }
  fVar27 = fVar20 + 0.0;
  fVar21 = fVar23 + 10.0;
  local_f0 = CONCAT44(fVar27,fVar17);
  fVar25 = (fVar20 + fVar27) * 0.5;
  fVar23 = (fVar23 + fVar21) * 0.5;
  fVar20 = fVar16 * 0.2;
  local_104 = CONCAT44(fVar25,fVar26);
  local_fc = fVar23;
  local_e8 = fVar21;
  local_e4 = fVar18;
  local_c4 = fVar17;
  fStack_c0 = fVar27;
  local_bc = fVar21;
  fStack_b8 = fVar18;
  iVar4 = FUN_016ed290(&local_c4,0,0,0);
  if (iVar4 == 0) {
    uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
    if ((uVar10 & 1) != 0) goto LAB_016f4d0c;
    local_f0 = CONCAT44(fVar25,fVar26);
    local_e8 = fVar23;
    local_e4 = fVar20;
    local_c4 = fVar26;
    fStack_c0 = fVar25;
    local_bc = fVar23;
    fStack_b8 = fVar20;
    iVar4 = FUN_016ed290(&local_c4,0,0,0);
    if (iVar4 != 0) goto LAB_016f4d0c;
    uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
    if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0)) ||
       (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), (uVar10 & 1) != 0)) goto LAB_016f4d0c;
  }
  else {
LAB_016f4d0c:
    fVar17 = fVar22 + 10.0;
    local_f0 = CONCAT44(fVar27,fVar17);
    fVar22 = (fVar22 + fVar17) * 0.5;
    local_104 = CONCAT44(fVar25,fVar22);
    local_fc = fVar19;
    local_e8 = fVar24;
    local_e4 = fVar18;
    local_c4 = fVar17;
    fStack_c0 = fVar27;
    local_bc = fVar24;
    fStack_b8 = fVar18;
    iVar4 = FUN_016ed290(&local_c4,0,0,0);
    if (iVar4 != 0) {
LAB_016f5688:
      puVar2 = PTR_DAT_04bb2d00;
      if (DAT_04c487d4 != -1) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 1 & 1) != 0) {
          fVar19 = *param_1;
          fVar17 = param_1[2];
          pfVar9 = (float *)(PTR_DAT_04bb2d00 + (uVar13 >> 0x18) * 0x10);
          fVar20 = *pfVar9 + pfVar9[1] * 0.0;
          fVar22 = pfVar9[2] + pfVar9[3] * 0.0;
          fVar18 = fVar19 + fVar20 * 0.0 * 0.0 + fVar22 * 0.0 + fVar16 * 0.98 * (fVar20 + 0.0);
          fVar25 = fVar17 + (fVar22 * 0.0 * 0.0 - fVar20 * 0.0) + fVar16 * 0.98 * fVar22;
          fVar20 = (float)(int)((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0));
          fVar22 = fVar20 * 5.0;
          fVar23 = (float)(int)((int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0));
          fVar24 = fVar23 * 5.0;
          if (fVar20 * 5.0 + 2.5 < fVar18) {
            fVar22 = fVar22 + 5.0;
          }
          if (fVar23 * 5.0 + 2.5 < fVar25) {
            fVar24 = fVar24 + 5.0;
          }
          bVar3 = ((uint)(uVar13 >> 0x1d) | 4) != 5;
          local_e0 = 0x8f73f800000;
          local_d8 = 0;
          local_f2 = 0;
          fVar25 = (((fVar19 - fVar22) * -0.70710677 + (fVar17 - fVar24) * 0.70710677) / -0.99999994
                   ) * 0.70710677;
          fVar23 = (((fVar19 - fVar22) * 0.70710677 + (fVar17 - fVar24) * 0.70710677) / 0.99999994)
                   * 0.70710677;
          fVar20 = fVar25;
          if (bVar3) {
            fVar20 = fVar23;
          }
          fVar22 = fVar22 + fVar20;
          fVar20 = fVar24 - fVar25;
          if (bVar3) {
            fVar20 = fVar24 + fVar23;
          }
          fVar23 = param_1[1] + 0.0;
          local_d0 = (ulong)(uint)fVar22;
          fVar19 = fVar19 + (fVar22 - fVar19) + (fVar22 - fVar19);
          fVar17 = fVar17 + (fVar20 - fVar17) + (fVar20 - fVar17);
          local_f4 = 0x101;
          fVar24 = fVar16 * 0.975;
          local_f0 = CONCAT44(fVar23,fVar19);
          local_104 = CONCAT44(fVar23,fVar19);
          local_fc = fVar17;
          local_f8 = fVar24;
          local_e8 = fVar17;
          local_e4 = fVar24;
          local_c8 = fVar20;
          iVar4 = FUN_016ed290(&local_f0,0,0,0);
          if ((iVar4 == 0) && (uVar13 = FUN_016e9c80(fVar24,&local_104,1,1,0), (uVar13 & 1) != 0)) {
            local_fc = param_1[2];
            local_104 = *(ulong *)param_1;
            uVar13 = FUN_016e9c80(local_f8,&local_104,(undefined1)local_f4,local_f4._1_1_,local_f2);
            if ((uVar13 & 1) != 0) {
              pfVar9 = (float *)(puVar2 + ((ulong)((uint)fVar15 >> 0x15) & 0x7f0));
              local_f0 = (ulong)(uint)fVar22;
              local_104 = (ulong)(uint)fVar22;
              local_f2 = 1;
              fVar15 = (float)((uint)fVar15 >> 1 & 0xffffff) * 5.9604645e-08;
              fVar25 = *pfVar9 + fVar15 * pfVar9[1];
              fVar22 = pfVar9[2] + fVar15 * pfVar9[3];
              fVar18 = fVar25 * 0.0;
              fVar22 = fVar22 + fVar22;
              fVar21 = fVar25 * (fVar25 + fVar25);
              fVar27 = fVar18 * fVar22;
              fVar22 = fVar25 * fVar22;
              fVar26 = fVar18 * (fVar18 + fVar18);
              fVar24 = ((1.0 - fVar26) - fVar21) +
                       ((fVar25 + fVar25) * fVar18 + fVar27) * 0.0 + (fVar26 - fVar22) * 0.0;
              fVar15 = -fVar24;
              if (0.0 <= fVar26 + fVar22 +
                         (fVar25 * (fVar18 + fVar18) - fVar27) * 0.0 +
                         ((1.0 - fVar21) - fVar26) * 0.0) {
                fVar15 = fVar24;
              }
              local_fc = fVar20;
              local_f8 = fVar16 * 0.95;
              local_e8 = fVar20;
              uVar13 = FUN_016eb1a0(fVar16 * 0.75,&local_d0,0.0 < fVar15);
              if ((uVar13 & 1) == 0) {
                return 0;
              }
              local_d8 = CONCAT31(local_d8._1_3_,1);
              uVar11 = FUN_016ed290(&local_f0,0,0,0);
              if ((int)uVar11 == 0) {
                return uVar11;
              }
              local_e4 = 1.0;
              iVar4 = FUN_016ed290(&local_f0,0,0,0);
              if ((iVar4 == 0) && (uVar13 = FUN_016e9c68(&local_104), (uVar13 & 1) != 0)) {
                param_1[4] = fVar19;
                param_1[5] = fVar23;
                param_1[6] = fVar17;
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
    uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
    if ((uVar10 & 1) != 0) goto LAB_016f5688;
    local_f0 = CONCAT44(fVar25,fVar22);
    local_e8 = fVar19;
    local_e4 = fVar20;
    local_c4 = fVar22;
    fStack_c0 = fVar25;
    local_bc = fVar19;
    fStack_b8 = fVar20;
    iVar4 = FUN_016ed290(&local_c4,0,0,0);
    if (iVar4 != 0) goto LAB_016f5688;
    uVar10 = FUN_016eafec(local_e4,&local_f0,0,local_e0 & 0xff,local_e0._1_1_);
    if ((((uVar10 & 1) != 0) || (uVar10 = FUN_016eb1a0(fVar16,&local_104,1), (uVar10 & 1) != 0)) ||
       (uVar10 = FUN_016eb1a0(fVar16,&local_104,0), fVar21 = fVar24, (uVar10 & 1) != 0))
    goto LAB_016f5688;
  }
  param_1[4] = fVar17;
  param_1[5] = fVar27;
LAB_016f50d0:
  param_1[6] = fVar21;
  return 3;
}

