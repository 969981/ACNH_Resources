
undefined8 FUN_00319100(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *local_90 [3];
  undefined8 local_78;
  undefined *local_68 [3];
  undefined8 local_50;
  
  puVar3 = PTR_DAT_04bcecf0;
  (**(code **)(*(long *)PTR_DAT_04bcecf0 + 0x10))(PTR_DAT_04bcecf0);
  (**(code **)(*param_2 + 0x18))(local_90,param_2);
  (**(code **)(*(long *)puVar3 + 0x10))(puVar3);
  puVar2 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  plVar8 = DAT_04c61758;
  do {
    plVar8 = (long *)plVar8[1];
    if (plVar8 == DAT_04c61758) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
      local_90[0] = puVar2 + 0x10;
      FUN_0018b1a0(local_90);
      goto LAB_00319200;
    }
    (**(code **)(*(long *)plVar8[2] + 0x18))(local_68);
    uVar4 = FUN_0018b44c(local_50,local_78);
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar4 & 1) == 0);
  lVar7 = plVar8[2];
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  local_90[0] = puVar2 + 0x10;
  FUN_0018b1a0(local_90);
  if (lVar7 == 0) {
LAB_00319200:
    plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*plVar8 + 0x18))(local_68);
    (**(code **)(*param_2 + 0x18))(local_90,param_2);
    uVar4 = FUN_0018b44c(local_50,local_78);
    local_90[0] = puVar2 + 0x10;
    FUN_0018b1a0(local_90);
    local_68[0] = puVar2 + 0x10;
    FUN_0018b1a0(local_68);
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar8 = DAT_04c61758;
    if ((uVar4 & 1) != 0) {
      plVar5 = (long *)FUN_00187df4(0x18);
      plVar5[1] = (long)plVar8;
      plVar5[2] = (long)param_2;
      uVar6 = 1;
      *plVar5 = 0;
      lVar7 = *plVar8;
      *plVar5 = lVar7;
      *(long **)(lVar7 + 8) = plVar5;
      *plVar8 = (long)plVar5;
      plVar8[2] = plVar8[2] + 1;
      goto LAB_003192b4;
    }
  }
  uVar6 = 0;
LAB_003192b4:
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  return uVar6;
}

