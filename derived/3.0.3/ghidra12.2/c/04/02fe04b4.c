
void FUN_02fe04b4(float param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                 long param_6,long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  long *plVar5;
  float fVar6;
  undefined *local_70;
  undefined4 local_68;
  
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(long *)(param_2 + 0x18) = param_4;
  *(long **)(param_2 + 0x20) = param_5;
  puVar2 = PTR_DAT_04bc0cb8;
  *(float *)(param_2 + 0x28) = param_1;
  if ((param_4 != 0) && (param_5 != (long *)0x0)) {
    puVar1 = puVar2 + 0x10;
    local_68 = 0xb;
    local_70 = puVar1;
    (**(code **)(*param_5 + 0x20))(param_5,&local_70);
    puVar3 = (undefined4 *)(**(code **)(param_5[3] + 0xd0))(param_5[1]);
    *(undefined4 *)(param_2 + 0x2c) = *puVar3;
    *(undefined4 *)(param_2 + 0x30) = puVar3[1];
    if (1.0 < param_1) {
      plVar5 = *(long **)(param_2 + 0x18);
      local_68 = 0xb;
      local_70 = puVar1;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
      pfVar4 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
      fVar6 = pfVar4[1];
      *(float *)(param_2 + 0x2c) = (param_1 + -1.0) * *pfVar4 + *(float *)(param_2 + 0x2c);
      *(float *)(param_2 + 0x30) = (param_1 + -1.0) * fVar6 + *(float *)(param_2 + 0x30);
    }
  }
  *(long *)(param_2 + 0x38) = param_6;
  *(long **)(param_2 + 0x40) = param_7;
  *(float *)(param_2 + 0x48) = param_1;
  if ((param_6 != 0) && (param_7 != (long *)0x0)) {
    puVar2 = puVar2 + 0x10;
    local_68 = 0xb;
    local_70 = puVar2;
    (**(code **)(*param_7 + 0x20))(param_7,&local_70);
    puVar3 = (undefined4 *)(**(code **)(param_7[3] + 0xd0))(param_7[1]);
    *(undefined4 *)(param_2 + 0x4c) = *puVar3;
    *(undefined4 *)(param_2 + 0x50) = puVar3[1];
    if (1.0 < param_1) {
      plVar5 = *(long **)(param_2 + 0x38);
      local_68 = 0xb;
      local_70 = puVar2;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_70);
      pfVar4 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
      fVar6 = pfVar4[1];
      *(float *)(param_2 + 0x4c) = (param_1 + -1.0) * *pfVar4 + *(float *)(param_2 + 0x4c);
      *(float *)(param_2 + 0x50) = (param_1 + -1.0) * fVar6 + *(float *)(param_2 + 0x50);
    }
  }
  return;
}

