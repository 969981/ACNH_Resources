
uint FUN_032de978(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  uStack_28 = *(undefined8 *)(param_2 + 8);
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  uStack_38 = *(undefined8 *)(param_3 + 8);
  local_30 = local_40;
  uVar1 = FUN_032de9d0(param_1,auStack_18,auStack_1c,&local_30,&local_40);
  return uVar1 & 1;
}

