
void FUN_03442a7c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_68;
  float local_64;
  undefined *local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bc0cb8;
  local_58 = 0x29;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_60 = puVar1;
  (**(code **)(*param_2 + 0x20))(param_2,&local_60);
  (**(code **)(param_2[3] + 0x2b0))(param_1 + 0xc4,param_2[1]);
  if (!NAN(*(float *)(param_1 + 0xac))) {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xac) + (float)(int)*(float *)(param_1 + 0xc4)
    ;
    *(float *)(param_1 + 200) = *(float *)(param_1 + 0xb0) + (float)(int)*(float *)(param_1 + 200);
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xb4) + (float)(int)*(float *)(param_1 + 0xcc)
    ;
  }
  local_58 = 0x2c;
  local_60 = puVar1;
  (**(code **)(*param_2 + 0x20))(param_2,&local_60);
  (**(code **)(param_2[3] + 0x2e0))(&local_68,param_2[1]);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 200);
  local_58 = 0xc;
  local_60 = puVar1;
  (**(code **)(*param_2 + 0x20))(param_2,&local_60);
  iVar3 = (**(code **)(param_2[3] + 0xe0))(param_2[1]);
  if (iVar3 == 2) {
    fVar4 = fVar4 + local_68 * -0.5;
  }
  else if (iVar3 == 1) {
    fVar4 = fVar4 + local_68 * 0.5;
  }
  local_60 = puVar2 + 0x10;
  local_58 = 0xd;
  (**(code **)(*param_2 + 0x20))(param_2,&local_60);
  iVar3 = (**(code **)(param_2[3] + 0xf0))(param_2[1]);
  if (iVar3 == 1) {
    fVar5 = fVar5 + local_64 * -0.5;
  }
  else if (iVar3 == 2) {
    fVar5 = fVar5 + local_64 * 0.5;
  }
  *(float *)(param_1 + 0x88) = fVar4 - local_68 * 0.5;
  *(float *)(param_1 + 0x8c) = fVar5 - local_64 * 0.5;
  *(float *)(param_1 + 0x90) = fVar4 + local_68 * 0.5;
  *(float *)(param_1 + 0x94) = fVar5 + local_64 * 0.5;
  return;
}

