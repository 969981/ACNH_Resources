
uint FUN_024d7ccc(long param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  byte local_52;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  puVar1 = PTR_DAT_04bb3170;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_007ef010(auStack_34,PTR_DAT_04bb3170);
  if (*(int *)(param_1 + 0x1810) == 7) {
    lVar3 = *(long *)(param_1 + 0x68);
    local_5c = 0x100000000;
    local_54 = *(undefined2 *)puVar1;
    local_52 = *(byte *)(param_1 + 0x1ee8);
    local_64 = *(undefined4 *)(lVar3 + 0x280);
    if (7 < local_52) {
      local_52 = 0xff;
    }
    local_6c = *(undefined8 *)(lVar3 + 0x278);
    local_60 = *(undefined4 *)(lVar3 + 0x2b4);
    uVar2 = FUN_0150a560(&local_50,&local_6c);
  }
  else {
    uVar2 = FUN_01509db4(&local_50,param_1 + 0x1ee8);
  }
  if (((uVar2 & 1) != 0) && ((param_2 & 1) == 0)) {
    FUN_024d7dc0(param_1,param_3 & 1);
    uVar2 = 1;
  }
  return uVar2 & 1;
}

