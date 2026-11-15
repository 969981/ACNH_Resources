
uint FUN_022fed10(undefined8 param_1,undefined8 *param_2,long param_3,undefined1 param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  short local_70 [4];
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined2 local_40;
  undefined4 local_3e;
  undefined1 local_3a;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined8 local_20;
  undefined2 local_18;
  undefined2 local_16;
  short local_14;
  undefined1 local_12;
  
  lVar4 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar2)) {
      return 0;
    }
  }
  local_20 = *param_2;
  local_58 = *(int *)(param_3 + 8);
  iStack_54 = *(int *)(param_3 + 0xc);
  local_18 = (undefined2)local_58;
  local_16 = (undefined2)iStack_54;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    local_70[0] = 0;
    puVar5 = DAT_055c1b60;
    do {
      if (*(int *)(puVar5 + -1) == 0x6622bd46) goto LAB_022fedc4;
      puVar5 = (undefined8 *)puVar5[1];
      local_70[0] = local_70[0] + 1;
    } while (puVar5 != &DAT_055c1b58);
  }
  local_70[0] = -1;
LAB_022fedc4:
  local_48 = local_58 + 1;
  local_3e = 0;
  local_40 = 0xff00;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_60 = PTR_DAT_04bb2010 + 0x10;
  local_3a = 0;
  local_30 = 0;
  local_24 = 0xff00;
  local_38 = 0xffffffffffffffff;
  local_2c = 0x41200000;
  iStack_44 = iStack_54 + 1;
  local_50 = puStack_60;
  local_14 = local_70[0];
  local_12 = param_4;
  uVar3 = FUN_022fee50(param_1,local_70,&local_20);
  return uVar3 & 1;
}

