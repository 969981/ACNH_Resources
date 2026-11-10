
undefined8 FUN_003136a0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined *local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined **local_28;
  
  lVar2 = FUN_0018b798(param_2);
  if (((lVar2 == 2) && (**(byte **)(param_2 + 0x18) - 0x41 < 0x1a)) &&
     ((*(byte **)(param_2 + 0x18))[1] - 0x41 < 0x1a)) {
    local_58[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_48 = local_58;
    uStack_40 = 0x10;
    local_60 = puVar1;
    FUN_0018b070(&local_60,*(undefined8 *)PTR_PTR_04bcec88,0xffffffffffffffff);
    FUN_0018d8e0(auStack_70,param_2);
    local_28 = &local_60;
    lVar2 = FUN_00203760(param_1 + 0x10,&local_60,PTR_piecewise_construct_04bcbf80,&local_28,
                         &uStack_31);
    FUN_0018d620(lVar2 + 0x48,auStack_70);
    FUN_0018d854(auStack_70);
    local_60 = puVar1;
    FUN_0018b1a0(&local_60);
    return 1;
  }
  return 0;
}

