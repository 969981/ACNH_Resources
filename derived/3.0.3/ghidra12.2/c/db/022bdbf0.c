
uint FUN_022bdbf0(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  short local_88 [4];
  undefined *local_80;
  undefined *puStack_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined2 local_58;
  undefined4 local_56;
  undefined1 local_52;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined2 local_28;
  undefined2 local_26;
  short local_20;
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_1b;
  undefined4 local_14;
  
  local_14 = 0;
  local_1e = 0x13;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    local_88[0] = 0;
    puVar2 = DAT_055c1b60;
    do {
      if (*(int *)(puVar2 + -1) == 0x6622bd46) goto LAB_022bdc54;
      puVar2 = (undefined8 *)puVar2[1];
      local_88[0] = local_88[0] + 1;
    } while (puVar2 != &DAT_055c1b58);
  }
  local_88[0] = -1;
LAB_022bdc54:
  local_1d = *(byte *)(param_1 + 0x10);
  local_30 = *param_2;
  local_1b = 0;
  local_34 = 0;
  if (7 < local_1d) {
    local_1d = 0xff;
  }
  local_80 = PTR_DAT_04bbc1a0 + 0x10;
  local_70 = *(int *)(param_3 + 8);
  iStack_6c = *(int *)(param_3 + 0xc);
  local_56 = 0;
  local_52 = 0;
  local_48 = 0;
  local_60 = local_70 + 1;
  local_28 = (undefined2)local_70;
  local_26 = (undefined2)iStack_6c;
  puStack_78 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0xff00;
  local_50 = 0xffffffffffffffff;
  local_3c = 0xff00;
  iStack_5c = iStack_6c + 1;
  local_44 = 0x41200000;
  local_68 = puStack_78;
  local_20 = local_88[0];
  uVar1 = FUN_022ab010(param_1,local_88,&local_34);
  return uVar1 & 1;
}

