
undefined8 FUN_0069438c(long param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  uint *puVar7;
  ushort *puVar8;
  char acStack_50 [16];
  
  if (0x1f < *(ushort *)(param_1 + 0x100)) {
    return 0;
  }
  uVar6 = (ulong)(*(ushort *)(param_1 + 0x100) - 1) & 0xffff;
  if (*(char *)(param_1 + uVar6 * 8) == '\x02') {
    lVar2 = param_1 + uVar6 * 8;
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
    puVar7 = (uint *)(lVar2 + 4);
    uVar5 = nn::util::SNPrintf(acStack_50,0xd,"[%u]",(ulong)*puVar7);
    puVar8 = (ushort *)(lVar2 + 2);
    uVar4 = *puVar8;
    if (0x100 - (ulong)uVar4 < (ulong)(uVar5 + 1)) {
      return 0;
    }
    *(ushort *)(param_1 + 0x202) = uVar4;
    memcpy((void *)(param_1 + 0x102 + (ulong)*puVar8),acStack_50,(ulong)(uint)uVar5);
    uVar5 = *(short *)(param_1 + 0x202) + uVar5;
    *(ushort *)(param_1 + 0x202) = uVar5;
    *(undefined1 *)(param_1 + 0x102 + (ulong)uVar5) = 0;
    *puVar7 = *puVar7 + 1;
  }
  uVar5 = *(ushort *)(param_1 + 0x202);
  if (0x100 - (ulong)uVar5 < param_3 + 2) {
    return 0;
  }
  lVar2 = param_1 + 0x102;
  *(undefined1 *)(param_1 + (ulong)*(ushort *)(param_1 + 0x100) * 8) = 3;
  uVar4 = *(ushort *)(param_1 + 0x100);
  lVar3 = param_1 + (ulong)uVar4 * 8;
  *(ushort *)(lVar3 + 2) = uVar5;
  *(undefined4 *)(lVar3 + 4) = 0;
  uVar5 = *(ushort *)(param_1 + 0x202);
  *(ushort *)(param_1 + 0x202) = uVar5 + 1;
  *(undefined1 *)(lVar2 + (ulong)uVar5) = 0x2e;
  *(ushort *)(param_1 + 0x100) = uVar4 + 1;
  memcpy((void *)(lVar2 + (ulong)*(ushort *)(param_1 + 0x202)),param_2,param_3);
  uVar1 = (uint)*(ushort *)(param_1 + 0x202) + (int)param_3;
  *(short *)(param_1 + 0x202) = (short)uVar1;
  *(undefined1 *)(lVar2 + ((ulong)uVar1 & 0xffff)) = 0;
  return 1;
}

