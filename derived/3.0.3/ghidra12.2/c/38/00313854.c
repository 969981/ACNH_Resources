
void FUN_00313854(long param_1)

{
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0031a464();
  *(undefined4 *)(param_1 + 100) = 0;
  local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
  FUN_00313980(param_1 + 0x68,6,&local_48);
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_38 = &local_30;
  *(undefined1 *)(param_1 + 0xa4) = 100;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
  local_48 = PTR_DAT_04bce920 + 0x10;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (&local_48 != (undefined8 *)(param_1 + 200)) {
    FUN_00202290(param_1 + 0xd8,local_38,local_38);
  }
  local_48 = PTR_DAT_04bce970 + 0x10;
  FUN_00202558(&local_38,local_30);
  FUN_001865b0(param_1 + 0xf0,*(undefined8 *)PTR_DAT_04bc13b8);
  FUN_0018a58c(param_1 + 0xf8,&DAT_0407ebb1);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  FUN_0018a58c(param_1 + 0x128,&DAT_0407ebb1);
  *(undefined4 *)(param_1 + 0x84) = 0;
  FUN_0031a4ac(param_1,0x60,0);
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

