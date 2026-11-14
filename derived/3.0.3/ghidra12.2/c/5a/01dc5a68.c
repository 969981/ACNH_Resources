
void FUN_01dc5a68(long param_1)

{
  int iVar1;
  undefined **local_80;
  long lStack_78;
  undefined4 local_70;
  undefined *local_68;
  Nickname *pNStack_60;
  Nickname aNStack_51 [33];
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  local_80 = &PTR_LAB_048f96d0;
  local_70 = 0x21;
  if (DAT_04ca9180 == 0) {
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_30 = *(undefined8 *)(DAT_04ca9180 + 0x140);
    uStack_28 = *(undefined8 *)(DAT_04ca9180 + 0x148);
  }
  lStack_78 = param_1;
  iVar1 = nn::account::GetNickname(aNStack_51,(Uid *)&local_30);
  if (iVar1 == 0) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pNStack_60 = aNStack_51;
    FUN_038d0fb0(&local_80,&local_68);
  }
  return;
}

