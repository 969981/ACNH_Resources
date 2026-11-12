
/* WARNING: Removing unreachable block (ram,0x008a422c) */

void FUN_008a41e8(long param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  plVar5 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar5;
  bVar3 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x28) == -1) || ((*(byte *)(param_1 + 0x35) & 1) == 0)) {
    return;
  }
  puVar4 = (uint *)(param_1 + 0x24);
  local_18 = 0;
  local_12 = 0;
  *puVar4 = 1 << (ulong)(*param_2 & 0x1f) | *puVar4;
  bVar3 = *param_2;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 2;
  *(uint *)(param_1 + 0x78) = 1 << (ulong)(bVar3 & 0x1f) | *(uint *)(param_1 + 0x78);
  iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 8);
  local_14 = 0xff00;
  if (-1 < iVar2) {
    FUN_01db1df0(*plVar5 + 0x480,iVar2,&local_18,puVar4,0x14,0);
  }
  return;
}

