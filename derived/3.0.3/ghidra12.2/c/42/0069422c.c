
undefined8 FUN_0069422c(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort *puVar6;
  char acStack_40 [16];
  
  if (0x1f < *(ushort *)(param_1 + 0x100)) {
    return 0;
  }
  uVar4 = (ulong)(*(ushort *)(param_1 + 0x100) - 1) & 0xffff;
  if (*(char *)(param_1 + uVar4 * 8) == '\x02') {
    lVar1 = param_1 + uVar4 * 8;
    acStack_40[8] = '\0';
    acStack_40[9] = '\0';
    acStack_40[10] = '\0';
    acStack_40[0xb] = '\0';
    acStack_40[0xc] = '\0';
    acStack_40[0] = '\0';
    acStack_40[1] = '\0';
    acStack_40[2] = '\0';
    acStack_40[3] = '\0';
    acStack_40[4] = '\0';
    acStack_40[5] = '\0';
    acStack_40[6] = '\0';
    acStack_40[7] = '\0';
    puVar5 = (uint *)(lVar1 + 4);
    uVar3 = nn::util::SNPrintf(acStack_40,0xd,"[%u]",(ulong)*puVar5);
    puVar6 = (ushort *)(lVar1 + 2);
    uVar2 = *puVar6;
    if (0x100 - (ulong)uVar2 < (ulong)(uVar3 + 1)) {
      return 0;
    }
    *(ushort *)(param_1 + 0x202) = uVar2;
    memcpy((void *)(param_1 + 0x102 + (ulong)*puVar6),acStack_40,(ulong)(uint)uVar3);
    uVar3 = *(short *)(param_1 + 0x202) + uVar3;
    *(ushort *)(param_1 + 0x202) = uVar3;
    *(undefined1 *)(param_1 + 0x102 + (ulong)uVar3) = 0;
    *puVar5 = *puVar5 + 1;
  }
  uVar3 = *(ushort *)(param_1 + 0x202);
  if ((ulong)uVar3 - 0xfe < 3) {
    return 0;
  }
  *(undefined1 *)(param_1 + (ulong)*(ushort *)(param_1 + 0x100) * 8) = 2;
  uVar2 = *(ushort *)(param_1 + 0x100);
  lVar1 = param_1 + (ulong)uVar2 * 8;
  *(ushort *)(lVar1 + 2) = uVar3;
  *(undefined4 *)(lVar1 + 4) = 0;
  *(ushort *)(param_1 + 0x100) = uVar2 + 1;
  uVar3 = *(ushort *)(param_1 + 0x202);
  *(ushort *)(param_1 + 0x202) = uVar3 + 1;
  lVar1 = param_1 + 0x102;
  *(undefined1 *)(lVar1 + (ulong)uVar3) = 0x5b;
  uVar3 = *(ushort *)(param_1 + 0x202);
  *(ushort *)(param_1 + 0x202) = uVar3 + 1;
  *(undefined1 *)(lVar1 + (ulong)uVar3) = 0x5d;
  *(undefined1 *)(lVar1 + (ulong)*(ushort *)(param_1 + 0x202)) = 0;
  return 1;
}

