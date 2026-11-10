
undefined8 FUN_001f8c60(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *local_90 [3];
  undefined8 local_78;
  undefined *local_68 [3];
  undefined8 local_50;
  
  (**(code **)(*param_2 + 0x18))(local_90,param_2);
  puVar2 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  plVar6 = DAT_04c5ee70;
  do {
    plVar6 = (long *)plVar6[1];
    if (plVar6 == DAT_04c5ee70) {
      local_90[0] = puVar2 + 0x10;
      FUN_0018b1a0(local_90);
      goto LAB_001f8d10;
    }
    (**(code **)(*(long *)plVar6[2] + 0x18))(local_68);
    uVar3 = FUN_0018b44c(local_50,local_78);
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar3 & 1) == 0);
  lVar5 = plVar6[2];
  local_90[0] = puVar2 + 0x10;
  FUN_0018b1a0(local_90);
  if (lVar5 == 0) {
LAB_001f8d10:
    plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*plVar6 + 0x18))(local_68);
    (**(code **)(*param_2 + 0x18))(local_90,param_2);
    uVar3 = FUN_0018b44c(local_50,local_78);
    local_90[0] = puVar2 + 0x10;
    FUN_0018b1a0(local_90);
    local_68[0] = puVar2 + 0x10;
    FUN_0018b1a0(local_68);
    (**(code **)(*plVar6 + 8))(plVar6);
    plVar6 = DAT_04c5ee70;
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)FUN_00187df4(0x18);
      plVar4[1] = (long)plVar6;
      plVar4[2] = (long)param_2;
      *plVar4 = 0;
      lVar5 = *plVar6;
      *plVar4 = lVar5;
      *(long **)(lVar5 + 8) = plVar4;
      *plVar6 = (long)plVar4;
      plVar6[2] = plVar6[2] + 1;
      return 1;
    }
  }
  return 0;
}

