
void FUN_013d8e84(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined **local_38;
  undefined2 local_30;
  byte local_2e;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar3 = PTR_DAT_04bb27d0;
  local_24 = 0xff00;
  local_2e = *(byte *)(param_2 + 10);
  local_38 = &PTR_LAB_04995bc0;
  local_30 = *(undefined2 *)(param_2 + 8);
  local_28 = 0;
  local_22 = 0;
  if (7 < local_2e) {
    local_2e = 0xff;
  }
  if (-1 < *(int *)(param_1 + 0x38)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x38),&local_28,param_2,0x10
                 ,0);
  }
  lVar4 = **(long **)puVar3;
  bVar2 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar2)) {
      local_28 = 0;
      local_30 = CONCAT11(4,(undefined1)local_30);
      local_22 = 0;
      local_24 = 0xff01;
      if (-1 < *(int *)(param_1 + 0x38)) {
        FUN_01db1df0(**(long **)puVar3 + 0x480,*(int *)(param_1 + 0x38),&local_28,&local_38,0x10,0);
      }
    }
  }
  return;
}

