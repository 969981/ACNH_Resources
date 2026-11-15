
void FUN_023e06e8(long param_1)

{
  long lVar1;
  uint uVar2;
  byte local_44 [4];
  undefined8 local_40;
  undefined1 local_38;
  byte local_37;
  undefined1 local_36;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = 0xfffe;
  FUN_0277d4ac(&local_30);
  local_40 = *(undefined8 *)(param_1 + 0x1900);
  uVar2 = *(uint *)(param_1 + 0x17cc);
  local_30 = local_40;
  if ((uVar2 >> 9 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = uVar2 | 0x200;
    local_37 = *(byte *)(param_1 + 0x1ee8);
    local_34 = 0;
    local_38 = *(int *)(param_1 + 0x178) == 0;
    if (7 < local_37) {
      local_37 = 0xff;
    }
    local_36 = 1;
    FUN_02306630(&local_40);
    uVar2 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_44[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    local_40 = 0xfffe;
    FUN_0277d4ac(&local_40);
    local_40 = *(undefined8 *)(param_1 + 0x1900);
    local_24 = 0;
    FUN_02326c70(local_44,&local_40,&local_24);
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_44[0] * 0x740;
    if (7 < local_44[0]) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar1 + 0x5b4) = 3;
      FUN_01393458(lVar1 + 0x658);
    }
    else {
      *(undefined4 *)(lVar1 + 0x5b4) = 4;
    }
  }
  return;
}

