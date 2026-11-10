
void FUN_003443e8(float param_1,undefined8 param_2,long param_3,int *param_4,int *param_5,
                 int param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  iVar1 = *param_4;
  puVar3 = (undefined8 *)(param_3 + (long)iVar1 * 0xa0);
  uVar6 = param_7[1];
  *puVar3 = *param_7;
  *(int *)(puVar3 + 1) = (int)uVar6;
  uVar6 = param_7[1];
  puVar2 = (undefined8 *)(param_3 + (long)(int)(iVar1 << 1 | 1) * 0x50);
  *puVar2 = *param_7;
  *(int *)(puVar2 + 1) = (int)uVar6;
  uVar6 = param_8[1];
  puVar3[2] = *param_8;
  *(int *)(puVar3 + 3) = (int)uVar6;
  uVar6 = param_8[1];
  puVar2[2] = *param_8;
  *(int *)(puVar2 + 3) = (int)uVar6;
  uVar6 = param_9[1];
  puVar3[4] = *param_9;
  *(int *)(puVar3 + 5) = (int)uVar6;
  uVar6 = param_9[1];
  puVar2[4] = *param_9;
  *(int *)(puVar2 + 5) = (int)uVar6;
  *(float *)((long)puVar3 + 0xc) = -param_1;
  fVar5 = (float)iVar1;
  *(float *)((long)puVar2 + 0xc) = param_1;
  fVar4 = fVar5 / (float)(param_6 + -1);
  *(float *)((long)puVar3 + 0x1c) = fVar4;
  *(float *)((long)puVar2 + 0x1c) = fVar4;
  *(float *)((long)puVar3 + 0x2c) = fVar5;
  *(float *)((long)puVar2 + 0x2c) = fVar5;
  *param_5 = *param_5 + 2;
  *param_4 = *param_4 + 1;
  return;
}

