
void FUN_0245883c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
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
  undefined *local_d4;
  float local_cc;
  undefined1 local_c8;
  int local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar13;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  fStack_88 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
  local_8c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_84 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  local_90 = iVar8;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_8c,1);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_90);
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_8c);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_d4 = (undefined *)CONCAT44(local_d4._4_4_,10);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02458a68;
    }
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar11 = (**(code **)(*plVar3 + 0x148))();
    iVar12 = iVar8 - *(int *)(lVar11 + 4);
    if (0xb60b5e < iVar12 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar8 = -0x15555560;
      iVar12 = (int)((float)iVar12 * 0.2);
      if (iVar12 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar8 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar4 <= iVar12) {
        iVar1 = iVar4;
      }
      if (iVar8 <= iVar12) {
        iVar8 = iVar1;
      }
      iVar8 = iVar8 + *(int *)(lVar11 + 4);
    }
    *(int *)(lVar11 + 4) = iVar8;
  }
LAB_02458a68:
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar6 = FUN_0257e1d4(*(long *)(param_1 + 0x68) + 0x278);
  if ((uVar6 & 1) == 0) {
    ppuVar7 = &local_c0;
    local_b8 = (undefined *)((ulong)local_b8._5_3_ << 0x28);
    local_c0 = (undefined *)0x1010000000006;
LAB_02458b18:
    FUN_02374564(param_1,ppuVar7);
  }
  else {
    local_94 = *(int *)(param_1 + 0x15a0);
    if (local_94 == 4) {
      return;
    }
    local_b0 = 0;
    local_c4 = 0;
    local_c0 = PTR_DAT_04bbc1a0 + 0x10;
    local_b8 = PTR_DAT_04bb2010 + 0x10;
    lVar10 = *(long *)(param_1 + 0x68);
    local_a0 = 0;
    iVar8 = *(int *)(lVar10 + 0x2b4);
    lVar11 = lVar10 + 0x2b4;
    local_a8 = local_b8;
    if (local_94 == 3) {
      local_c4 = FUN_015193b8(&local_c0,lVar10 + 0x278,lVar11,0);
      uVar13 = 3;
      iVar8 = iVar8 + -0x40000000;
    }
    else if (local_94 == 1) {
      local_c4 = FUN_0151897c(&local_c0,lVar10 + 0x278,lVar11,0);
      uVar13 = 1;
      iVar8 = iVar8 + 0x40000000;
    }
    else if (local_94 == 0) {
      local_c4 = FUN_01517930(&local_c0,lVar10 + 0x278,lVar11,0);
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    uVar5 = (undefined2)((uint)iVar8 >> 0x10);
    if (local_c4 == 0) {
      local_cc = ((float)local_b0._4_4_ * 5.0 + (float)local_a0._4_4_ * 5.0 + 5.0) * 0.5;
      local_d4._0_4_ = ((float)(int)local_b0 * 5.0 + (float)(int)local_a0 * 5.0 + 5.0) * 0.5;
      fVar20 = (float)FUN_016e026c(0,&local_d4,0,0);
      fVar17 = local_cc;
      fVar14 = local_d4._0_4_;
      lVar11 = *(long *)(param_1 + 0x68);
      local_d4 = (undefined *)CONCAT44(local_d4._4_4_,uVar13);
      uVar9 = *(uint *)(lVar11 + 0x2b4);
      fVar24 = (float)uVar9 * 1.4629181e-09;
      fVar15 = sinf(fVar24);
      fVar24 = cosf(fVar24);
      fVar18 = *(float *)(lVar11 + 0x278);
      fVar21 = *(float *)(lVar11 + 0x27c);
      fVar22 = *(float *)(lVar11 + 0x280);
      iVar8 = -0x40000000;
      if (local_d4._0_4_ != 4.2039e-45) {
        iVar8 = (uint)(local_d4._0_4_ == 1.4013e-45) << 0x1e;
      }
      fVar23 = fVar15 * 0.0;
      fVar25 = (float)(iVar8 + uVar9) * 1.4629181e-09;
      fVar16 = sinf(fVar25);
      fVar25 = cosf(fVar25);
      fVar19 = fVar16 * 0.0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1982) = (int)(fVar14 * 999.99994);
      iVar8 = (int)(fVar20 * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar8;
      *(int *)(param_1 + 0x1988) = (int)(fVar17 * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = uVar5;
      *(int *)(param_1 + 0x198c) =
           (int)((fVar18 + fVar23 * 0.0 + fVar24 * 0.0 + (fVar15 + 0.0) * -1.3 + 0.0 +
                 fVar19 * 0.0 + fVar25 * 0.0 + (fVar16 + 0.0) * 1.3 + 0.0) * 999.99994);
      iVar8 = (int)((fVar21 + (fVar23 * 0.0 + 1.0) * 0.0 + fVar24 * 0.0 * 0.0 + fVar23 * -1.3 + 0.0
                    + (fVar19 * 0.0 + 1.0) * 0.0 + fVar25 * 0.0 * 0.0 + fVar19 * 1.3 + 0.0) * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar8;
      *(int *)(param_1 + 0x1992) =
           (int)((fVar22 + (fVar24 * 0.0 * 0.0 - fVar15 * 0.0) + fVar24 * -1.3 + 0.0 +
                 (fVar25 * 0.0 * 0.0 - fVar16 * 0.0) + fVar25 * 1.3 + 0.0) * 999.99994);
      lVar11 = *(long *)(param_1 + 0x68);
      *(int *)(param_1 + 0x1996) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
      iVar8 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x199a) = (short)iVar8;
      fVar14 = *(float *)(lVar11 + 0x280);
      *(char *)(param_1 + 0x19a0) = (char)uVar13;
      *(int *)(param_1 + 0x199c) = (int)(fVar14 * 999.99994);
      uVar9 = 0xcb;
    }
    else if (local_c4 == 2) {
      lVar11 = *(long *)(param_1 + 0x68);
      fVar14 = *(float *)(lVar11 + 0x278);
      fVar17 = *(float *)(lVar11 + 0x27c);
      fVar20 = *(float *)(lVar11 + 0x280);
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(char *)(param_1 + 0x198c) = (char)uVar13;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1982) = (int)(fVar14 * 999.99994);
      iVar8 = (int)(fVar17 * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar8;
      *(undefined2 *)(param_1 + 0x1980) = uVar5;
      uVar9 = 0xca;
      *(int *)(param_1 + 0x1988) = (int)(fVar20 * 999.99994);
    }
    else {
      if ((local_c4 != 3) && (local_c4 != 5)) {
        if (local_c4 != 6) {
          return;
        }
        local_cc = 0.0;
        ppuVar7 = &local_d4;
        local_c8 = 0;
        local_d4 = (undefined *)0x1010000000006;
        goto LAB_02458b18;
      }
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      lVar11 = *(long *)(param_1 + 0x68);
      *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
      iVar8 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar8;
      *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar11 + 0x280) * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(lVar11 + 0x2b6);
      uVar9 = 0xce;
    }
    local_d4 = (undefined *)CONCAT44(local_d4._4_4_,uVar9);
    if (uVar9 < 0x149) {
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar11 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar11 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar11,uVar9);
    }
  }
  return;
}

