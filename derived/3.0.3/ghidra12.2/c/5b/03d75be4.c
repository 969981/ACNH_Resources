
void FUN_03d75be4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  undefined *local_40;
  undefined4 local_38;
  
  plVar2 = *(long **)(param_1 + 0x2a0);
  if (plVar2[1] != 0) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0x2c;
    local_40 = puVar1;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x2e0))(&local_48,plVar2[1]);
    plVar2 = *(long **)(param_1 + 0x2a0);
    local_38 = 0x29;
    local_40 = puVar1;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x2b0))(param_1 + 0x2b4,plVar2[1]);
    fVar3 = *(float *)(param_1 + 0x2b4);
    *(float *)(param_1 + 0x2c0) = fVar3;
    fVar4 = *(float *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x2c4) = fVar4;
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 700);
    if (*(int *)(param_1 + 0x2b0) == 1) {
      fVar3 = *(float *)(param_1 + 0x2d8) * -0.5 + local_44 * 0.5;
      *(float *)(param_1 + 0x2b8) = fVar4 - fVar3;
      *(float *)(param_1 + 0x2c4) = fVar4 + fVar3;
    }
    else if (*(int *)(param_1 + 0x2b0) == 0) {
      fVar4 = *(float *)(param_1 + 0x2d4) * -0.5 + local_48 * 0.5;
      *(float *)(param_1 + 0x2b4) = fVar3 - fVar4;
      *(float *)(param_1 + 0x2c0) = fVar3 + fVar4;
    }
  }
  return;
}

