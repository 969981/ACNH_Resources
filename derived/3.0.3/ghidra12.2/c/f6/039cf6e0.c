
void FUN_039cf6e0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  
  *(undefined1 *)(param_1 + 0xeb8) = 0;
  *(undefined2 *)(param_1 + 0xcb8) = 0x201;
  *(undefined4 *)(param_1 + 0xcc0) = 0x22;
  *(undefined4 *)(param_1 + 0xbc0) = 0x1d;
  *(undefined1 **)(param_1 + 0xdc8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0xdd0) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xfc0) = 10;
  *(undefined4 *)(param_1 + 0x1608) = 0x1d;
  *(undefined4 *)(param_1 + 0x1908) = 0x1d;
  *(undefined2 *)(param_1 + 0xdb8) = 0x403;
  *(byte *)(param_1 + 0xeba) = *(byte *)(param_1 + 0xeba) | 1;
  *(undefined1 *)(param_1 + 0x10b8) = 7;
  *(undefined8 *)(param_1 + 0xdc0) = 1;
  *(undefined4 *)(param_1 + 0xec0) = 0x1a;
  *(undefined1 *)(param_1 + 0xfb8) = 5;
  *(undefined4 *)(param_1 + 0x1408) = 0x1a;
  *(undefined1 *)(param_1 + 0x1500) = 2;
  *(undefined4 *)(param_1 + 0x1508) = 0x1a;
  *(undefined4 *)(param_1 + 0x1708) = 0x1a;
  *(undefined4 *)(param_1 + 0x1808) = 1;
  *(undefined1 *)(param_1 + 0x1600) = 3;
  *(undefined1 *)(param_1 + 0x1700) = 0;
  *(undefined1 *)(param_1 + 0x1800) = 1;
  *(undefined1 *)(param_1 + 0x1900) = 4;
  *(undefined1 *)(param_1 + 0x1a00) = 5;
  FUN_0390d714(param_1 + 0x10c0,2,param_2);
  piVar6 = (int *)(**(long **)(param_1 + 0x10c8) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x10c8) + 10) * 0xc);
  *(undefined1 *)(piVar6 + 2) = 6;
  *piVar6 = 1;
  *(undefined2 *)((long)piVar6 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0x10f0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x10f0) = uVar2;
  *(short *)(piVar6 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x10f0) =
       *(int *)(param_1 + 0x10f0) + (uint)*(ushort *)((long)piVar6 + 6) * *piVar6 * 4;
  *(short *)(*(long *)(param_1 + 0x10c8) + 10) = *(short *)(*(long *)(param_1 + 0x10c8) + 10) + 1;
  plVar7 = *(long **)(param_1 + 0x10c8);
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar6 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar6 + 2) = 6;
  *piVar6 = 1;
  *(undefined2 *)((long)piVar6 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0x10f0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x10f0) = uVar2;
  *(short *)(piVar6 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x10f0) =
       *(int *)(param_1 + 0x10f0) + (uint)*(ushort *)((long)piVar6 + 6) * *piVar6 * 4;
  *(short *)(*(long *)(param_1 + 0x10c8) + 10) = *(short *)(*(long *)(param_1 + 0x10c8) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x10c8) + 10) == *(short *)(*(long *)(param_1 + 0x10c8) + 8)) {
    *(uint *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x10c0,param_2,2,1);
  *(undefined2 *)(param_1 + 0x203c) = 0;
  puVar1 = (uint *)(param_1 + 0x204c);
  *(undefined1 *)(param_1 + 0x203e) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined8 *)(param_1 + 0x13d8) = 0;
  FUN_039cf910(param_1);
  return;
}

