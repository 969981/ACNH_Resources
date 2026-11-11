
void FUN_003c6820(long param_1,undefined4 param_2,long param_3)

{
  long local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    local_50 = param_1 + 0x1c0;
    puStack_48 = PTR_DAT_04bd0388;
    local_40 = FUN_003be77c(param_3,0);
    local_38 = *(undefined1 *)(param_3 + 0x78);
    (**(code **)(param_1 + 0x130))(param_2,&local_50,*(undefined8 *)(param_1 + 0x138));
    *(undefined1 *)(param_3 + 0x78) = local_38;
  }
  return;
}

