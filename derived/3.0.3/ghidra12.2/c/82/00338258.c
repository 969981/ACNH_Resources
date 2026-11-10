
void FUN_00338258(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x4a8);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x240) + 0x348);
  param_3[0x20] = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x1c);
  param_3[0x1e] = 0.0;
  param_3[0x21] = fVar6;
  lVar3 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  FUN_0032f094(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar3 + 0x98),param_3,*(undefined8 *)(lVar3 + 0x240),&local_40);
  uVar2 = FUN_0032f8d8(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
                       *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 4,
                       *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x240),&local_40);
  uVar7 = *(undefined8 *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 4);
  fVar6 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x240) + 0x18) + 0x360);
  *param_3 = fVar6 * (float)uVar7;
  param_3[1] = fVar6 * (float)((ulong)uVar7 >> 0x20);
  param_3[2] = fVar6 * (float)*(undefined8 *)(param_3 + 2);
  param_3[4] = fVar6 * (float)uVar8;
  param_3[5] = fVar6 * (float)((ulong)uVar8 >> 0x20);
  param_3[6] = fVar6 * (float)*(undefined8 *)(param_3 + 6);
  fVar6 = param_3[0x22];
  param_3[0x22] = *(float *)(param_2 + 0x18);
  uVar2 = FUN_003383e0(uVar2,param_2,param_3,lVar4,
                       param_3[0x20] == 0.0 || 0.0 < (float)(int)param_3[0x20] - (float)(int)fVar6);
  lVar3 = *(long *)(lVar5 + 0x30) +
          (*(long *)(lVar5 + 0x40) * (ulong)*(uint *)(lVar5 + 0x60) +
           (long)*(int *)(lVar5 + 0x48) * (long)(int)param_3[0x1f] * 0x50 & 0xfffffffffffffffc);
  if (*(int *)(lVar4 + 0x28) == 0) {
    FUN_00339d80(0,uVar2,lVar3,param_3,lVar4);
    return;
  }
  FUN_0033a030(0,uVar2,lVar3,param_3,lVar4);
  return;
}

