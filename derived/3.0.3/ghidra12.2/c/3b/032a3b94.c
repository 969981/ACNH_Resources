
void FUN_032a3b94(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_40 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x240) + 0x18) + 0xf0) + 0x18)
  ;
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  puStack_28 = &DAT_040f684b;
  local_30 = puVar1;
  local_68 = FUN_032a3e70(&local_40,&local_30);
  if (local_68 != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 8);
    plVar2 = *(long **)PTR_DAT_04bc9198;
    if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
      plVar2 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
    }
    puStack_58 = PTR_DAT_04c4b988;
    local_60 = puVar1;
    local_50 = puVar1;
    (**(code **)(*plVar2 + 0x18))(&local_40,plVar2,&local_50,&local_60);
    local_30 = PTR_DAT_04bb8610 + 0x10;
    puStack_28 = (undefined *)local_38;
    FUN_032d67f0(&local_68,&local_30);
  }
  return;
}

