
void FUN_01fb8e24(long param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined1 uStack_65;
  undefined4 local_64;
  
  FUN_0252d11c(&uStack_65);
  iVar1 = FUN_00a74b78(&uStack_65);
  if ((iVar1 != 7) && (pfVar2 = (float *)FUN_0252d9bc(0), pfVar2 != (float *)0x0)) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 0x360) == 4) {
      if ((*(int *)(lVar4 + 0x4b8) != 0) && (*(int *)(lVar4 + 0x378) == 0x23)) {
        local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
        local_64 = 0;
        FUN_01e5a930(0x40000000,lVar4,0,PTR_DAT_04bb2150,&local_78,&local_64,PTR_DAT_04bc1600,6);
      }
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
      if (*(int *)(lVar4 + 0x378) != 4) {
        lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar12 = *pfVar2 - *(float *)(lVar5 + 0x278);
        fVar13 = pfVar2[1] - *(float *)(lVar5 + 0x27c);
        fVar14 = pfVar2[2] - *(float *)(lVar5 + 0x280);
        fVar6 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
        if (0.0 < fVar6) {
          fVar6 = 1.0 / fVar6;
          fVar12 = fVar12 * fVar6;
          fVar13 = fVar13 * fVar6;
          fVar14 = fVar14 * fVar6;
        }
        pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar5 + 0x2b4) >> 0x14) & 0xff0));
        fVar6 = (float)(*(uint *)(lVar5 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar8 = *pfVar3;
        fVar10 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar11 = pfVar3[3];
        pfVar3 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17790) + 0xf0))();
        fVar7 = cosf(*pfVar3 * 0.017453292);
        if (fVar13 * 0.0 + (fVar8 + fVar6 * fVar10) * fVar12 + (fVar9 + fVar6 * fVar11) * fVar14 <
            fVar7) {
          local_64 = FUN_006f0400(*pfVar2 - *(float *)(lVar5 + 0x278),
                                  pfVar2[2] - *(float *)(lVar5 + 0x280));
          local_78 = PTR_DAT_04bb2020 + 0x10;
          puStack_70 = &DAT_0407ebb1;
          FUN_01e5ab70(lVar4,&local_64,PTR_DAT_04bb65b0,&local_78,6);
          *(undefined4 *)(param_1 + 0xb0a0) = 0;
        }
      }
    }
  }
  return;
}

