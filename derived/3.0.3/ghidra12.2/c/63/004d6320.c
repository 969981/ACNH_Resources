
undefined1  [16] FUN_004d6320(undefined8 param_1,long param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  
  uVar3 = FUN_00428440(param_2);
  if ((param_2 == 0) || ((uVar3 & 0x1f) != 6)) {
    uVar3 = FUN_00428440(param_2);
    if ((param_2 == 0) || ((uVar3 & 0x1f) != 8)) {
      uVar3 = FUN_00428440(param_2);
      if ((param_2 == 0) || ((uVar3 & 0x1f) != 3)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      plVar4 = (long *)FUN_00428370(param_2);
      local_50 = 0;
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2,&local_50);
      puVar5 = PTR_DAT_04bd4f98;
      goto LAB_004d6470;
    }
    plVar4 = (long *)FUN_00428370(param_2);
    local_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_48 = (undefined *)0x0;
    (**(code **)(*plVar4 + 0x50))(plVar4,param_1,param_2,&local_50);
    puVar5 = local_48;
    uVar1 = local_50;
    *param_3 = (int)local_40;
    uVar2 = local_50;
    uVar3 = local_38;
    if ((int)local_40 == 0) {
      uVar1 = 0;
      puVar5 = (undefined *)0x0;
    }
    else if ((local_38 & 1) != 0) {
      uVar3 = local_38 & 0xfffffffffffffffe;
      FUN_0043dd30(uVar3);
      FUN_0043dd50(uVar3);
      uVar2 = local_50;
      uVar3 = local_38;
    }
  }
  else {
    plVar4 = (long *)FUN_00428370(param_2);
    local_48 = (undefined *)0x0;
    local_40 = 0;
    local_50 = 0;
    (**(code **)(*plVar4 + 0x50))(plVar4,param_1,param_2,&local_50);
    uVar1 = local_50;
    uVar2 = local_50;
    puVar5 = local_48;
    uVar3 = local_40;
  }
  local_50 = uVar1;
  if ((uVar3 & 1) != 0) {
    local_50 = uVar2;
    FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
    local_50 = uVar1;
  }
LAB_004d6470:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = local_50;
  return auVar6;
}

