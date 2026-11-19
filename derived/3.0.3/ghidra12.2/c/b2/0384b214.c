
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0384b214(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined *puStack_78;
  char *local_70;
  undefined *puStack_68;
  char *local_60;
  undefined *puStack_58;
  char *local_50;
  undefined *puStack_48;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  uVar6 = *(undefined8 *)(lVar4 + 0xa8);
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f80000000000000;
  local_98 = *(undefined **)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_038414f0(param_1 + 0x960,&local_98);
  puVar3 = PTR_DAT_04bcb3f8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = PTR_DAT_04bb2120;
  uStack_b0 = 0;
  local_c8 = PTR_DAT_04bb2120;
  local_d8 = PTR_DAT_04bb3cd8 + 0x10;
  local_a8 = 0x20;
  local_a0 = 0;
  puStack_d0 = puVar1;
  puStack_c0 = puVar1;
  if (((byte)*PTR_DAT_04bcb3f8 >> 1 & 1) == 0) {
    local_98 = (undefined *)((ulong)local_98 & 0xffffffffffff0000);
    *PTR_DAT_04bcb3f8 = *PTR_DAT_04bcb3f8 | 2;
    local_80 = &local_d8;
    local_90 = puVar3;
    uStack_88 = 0;
    puStack_48 = puVar3 + 0x10;
    local_70 = "System";
    local_60 = "System";
    local_50 = "SimpleObject";
    puStack_78 = puVar1;
    puStack_68 = puVar1;
    puStack_58 = puVar1;
    FUN_03839ca0(*(undefined8 *)PTR_DAT_04bcb3d8,&local_98,0);
  }
  FUN_037c7f90(*(undefined8 *)(param_1 + 0x68));
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  local_90 = &DAT_0408e828;
  local_98 = puVar1;
  FUN_0384c700(PTR_DAT_04bcae48,&local_98,uVar5);
  local_90 = &DAT_040d6c90;
  local_98 = puVar1;
  FUN_0384c980(PTR_DAT_04bcae50,&local_98,uVar5);
  uVar5 = _DAT_04102200;
  *(undefined8 *)(param_1 + 0x2f5c) = _UNK_04102208;
  *(undefined8 *)(param_1 + 0x2f54) = uVar5;
  uVar5 = _DAT_04102880;
  *(undefined8 *)(param_1 + 0x2f6c) = _UNK_04102888;
  *(undefined8 *)(param_1 + 0x2f64) = uVar5;
  uVar5 = _DAT_041023d0;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,0x40);
  local_90 = *(undefined **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x2f7c) = _UNK_041023d8;
  *(undefined8 *)(param_1 + 0x2f74) = uVar5;
  *(byte *)(param_1 + 0x2f50) = *(byte *)(param_1 + 0x2f50) | 1;
  FUN_0378d410(param_1 + 0x2fc0,&local_98);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
  *(undefined8 *)(lVar4 + 0xa8) = uVar6;
  return;
}

