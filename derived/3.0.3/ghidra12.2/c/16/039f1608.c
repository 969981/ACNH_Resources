
void FUN_039f1608(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  
  FUN_0390d714(param_1,0x22,param_2);
  piVar4 = (int *)(*(long *)param_1[1] + (ulong)*(ushort *)(param_1[1] + 10) * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 4;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 4;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *piVar4 = 1;
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 4;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 4;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 6;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *piVar4 = 1;
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 0x10;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 4;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *piVar4 = 1;
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 7;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  *piVar4 = 1;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *piVar4 = 1;
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 0x38;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 2;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = (int)param_1[6] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 2;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = (int)param_1[6] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 1;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = (int)param_1[6] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 1;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = (int)param_1[6] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 0x10;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + (int)param_1[6]) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  *piVar4 = 1;
  uVar2 = (int)param_1[6] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  plVar3 = (long *)param_1[1];
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 2;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = (int)param_1[6] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 6) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  if (*(short *)(param_1[1] + 10) == *(short *)(param_1[1] + 8)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
  }
  return;
}

