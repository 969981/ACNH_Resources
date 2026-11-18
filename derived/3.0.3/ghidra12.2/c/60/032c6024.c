
void FUN_032c6024(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *puStack_58;
  
  param_1[6] = *param_2;
  param_1[4] = param_2[1];
  lVar3 = FUN_00369da0(*param_2,&DAT_040a4215);
  lVar4 = FUN_00369da0(*param_2,&DAT_0406ffa2);
  if (lVar3 != 0 || lVar4 != 0) {
    plVar1 = param_1 + 1;
    if ((lVar3 == 0) || (lVar4 == 0)) {
      if (lVar3 == 0) {
        FUN_032c6ccc(plVar1);
        local_68 = &DAT_0406ffa2;
        puStack_58 = &DAT_0406ffa2;
      }
      else {
        FUN_032c6ccc(plVar1);
        local_68 = &DAT_040a4215;
        puStack_58 = &DAT_040a4215;
      }
      local_60 = PTR_DAT_04bc8e68 + 0x10;
    }
    else {
      FUN_032c6ccc(plVar1);
      puVar2 = PTR_DAT_04bc8e68 + 0x10;
      puStack_58 = &DAT_040a4215;
      local_68 = &DAT_040a4215;
      local_78 = &DAT_0407ebb1;
      local_88 = &DAT_0407ebb1;
      local_90 = puVar2;
      local_80 = puVar2;
      local_70 = puVar2;
      local_60 = puVar2;
      FUN_032c7320(plVar1,&local_60,&local_70,&local_80,&local_90);
      puStack_58 = &DAT_0406ffa2;
      local_68 = &DAT_0406ffa2;
      local_60 = puVar2;
    }
    local_78 = &DAT_0407ebb1;
    local_88 = &DAT_0407ebb1;
    local_90 = local_60;
    local_80 = local_60;
    local_70 = local_60;
    FUN_032c7320(plVar1,&local_60,&local_70,&local_80,&local_90);
  }
  (**(code **)(*param_1 + 0x18))(param_1,1);
  return;
}

