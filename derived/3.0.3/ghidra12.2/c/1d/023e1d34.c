
void FUN_023e1d34(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_50;
  char *pcStack_48;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerFtrHoldWait";
  FUN_017081d0(puVar4,&local_50,6,0,0);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
      puVar7 = (uint *)&DAT_054f0958;
      if (iVar9 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar7 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar7 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar7 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar7 = puVar7 + (ulong)*pbVar1 * 2;
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0x15);
  *puVar7 = *puVar7 | 0x200000;
  if ((((*(int *)(param_1 + 0x178) == 0) && (*pbVar1 < 8)) &&
      (uVar3 = FUN_02582d8c(pbVar1,1), puVar2 = PTR_DAT_04bb4fb8, uVar3 < 8)) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
      ((uVar3 = FUN_02582d8c(pbVar1,1), uVar3 < 8 &&
       (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
    *(undefined8 *)(param_1 + 0x190d) =
         *(undefined8 *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x4e8);
  }
  uVar3 = *(uint *)(param_1 + 0x1810) & 0xfffffff7;
  if (uVar3 == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar9 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar9;
    fVar11 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar11 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar10 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar4 + 0x2ec) = uVar10;
    *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
    uVar3 = *(uint *)(param_1 + 0x1810) & 0xfffffff7;
  }
  if (uVar3 != 1) {
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
    fVar11 = *pfVar6;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    *(float *)(param_1 + 0x1bf0) = fVar11 * 0.5;
  }
  lVar5 = *(long *)(param_1 + 0x68);
  fVar13 = *(float *)(param_1 + 0x1900) - *(float *)(lVar5 + 0x278);
  fVar11 = *(float *)(param_1 + 0x1906);
  fVar12 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25 - *(float *)(lVar5 + 0x27c);
  fVar14 = fVar11 - *(float *)(lVar5 + 0x280);
  if (SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14) < 0.25) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar4 + 0x5d) = *(float *)(param_1 + 0x1900);
    *(undefined1 *)((long)puVar4 + 0x2e4) = 1;
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar4 + 0x5e) = fVar11;
    *(undefined1 *)((long)puVar4 + 0x2e6) = 1;
  }
  return;
}

