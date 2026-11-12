
void FUN_00947730(undefined4 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  lVar1 = FUN_00947800();
  if (lVar1 != 0) {
    local_58 = 0;
    puStack_70 = PTR_DAT_04bb2010 + 0x10;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_68 = 0;
    local_48 = *(int *)(param_4 + 8) << 1;
    iStack_44 = *(int *)(param_4 + 0xc) << 1;
    puStack_60 = puStack_70;
    local_50 = puStack_70;
    uVar2 = FUN_0096cca0(0,param_1,*(undefined8 *)(param_2 + 0x80),lVar1,&local_50,&local_78,
                         param_6 & 1);
    if (((uVar2 & 1) != 0) &&
       (FUN_0096e9e0(*(undefined8 *)(param_2 + 0x80),&local_78), param_5 != 0)) {
      *(undefined4 *)(param_5 + 0x10) = (undefined4)local_68;
      *(undefined4 *)(param_5 + 0x14) = local_68._4_4_;
      *(undefined4 *)(param_5 + 0x20) = (undefined4)local_58;
      *(undefined4 *)(param_5 + 0x24) = local_58._4_4_;
    }
  }
  return;
}

