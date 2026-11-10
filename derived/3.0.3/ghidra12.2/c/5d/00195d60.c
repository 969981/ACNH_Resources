
void FUN_00195d60(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_0019613c(param_1,param_3);
  if (*(int *)(param_1 + 0x20) == 7) {
    uVar7 = param_3 >> 3;
    FUN_00193030(*(undefined8 *)(param_1 + 0x10),param_2,uVar7,*(undefined8 *)(param_1 + 0x18));
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar7;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (param_3 & 0xfffffffffffffff8);
  }
  else if (param_3 < 8) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 8;
    do {
      FUN_00195ccc(param_1,*(undefined1 *)(param_2 + uVar7));
      uVar8 = uVar8 + 8;
      uVar7 = uVar7 + 1;
    } while (uVar8 <= param_3);
  }
  uVar1 = (uint)param_3 & 7;
  if ((param_3 & 7) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  bVar4 = *(byte *)(param_2 + uVar7);
  if (iVar3 == 7) {
    bVar6 = bVar4 & 0x80;
LAB_00195e3c:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((char)bVar4 < '\0') {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_00195e3c;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 1) {
    return;
  }
  uVar5 = (uint)bVar4;
  if (iVar3 == 7) {
    bVar6 = (byte)((uVar5 & 0x40) << 1);
LAB_00195eb0:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((bVar4 & 0x40) != 0) {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_00195eb0;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 2) {
    return;
  }
  if (iVar3 == 7) {
    bVar6 = (byte)((uVar5 & 0x20) << 2);
LAB_00195f24:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((bVar4 & 0x20) != 0) {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_00195f24;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 3) {
    return;
  }
  if (iVar3 == 7) {
    bVar6 = (byte)((uVar5 & 0x10) << 3);
LAB_00195f98:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((bVar4 & 0x10) != 0) {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_00195f98;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 4) {
    return;
  }
  if (iVar3 == 7) {
    bVar6 = (byte)((uVar5 & 8) << 4);
LAB_0019600c:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((bVar4 & 8) != 0) {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_0019600c;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 5) {
    return;
  }
  if (iVar3 == 7) {
    bVar6 = (byte)((bVar4 & 4) << 5);
LAB_00196080:
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar2 = bVar6;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else if ((bVar4 & 4) != 0) {
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar6 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
    goto LAB_00196080;
  }
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  iVar3 = iVar3 + -1;
  *(int *)(param_1 + 0x20) = iVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (uVar1 == 6) {
    return;
  }
  if (iVar3 == 7) {
    bVar4 = (byte)((bVar4 & 2) << 6);
  }
  else {
    if ((bVar4 & 2) == 0) goto LAB_00196104;
    pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar4 = *pbVar2 | (byte)(1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f));
  }
  pbVar2 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  *pbVar2 = bVar4;
  iVar3 = *(int *)(param_1 + 0x20);
LAB_00196104:
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    iVar3 = 8;
  }
  *(int *)(param_1 + 0x20) = iVar3 + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}

