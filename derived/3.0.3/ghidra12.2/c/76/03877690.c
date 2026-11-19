
void FUN_03877690(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined4 local_60 [8];
  undefined8 local_40;
  undefined1 local_38;
  
  *param_1 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_60);
  uVar2 = (**(code **)(**(long **)(*(long *)(DAT_05ae6a60 + 0x40) + 0x10) + 0x18))();
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = (**(code **)(**(long **)(*(long *)(DAT_05ae6a60 + 0x40) + 0x10) + 0x20))();
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar1 = *(undefined4 *)(*(long *)(DAT_05ae6a60 + 0x40) + 0x1c);
  FUN_0021f4e0(local_60);
  local_38 = 0;
  local_40 = 0xffffff00;
  FUN_0021f5a0(local_60,uVar2 >> 0x10 | uVar2 << 0x10);
  local_40 = CONCAT44(local_40._4_4_,uVar3 >> 0x10 | uVar3 << 0x10);
  local_38 = (undefined1)uVar1;
  uVar4 = FUN_0022d1f4();
  FUN_0022d310(auStack_70,uVar4,local_60);
  FUN_00229780(param_1,auStack_70);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_0021f584(local_60);
  return;
}

