
void FUN_02812e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x168);
  lStack_58 = param_1 + 200;
  local_60 = PTR_DAT_04bc3878 + 0x10;
  if (0x13 < uVar3) {
    uVar3 = 0x14;
  }
  local_50 = PTR_LAB_04bc3870;
  uStack_48 = 0;
  FUN_0277bf00(uVar3,&local_60);
  local_60 = PTR_DAT_04bc3868 + 0x10;
  local_50 = PTR_LAB_04bc3860;
  uStack_48 = 0;
  uVar3 = *(uint *)(param_1 + 0xb0);
  if (0x13 < uVar3) {
    uVar3 = 0x14;
  }
  lStack_58 = param_1 + 0x10;
  FUN_0277bf00(uVar3,&local_60);
  lStack_58 = param_1 + 0x18c;
  uVar3 = *(uint *)(param_1 + 0x11acc);
  local_60 = PTR_DAT_04bc35f8 + 0x10;
  local_50 = PTR_LAB_04bc35e8;
  uStack_48 = 0;
  if (8999 < uVar3) {
    uVar3 = 9000;
  }
  FUN_0277bf00(uVar3,&local_60);
  puVar2 = PTR_LAB_04bc35f0;
  lStack_58 = param_1 + 0x11ad0;
  puVar1 = PTR_DAT_04bc3600 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x11b70);
  local_50 = PTR_LAB_04bc35f0;
  uStack_48 = 0;
  if (0x13 < uVar3) {
    uVar3 = 0x14;
  }
  local_60 = puVar1;
  FUN_0277bf00(uVar3,&local_60);
  lStack_58 = param_1 + 0x11b74;
  uVar3 = *(uint *)(param_1 + 0x11c14);
  local_50 = puVar2;
  uStack_48 = 0;
  if (0x13 < uVar3) {
    uVar3 = 0x14;
  }
  local_60 = puVar1;
  FUN_0277bf00(uVar3,&local_60);
  return;
}

