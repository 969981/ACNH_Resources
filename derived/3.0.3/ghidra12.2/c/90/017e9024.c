
void FUN_017e9024(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04bb27c8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "RoomMdlFloor8x8";
  lVar7 = *(long *)PTR_DAT_04bb27c8;
  local_88 = puVar1;
  lVar5 = FUN_00947800(param_1,&local_88);
  puVar4 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  uVar6 = 0;
  if (lVar5 != 0) {
    puStack_70 = PTR_DAT_04bb2010 + 0x10;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    uStack_58 = 0;
    local_68 = 0;
    uStack_48 = 0x2000000020;
    local_60 = puStack_70;
    local_50 = puStack_70;
    uVar6 = FUN_0096cca0(0,0,*(undefined8 *)(lVar7 + 0xa8),lVar5,&local_50,&local_78,0);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_0096e9e0(*(undefined8 *)(lVar7 + 0xa8),&local_78);
    }
  }
  lVar7 = *(long *)puVar3;
  pcStack_80 = "RoomMdlStairsNml";
  local_88 = puVar1;
  lVar5 = FUN_00947800(uVar6,&local_88);
  if (lVar5 != 0) {
    puStack_70 = puVar2 + 0x10;
    local_78 = puVar4 + 0x10;
    uStack_58 = 0;
    local_68 = 0;
    uStack_48 = 0x2800000020;
    local_60 = puStack_70;
    local_50 = puStack_70;
    uVar6 = FUN_0096cca0(0,0,*(undefined8 *)(lVar7 + 0xa8),lVar5,&local_50,&local_78,1);
    if ((uVar6 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar7 + 0xa8),&local_78);
    }
  }
  *(undefined8 *)(param_1 + 8) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0x100000001;
  *(undefined8 *)(param_1 + 0x18) = 0x100000001;
  *(undefined8 *)(param_1 + 0x20) = 0x100000001;
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0x100000000;
  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
  *(undefined8 *)(param_1 + 0x40) = 0x300000002;
  *(undefined8 *)(param_1 + 0x48) = 0x100000001;
  *(undefined8 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0x100000000;
  *(undefined8 *)(param_1 + 0x60) = 0x100000001;
  *(undefined8 *)(param_1 + 0x68) = 0x400000004;
  *(undefined8 *)(param_1 + 0x70) = 0x100000001;
  *(undefined8 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0x100000000;
  *(undefined8 *)(param_1 + 0x88) = 0x100000001;
  *(undefined8 *)(param_1 + 0x90) = 0x300000002;
  *(undefined8 *)(param_1 + 0x98) = 0x100000001;
  *(undefined8 *)(param_1 + 0xa0) = 1;
  return;
}

