
void FUN_025583ec(undefined2 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*param_2;
  if (7 < *param_2) {
    return;
  }
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar5 + 0x476) < 2) {
    iVar3 = FUN_02582d8c(param_2,2);
    if (iVar3 < 0) {
      return;
    }
    uVar4 = (ulong)*param_2;
    if (7 < *param_2) {
      return;
    }
  }
  else {
    bVar2 = *(byte *)(lVar5 + uVar4 * 4 + 0x44e);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
      return;
    }
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) {
      return;
    }
  }
  lVar5 = DAT_054f5738 + uVar4 * 8;
  *(undefined2 *)(lVar5 + 0xec0) = *param_1;
  *(undefined1 *)(lVar5 + 0xec2) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(lVar5 + 0xec3) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)(lVar5 + 0xec4) = *(undefined4 *)(param_1 + 2);
  return;
}

