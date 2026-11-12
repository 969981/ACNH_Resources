
/* WARNING: Removing unreachable block (ram,0x008a413c) */

void FUN_008a40fc(long param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  plVar6 = DAT_0537d558;
  lVar7 = *DAT_0537d558;
  bVar4 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar1 = (byte *)(lVar7 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar4)) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x28) != -1) {
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar5 = 1 << (ulong)(*param_2 & 0x1f);
    if ((uVar5 & uVar3) != 0) {
      uVar3 = uVar3 & (uVar5 ^ 0xffffffff);
      local_18 = 0;
      *(uint *)(param_1 + 0x24) = uVar3;
      local_12 = 0;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & uVar3;
      local_14 = 0xff00;
      *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 2;
      iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 8);
      if (-1 < iVar2) {
        FUN_01db1df0(*plVar6 + 0x480,iVar2,&local_18,(uint *)(param_1 + 0x24),0x14,0);
      }
      return;
    }
  }
  return;
}

