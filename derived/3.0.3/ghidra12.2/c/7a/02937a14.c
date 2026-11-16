
void FUN_02937a14(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  byte local_36;
  undefined4 local_34;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  puVar3 = PTR_DAT_04bb27d0;
  local_14 = 0xff00;
  local_40 = &PTR_LAB_04a92f50;
  local_34 = *(undefined4 *)(param_2 + 0xc);
  local_18 = 0;
  local_12 = 0;
  local_36 = *(byte *)(param_2 + 10);
  local_38 = (undefined1)*(undefined2 *)(param_2 + 8);
  _local_38 = CONCAT11(6,local_38);
  if (7 < local_36) {
    local_36 = 0xff;
  }
  if (-1 < *(int *)(param_1 + 0x38)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x38),&local_18,&local_40,
                 0x10,0);
  }
  lVar5 = **(long **)puVar3;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) {
      local_18 = 0;
      _local_38 = CONCAT11(7,local_38);
      local_12 = 0;
      local_14 = 0xff01;
      if (*(int *)(param_1 + 0x38) < 0) {
        return;
      }
      FUN_01db1df0(**(long **)puVar3 + 0x480,*(int *)(param_1 + 0x38),&local_18,&local_40,0x10,0);
      return;
    }
  }
  uVar4 = (ulong)*(byte *)(param_2 + 8);
  if (0x13 < *(byte *)(param_2 + 8)) {
    uVar4 = 0;
  }
  (&DAT_055cf258)[uVar4] = 0;
  return;
}

