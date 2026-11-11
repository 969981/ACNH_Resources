
void FUN_0039de78(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x10) & 0x70;
  if ((uVar2 | 0x20) != 0x70) {
    return;
  }
  uVar3 = (int)*(float *)(param_1 + 0x1c) - (int)*(float *)(param_1 + 0x18);
  if ((int)uVar3 < 2) {
    uVar5 = 0xfffffffffffffff0;
    goto LAB_0039df18;
  }
  uVar2 = uVar2 - 0x40 >> 4;
  if (uVar2 - 2 < 2) {
    uVar5 = (long)((ulong)((uVar3 & 0xffffffe0) + 0x20) << 0x20) >> 0x23;
  }
  else if (uVar2 == 1) {
    uVar2 = *(ushort *)(param_1 + 0x10) & 0xc;
    uVar3 = uVar3 + 1;
    uVar5 = (ulong)uVar3;
    if (uVar2 == 4) {
      iVar4 = uVar3 * 2;
    }
    else {
      if (uVar2 == 8) goto LAB_0039df10;
      iVar4 = uVar3 * 4;
    }
    uVar5 = (ulong)iVar4;
  }
  else {
    uVar5 = 0;
  }
LAB_0039df10:
  uVar5 = uVar5 + 7 & 0xfffffffffffffff8;
LAB_0039df18:
  puVar1 = (undefined2 *)(*(long *)(param_1 + 8) + uVar5);
  *(undefined2 *)(param_1 + 0x10) = *puVar1;
  *(undefined2 *)(param_1 + 0x12) = puVar1[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)((long)puVar1 + 0xbU & 0xfffffffffffffff8);
  return;
}

