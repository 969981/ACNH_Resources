
void FUN_01fa3144(long param_1,float *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = (ulong)(*param_3 >> 0x14) & 0xff0;
  fVar4 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar5 = (*(float *)((long)&DAT_04199798 + uVar3) + fVar4 * *(float *)((long)&DAT_0419979c + uVar3)
          ) * 5.0;
  fVar4 = (*(float *)((long)&DAT_041997a0 + uVar3) + fVar4 * *(float *)((long)&DAT_041997a4 + uVar3)
          ) * 5.0;
  fVar5 = *param_2 + fVar5 + fVar5 + -2.5;
  fVar4 = param_2[2] + fVar4 + fVar4 + -2.5;
  iVar1 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  iVar2 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  *(int *)(param_1 + 0x24) = iVar2 + 1;
  return;
}

