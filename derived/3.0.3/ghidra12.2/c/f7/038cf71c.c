
void FUN_038cf71c(float *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined local_94 [31];
  undefined1 local_75;
  undefined1 local_55;
  
  if (param_2 == 0) {
    local_55 = 0;
    local_98 = 0x40;
    local_a0 = local_94;
    local_94[0] = 0;
    local_a8 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    uVar1 = FUN_038d1270((double)*param_1,(double)param_1[1],&local_a8,"(%f, %f)");
    (*(code *)local_a8[3])(&local_a8);
    lVar3 = *param_3;
    puVar2 = local_a0;
  }
  else {
    (**(code **)(*param_3 + 0x10))(param_3,&DAT_040a90aa,1);
    local_75 = 0;
    local_98 = 0x20;
    local_94[0] = 0;
    local_a8 = &PTR_LAB_048f9700;
    local_a0 = local_94;
    uVar1 = FUN_038d1270((double)*param_1,&local_a8,param_2);
    (*(code *)local_a8[3])(&local_a8);
    (**(code **)(*param_3 + 0x10))(param_3,local_a0,uVar1);
    (**(code **)(*param_3 + 0x10))(param_3,&DAT_0407494a,2);
    local_98 = 0x20;
    local_75 = 0;
    local_94[0] = 0;
    local_a8 = &PTR_LAB_048f9700;
    local_a0 = local_94;
    uVar1 = FUN_038d1270((double)param_1[1],&local_a8,param_2);
    (*(code *)local_a8[3])(&local_a8);
    (**(code **)(*param_3 + 0x10))(param_3,local_a0,uVar1);
    lVar3 = *param_3;
    uVar1 = 1;
    puVar2 = &DAT_04094801;
  }
  (**(code **)(lVar3 + 0x10))(param_3,puVar2,uVar1);
  return;
}

