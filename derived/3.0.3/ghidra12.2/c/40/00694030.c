
undefined8 FUN_00694030(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  uint *puVar6;
  ushort *puVar7;
  char acStack_40 [16];
  
  uVar4 = *(ushort *)(param_1 + 0x100);
  if (0x1f < uVar4) {
    return 0;
  }
  uVar5 = (ulong)(uVar4 - 1) & 0xffff;
  if (*(char *)(param_1 + uVar5 * 8) == '\x02') {
    lVar1 = param_1 + uVar5 * 8;
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
    puVar6 = (uint *)(lVar1 + 4);
    uVar4 = nn::util::SNPrintf(acStack_40,0xd,"[%u]",(ulong)*puVar6);
    puVar7 = (ushort *)(lVar1 + 2);
    uVar3 = *puVar7;
    if (0x100 - (ulong)uVar3 < (ulong)(uVar4 + 1)) {
      return 0;
    }
    *(ushort *)(param_1 + 0x202) = uVar3;
    memcpy((void *)(param_1 + 0x102 + (ulong)*puVar7),acStack_40,(ulong)(uint)uVar4);
    uVar4 = *(short *)(param_1 + 0x202) + uVar4;
    *(ushort *)(param_1 + 0x202) = uVar4;
    *(undefined1 *)(param_1 + 0x102 + (ulong)uVar4) = 0;
    *puVar6 = *puVar6 + 1;
    uVar4 = *(ushort *)(param_1 + 0x100);
  }
  uVar2 = *(undefined2 *)(param_1 + 0x202);
  *(undefined1 *)(param_1 + (ulong)uVar4 * 8) = 1;
  lVar1 = param_1 + (ulong)*(ushort *)(param_1 + 0x100) * 8;
  *(ushort *)(param_1 + 0x100) = *(ushort *)(param_1 + 0x100) + 1;
  *(undefined2 *)(lVar1 + 2) = uVar2;
  *(undefined4 *)(lVar1 + 4) = 0;
  return 1;
}

