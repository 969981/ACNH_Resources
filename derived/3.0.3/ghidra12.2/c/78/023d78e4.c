
void FUN_023d78e4(long param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  float *pfVar5;
  undefined2 uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_98;
  undefined8 *puStack_90;
  int local_88;
  int iStack_84;
  undefined8 *local_80;
  int local_78;
  int iStack_74;
  float local_6c [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_28;
  int local_24;
  
  pfVar1 = (float *)PTR_DAT_04bc3038;
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar9 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar4 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar4 + 0x148))();
    iVar7 = iVar9 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar7 + 0x5b05afU) {
      iVar12 = (int)((float)iVar7 * 0.1666667);
      iVar7 = 0x10000000;
      if (iVar12 < 1) {
        iVar7 = -0x5b05b0;
      }
      iVar9 = -0x10000000;
      if (0 < iVar12) {
        iVar9 = 0x5b05b0;
      }
      iVar2 = iVar12;
      if (iVar7 <= iVar12) {
        iVar2 = iVar7;
      }
      if (iVar9 <= iVar12) {
        iVar9 = iVar2;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar9;
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    fVar16 = (float)FUN_03eb4b60(0x3ecccccd,0x41200000,0x3e4ccccc,puVar14 + 0x4f,&local_50);
    if (fVar16 != 0.0) {
      puVar14 = *(undefined8 **)(param_1 + 0x60);
      if (puVar14 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          puVar14 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar14 = &DAT_05240280;
        }
      }
      uVar11 = FUN_0170a6d0(puVar14,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
    }
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "FixDirWalkWait";
    FUN_01707d90(puVar14,&local_50,6,0,0);
    return;
  }
  lVar10 = *(long *)(param_1 + 0x68);
  fVar16 = *(float *)(param_1 + 0x228c) - *(float *)(lVar10 + 0x278);
  fVar17 = *(float *)(param_1 + 0x2290) - *(float *)(lVar10 + 0x27c);
  fVar18 = *(float *)(param_1 + 0x2294) - *(float *)(lVar10 + 0x280);
  if ((1.0 <= SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18)) ||
     (*(char *)(param_1 + 0x17ac) != '\0')) {
LAB_023d7ba8:
    _uStack_28 = CONCAT44(10,uStack_28);
    *(byte *)(param_1 + 0x18f5) = *(byte *)(param_1 + 0x18f5) & 0xfb;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
    uVar11 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar11 & 1) == 0) {
      local_48 = (char *)((ulong)local_48._4_4_ << 0x20);
      local_50 = (undefined *)CONCAT35(local_50._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_50);
    }
    return;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0x1f);
  if (-1 < *(int *)(param_1 + 0xec8)) goto LAB_023d7ba8;
  if (*(char *)(param_1 + 0x229c) == '\0') goto LAB_023d7c58;
  pfVar5 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar5 = (float *)(param_1 + 0xeec);
  }
  if (0.8 <= SQRT(pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5)) {
    FUN_02569408(&local_24,param_1 + 0xec0);
    uVar13 = local_24 + 0x20000000U >> 0x1e;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar13);
    if (*(char *)(param_1 + 0x229c) == '\0') {
      *(undefined4 *)(param_1 + 0x2298) = 0;
      goto LAB_023d7c58;
    }
    if (uVar13 == *(uint *)(param_1 + 0x2298)) goto LAB_023d7c58;
  }
  *(undefined1 *)(param_1 + 0x229c) = 0;
LAB_023d7c58:
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar1 = (float *)(param_1 + 0xeec);
  }
  if (SQRT(pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1) < 0.8) {
    return;
  }
  FUN_02569408(&local_50,param_1 + 0xec0);
  uVar13 = (uint)(long)((float)((uint)local_50 + 0x20000000 >> 0x1e) * 90.0 * 11930465.0);
  if ((uint)local_50 != uVar13) {
    uVar3 = (uint)local_50 - uVar13;
    if ((uint)local_50 < uVar13 || (uint)local_50 - uVar13 == 0) {
      uVar3 = uVar13 - (uint)local_50;
    }
    uVar13 = -uVar3;
    if (uVar3 < 0x80000001) {
      uVar13 = uVar3;
    }
    if (0x1b05b060 < uVar13) {
      return;
    }
  }
  FUN_02569408(&local_50,param_1 + 0xec0);
  puVar8 = PTR_DAT_04bb2d00;
  uVar13 = (uint)local_50 + 0x20000000 >> 0x1e;
  lVar10 = *(long *)(param_1 + 0x68);
  lVar15 = (long)((float)uVar13 * 90.0 * 11930465.0);
  uVar11 = (ulong)((float)((uint)((int)lVar15 + *(int *)(lVar10 + 0x2b4) + 0x20000000) >> 0x1e) *
                   90.0 * 11930465.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar11 >> 0x18 & 0xff) * 0x10);
  fVar16 = (float)((uint)uVar11 & 0xffffff);
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  fVar17 = (float)(int)(((int)((float)(int)*(float *)(lVar10 + 0x278) / 10.0) -
                        (uint)(*(float *)(lVar10 + 0x278) < 0.0)) +
                       (int)(*pfVar1 + pfVar1[1] * fVar16 * 5.9604645e-08)) * 10.0;
  fVar18 = fVar17 + 2.5;
  fVar19 = fVar17 + 10.0 + -2.5;
  fVar16 = (float)(int)(((int)((float)(int)*(float *)(lVar10 + 0x280) / 10.0) -
                        (uint)(*(float *)(lVar10 + 0x280) < 0.0)) +
                       (int)(pfVar1[2] + pfVar1[3] * fVar16 * 5.9604645e-08)) * 10.0;
  fVar17 = fVar16 + 2.5;
  fVar16 = fVar16 + 10.0 + -2.5;
  puStack_90 = &DAT_048f9750;
  local_80 = &DAT_048f9750;
  local_78 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar9 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iStack_74 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar7 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  local_88 = local_78;
  if (iVar9 <= local_78) {
    local_88 = iVar9;
  }
  if (local_78 <= iVar9) {
    local_78 = iVar9;
  }
  iStack_84 = iStack_74;
  if (iVar7 <= iStack_74) {
    iStack_84 = iVar7;
  }
  if (iStack_74 <= iVar7) {
    iStack_74 = iVar7;
  }
  uVar11 = FUN_023d5f80(*(undefined4 *)(lVar10 + 0x27c),&local_98,param_1 + 0x1ee8,
                        *(undefined4 *)(param_1 + 0x230));
  uVar6 = (undefined2)((ulong)lVar15 >> 0x10);
  if ((uVar11 & 1) == 0) {
    if (*(char *)(param_1 + 0x229c) != '\0') {
      return;
    }
    *(uint *)(param_1 + 0x2298) = uVar13;
    *(undefined1 *)(param_1 + 0x229c) = 1;
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_6c[0] = 4.48416e-43;
    *(undefined2 *)(param_1 + 0x1998) = uVar6;
  }
  else {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    lVar10 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_6c[1] = 0.0;
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar9 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar9;
    *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar10 + 0x280) * 999.99994);
    *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(lVar10 + 0x2b6);
    iVar9 = *(int *)(lVar10 + 0x2b4);
    local_6c[0] = ((float)local_88 * 5.0 + (float)local_78 * 5.0 + 5.0) * 0.5;
    local_6c[2] = ((float)iStack_84 * 5.0 + (float)iStack_74 * 5.0 + 5.0) * 0.5;
    fVar16 = (float)FUN_016e026c(0,local_6c,0,0);
    uVar11 = (ulong)((float)(iVar9 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    pfVar1 = (float *)(puVar8 + (uVar11 >> 0x18 & 0xff) * 0x10);
    fVar17 = (float)((uint)uVar11 & 0xffffff);
    fVar18 = pfVar1[2];
    fVar19 = pfVar1[3];
    *(int *)(param_1 + 0x198c) =
         (int)((local_6c[0] - (*pfVar1 + pfVar1[1] * fVar17 * 5.9604645e-08) * 0.01) * 999.99994);
    iVar9 = (int)((fVar16 + 0.0) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x1990) = (short)iVar9;
    *(int *)(param_1 + 0x1992) =
         (int)((local_6c[2] - (fVar18 + fVar19 * fVar17 * 5.9604645e-08) * 0.01) * 999.99994);
    *(short *)(param_1 + 0x1996) =
         (short)((ulong)(long)((float)(*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >>
                                      0x1e) * 90.0 * 11930465.0) >> 0x10);
    *(undefined2 *)(param_1 + 0x1998) = uVar6;
    local_6c[0] = 4.47014e-43;
  }
  if ((uint)local_6c[0] < 0x149) {
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
    lVar10 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar10 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar10,local_6c[0]);
  }
  return;
}

