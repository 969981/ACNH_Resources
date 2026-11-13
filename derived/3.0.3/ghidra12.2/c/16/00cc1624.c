
void FUN_00cc1624(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined2 local_68;
  undefined *local_60 [4];
  int local_3c;
  
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  FUN_025d6bd4(local_60,puVar1);
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_00bdc3cc(&local_e8);
  local_f8._4_4_ = *(undefined4 *)(param_1 + 0x108);
  local_68 = 0;
  local_f8._0_4_ = 6;
  local_e8 = DAT_05405f5c;
  uStack_e4 = DAT_05405f60;
  uStack_f0 = CONCAT44(1,(undefined4)uStack_f0);
  FUN_025d74cc(local_60,&local_f8);
  local_60[0] = PTR_DAT_04bc3410 + 0x10;
  iVar2 = FUN_025d79cc(local_60);
  if (iVar2 != -1) {
    local_f8._0_4_ = (**(code **)(local_60[0] + 0x20))(local_60);
    if ((int)local_f8 < 0xd) goto LAB_00cc16ec;
  }
  if (local_3c == 0) {
    local_3c = 1;
  }
LAB_00cc16ec:
  FUN_02601530(local_60);
  return;
}

