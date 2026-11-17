
void FUN_030b0f80(long *param_1,float *param_2,undefined4 *param_3,float *param_4)

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
  undefined8 local_70;
  undefined4 local_68;
  
  plVar2 = (long *)(**(code **)*param_1)();
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x30))(param_1);
  plVar3 = (long *)(**(code **)*param_1)(param_1);
  puVar1 = PTR_DAT_04bc0cb8;
  local_70 = PTR_DAT_04bc0cb8 + 0x10;
  local_68 = 0xb;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_70);
  pfVar4 = (float *)(**(code **)(plVar3[3] + 0xd0))(plVar3[1]);
  if (((param_2 != (float *)0x0) && (param_3 != (undefined4 *)0x0)) && (plVar2 != (long *)0x0)) {
    fVar5 = *param_4;
    fVar6 = param_4[1];
    local_70 = puVar1 + 0x10;
    fVar7 = *(float *)((long)param_1 + 0x54);
    fVar10 = *(float *)(param_1 + 0xb);
    fVar8 = *(float *)((long)param_1 + 0x4c);
    fVar9 = *pfVar4;
    fVar11 = pfVar4[1];
    local_68 = 0x29;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_70);
    (**(code **)(plVar2[3] + 0x2b0))(&local_70,plVar2[1]);
    *param_2 = fVar8 * (fVar5 - fVar7) * fVar9;
    param_2[1] = fVar8 * (fVar6 - fVar10) * fVar11;
    *param_3 = (undefined4)local_70;
    param_3[1] = local_70._4_4_;
  }
  return;
}

