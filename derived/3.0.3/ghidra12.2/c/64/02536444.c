
ulong FUN_02536444(byte *param_1,int param_2,byte param_3)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 unaff_x23;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  byte local_44;
  undefined1 local_43;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  local_24 = param_2;
  if (sVar2 == -1) {
LAB_025364cc:
    if (param_2 == 0x19) {
      uStack_2c = 0xcaf;
    }
    else if (param_2 == 0x10) {
      uStack_2c = 0x9ef;
    }
    else {
      if (param_2 != 0xd) {
        uVar4 = FUN_02536850(param_1,PTR_DAT_04bb37e0,*(undefined4 *)PTR_DAT_04bb4e20,param_3 & 1,0)
        ;
        return uVar4;
      }
      uStack_2c = 0xc03;
    }
    uStack_28 = 0;
    FUN_0277d4ac(&uStack_2c);
    uVar3 = FUN_02536850(param_1,&uStack_2c,*(undefined4 *)PTR_DAT_04bb4e20,param_3 & 1,0);
    return (ulong)(uVar3 & 1);
  }
  uStack_2c = 0x20;
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
  if (0xff < (uint)(int)sVar2) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_025364cc;
  local_30 = (undefined4)unaff_x23;
  uStack_2c = (undefined4)((ulong)unaff_x23 >> 0x20);
  if (((((7 < *param_1) || (uVar3 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, 7 < uVar3))
       || (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0')) ||
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0' ||
       (uVar3 = FUN_02582d8c(param_1,1), 7 < uVar3)))) ||
     (*(char *)(*(long *)puVar1 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0')) {
    uVar3 = 0;
    goto LAB_025366e0;
  }
  if (((param_2 == 0xd) || (param_2 == 0x19)) || ((param_2 == 0x10 || (param_2 == 0)))) {
    *(int *)(*(long *)puVar1 + (ulong)uVar3 * 0x13f0 + 0x13c8) = param_2;
  }
  local_58 = param_2;
  FUN_0274bfe8(param_1,&DAT_054f5728,1);
  if (local_24 == 0x19) {
    bVar5 = *param_1;
    local_4c = (ulong)local_4c._4_4_ << 0x20;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    local_58 = CONCAT31(local_58._1_3_,bVar5);
    local_60 = 0xcaf;
LAB_025367a8:
    FUN_0277d4ac(&local_60);
    local_4c = CONCAT44(0xffffffff,(undefined4)local_4c);
    local_54 = (undefined4)local_60;
    uStack_50 = local_60._4_4_;
  }
  else {
    if (local_24 == 0x10) {
      bVar5 = *param_1;
      local_4c = (ulong)local_4c._4_4_ << 0x20;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      local_58 = CONCAT31(local_58._1_3_,bVar5);
      local_60 = 0x9ef;
      goto LAB_025367a8;
    }
    if (local_24 == 0xd) {
      bVar5 = *param_1;
      local_4c = (ulong)local_4c._4_4_ << 0x20;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      local_58 = CONCAT31(local_58._1_3_,bVar5);
      local_60 = 0xc03;
      goto LAB_025367a8;
    }
    local_4c = 0xffffffff00000000;
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    local_58 = CONCAT31(local_58._1_3_,bVar5);
    local_54 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_50 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  local_43 = 1;
  local_44 = param_3 & 1;
  uVar3 = FUN_02537348(&local_58);
LAB_025366e0:
  return (ulong)(uVar3 & 1);
}

