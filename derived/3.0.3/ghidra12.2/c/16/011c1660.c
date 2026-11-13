
void FUN_011c1660(undefined8 param_1,undefined4 *param_2,short *param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *local_80;
  short *psStack_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined *local_68;
  char *pcStack_60;
  int local_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04bb2020;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  local_80 = (undefined4 *)(PTR_DAT_04bb2020 + 0x10);
  psStack_78 = (short *)0x40f591a;
  FUN_025ffac8(&local_68,&local_80,param_1);
  local_80 = &local_28;
  local_70 = *param_3 != -2;
  puVar1 = PTR_DAT_04bc3220 + 0x10;
  psStack_78 = param_3;
  local_6f = param_4;
  local_68 = puVar1;
  FUN_02589a64(&local_68,&local_80);
  local_68 = puVar1;
  iVar3 = FUN_02589ca4(&local_68);
  if (iVar3 != -1) {
    iVar3 = (**(code **)(local_68 + 0x20))(&local_68);
    local_80 = (undefined4 *)CONCAT44(local_80._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_011c1730;
  }
  if (local_44 == 0) {
    local_44 = 1;
  }
LAB_011c1730:
  FUN_02601530(&local_68);
  if (*param_3 != -2) {
    local_68 = puVar2 + 0x10;
    pcStack_60 = "StrikeRock";
    FUN_0279b044(param_1,&local_68,1);
  }
  return;
}

