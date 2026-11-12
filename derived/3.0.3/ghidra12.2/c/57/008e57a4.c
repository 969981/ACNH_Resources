
void FUN_008e57a4(long param_1,byte *param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined4 local_54;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined8 *puStack_38;
  
  uVar4 = *(uint *)(param_1 + 0x307e8);
  if (uVar4 == 0x62) {
    ppuVar6 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))();
LAB_008e580c:
    puStack_38 = (undefined8 *)*ppuVar6;
  }
  else {
    if (uVar4 < 99) {
      ppuVar6 = &PTR_s_cNormal_04922de8 + uVar4;
      goto LAB_008e580c;
    }
    puStack_38 = &DAT_0407ebb1;
  }
  puVar3 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_008e5880:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254) {
      uVar4 = 1;
      goto LAB_008e58a4;
    }
  }
  else {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_008e5880;
  }
  uVar4 = FUN_008c7440(param_1);
LAB_008e58a4:
  local_50 = puVar3 + 0x10;
  puStack_48 = PTR_s_cDefault_04bb5888;
  if (((ulong)*param_2 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar5 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_2 * 4 + 0xde8);
  }
  else {
    puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_54 = *puVar5;
  FUN_008c3200(param_1,&local_40,&local_50,&local_54,0,0,uVar4 & 1);
  *(undefined1 **)(param_1 + 0x37f48) = &LAB_008cfa20;
  *(undefined8 *)(param_1 + 0x37f50) = 0;
  *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925cc0;
  *(long *)(param_1 + 0x37f40) = param_1 + 0x31708;
  return;
}

