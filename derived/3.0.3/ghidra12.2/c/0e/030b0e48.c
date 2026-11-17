
void FUN_030b0e48(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  undefined4 local_58;
  
  plVar2 = (long *)(**(code **)*param_1)();
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x30))(param_1);
  plVar3 = (long *)(**(code **)*param_1)(param_1);
  puVar1 = PTR_DAT_04bc0cb8;
  local_60 = PTR_DAT_04bc0cb8 + 0x10;
  local_58 = 0xb;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  pfVar4 = (float *)(**(code **)(plVar3[3] + 0xd0))(plVar3[1]);
  if (((param_2 != (float *)0x0) && (param_3 != (undefined4 *)0x0)) && (plVar2 != (long *)0x0)) {
    fVar5 = *(float *)((long)param_1 + 0x1c);
    fVar6 = *(float *)(param_1 + 4);
    local_60 = puVar1 + 0x10;
    fVar7 = *(float *)((long)param_1 + 0x54);
    fVar10 = *(float *)(param_1 + 0xb);
    fVar8 = *(float *)((long)param_1 + 0x4c);
    fVar9 = *pfVar4;
    fVar11 = pfVar4[1];
    local_58 = 0x29;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_60);
    (**(code **)(plVar2[3] + 0x2b0))(&local_60,plVar2[1]);
    *param_2 = fVar8 * (fVar5 - fVar7) * fVar9;
    param_2[1] = fVar8 * (fVar6 - fVar10) * fVar11;
    *param_3 = (undefined4)local_60;
    param_3[1] = local_60._4_4_;
  }
  return;
}

