
void FUN_0207bb20(long param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_2 + 4);
  bVar3 = false;
  if ((0.0 < fVar5) && (bVar3 = false, !NAN(fVar5))) {
    bVar3 = fVar5 < 100.0;
  }
  if (bVar3) {
    puVar1 = param_2 + 1;
    uVar2 = *param_2;
    fVar6 = (float)(int)((uint)*puVar1 - (uint)(*(ushort **)(param_1 + 8))[1]);
    iVar4 = -1;
    do {
      param_2 = *(ushort **)(param_2 + 8);
      iVar4 = iVar4 + 1;
    } while (param_2 != (ushort *)0x0);
    fVar8 = (float)(int)((uint)uVar2 - (uint)**(ushort **)(param_1 + 8));
    fVar7 = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
    if ((((float)iVar4 / fVar7 < 1.7) &&
        (fVar6 = *(float *)(param_1 + 0x14) * fVar6 + *(float *)(param_1 + 0x10) * fVar8,
        fVar6 < 0.0)) &&
       (fVar5 = (fVar7 * fVar7 * (-fVar6 / (fVar7 * *(float *)(param_1 + 0x18)))) / fVar5,
       DAT_053d6658 <= fVar5)) {
      DAT_053d6658 = fVar5;
      DAT_053d665c = uVar2;
      DAT_053d665e = *puVar1;
    }
  }
  return;
}

