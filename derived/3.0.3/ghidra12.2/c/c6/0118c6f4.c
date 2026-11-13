
void FUN_0118c6f4(long param_1,long param_2)

{
  int iVar1;
  undefined4 local_60 [2];
  undefined *local_58;
  undefined *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  FUN_011b9ab0(auStack_30,*(undefined4 *)(param_2 + 4));
  iVar1 = FUN_011ba8b0(auStack_30);
  if (iVar1 == 0) {
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_50 = PTR_DAT_04bb2010 + 0x10;
    local_60[0] = *(undefined4 *)(param_2 + 4);
    local_48 = *(undefined4 *)(param_2 + 0x18);
    uStack_44 = *(undefined4 *)(param_2 + 0x1c);
    local_38 = *(undefined4 *)(param_2 + 0x28);
    uStack_34 = *(undefined4 *)(param_2 + 0x2c);
    local_40 = puStack_50;
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),local_60);
  }
  return;
}

