
void FUN_032897c8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  local_40 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_30 = puVar1;
  local_68 = FUN_0328b6d0(&local_40,&local_30,0);
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
  uStack_28 = local_38;
  FUN_032d67f0(&local_68,&local_30);
  return;
}

