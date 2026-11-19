
void FUN_03b89668(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_03b59960();
  fVar1 = *(float *)(param_1 + 0x450);
  fVar2 = *(float *)(param_1 + 0x458);
  if (fVar1 == fVar2) goto LAB_03b896c8;
  fVar1 = *(float *)(param_1 + 0x454);
  *(float *)(param_1 + 0x450) = fVar1;
  fVar3 = fVar1 + *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
                  *(float *)(param_1 + 0x45c);
  if (0.0 <= *(float *)(param_1 + 0x45c)) {
    if (fVar2 < fVar3) goto LAB_03b896c0;
  }
  else if (fVar3 < fVar2) {
LAB_03b896c0:
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x454) = fVar3;
LAB_03b896c8:
  fVar2 = fVar1 * *(float *)(param_1 + 0x438);
  fVar1 = fVar1 * *(float *)(param_1 + 0x43c);
  *(ulong *)(param_1 + 0x3c8) = CONCAT44(fVar2,fVar2);
  *(ulong *)(param_1 + 0x3c0) = CONCAT44(fVar2,fVar2);
  *(ulong *)(param_1 + 0x3b0) = CONCAT44(fVar2,fVar2);
  *(ulong *)(param_1 + 0x3d0) = CONCAT44(fVar1,fVar1);
  *(ulong *)(param_1 + 1000) = CONCAT44(fVar1,fVar1);
  *(ulong *)(param_1 + 0x3e0) = CONCAT44(fVar1,fVar1);
  return;
}

