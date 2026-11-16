
void FUN_0268f304(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  local_35 = 0;
  local_138 = 0x100;
  puStack_140 = local_134;
  local_134[0] = 0;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1,&local_148,1);
  if ((uVar1 & 1) != 0) {
    FUN_03c27e60(param_1,&local_148,param_2);
  }
  return;
}

