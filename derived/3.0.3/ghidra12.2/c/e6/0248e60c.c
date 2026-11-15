
void FUN_0248e60c(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_3c [8];
  byte local_34 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined8 local_8;
  
  local_8 = 0xfffe;
  FUN_0277d4ac(&local_8);
  local_8 = *(undefined8 *)(param_1 + 0x1900);
  uVar2 = *(uint *)(param_1 + 0x17cc);
  if ((uVar2 >> 9 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = uVar2 | 0x200;
    local_2c = (uint)((ulong)local_8 >> 0x20);
    uVar2 = local_28 >> 0x10;
    local_24 = 0;
    bVar1 = *(byte *)(param_1 + 0x1ee8);
    local_30 = (undefined4)local_8;
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    local_28._0_2_ = CONCAT11(bVar1,*(int *)(param_1 + 0x178) == 0);
    local_28 = CONCAT22((short)uVar2,(undefined2)local_28) & 0xff00ffff;
    FUN_02306630(&local_30);
    uVar2 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_0248d900(local_34,param_1 + 0x18e0);
    local_30 = 0;
    local_28 = 6;
    local_2c = local_2c & 0xffffff00;
    local_24 = local_24 & 0xff000000;
    FUN_02321e44(auStack_3c,param_1,&local_30);
  }
  return;
}

