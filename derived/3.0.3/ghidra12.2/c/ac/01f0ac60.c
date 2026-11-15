
void FUN_01f0ac60(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  
  puVar3 = PTR_DAT_04bb3238;
  uVar2 = *(uint *)(param_1 + 0x15f0);
  if (uVar2 < 3) {
    local_2c = 0xffffffff;
    local_3c = 0;
    local_34 = 0;
    local_40 = *(undefined4 *)PTR_DAT_04bb3238;
    local_28 = 0;
    (**(code **)(*param_1 + 0x520))(param_1,&local_40);
    puVar1 = *(undefined4 **)PTR_DAT_04bb9a68 + (ulong)uVar2 * 7;
    if (2 < uVar2) {
      puVar1 = *(undefined4 **)PTR_DAT_04bb9a68;
    }
    *puVar1 = *(undefined4 *)puVar3;
    puVar1[1] = (undefined4)local_3c;
    puVar1[2] = local_3c._4_4_;
    puVar1[3] = (undefined4)local_34;
    puVar1[4] = local_34._4_4_;
    *(undefined1 *)(puVar1 + 6) = local_28;
    puVar1[5] = local_2c;
  }
  return;
}

