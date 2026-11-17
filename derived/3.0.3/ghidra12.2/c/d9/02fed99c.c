
void FUN_02fed99c(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  undefined4 local_58;
  
  *(undefined4 *)((long)param_1 + 0x74) = param_2;
  plVar5 = (long *)(**(code **)*param_1)();
  puVar4 = PTR_DAT_04bc0cb8;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_58 = 0xb;
    local_60 = puVar1;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
    pfVar6 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
    fVar7 = *pfVar6;
    fVar8 = pfVar6[1];
    local_58 = 0x29;
    local_60 = puVar1;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
    (**(code **)(plVar5[3] + 0x2b0))(&local_60,plVar5[1]);
    *(float *)((long)param_1 + 0x3c) = (float)local_60 - fVar7 * 0.5;
    *(float *)(param_1 + 8) = local_60._4_4_ - fVar8 * 0.5;
    *(float *)((long)param_1 + 0x44) = fVar7 * 0.5 + (float)local_60;
    *(float *)(param_1 + 9) = fVar8 * 0.5 + local_60._4_4_;
  }
  plVar5 = (long *)(**(code **)*param_1)(param_1);
  local_60 = puVar4 + 0x10;
  local_58 = 0xb;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
  pfVar6 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
  uVar2 = 0x280;
  if ((int)*pfVar6 != 0) {
    uVar2 = (int)*pfVar6;
  }
  iVar3 = 0x280;
  if ((int)pfVar6[1] != 0) {
    iVar3 = (int)pfVar6[1];
  }
  *(uint *)((long)param_1 + 0x7c) = uVar2;
  *(int *)(param_1 + 0x10) = iVar3;
  *(float *)(param_1 + 0xf) =
       (float)uVar2 / (float)*(int *)(PTR_DAT_04bc7ad0 + (long)*(int *)((long)param_1 + 0x74) * 8);
  return;
}

