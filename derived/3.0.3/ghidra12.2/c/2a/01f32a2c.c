
void FUN_01f32a2c(long param_1)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined4 local_24;
  
  pfVar1 = (float *)FUN_0252d9bc(0);
  if (pfVar1 != (float *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar2 + 0x360) == 4 && *(int *)(lVar2 + 0x4b8) != 0) &&
       (*(int *)(lVar2 + 0x378) == 0x23)) {
      local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar2,0,PTR_DAT_04bb2150,&local_40,&local_24,PTR_DAT_04bc1600,6);
    }
    else {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,4);
      if (*(int *)(lVar2 + 0x360) == 4) {
        if (*(int *)(lVar2 + 0x4b8) == 0) {
          return;
        }
        if (*(int *)(lVar2 + 0x378) != 0x23) {
          return;
        }
      }
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar3 = *pfVar1 - *(float *)(lVar2 + 0x278);
    fVar5 = pfVar1[1] - *(float *)(lVar2 + 0x27c);
    fVar4 = pfVar1[2] - *(float *)(lVar2 + 0x280);
    fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
    if (0.0 < fVar6) {
      fVar6 = 1.0 / fVar6;
      fVar3 = fVar3 * fVar6;
      fVar5 = fVar5 * fVar6;
      fVar4 = fVar4 * fVar6;
    }
    fVar6 = (float)(*(uint *)(lVar2 + 0x2b4) & 0xffffff);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar2 + 0x2b4) >> 0x14) & 0xff0));
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    local_24 = FUN_006f0400();
    if (fVar5 * 0.0 + (fVar7 + fVar8 * fVar6 * 5.9604645e-08) * fVar3 +
        (fVar9 + fVar10 * fVar6 * 5.9604645e-08) * fVar4 < 0.8686315) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_24,PTR_DAT_04bb65b0,&local_40,6);
    }
  }
  return;
}

