
void FUN_0038aa38(long param_1,float *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_1 + 0xf8);
  fVar4 = *(float *)(param_1 + 0xfc);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  uVar2 = 4;
  if ((fVar4 == fVar6 && fVar3 == fVar5) && (*(ushort *)(param_1 + 0x114) & 4) == 0) {
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0x114) = uVar2 | *(ushort *)(param_1 + 0x114) & 0xfffb;
  if (fVar4 != fVar6 || fVar3 != fVar5) {
    if (fVar4 == 0.0) {
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)param_2;
      return;
    }
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    fVar5 = (float)((ulong)uVar1 >> 0x20) / (float)uVar1;
    *(float *)(param_1 + 0x118) = (fVar3 / fVar4) * *(float *)(param_1 + 0x118) * fVar5;
    *(float *)(param_1 + 0x134) = (fVar3 / fVar4) * *(float *)(param_1 + 0x134) * fVar5;
  }
  return;
}

