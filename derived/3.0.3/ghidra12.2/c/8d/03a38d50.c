
void FUN_03a38d50(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x1060) == '\0') {
    return;
  }
  FUN_03af8c88(*(undefined8 *)(param_1 + 0x248),*(undefined1 *)(param_3 + 8),0x11801);
  FUN_03af70bc(*(undefined8 *)(param_1 + 0x248),param_2,*(undefined1 *)(param_3 + 8));
  lVar5 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
  uVar4 = (uint)*(byte *)(param_3 + 8);
  uVar1 = uVar4;
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar1 = 0;
  }
  uVar2 = *(uint *)(lVar5 + (ulong)uVar1 * 0x23c0 + 8);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 >> 0xb & 1) == 0) goto LAB_03a38e2c;
    lVar5 = lVar5 + (ulong)uVar1 * 0x23c0 + 0x1088;
    *(long *)(param_3 + 0xc0) = lVar5;
    *(long *)(param_3 + 0xb8) = lVar5;
  }
  else {
    lVar5 = lVar5 + (ulong)uVar1 * 0x23c0 + 0x8c8;
    *(long *)(param_3 + 0xc0) = lVar5;
    *(long *)(param_3 + 0xb8) = lVar5;
    if ((uVar2 >> 0xb & 1) == 0) goto LAB_03a38e2c;
  }
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= uVar4) {
    uVar4 = 0;
  }
  *(ulong *)(param_3 + 0xc0) =
       *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 + 0x1088;
LAB_03a38e2c:
  plVar3 = *(long **)(param_3 + 0x318);
  if (plVar3 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
  return;
}

