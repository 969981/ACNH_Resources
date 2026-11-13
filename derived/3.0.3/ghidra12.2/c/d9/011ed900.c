
void FUN_011ed900(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  FUN_0277f02c(param_4,&local_58);
  local_48 = CONCAT44(local_48._4_4_ + *(int *)(param_2 + 0xc),(int)local_48 + *(int *)(param_2 + 8)
                     );
  local_38 = CONCAT44(local_38._4_4_ + *(int *)(param_2 + 0xc),(int)local_38 + *(int *)(param_2 + 8)
                     );
  FUN_011ed7e0(param_1,&local_58,param_3);
  return;
}

