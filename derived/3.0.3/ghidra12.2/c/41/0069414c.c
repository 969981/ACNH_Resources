
bool FUN_0069414c(long param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  ulong uVar5;
  uint *puVar6;
  ushort *puVar7;
  char acStack_50 [16];
  
  uVar5 = (ulong)(*(ushort *)(param_1 + 0x100) - 1) & 0xffff;
  if (*(char *)(param_1 + uVar5 * 8) == '\x02') {
    lVar1 = param_1 + uVar5 * 8;
    acStack_50[8] = '\0';
    acStack_50[9] = '\0';
    acStack_50[10] = '\0';
    acStack_50[0xb] = '\0';
    acStack_50[0xc] = '\0';
    acStack_50[0] = '\0';
    acStack_50[1] = '\0';
    acStack_50[2] = '\0';
    acStack_50[3] = '\0';
    acStack_50[4] = '\0';
    acStack_50[5] = '\0';
    acStack_50[6] = '\0';
    acStack_50[7] = '\0';
    puVar6 = (uint *)(lVar1 + 4);
    uVar4 = nn::util::SNPrintf(acStack_50,0xd,"[%u]",(ulong)*puVar6);
    puVar7 = (ushort *)(lVar1 + 2);
    uVar2 = *puVar7;
    bVar3 = (ulong)(uVar4 + 1) <= 0x100 - (ulong)uVar2;
    if (bVar3) {
      *(ushort *)(param_1 + 0x202) = uVar2;
      memcpy((void *)(param_1 + 0x102 + (ulong)*puVar7),acStack_50,(ulong)(uint)uVar4);
      uVar4 = *(short *)(param_1 + 0x202) + uVar4;
      *(ushort *)(param_1 + 0x202) = uVar4;
      *(undefined1 *)(param_1 + 0x102 + (ulong)uVar4) = 0;
      *puVar6 = *puVar6 + 1;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

