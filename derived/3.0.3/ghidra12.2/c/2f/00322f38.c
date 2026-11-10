
undefined8 FUN_00322f38(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x198);
  uVar1 = (*(long *)(param_2 + 0x168) + 0x78fU & -*(long *)(param_2 + 0x168)) +
          *(long *)(param_2 + 0x198);
  if (uVar1 <= *(ulong *)(param_2 + 0x170)) {
    *(ulong *)(param_2 + 0x198) = uVar1;
  }
  if (*(long *)(param_1 + 0x348) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x198);
    uVar1 = (*(long *)(lVar2 + 0x168) + 0x7fU & -*(long *)(lVar2 + 0x168)) +
            *(long *)(lVar2 + 0x198);
    if (uVar1 <= *(ulong *)(lVar2 + 0x170)) {
      *(ulong *)(lVar2 + 0x198) = uVar1;
    }
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x198);
    uVar1 = ((*(long *)(param_1 + 0x310) + *(long *)(lVar2 + 0x168)) - 1U &
            -*(long *)(lVar2 + 0x168)) + *(long *)(lVar2 + 0x198);
    if (uVar1 <= *(ulong *)(lVar2 + 0x170)) {
      *(ulong *)(lVar2 + 0x198) = uVar1;
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar2 + 0x198);
    uVar1 = (*(long *)(lVar2 + 0x168) + 0x15fU & -*(long *)(lVar2 + 0x168)) +
            *(long *)(lVar2 + 0x198);
    if (uVar1 <= *(ulong *)(lVar2 + 0x170)) {
      *(ulong *)(lVar2 + 0x198) = uVar1;
    }
  }
  return 1;
}

