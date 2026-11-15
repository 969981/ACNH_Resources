
void FUN_023de684(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined4 local_29;
  undefined4 local_24;
  undefined4 local_4;
  
  local_24 = 0;
  local_48 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  uStack_30 = 0;
  local_29 = 0;
  uStack_40 = 0;
  local_50 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_4c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    pbVar2 = (byte *)(param_1 + 0x1ee8);
    uVar1 = FUN_01503f54(&local_50,pbVar2);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x1810) == 7) {
      lVar3 = *(long *)(param_1 + 0x68);
      local_54 = *(byte *)(param_1 + 0x1ee8);
      local_5c = *(undefined4 *)(lVar3 + 0x280);
      local_64 = *(undefined8 *)(lVar3 + 0x278);
      if (7 < local_54) {
        local_54 = 0xff;
      }
      local_58 = *(undefined4 *)(lVar3 + 0x2b4);
      local_53 = 1;
      local_4 = 2;
      uVar1 = FUN_01508a18(&local_50,&local_64,&local_4);
    }
    else {
      local_54 = *(byte *)(param_1 + 0x1ee8);
      lVar3 = *(long *)(param_1 + 0x68);
      local_53 = 0;
      local_5c = *(undefined4 *)(lVar3 + 0x280);
      local_64 = *(undefined8 *)(lVar3 + 0x278);
      if (7 < local_54) {
        local_54 = 0xff;
      }
      local_58 = *(undefined4 *)(lVar3 + 0x2b4);
      uVar1 = FUN_01507210(&local_50,&local_64);
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
    pbVar2 = &local_54;
  }
  FUN_01505780(&local_50,pbVar2);
  return;
}

