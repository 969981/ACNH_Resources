
void FUN_02a88fbc(long param_1,byte param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte local_1c [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((DAT_05351250 == 0) || (*(int *)(DAT_05351250 + 0xb0) != 1)) {
    local_1c[0] = param_2 & 1;
    local_18 = 0;
    local_12 = 0;
    local_14 = 0xff01;
    if (DAT_0560a050 < 0) {
      return;
    }
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0560a050,&local_18,local_1c,1,0);
    return;
  }
  bVar2 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x02a890ac:
    uVar3 = (uint)bVar2;
    if (bVar2 < 8) goto LAB_02a8911c;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    uVar3 = (uint)*pbVar4;
    if (*pbVar4 < 8) goto LAB_02a8911c;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar2 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x02a890ac;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar5 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar5 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar5 + 0x471);
      }
    }
    uVar3 = (uint)*pbVar4;
    if (*pbVar4 < 8) goto LAB_02a8911c;
  }
  uVar3 = (uint)DAT_0548e168;
  if (7 < DAT_0548e168) {
    return;
  }
LAB_02a8911c:
  uVar3 = 1 << (ulong)(uVar3 & 0x1f);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x318) = *(uint *)(param_1 + 0x318) & (uVar3 ^ 0xffffffff);
    return;
  }
  *(uint *)(param_1 + 0x318) = *(uint *)(param_1 + 0x318) | uVar3;
  return;
}

