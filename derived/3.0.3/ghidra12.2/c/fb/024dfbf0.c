
undefined8 FUN_024dfbf0(long param_1,uint param_2)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_128;
  int local_120;
  int iStack_11c;
  ulong local_118;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  undefined1 auStack_d0 [16];
  long local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  
  puVar6 = PTR_DAT_04bbbc68;
  puVar5 = PTR_DAT_04bb2d00;
  if (*(int *)(param_1 + 0x178) == 1) {
    return 1;
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_118 = local_118 & 0xffffffff00000000;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 & 1) != 0) {
      return 1;
    }
  }
  lVar15 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  do {
    lVar14 = *(long *)(param_1 + 0x68);
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    local_b0 = 0.0;
    if (lVar14 != 0) {
      uVar9 = *(int *)(lVar14 + 0x2b4) +
              (int)(long)(*(float *)((long)&DAT_0417aa48 + lVar15) * 11930465.0);
      pfVar12 = (float *)(puVar5 + (ulong)(uVar9 >> 0x18) * 0x10);
      fVar19 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
      fVar20 = *pfVar12 + fVar19 * pfVar12[1];
      fVar19 = pfVar12[2] + fVar19 * pfVar12[3];
      fVar21 = fVar20 * 0.0;
      local_b8 = *(float *)(lVar14 + 0x278) + fVar21 * 0.0 + fVar19 * 0.0 + (fVar20 + 0.0) * 8.125;
      fStack_b4 = *(float *)(lVar14 + 0x27c) +
                  (fVar21 * 0.0 + 1.0) * 0.0 + fVar19 * 0.0 * 0.0 + fVar21 * 8.125;
      local_b0 = *(float *)(lVar14 + 0x280) + (fVar19 * 0.0 * 0.0 - fVar20 * 0.0) + fVar19 * 8.125;
    }
    uVar10 = FUN_016e1014(&local_b8,0,0);
    lVar14 = *(long *)puVar6;
    if (((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))) {
      uVar9 = FUN_0277d6c4();
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
         (FUN_0124c030(auStack_d0,uVar10), local_c0 != 0)) {
        local_118 = CONCAT44(local_118._4_4_,4);
        lVar14 = FUN_01246470(local_c0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
        if (lVar14 != 0) {
          uVar9 = (uint)local_118 + 7;
          if (-1 < (int)(uint)local_118) {
            uVar9 = (uint)local_118;
          }
          if ((*(byte *)(lVar14 + (ulong)(uint)((int)uVar9 >> 3)) >> (ulong)((uint)local_118 & 7) &
              1) != 0) {
            iVar16 = (int)local_b8;
            bVar7 = local_b8 < 0.0;
            bVar8 = local_b0 < 0.0;
            iVar17 = (int)local_b0;
            fStack_d8 = (float)FUN_016e026c(0,&local_b8,0,0);
            local_dc = (float)(int)((int)((float)iVar16 / 5.0) - (uint)bVar7 & 0xfffffffe) * 5.0 +
                       5.0;
            local_d4 = (float)(int)((int)((float)iVar17 / 5.0) - (uint)bVar8 & 0xfffffffe) * 5.0 +
                       5.0;
            fVar20 = (float)FUN_016e026c(0,&local_dc,0,0);
            lVar14 = *(long *)(param_1 + 0x68);
            fVar20 = fVar20 - *(float *)(lVar14 + 0x27c);
            fVar19 = -fVar20;
            if (0.0 <= fVar20) {
              fVar19 = fVar20;
            }
            if (fVar19 <= 5.0) {
              uVar9 = FUN_006f0400(local_dc - *(float *)(lVar14 + 0x278),
                                   local_d4 - *(float *)(lVar14 + 0x280));
              lVar14 = FUN_0251e98c(1);
              pfVar11 = (float *)(**(code **)(*(long *)(lVar14 + 0x2a0) + 0xf0))(lVar14 + 0x2a0);
              fVar19 = fStack_d8;
              pfVar12 = (float *)(puVar5 + (ulong)(uVar9 >> 0x18 ^ 0x80) * 0x10);
              fVar25 = *pfVar11 + 5.0;
              fVar20 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
              fVar21 = *pfVar12 + fVar20 * pfVar12[1];
              fVar18 = pfVar12[2] + fVar20 * pfVar12[3];
              fVar23 = fVar21 * 0.0;
              fVar22 = local_dc + fVar23 * 0.0 + fVar18 * 0.0 + fVar25 * (fVar21 + 0.0);
              fVar24 = local_d4 + (fVar18 * 0.0 * 0.0 - fVar21 * 0.0) + fVar25 * fVar18;
              lVar14 = FUN_0251e98c(1);
              pfVar12 = (float *)(**(code **)(*(long *)(lVar14 + 0x2a0) + 0xf0))(lVar14 + 0x2a0);
              fVar20 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - fVar22;
              fVar21 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - fVar24;
              if (SQRT(fVar21 * fVar21 + fVar20 * fVar20) <= 2.0) {
                local_e8 = 0x43f800000;
                local_e0 = 0x10000;
                fVar19 = fVar19 + (fVar23 * 0.0 + 1.0) * 0.0 + fVar18 * 0.0 * 0.0 + fVar25 * fVar23;
                fStack_ec = *pfVar12 * 0.96;
                local_f8 = fVar22;
                fStack_f4 = fVar19;
                local_f0 = fVar24;
                iVar16 = FUN_016ed290(&local_f8,0,0,0);
                if (iVar16 == 0) {
                  local_100 = 0x1000001;
                  local_fc = 1;
                  local_10c = CONCAT44(fStack_d8,local_dc);
                  local_fa = 0;
                  local_110 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
                  local_118 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x278);
                  local_104 = local_d4;
                  uVar13 = FUN_016f0c64(&local_118,0);
                  if (((uVar13 & 1) != 0) && ((param_2 & 1) == 0)) {
                    local_120 = (int)((float)(int)local_dc / 5.0) - (uint)(local_dc < 0.0);
                    iStack_11c = (int)((float)(int)local_d4 / 5.0) - (uint)(local_d4 < 0.0);
                    lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 +
                             (ulong)*(byte *)(param_1 + 0x1ee8) * 0x740;
                    if (7 < *(byte *)(param_1 + 0x1ee8)) {
                      lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
                    }
                    *(undefined8 *)(lVar14 + 8) = 0x100000000;
                    *(undefined4 *)(lVar14 + 0xa8) = 0;
                    local_128 = puVar1;
                    uVar13 = FUN_022bbed0(lVar14 + 0xb0,&local_128);
                    if ((uVar13 & 1) != 0) {
                      bVar3 = *(byte *)(lVar14 + 0x10c);
                      *(undefined8 *)(param_1 + 0x1988) = 0;
                      *(undefined8 *)(param_1 + 0x1990) = 0;
                      *(undefined8 *)(param_1 + 0x1998) = 0;
                      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
                      *(undefined8 *)(param_1 + 0x19a0) = 0;
                      *(undefined8 *)(param_1 + 0x19a8) = 0;
                      *(undefined8 *)(param_1 + 0x19b0) = 0;
                      *(undefined8 *)(param_1 + 0x19b8) = 0;
                      *(undefined8 *)(param_1 + 0x19c0) = 0;
                      *(undefined8 *)(param_1 + 0x19c8) = 0;
                      *(undefined8 *)(param_1 + 0x19d0) = 0;
                      *(undefined2 *)(param_1 + 0x19d8) = 0;
                      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
                      *(uint *)(param_1 + 0x17d0) =
                           *(uint *)(param_1 + 0x17d0) & 0xfff80000 |
                           *(uint *)(param_1 + 0x17d0) & 0x3ffff | ((bVar3 & 2) >> 1) << 0x12;
                      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
                      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
                      *(byte *)(param_1 + 0x1982) = bVar3 >> 1 & 1;
                      iVar16 = (int)(fVar19 * 4.0);
                      *(char *)(param_1 + 0x1980) = (char)local_120;
                      *(char *)(param_1 + 0x1981) = (char)iStack_11c;
                      *(float *)(param_1 + 0x1983) = fVar22;
                      *(float *)(param_1 + 0x1989) = fVar24;
                      if (0x7ffe < iVar16) {
                        iVar16 = 0x7fff;
                      }
                      if (iVar16 < -0x7fff) {
                        iVar16 = -0x8000;
                      }
                      *(short *)(param_1 + 0x1987) = (short)iVar16;
                      local_ac = 0x5e;
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
                      lVar15 = 0;
                      if (*(long *)(param_1 + 0x70) != 0) {
                        lVar15 = *(long *)(param_1 + 0x70) + 0x278;
                      }
                      FUN_03ebb160(lVar15,0x5e);
                      return 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar15 = lVar15 + 4;
    if (lVar15 == 0xc) {
      return 1;
    }
  } while( true );
}

