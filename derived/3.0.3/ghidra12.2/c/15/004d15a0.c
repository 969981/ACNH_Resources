
undefined8 FUN_004d15a0(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  
  uVar1 = *(int *)(param_2 + 0x14) + 1;
  uVar7 = *(uint *)(param_2 + 0x10);
  puVar2 = (ulong *)(*(long *)(param_1 + 0x490) +
                    (long)*(int *)(*(long *)(param_1 + 0x40) +
                                  (-(ulong)(uVar1 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar1 << 6)
                                  ) * 0x40);
  if (uVar7 == 0) {
    uVar5 = (int)(*puVar2 >> 0x20) - (int)*puVar2 >> 3;
    uVar7 = *(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) <= (int)uVar5) {
      uVar7 = uVar5;
    }
    if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar7) {
      uVar7 = *(uint *)(param_1 + 0xc);
    }
  }
  do {
    uVar9 = *puVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = uVar9 + uVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = (uint)uVar9;
  uVar6 = (uint)(uVar9 >> 0x20);
  uVar5 = uVar6 - uVar8;
  puVar10 = (uint *)(param_2 + 8);
  *puVar10 = uVar8;
  if (uVar6 < uVar8 || uVar5 == 0) {
    uVar5 = FUN_004d1400(param_1,(ulong)uVar1,(ulong)uVar7,puVar10);
    if (uVar5 == 0) {
      return 0x80040200;
    }
    uVar9 = (ulong)*puVar10;
  }
  uVar1 = uVar5;
  if ((int)uVar7 <= (int)uVar5) {
    uVar1 = uVar7;
  }
  *(uint *)(param_2 + 0xc) = uVar1 + (int)uVar9;
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) <= (uint)((int)uVar5 >> 3)) {
    uVar1 = (int)uVar5 >> 3;
  }
  if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar1) {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_2 + 0x10) = uVar1;
  return 0;
}

