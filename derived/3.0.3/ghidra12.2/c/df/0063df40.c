
void FUN_0063df40(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 1) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    return;
  }
  uVar4 = 0;
  uVar5 = 0;
  pfVar3 = (float *)(*(long *)(param_1 + 0x28) + 0x14);
  do {
    fVar8 = *pfVar3;
    puVar1 = (undefined8 *)(param_3 + (ulong)*(ushort *)(pfVar3 + -1) * 0x10);
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    iVar2 = iVar2 + -1;
    uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * fVar8,
                     (float)uVar4 + (float)uVar6 * fVar8);
    uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * fVar8,
                     (float)uVar5 + (float)uVar7 * fVar8);
    pfVar3 = pfVar3 + 8;
  } while (iVar2 != 0);
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  return;
}

