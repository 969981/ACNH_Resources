
void FUN_00355e80(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = FUN_00349194(*(undefined8 *)(param_1 + 0x1e90));
  memset((void *)(lVar3 + *(long *)(param_1 + 0x1e98)),0,
         (ulong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)));
  FUN_003491a8(*(undefined8 *)(param_1 + 0x1e90));
  plVar5 = *(long **)(param_1 + 0x58);
  while (plVar5 != (long *)(param_1 + 0x50)) {
    plVar1 = (long *)plVar5[1];
    lVar3 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar3 + 8) = plVar5;
    *plVar5 = lVar3;
    plVar5 = *(long **)(param_1 + 0x58);
  }
  plVar5 = *(long **)(param_1 + 0x68);
  while (plVar5 != (long *)(param_1 + 0x60)) {
    plVar1 = (long *)plVar5[1];
    lVar3 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar3 + 8) = plVar5;
    *plVar5 = lVar3;
    plVar5 = *(long **)(param_1 + 0x68);
  }
  plVar5 = *(long **)(param_1 + 0x78);
  while (plVar5 != (long *)(param_1 + 0x70)) {
    plVar1 = (long *)plVar5[1];
    lVar3 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar3 + 8) = plVar5;
    *plVar5 = lVar3;
    plVar5 = *(long **)(param_1 + 0x78);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x1880);
  if (*(uint *)(param_1 + 0x1880) != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1 + uVar4 * 0x18;
      plVar5 = *(long **)(lVar3 + 0x88);
      if (plVar5 != (long *)(lVar3 + 0x80)) {
        do {
          plVar1 = (long *)plVar5[1];
          lVar7 = *plVar1;
          *(long **)(*plVar5 + 8) = plVar1;
          *plVar1 = *plVar5;
          *(long **)(lVar7 + 8) = plVar5;
          *plVar5 = lVar7;
          plVar5 = *(long **)(lVar3 + 0x88);
        } while (plVar5 != (long *)(lVar3 + 0x80));
        uVar6 = (ulong)*(uint *)(param_1 + 0x1880);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  *(undefined4 *)(param_1 + 0x1880) = 0;
  uVar2 = *(int *)(param_1 + 0x48) - 1;
  lVar3 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x38) = lVar3;
  if (1 < *(int *)(param_1 + 0x48)) {
    if (uVar2 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      plVar5 = (long *)(lVar3 + 0x58);
      do {
        uVar6 = uVar6 + 2;
        plVar5[-0xb] = (long)plVar5;
        *plVar5 = (long)(plVar5 + 0xb);
        plVar5 = plVar5 + 0x16;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
    }
    if ((uVar2 & 1) != 0) {
      plVar5 = (long *)(lVar3 + uVar6 * 0x58);
      *plVar5 = (long)(plVar5 + 0xb);
    }
  }
  *(undefined8 *)(lVar3 + (long)(int)(uVar2 * 0xb) * 8) = 0;
  *(long *)(param_1 + 0x40) = lVar3;
  return;
}

