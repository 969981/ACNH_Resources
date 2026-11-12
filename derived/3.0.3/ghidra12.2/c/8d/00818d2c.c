
undefined8 * FUN_00818d2c(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_8b;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_a8 = 1;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  puStack_98 = PTR_DAT_04bb2120;
  local_8c = 0;
  local_b0 = PTR_DAT_04bdf0b0 + 0x10;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0x1010100;
  local_70 = 0;
  uStack_68 = 0;
  local_8b = 0x1010101;
  local_50 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  local_60 = 0;
  uStack_58 = 0;
  puStack_48 = local_a0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar3 = (undefined8 *)(lVar5 + 8);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0xa8);
  }
  local_40 = *(undefined8 *)(param_2 + 8);
  uStack_38 = *puVar3;
  local_84 = param_3;
  puVar3 = (undefined8 *)FUN_03f35730(*(undefined8 *)PTR_DAT_04bb49b8,&local_b0);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb2820);
    if ((uVar4 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

