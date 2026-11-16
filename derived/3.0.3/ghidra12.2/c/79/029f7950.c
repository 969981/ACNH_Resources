
void FUN_029f7950(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_300;
  undefined4 local_2f8;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined4 local_2db;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined4 local_2bc;
  long lStack_2b8;
  undefined4 uStack_2b0;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined *local_298;
  undefined *puStack_290;
  uint local_284;
  undefined1 auStack_280 [544];
  
  *(uint *)(param_1 + 0x18) = param_3;
  puVar5 = PTR_DAT_04bdf0b0;
  puVar4 = PTR_DAT_04bb28b0;
  puVar3 = PTR_DAT_04bb2120;
  puVar7 = PTR_DAT_04bb2020;
  local_2f8 = 1;
  local_2e0 = 0x1010100;
  local_2dc = 0;
  local_2db = 0x1010101;
  local_300 = PTR_DAT_04bdf0b0 + 0x10;
  local_2d4 = 0;
  local_2f0 = PTR_DAT_04bb2020 + 0x10;
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  uStack_2b0 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_29c = 0;
  uStack_2e8 = *(undefined8 *)(param_2 + 8);
  lStack_2b8 = *(long *)PTR_DAT_04bb28b0 + 0x448;
  puStack_290 = PTR_DAT_04bb2120;
  uVar2 = param_3;
  if (2 < param_3) {
    uVar2 = 0;
  }
  plVar1 = &DAT_055f1890 + (long)(int)uVar2 * 2;
  local_298 = local_2f0;
  local_284 = param_3;
  if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf0 | 2;
    FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 0x30,plVar1,&local_300);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 == 0) {
      puVar7 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar6 + 0x360) + 0x18))(lVar6 + 0x360);
      puVar7 = *(undefined **)(lVar6 + 0x368);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_0156b428(auStack_280,&DAT_0406f6e3,puVar7,(&DAT_055f1898)[(long)(int)uVar2 * 2]);
    *(undefined4 *)(param_1 + 0x3c) = 8;
    puVar7 = PTR_DAT_04bb2020;
  }
  local_300 = puVar5 + 0x10;
  local_2e0 = 0x1010100;
  uStack_2e8 = *(undefined8 *)(param_2 + 8);
  local_2f8 = 1;
  local_2f0 = puVar7 + 0x10;
  local_2dc = 0;
  local_2db = 0x1010101;
  local_2d4 = 0;
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  uStack_2b0 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_29c = 0;
  puStack_290 = puVar3;
  lStack_2b8 = *(long *)puVar4 + 0x448;
  local_298 = local_2f0;
  if ((*(byte *)(param_1 + 0x70) >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xf0 | 2;
    FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 0x68,&DAT_055f18c0,&local_300);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 == 0) {
      puVar7 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar6 + 0x360) + 0x18))(lVar6 + 0x360);
      puVar7 = *(undefined **)(lVar6 + 0x368);
    }
    (**(code **)(DAT_055f18c0 + 0x18))(&DAT_055f18c0);
    FUN_0156b428(auStack_280,&DAT_0406f6e3,puVar7,DAT_055f18c8);
    *(undefined4 *)(param_1 + 0x74) = 8;
  }
  return;
}

