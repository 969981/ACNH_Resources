
void FUN_02fed280(long *param_1)

{
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined **local_30;
  undefined4 local_28;
  
  if (param_1 != (long *)0x0) {
    local_50 = (undefined **)0x0;
    local_48 = 0x3f800000;
    local_40 = 0x3f80000000000000;
    puStack_38 = &DAT_3f8000003f800000;
    local_28 = 0x50;
    local_30 = &PTR_LAB_04a3ee98;
    (**(code **)(*param_1 + 0x18))(param_1,&local_30);
    (**(code **)(param_1[3] + 0x518))(param_1[1],0,&local_50);
    local_30 = (undefined **)((ulong)local_30 & 0xffffffff00000000);
    local_48 = CONCAT44(local_48._4_4_,0x1a);
    local_50 = &PTR_LAB_04a3ee98;
    (**(code **)(*param_1 + 0x18))(param_1,&local_50);
    (**(code **)(param_1[3] + 0x1b8))(param_1[1],0,0,0,&local_30);
  }
  return;
}

