
void FUN_0035c52c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = FUN_0034fb8c(*(undefined8 *)(param_1 + 8));
  if (*(long *)(lVar1 + 0x48) != 0) {
    *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(lVar1 + 0x28);
    return;
  }
  if (param_3 == 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    local_68 = 0;
    local_80 = CONCAT44(local_80._4_4_,0x21);
    local_70 = nn::util::BinaryBlockHeader::GetBlockSize();
    local_70 = local_70 + -0x10;
    local_80 = CONCAT44((int)local_70,(undefined4)local_80);
    local_78 = lVar2 + 0x10;
    FUN_003490c4(*(undefined8 *)(lVar1 + 0x40),param_2,&local_80);
    param_3 = *(long *)(lVar1 + 0x40);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x30) + (param_4 - lVar1) + 0x10;
  }
  *(long *)(lVar1 + 0x48) = param_3;
  *(long *)(lVar1 + 0x50) = lVar2;
  lVar2 = **(long **)(lVar1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  lVar1 = *(long *)(lVar2 + 0x68);
  FUN_0034f6d4(*(undefined8 *)(lVar2 + 0x80),param_2,lVar2 + 0x10,*(undefined8 *)(lVar1 + 0x28),
               (*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x10)) + **(long **)(lVar2 + 0x70) +
               -0x10,*(undefined4 *)(lVar2 + 0x50));
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_0034fd78(&local_80);
  local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(lVar2 + 0x5c));
  local_80 = CONCAT44(*(undefined4 *)(lVar2 + 0x1c),(undefined4)local_80);
  local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar2 + 0x58));
  local_50 = *(undefined8 *)(lVar2 + 0x80);
  local_60 = CONCAT44(*(undefined4 *)(lVar2 + 0x30),(undefined4)local_60);
  local_70._0_4_ = CONCAT22(*(undefined2 *)(lVar2 + 0x16),(undefined2)local_70);
  FUN_0034f830(*(undefined8 *)(lVar2 + 0x88),param_2,&local_80);
  return;
}

