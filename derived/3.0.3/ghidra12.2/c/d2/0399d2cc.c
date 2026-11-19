
void FUN_0399d2cc(long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  
  FUN_0390d714(param_1 + 0x80,0xd,param_2);
  piVar4 = (int *)(**(long **)(param_1 + 0x88) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x88) + 10) * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 3;
  uVar2 = (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(param_1 + 0x80,6);
  *(ushort *)((long)piVar4 + 6) = (ushort)uVar2 & 0xff;
  uVar2 = ((uVar2 & 0xff) * 4 + *(int *)(param_1 + 0xb0)) - 1 & (uVar2 & 0xff) * -4;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 1;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = *(int *)(param_1 + 0xb0) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 3;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = *(int *)(param_1 + 0xb0) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 1;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = *(int *)(param_1 + 0xb0) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 2;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = *(int *)(param_1 + 0xb0) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 3;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 1;
  uVar2 = *(int *)(param_1 + 0xb0) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar4 + 2) = 6;
  *piVar4 = 1;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  plVar3 = *(long **)(param_1 + 0x88);
  uVar1 = *(ushort *)((long)plVar3 + 10);
  if (uVar1 == *(ushort *)(plVar3 + 1)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar3 + 10);
  }
  piVar4 = (int *)(*plVar3 + (ulong)uVar1 * 0xc);
  *piVar4 = 1;
  *(undefined1 *)(piVar4 + 2) = 6;
  *(undefined2 *)((long)piVar4 + 6) = 4;
  uVar2 = *(int *)(param_1 + 0xb0) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xb0) = uVar2;
  *(short *)(piVar4 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0xb0) =
       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)((long)piVar4 + 6) * *piVar4 * 4;
  *(short *)(*(long *)(param_1 + 0x88) + 10) = *(short *)(*(long *)(param_1 + 0x88) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x88) + 10) == *(short *)(*(long *)(param_1 + 0x88) + 8)) {
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x1fU & 0xffffffe0;
  }
  FUN_039f1608(param_1 + 8,param_2);
  return;
}

