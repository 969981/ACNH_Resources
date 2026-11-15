
void FUN_01f61cdc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_60;
  undefined8 *puStack_58;
  
  lVar10 = *(long *)(param_1 + 8);
  uVar12 = *(uint *)(lVar10 + 0x288);
  *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
  uVar12 = uVar12 ^ uVar12 << 0xb;
  *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
  uVar9 = *(uint *)(lVar10 + 0x294);
  *(uint *)(lVar10 + 0x290) = uVar9;
  uVar12 = uVar12 >> 8 ^ uVar9 >> 0x13 ^ uVar12 ^ uVar9;
  *(uint *)(lVar10 + 0x294) = uVar12;
  *(int *)(param_1 + 0x1365c) = (int)((ulong)uVar12 * 900 >> 0x20) + 900;
  *(undefined4 *)(param_1 + 0x13678) = 2;
  lVar10 = *(long *)(param_1 + 8);
  if (*(int *)(lVar10 + 0x750) == 0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    puStack_58 = &DAT_0407ebb1;
    FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),PTR_DAT_04bb2cf0,PTR_DAT_04bb65b0,&local_60,6);
    goto LAB_01f61f68;
  }
  uVar12 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd64);
  if ((uVar12 >> 2 & 1) == 0) {
    if ((uVar12 >> 3 & 1) == 0) {
      if ((((*(long *)(lVar10 + 0x3b8) == 0) || ((uVar12 >> 1 & 1) != 0)) ||
          (*(long *)(lVar10 + 0x60) == 0)) ||
         (((uint)*(undefined8 *)(*(long *)(lVar10 + 0x3b8) + 0xad58) >> 2 & 1) == 0))
      goto LAB_01f61db4;
      pfVar11 = (float *)(*(long *)(lVar10 + 0x60) + 0x15fc);
    }
    else {
      pfVar11 = (float *)(*(long *)PTR_DAT_04bb3968 + 0xd74);
    }
    lVar10 = *(long *)(param_1 + 0x18);
    fVar14 = *pfVar11;
    fVar15 = pfVar11[1];
    fVar16 = pfVar11[2];
    uVar8 = FUN_02085a50(lVar10,3,0);
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(lVar10 + 0x801) = 1;
      lVar1 = lVar10 + 0x10;
      lVar6 = lVar1 + (ulong)*(uint *)(lVar10 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar10 + 0x294)) {
        lVar6 = lVar1;
      }
      *(float *)(lVar6 + 0x14) = fVar16 + -5000.0;
      *(float *)(lVar6 + 0xc) = fVar14 + 0.0;
      *(float *)(lVar6 + 0x10) = fVar15 + 1000.0;
      lVar6 = lVar1 + (ulong)*(uint *)(lVar10 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar10 + 0x294)) {
        lVar6 = lVar1;
      }
      *(undefined1 *)(lVar6 + 0x7e) = 0;
    }
  }
  else {
LAB_01f61db4:
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  }
  puVar7 = PTR_DAT_04bb30a0;
  if (*(int *)(param_1 + 0x77b0) == 0x67) {
    uVar12 = 0x32;
LAB_01f61ec8:
    uVar9 = uVar12;
  }
  else {
    uVar8 = FUN_00a904b0(*(undefined8 *)PTR_DAT_04bb30a0);
    uVar12 = 0x1e;
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_00a90354(*(undefined8 *)puVar7);
      uVar12 = 0x1e;
      if ((uVar8 & 1) == 0) {
        uVar12 = 0;
      }
      goto LAB_01f61ec8;
    }
    uVar9 = 0x32;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x13678) != 0) {
    uVar2 = uVar9;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x13678) != 1) {
    uVar3 = uVar12;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x13678) != 2) {
    iVar4 = 100 - (uVar12 + uVar9);
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(lVar10 + 0x294);
  uVar12 = *(uint *)(lVar10 + 0x288) ^ *(uint *)(lVar10 + 0x288) << 0xb;
  uVar12 = uVar12 >> 8 ^ uVar9 >> 0x13 ^ uVar12 ^ uVar9;
  *(uint *)(lVar10 + 0x294) = uVar12;
  uVar12 = (uint)((ulong)uVar12 * (ulong)(uVar3 + uVar2 + iVar4) >> 0x20);
  *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
  uVar13 = *(undefined4 *)(lVar10 + 0x290);
  *(uint *)(lVar10 + 0x290) = uVar9;
  *(undefined4 *)(lVar10 + 0x28c) = uVar13;
  uVar13 = 1;
  if (uVar3 <= uVar12 - uVar2) {
    uVar13 = 2;
  }
  uVar5 = 0;
  if (uVar2 <= uVar12) {
    uVar5 = uVar13;
  }
  *(undefined4 *)(param_1 + 0x13678) = uVar5;
  FUN_01f62d2c(param_1);
LAB_01f61f68:
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
  return;
}

