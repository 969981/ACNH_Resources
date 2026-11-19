
void FUN_03920590(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = *param_2;
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x278) <= param_4) {
    uVar1 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x280) + (long)(int)uVar1 * 0xc0);
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  uVar5 = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[2] = uVar5;
  uVar5 = param_2[4];
  puVar3[5] = param_2[5];
  puVar3[4] = uVar5;
  FUN_007535b4(puVar3 + 6);
  uVar5 = *param_3;
  puVar3[0xd] = param_3[1];
  puVar3[0xc] = uVar5;
  uVar5 = param_3[2];
  puVar3[0xf] = param_3[3];
  puVar3[0xe] = uVar5;
  uVar5 = param_3[4];
  puVar3[0x11] = param_3[5];
  puVar3[0x10] = uVar5;
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined4 *)(puVar3 + 0x15) = 0;
  puVar3[0x13] = uVar6;
  puVar3[0x12] = uVar5;
  fVar7 = (1.0 - *(float *)(param_3 + 5)) / (*(float *)(param_3 + 5) + 1.0);
  fVar8 = *(float *)((long)param_3 + 0x2c) * 0.5;
  fVar4 = fVar7 + 1.0;
  *(float *)((long)puVar3 + 0xa4) = fVar8 * fVar4;
  *(float *)(puVar3 + 0x14) = -(fVar8 * fVar4) / fVar7;
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_58 = param_3[5];
  uStack_60 = param_3[4];
  uStack_48 = param_3[7];
  local_50 = param_3[6];
  uStack_a8 = puVar3[7];
  local_b0 = puVar3[6];
  uStack_98 = puVar3[9];
  local_a0 = puVar3[8];
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  local_70 = param_3[2];
  uStack_88 = puVar3[0xb];
  local_90 = puVar3[10];
  if (*(int *)(param_1 + 0x268) != 0) {
    lVar2 = (long)*(int *)(param_1 + 0x268) << 3;
    puVar3 = *(undefined8 **)(param_1 + 0x270);
    do {
      (**(code **)(*(long *)*puVar3 + 0x68))((long *)*puVar3,&local_e0,param_4);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}

