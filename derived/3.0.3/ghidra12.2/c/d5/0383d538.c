
void FUN_0383d538(float param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined1 local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  if ((param_1 < 0.0) || (param_1 < 44100.0)) {
    if (*(byte **)(param_2 + 0x40) == (byte *)0x0) {
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
        return;
      }
    }
    else {
      bVar1 = **(byte **)(param_2 + 0x40);
      if (((bVar1 >> 1 & 1) == 0) && ((bVar1 & 8) == 0 && (*(byte *)(param_2 + 0x38) & 1) == 0)) {
        return;
      }
    }
    uVar2 = 2;
  }
  else {
    if (*(long *)(param_2 + 0x58) != 0) {
      FUN_03f45838(param_2 + 0x48);
    }
    local_a0 = PTR_DAT_04bcb2c0;
    lStack_40 = *(long *)(param_2 + 0x40);
    uVar2 = 0;
    if (lStack_40 != 0) {
      local_96 = 1;
      local_98 = 1;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      puStack_58 = PTR_DAT_04bb2120;
      lVar3 = *(long *)PTR_DAT_04bb28b0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      local_50 = 0;
      local_48 = 0;
      local_a0 = local_a0 + 0x10;
      local_38 = 0;
      local_80 = lVar3 + 0x598;
      uStack_78 = 0;
      lStack_68 = lVar3 + 0x5b8;
      local_70 = 0;
      local_90 = *(undefined8 *)(lVar3 + 0x198);
      uStack_88 = 0;
      local_b8 = 0;
      local_28 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_b0 = &local_a0;
      uStack_a8 = 0;
      puStack_30 = local_60;
      FUN_03f45184(lVar3 + 0x1a8,&local_b8);
      uVar2 = 0;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  return;
}

