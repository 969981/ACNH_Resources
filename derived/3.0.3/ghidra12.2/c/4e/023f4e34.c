
void FUN_023f4e34(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
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
  undefined8 local_d4;
  float local_cc;
  undefined1 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar15 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar9 + 0x2ec) = uVar15;
  *(undefined1 *)((long)puVar9 + 0x2e5) = 1;
  fStack_88 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_90 = (uint)*(ushort *)(param_1 + 0x18ef) << 0x10;
  local_8c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_84 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_8c,1);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_90);
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_8c);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_d4 = CONCAT44(local_d4._4_4_,10);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023f5064;
    }
    plVar12 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar12 = *(long **)(param_1 + 0x4c8);
    }
    lVar14 = (**(code **)(*plVar12 + 0x148))();
    iVar11 = local_90 - *(int *)(lVar14 + 4);
    iVar10 = local_90;
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar10 = -0x15555560;
      iVar11 = (int)((float)iVar11 * 0.2);
      if (iVar11 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar10 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar3 <= iVar11) {
        iVar1 = iVar3;
      }
      if (iVar10 <= iVar11) {
        iVar10 = iVar1;
      }
      iVar10 = iVar10 + *(int *)(lVar14 + 4);
    }
    *(int *)(lVar14 + 4) = iVar10;
  }
LAB_023f5064:
  if (*(char *)(param_1 + 0x190d) != '\0') {
    local_c0 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x1912) * 0.25,
                        (float)*(int *)(param_1 + 0x190e) * 0.001);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)*(int *)(param_1 + 0x1914) * 0.001);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_01730cb4(*(long *)(param_1 + 0x60) + 0x12c0,&local_c0);
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x17d5) >> 5 & 1) != 0) {
    uVar7 = FUN_0231eddc(param_1,0);
    puVar5 = PTR_DAT_04bb27c0;
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    if (lVar14 != 0) {
      uVar13 = *(uint *)PTR_DAT_04bb32f8;
      if ((((uVar13 == 0) ||
           (plVar12 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
          ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar10 = (**(code **)(*plVar8 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_023f526c;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_023f526c:
        uVar13 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar14 = plVar12[0x2a];
        uVar2 = *(uint *)(plVar12 + 0x49);
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
        if ((((int)lVar14 == 1) && ((uVar6 & uVar13) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
          FUN_008fc6e4(plVar12,0,0xffffffff);
          *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffffdfff;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar7 = FUN_016d7524(*(long *)(param_1 + 0x68) + 0x278);
  if ((uVar7 & 1) == 0) {
    puVar9 = &local_c0;
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffff0000000000);
    local_c0 = (undefined *)0x1010000000006;
LAB_023f523c:
    FUN_02374564(param_1,puVar9);
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
    local_a0 = 0;
    lVar14 = *(long *)(param_1 + 0x68) + 0x2b4;
    iVar10 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
    local_a8 = local_b8;
    if (local_94 == 3) {
      local_c4 = FUN_015193b8(&local_c0,param_1 + 0xb3c,lVar14,0);
      uVar15 = 3;
      iVar10 = iVar10 + -0x40000000;
    }
    else if (local_94 == 1) {
      local_c4 = FUN_0151897c(&local_c0,param_1 + 0xb3c,lVar14,0);
      uVar15 = 1;
      iVar10 = iVar10 + 0x40000000;
    }
    else if (local_94 == 0) {
      local_c4 = FUN_01517930(&local_c0,param_1 + 0xb3c,lVar14,0);
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    uVar4 = (undefined2)((uint)iVar10 >> 0x10);
    if ((local_c4 == 0) || (local_c4 == 1)) {
      local_cc = ((float)local_b0._4_4_ * 5.0 + (float)local_a0._4_4_ * 5.0 + 5.0) * 0.5;
      local_d4._0_4_ = ((float)(int)local_b0 * 5.0 + (float)(int)local_a0 * 5.0 + 5.0) * 0.5;
      fVar16 = (float)FUN_016e026c(0,&local_d4,0,0);
      fVar22 = local_cc;
      fVar19 = (float)local_d4;
      lVar14 = *(long *)(param_1 + 0x68);
      local_d4 = CONCAT44(local_d4._4_4_,uVar15);
      uVar13 = *(uint *)(lVar14 + 0x2b4);
      fVar26 = (float)uVar13 * 1.4629181e-09;
      fVar17 = sinf(fVar26);
      fVar26 = cosf(fVar26);
      fVar20 = *(float *)(lVar14 + 0x278);
      fVar23 = *(float *)(lVar14 + 0x27c);
      fVar24 = *(float *)(lVar14 + 0x280);
      iVar10 = -0x40000000;
      if ((float)local_d4 != 4.2039e-45) {
        iVar10 = (uint)((float)local_d4 == 1.4013e-45) << 0x1e;
      }
      fVar25 = fVar17 * 0.0;
      fVar27 = (float)(iVar10 + uVar13) * 1.4629181e-09;
      fVar18 = sinf(fVar27);
      fVar27 = cosf(fVar27);
      fVar21 = fVar18 * 0.0;
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
      *(int *)(param_1 + 0x1982) = (int)(fVar19 * 999.99994);
      iVar10 = (int)(fVar16 * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar10;
      *(int *)(param_1 + 0x1988) = (int)(fVar22 * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = uVar4;
      *(int *)(param_1 + 0x198c) =
           (int)((fVar20 + fVar25 * 0.0 + fVar26 * 0.0 + (fVar17 + 0.0) * -1.3 + 0.0 +
                 fVar21 * 0.0 + fVar27 * 0.0 + (fVar18 + 0.0) * 1.3 + 0.0) * 999.99994);
      iVar10 = (int)((fVar23 + (fVar25 * 0.0 + 1.0) * 0.0 + fVar26 * 0.0 * 0.0 + fVar25 * -1.3 + 0.0
                     + (fVar21 * 0.0 + 1.0) * 0.0 + fVar27 * 0.0 * 0.0 + fVar21 * 1.3 + 0.0) * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar10;
      *(int *)(param_1 + 0x1992) =
           (int)((fVar24 + (fVar26 * 0.0 * 0.0 - fVar17 * 0.0) + fVar26 * -1.3 + 0.0 +
                 (fVar27 * 0.0 * 0.0 - fVar18 * 0.0) + fVar27 * 1.3 + 0.0) * 999.99994);
      lVar14 = *(long *)(param_1 + 0x68);
      *(int *)(param_1 + 0x1996) = (int)(*(float *)(lVar14 + 0x278) * 999.99994);
      iVar10 = (int)(*(float *)(lVar14 + 0x27c) * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x199a) = (short)iVar10;
      fVar19 = *(float *)(lVar14 + 0x280);
      *(char *)(param_1 + 0x19a1) = (char)uVar15;
      *(undefined1 *)(param_1 + 0x19a4) = 0;
      *(int *)(param_1 + 0x199c) = (int)(fVar19 * 999.99994);
      *(bool *)(param_1 + 0x19a0) = *(char *)(param_1 + 0x190c) != '\0';
      *(bool *)(param_1 + 0x19a3) = local_c4 == 1;
      uVar13 = 0x68;
    }
    else if (local_c4 == 2) {
      lVar14 = *(long *)(param_1 + 0x68);
      fVar19 = *(float *)(lVar14 + 0x278);
      fVar22 = *(float *)(lVar14 + 0x27c);
      fVar16 = *(float *)(lVar14 + 0x280);
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
      *(char *)(param_1 + 0x198c) = (char)uVar15;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1982) = (int)(fVar19 * 999.99994);
      iVar10 = (int)(fVar22 * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar10;
      *(undefined2 *)(param_1 + 0x1980) = uVar4;
      uVar13 = 0x67;
      *(int *)(param_1 + 0x1988) = (int)(fVar16 * 999.99994);
    }
    else {
      if ((local_c4 != 3) && (local_c4 != 5)) {
        if (local_c4 != 4) {
          if (local_c4 != 6) {
            return;
          }
          local_cc = 0.0;
          puVar9 = &local_d4;
          local_c8 = 0;
          local_d4 = 0x1010000000006;
          goto LAB_023f523c;
        }
        *(undefined1 *)(param_1 + 0xb49) = 1;
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
      lVar14 = *(long *)(param_1 + 0x68);
      *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar14 + 0x278) * 999.99994);
      iVar10 = (int)(*(float *)(lVar14 + 0x27c) * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar10;
      *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar14 + 0x280) * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(lVar14 + 0x2b6);
      uVar13 = 0x6b;
    }
    local_d4 = CONCAT44(local_d4._4_4_,uVar13);
    if (uVar13 < 0x149) {
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
      lVar14 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar14 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar14,uVar13);
    }
  }
  return;
}

