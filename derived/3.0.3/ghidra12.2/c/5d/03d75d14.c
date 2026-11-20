
void FUN_03d75d14(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bc0cb8;
  plVar3 = *(long **)(param_2 + 0x2a0);
  if (plVar3[1] != 0) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    fVar4 = 1.0;
    if (param_1 <= 1.0) {
      fVar4 = param_1;
    }
    local_38 = 0x2c;
    fVar5 = 0.0;
    if (0.0 <= param_1) {
      fVar5 = fVar4;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x2e0))(&local_50,plVar3[1]);
    iVar1 = *(int *)(param_2 + 0x2b0);
    if (iVar1 == 1) {
      *(float *)(param_2 + 0x2d8) = fVar5 * local_4c;
      if (fVar5 * local_4c < *(float *)(param_2 + 0x2dc)) {
        *(float *)(param_2 + 0x2d8) = *(float *)(param_2 + 0x2dc);
      }
    }
    else if (iVar1 == 0) {
      *(float *)(param_2 + 0x2d4) = fVar5 * local_50;
      if (fVar5 * local_50 < *(float *)(param_2 + 0x2dc)) {
        *(float *)(param_2 + 0x2d4) = *(float *)(param_2 + 0x2dc);
      }
    }
    plVar3 = *(long **)(param_2 + 0x2a8);
    if (plVar3[1] != 0) {
      local_40 = puVar2 + 0x10;
      local_38 = 0xb;
      local_48 = *(undefined4 *)(param_2 + 0x2d8);
      uStack_44 = *(undefined4 *)(param_2 + 0x2d4);
      if (iVar1 != 1) {
        local_48 = *(undefined4 *)(param_2 + 0x2d4);
        uStack_44 = *(undefined4 *)(param_2 + 0x2d8);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 200))(plVar3[1],&local_48);
    }
    FUN_03d75be4(param_2);
    FUN_03d759c4(param_2);
  }
  return;
}

