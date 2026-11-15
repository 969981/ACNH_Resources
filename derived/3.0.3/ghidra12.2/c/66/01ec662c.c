
void FUN_01ec662c(long *param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined ***local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined **local_30;
  long lStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_38 = 0;
  lStack_28 = param_1[0x15e7];
  local_20 = (undefined4)param_1[0x15e8];
  local_30 = &PTR_LAB_04987060;
  uVar1 = 8;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  *(ushort *)((long)param_1 + 0xaf64) = *(ushort *)((long)param_1 + 0xaf64) & 0xfff7 | uVar1;
  local_1c = *(undefined4 *)((long)param_1 + 0xaf44);
  uStack_18 = (undefined4)param_1[0x15e9];
  local_40 = *(undefined4 *)((long)param_1 + 0xaf4c);
  local_48 = &local_30;
  uStack_3c = 0x39;
  (**(code **)(*param_1 + 0x4b0))(param_1,&local_48);
  return;
}

