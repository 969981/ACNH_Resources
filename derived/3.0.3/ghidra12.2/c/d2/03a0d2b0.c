
void FUN_03a0d2b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x8d) == '\0') {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      (**(code **)(*(long *)*puVar4 + 0x98))();
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  if (uVar3 != (uint)uVar5) {
    do {
      nn::os::WaitLightEvent
                ((LightEventType *)
                 (*(long *)((long)puVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) +
                 0x178));
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while (uVar3 != (uint)uVar1);
    uVar3 = *(uint *)(param_1 + 0x68);
  }
  if (0 < (int)uVar3) {
    uVar5 = (ulong)uVar3;
    if (*(int *)(**(long **)(param_1 + 0x70) + 0x108) == 0) {
      uVar1 = 0;
      do {
        if (uVar5 - 1 == uVar1) goto LAB_03a0d3f0;
        lVar2 = uVar1 + 1;
        uVar1 = uVar1 + 1;
      } while (*(int *)((*(long **)(param_1 + 0x70))[lVar2] + 0x108) == 0);
      if (uVar5 <= uVar1) goto LAB_03a0d3f0;
    }
    uVar1 = uVar5 & 3;
    if (3 < uVar3) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + -4;
      } while (-lVar2 != (uVar5 & 0xfffffffc));
    }
    if ((uVar3 & 3) != 0) {
      do {
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
LAB_03a0d3f0:
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

