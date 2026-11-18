
void FUN_0361e0b4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 0x110);
  if (*(ulong *)(param_1 + 0x128) <= uVar8) {
    uVar1 = uVar8 + 0x11110;
    uVar3 = *(uint *)(param_1 + 0xe0);
    uVar4 = *(uint *)(param_1 + 0xe4);
    *(ulong *)(param_1 + 0x128) = uVar1;
    if (*(ulong *)(param_1 + 0x130) <= uVar1) {
      uVar1 = *(ulong *)(param_1 + 0x130);
    }
    *(ulong *)(param_1 + 0x138) = uVar1;
    *(ulong *)((uint *)(param_1 + 0xe0) + (ulong)uVar4 * 2 + 2) = uVar8;
    uVar2 = uVar4 + 1 & 3;
    *(uint *)(param_1 + 0xe4) = uVar2;
    if (uVar2 == uVar3) {
      *(uint *)(param_1 + 0xe0) = uVar4 + 2 & 3;
    }
    plVar5 = *(long **)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0xd0) = 1;
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 2;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,2);
    }
  }
  if (*(ulong *)(param_1 + 0x130) <= uVar8) {
    *(undefined1 *)(param_1 + 0xd0) = 1;
    uVar8 = *(long *)(param_1 + 0x110) + 0x1150c;
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 1;
    uVar1 = *(ulong *)(param_1 + 0x128);
    if (uVar8 <= *(ulong *)(param_1 + 0x128)) {
      uVar1 = uVar8;
    }
    *(ulong *)(param_1 + 0x130) = uVar8;
    *(ulong *)(param_1 + 0x138) = uVar1;
    if (*(char *)(param_1 + 0x1050) == '\0') {
      lVar6 = *(long *)(param_1 + 0x1060);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x1058);
      *(long *)(param_1 + 0x1058) = *(long *)(param_1 + 0x110);
      lVar6 = (*(long *)(param_1 + 0x110) - lVar6) + *(long *)(param_1 + 0x1060);
    }
    lVar7 = *(long *)(param_1 + 0x1068);
    *(long *)(param_1 + 0x1068) = lVar6;
    *(undefined8 *)(param_1 + 0x1060) = 0;
    plVar5 = *(long **)(param_1 + 0x58);
    uVar8 = lVar7 + lVar6;
    if (0x2249f < uVar8) {
      uVar8 = 0x224a0;
    }
    *(ulong *)(param_1 + 0x1070) = uVar8;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0361e200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      return;
    }
  }
  return;
}

