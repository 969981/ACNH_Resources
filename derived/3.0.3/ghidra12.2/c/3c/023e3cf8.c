
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023e3cf8(long param_1)

{
  float *pfVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte local_34 [4];
  undefined1 local_18;
  byte local_17;
  undefined4 local_14;
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 == 0) {
      iVar5 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar10 = _DAT_00000278;
    }
    else {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar7 + 0x2b4) >> 0x14) & 0xff0));
      fVar10 = (float)(*(uint *)(lVar7 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar12 = *pfVar1 + fVar10 * pfVar1[1];
      fVar10 = pfVar1[2] + fVar10 * pfVar1[3];
      fVar13 = fVar12 * 0.0;
      fVar11 = *(float *)(lVar7 + 0x278) + fVar13 * 0.0 + fVar10 * 0.0 + (fVar12 + 0.0) * 5.0;
      fVar12 = *(float *)(lVar7 + 0x280) + (fVar10 * 0.0 * 0.0 - fVar12 * 0.0) + fVar10 * 5.0;
      iVar5 = (int)((*(float *)(lVar7 + 0x27c) +
                    (fVar13 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + fVar13 * 5.0) * 4.0);
      fVar10 = *(float *)(lVar7 + 0x278);
    }
    *(float *)(param_1 + 0x191d) = fVar10;
    iVar8 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x1921) = (short)iVar8;
    uVar9 = *(undefined4 *)(lVar7 + 0x280);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    *(float *)(param_1 + 0x1927) = fVar11;
    *(float *)(param_1 + 0x192d) = fVar12;
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x192b) = (short)iVar5;
    *(undefined4 *)(param_1 + 0x1923) = uVar9;
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_01707d90(puVar6,&DAT_054b2320,6,0,0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x40000000;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar4 = (uint)bVar2;
  bVar3 = 7 < uVar4;
  if (bVar3) {
    uVar4 = 0xff;
  }
  local_34[0] = (byte)uVar4;
  lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar3) {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar7 + 0x5b4) = 3;
    FUN_01393458(lVar7 + 0x658);
  }
  else {
    *(undefined4 *)(lVar7 + 0x5b4) = 4;
  }
  local_18 = false;
  local_14 = 0;
  if (bVar2 < 8) {
    uVar4 = FUN_02582d8c(local_34,1);
    if ((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
      local_18 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      local_18 = false;
    }
  }
  local_17 = local_34[0];
  if (7 < local_34[0]) {
    local_17 = 0xff;
  }
  FUN_02308d48(&local_18);
  return;
}

