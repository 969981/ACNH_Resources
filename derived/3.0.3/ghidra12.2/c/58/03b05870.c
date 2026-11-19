
void FUN_03b05870(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  FUN_0031bb50();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x240) + 0x10) + 0x96c) >> 4 & 1) != 0
     ) {
    uVar2 = FUN_0031bb2c(param_1);
    local_50 = 0;
    uStack_48 = 0;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar3 == 0) {
      iVar1 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar1 = (int)lVar3 + -1;
    }
    pfVar4 = (float *)FUN_0033e680(uVar2,iVar1,&local_50,0x20);
    if (pfVar4 != (float *)0x0) {
      if (((param_3 != (long *)0x0) &&
          (lVar3 = *(long *)(param_1 + 8),
          (*(ulong *)(*(long *)(*(long *)(lVar3 + 0x240) + 0x10) + 0x968) >> 0x24 & 1) != 0)) &&
         (pfVar5 = (float *)*param_3, pfVar5 != (float *)0x0)) {
        fVar8 = pfVar5[1] - pfVar5[4];
        fVar6 = pfVar5[2] - pfVar5[5];
        fVar7 = *pfVar5 - pfVar5[3];
        if (*(float *)(param_2 + 0x34) != 1.0) {
          fVar9 = *pfVar5 - *(float *)(lVar3 + 0x440);
          fVar10 = pfVar5[1] - *(float *)(lVar3 + 0x444);
          fVar11 = pfVar5[2] - *(float *)(lVar3 + 0x448);
          fVar12 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
          if (0.0 < fVar12) {
            fVar12 = 1.0 / fVar12;
            fVar9 = fVar9 * fVar12;
            fVar10 = fVar10 * fVar12;
            fVar11 = fVar11 * fVar12;
          }
          fVar12 = (1.0 - *(float *)(param_2 + 0x34)) *
                   (fVar8 * fVar10 + fVar9 * fVar7 + fVar11 * fVar6);
          fVar7 = fVar7 - fVar9 * fVar12;
          fVar8 = fVar8 - fVar10 * fVar12;
          fVar6 = fVar6 - fVar11 * fVar12;
        }
        fVar10 = *(float *)(lVar3 + 0x3e0);
        fVar11 = *(float *)(lVar3 + 0x3e4);
        fVar12 = *(float *)(lVar3 + 1000);
        *pfVar4 = pfVar5[3];
        pfVar4[1] = *(float *)(*param_3 + 0x10);
        fVar9 = *(float *)(*param_3 + 0x14);
        pfVar4[4] = fVar7;
        pfVar4[5] = fVar8;
        pfVar4[6] = fVar6;
        pfVar4[7] = 0.0;
        pfVar4[2] = fVar9;
        pfVar4[3] = 1.0 / SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8);
      uVar2 = FUN_0031bb04(param_1);
      FUN_003358d4(uVar2,lVar3 + 8,3,&local_50,0x20);
    }
  }
  return;
}

