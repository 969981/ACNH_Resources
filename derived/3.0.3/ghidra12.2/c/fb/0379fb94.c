
void FUN_0379fb94(undefined8 param_1,long param_2)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (((DAT_05231900 != 0) && (lVar2 = *(long *)(DAT_05231900 + 0x78), lVar2 != 0)) &&
     (*(float *)(lVar2 + 0x3c) != 0.0)) {
    fVar8 = *(float *)(param_2 + 0x2c);
    fVar9 = *(float *)(param_2 + 0x1c);
    uVar7 = *(undefined4 *)(param_2 + 0xc);
    fVar6 = *(float *)(lVar2 + 0x40) * 0.017453292 * ((fVar8 + *(float *)(lVar2 + 0x38)) / 160.0);
    fVar1 = 57600.0 / (*(float *)(lVar2 + 0x40) * 6.2831855) + fVar9;
    fVar3 = cosf(fVar6);
    if (fVar3 == 0.0) {
      fVar3 = 0.001;
    }
    else {
      fVar3 = cosf(fVar6);
    }
    fVar6 = sinf(fVar6);
    fVar4 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x3c);
    fVar5 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x40);
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    *(float *)(param_2 + 0x2c) = fVar6 * fVar1 * fVar4 + (1.0 - fVar4) * fVar8;
    *(float *)(param_2 + 0x1c) =
         fVar9 * (1.0 - fVar4) + fVar4 * (fVar3 * fVar1 + -57600.0 / (fVar5 * 6.2831855));
  }
  return;
}

