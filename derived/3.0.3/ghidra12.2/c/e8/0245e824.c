
void FUN_0245e824(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_6c;
  float fStack_68;
  float local_64;
  
  puVar3 = PTR_DAT_04bb2d00;
  if (((*(long *)PTR_DAT_04bb4718 == 0) || (7 < (ulong)*(byte *)(param_1 + 0x1ee8))) ||
     (*(int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x1ee8) * 4 + 0xea0) == 0)) {
    uVar2 = *(uint *)(param_2 + 0x1c);
    if (*(uint *)(param_2 + 0xc) != uVar2) {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar2 >> 0x14) & 0xff0));
      fVar8 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
      fVar5 = *pfVar1 + fVar8 * pfVar1[1];
      fVar6 = pfVar1[2] + fVar8 * pfVar1[3];
      fVar7 = fVar5 * 0.0;
      local_6c = *(float *)(param_2 + 0x10) + fVar7 * 0.0 + fVar6 * 0.0 + (fVar5 + 0.0) * 5.0;
      fStack_68 = *(float *)(param_2 + 0x14) +
                  (fVar7 * 0.0 + 1.0) * 0.0 + fVar6 * 0.0 * 0.0 + fVar7 * 5.0;
      local_64 = *(float *)(param_2 + 0x18) + (fVar6 * 0.0 * 0.0 - fVar5 * 0.0) + fVar6 * 5.0;
      fVar5 = (float)FUN_016e026c(0,&local_6c,0,0);
      pfVar1 = (float *)(puVar3 + (((ulong)uVar2 ^ 0x80000000) >> 0x14 & 0xff0));
      fVar6 = *pfVar1 + fVar8 * pfVar1[1];
      fVar7 = pfVar1[2] + fVar8 * pfVar1[3];
      fVar8 = fVar6 * 0.0;
      local_6c = *(float *)(param_2 + 0x10) + fVar8 * 0.0 + fVar7 * 0.0 + (fVar6 + 0.0) * 5.0;
      fStack_68 = *(float *)(param_2 + 0x14) +
                  (fVar8 * 0.0 + 1.0) * 0.0 + fVar7 * 0.0 * 0.0 + fVar8 * 5.0;
      local_64 = *(float *)(param_2 + 0x18) + (fVar7 * 0.0 * 0.0 - fVar6 * 0.0) + fVar7 * 5.0;
      fVar6 = (float)FUN_016e026c(0,&local_6c,0,0);
      fVar7 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
      uVar4 = (uint)((ulong)uVar2 ^ 0x80000000);
      if ((30.0 < fVar5 - fVar7) || (uVar4 = uVar2, 30.0 < fVar6 - fVar7)) {
        *(uint *)(param_2 + 0x1c) = uVar4;
      }
    }
  }
  return;
}

