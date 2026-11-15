
void FUN_01face6c(long param_1)

{
  ulong uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_4;
  undefined1 local_2;
  
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0xfffe00000000;
  FUN_0277d4ac((long)&uStack_78 + 4);
  local_48 = 0;
  local_40 = 0;
  local_4 = 0x100;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_60 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0;
  local_2 = 1;
  puStack_50 = puStack_60;
  uVar1 = FUN_01f9cbb0(param_1,&local_80,&local_4);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x12000) = 0;
    *(int *)(param_1 + 0x11fe0) = (int)local_58;
    *(int *)(param_1 + 0x11fe4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x11fc8) = uStack_78._4_4_;
    *(undefined4 *)(param_1 + 0x11fcc) = local_70;
    *(int *)(param_1 + 0x11ff0) = (int)local_48;
    *(int *)(param_1 + 0x11ff4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x11ff8) = local_40;
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x200;
    *(float *)(param_1 + 0x11ffc) =
         ((float)(int)local_58 * 5.0 + (float)(int)local_48 * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x12004) =
         ((float)local_58._4_4_ * 5.0 + (float)local_48._4_4_ * 5.0 + 5.0) * 0.5;
  }
  return;
}

