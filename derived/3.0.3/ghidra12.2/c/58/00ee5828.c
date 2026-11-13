
undefined4 FUN_00ee5828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb32e0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Camp_InduceFailFlag";
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  iVar4 = FUN_0274bce0(puVar1,&local_70);
  puVar1 = PTR_s_InduceFailAlreadyInduced_04bb9b88;
  if (iVar4 == 0) {
    uVar6 = 1;
    local_70._0_4_ = 1;
    if (*(long *)(param_1 + 8) != 0) {
      puVar3 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar5 = (*(code *)PTR_FUN_04a765e8)(&DAT_05453f20,param_2,puVar3);
    if ((uVar5 & 1) == 0) {
      uVar6 = 2;
      local_70._0_4_ = 2;
      uVar5 = (*(code *)PTR_FUN_04a765f8)(&DAT_05453f20,param_2,puVar3);
      if ((uVar5 & 1) == 0) {
        uVar6 = 3;
        local_70._0_4_ = 3;
        uVar5 = (*(code *)PTR_FUN_04a76608)(&DAT_05453f20,param_2,puVar3);
        if ((uVar5 & 1) == 0) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
          uVar5 = (*(code *)PTR_FUN_04a76618)(&DAT_05453f20,param_2,puVar3);
          uVar6 = 4;
          if ((uVar5 & 1) == 0) {
            uVar6 = 5;
          }
        }
      }
    }
  }
  else {
    local_34 = 0;
    FUN_006d8678(&local_70,"Camp_%s",PTR_s_InduceFailAlreadyInduced_04bb9b88);
    puVar2 = puVar3;
    if (*(long *)(param_1 + 8) != 0) {
      puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    iVar4 = FUN_0274bce0(puVar2,&local_70);
    if (iVar4 == 0) {
      local_34 = 1;
      FUN_006d8678(&local_70,"Camp_%s",puVar1 + 0x1a);
      puVar2 = puVar3;
      if (*(long *)(param_1 + 8) != 0) {
        puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      iVar4 = FUN_0274bce0(puVar2,&local_70);
      if (iVar4 == 0) {
        local_34 = 2;
        FUN_006d8678(&local_70,"Camp_%s",puVar1 + 0x33);
        puVar2 = puVar3;
        if (*(long *)(param_1 + 8) != 0) {
          puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
        }
        iVar4 = FUN_0274bce0(puVar2,&local_70);
        if (iVar4 == 0) {
          local_34 = 3;
          FUN_006d8678(&local_70,"Camp_%s",puVar1 + 0x4c);
          puVar2 = puVar3;
          if (*(long *)(param_1 + 8) != 0) {
            puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
          }
          iVar4 = FUN_0274bce0(puVar2,&local_70);
          if (iVar4 == 0) {
            local_34 = 4;
            FUN_006d8678(&local_70,"Camp_%s",puVar1 + 99);
            if (*(long *)(param_1 + 8) != 0) {
              puVar3 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
            }
            iVar4 = FUN_0274bce0(puVar3,&local_70);
            if (iVar4 == 0) {
              return 3;
            }
          }
        }
      }
    }
    uVar6 = local_34;
  }
  return uVar6;
}

