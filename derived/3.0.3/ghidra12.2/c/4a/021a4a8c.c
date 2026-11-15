
void FUN_021a4a8c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  FUN_021a17a0(param_1,0);
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 == 0) goto LAB_021a4bb0;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 == 0)) goto LAB_021a4bb0;
    if ((*(long **)(lVar2 + 0xd0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar2 + 0xd0), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar1 = *(long *)(lVar2 + 0xb8) + *(long *)(lVar2 + 0xb0);
    uVar5 = (ulong)*(byte *)(lVar1 + 0x1e3366);
    if (((uVar5 < 3) && (uVar5 = (ulong)*(byte *)(lVar1 + uVar5 + 0x1e3363), uVar5 < 10)) &&
       ((&DAT_053fee41)[uVar5 * 0xba0] != '\0')) {
      FUN_0219d4d4(&DAT_053fe348 + uVar5 * 0xba0);
    }
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xd0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0xd0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
LAB_021a4bb0:
  FUN_021a4e90(param_1,0);
  FUN_021a5380(param_1,1,1,1,1);
  if (*(char *)(param_1 + 0x55f7c) != '\0') {
    if (((*(char *)(param_1 + 0xaf9) != '\0') && (*(uint *)(param_1 + 0x55f04) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f08))) {
      FUN_02150a20(param_1 + 0x8b0,(long)*(char *)(param_1 + 0xaf8),*(uint *)(param_1 + 0x55f04),
                   *(int *)(param_1 + 0x55f08),*(undefined1 *)(param_1 + 0x55f0c));
      FUN_021956e0(param_1);
    }
    if (((*(char *)(param_1 + 0x1699) != '\0') && (*(uint *)(param_1 + 0x55f10) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f14))) {
      FUN_02150a20(param_1 + 0x1450,(long)*(char *)(param_1 + 0x1698),*(uint *)(param_1 + 0x55f10),
                   *(int *)(param_1 + 0x55f14),*(undefined1 *)(param_1 + 0x55f18));
      FUN_021956e0(param_1 + 0xba0);
    }
    if (((*(char *)(param_1 + 0x2239) != '\0') && (*(uint *)(param_1 + 0x55f1c) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f20))) {
      FUN_02150a20(param_1 + 0x1ff0,(long)*(char *)(param_1 + 0x2238),*(uint *)(param_1 + 0x55f1c),
                   *(int *)(param_1 + 0x55f20),*(undefined1 *)(param_1 + 0x55f24));
      FUN_021956e0(param_1 + 0x1740);
    }
    if (((*(char *)(param_1 + 0x2dd9) != '\0') && (*(uint *)(param_1 + 0x55f28) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f2c))) {
      FUN_02150a20(param_1 + 0x2b90,(long)*(char *)(param_1 + 0x2dd8),*(uint *)(param_1 + 0x55f28),
                   *(int *)(param_1 + 0x55f2c),*(undefined1 *)(param_1 + 0x55f30));
      FUN_021956e0(param_1 + 0x22e0);
    }
    if (((*(char *)(param_1 + 0x3979) != '\0') && (*(uint *)(param_1 + 0x55f34) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f38))) {
      FUN_02150a20(param_1 + 0x3730,(long)*(char *)(param_1 + 0x3978),*(uint *)(param_1 + 0x55f34),
                   *(int *)(param_1 + 0x55f38),*(undefined1 *)(param_1 + 0x55f3c));
      FUN_021956e0(param_1 + 0x2e80);
    }
    if (((*(char *)(param_1 + 0x4519) != '\0') && (*(uint *)(param_1 + 0x55f40) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f44))) {
      FUN_02150a20(param_1 + 0x42d0,(long)*(char *)(param_1 + 0x4518),*(uint *)(param_1 + 0x55f40),
                   *(int *)(param_1 + 0x55f44),*(undefined1 *)(param_1 + 0x55f48));
      FUN_021956e0(param_1 + 0x3a20);
    }
    if (((*(char *)(param_1 + 0x50b9) != '\0') && (*(uint *)(param_1 + 0x55f4c) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f50))) {
      FUN_02150a20(param_1 + 0x4e70,(long)*(char *)(param_1 + 0x50b8),*(uint *)(param_1 + 0x55f4c),
                   *(int *)(param_1 + 0x55f50),*(undefined1 *)(param_1 + 0x55f54));
      FUN_021956e0(param_1 + 0x45c0);
    }
    if (((*(char *)(param_1 + 0x5c59) != '\0') && (*(uint *)(param_1 + 0x55f58) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f5c))) {
      FUN_02150a20(param_1 + 0x5a10,(long)*(char *)(param_1 + 0x5c58),*(uint *)(param_1 + 0x55f58),
                   *(int *)(param_1 + 0x55f5c),*(undefined1 *)(param_1 + 0x55f60));
      FUN_021956e0(param_1 + 0x5160);
    }
    if (((*(char *)(param_1 + 0x67f9) != '\0') && (*(uint *)(param_1 + 0x55f64) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f68))) {
      FUN_02150a20(param_1 + 0x65b0,(long)*(char *)(param_1 + 0x67f8),*(uint *)(param_1 + 0x55f64),
                   *(int *)(param_1 + 0x55f68),*(undefined1 *)(param_1 + 0x55f6c));
      FUN_021956e0(param_1 + 0x5d00);
    }
    if (((*(char *)(param_1 + 0x7399) != '\0') && (*(uint *)(param_1 + 0x55f70) < 0x22)) &&
       (-1 < *(int *)(param_1 + 0x55f74))) {
      FUN_02150a20(param_1 + 0x7150,(long)*(char *)(param_1 + 0x7398),*(uint *)(param_1 + 0x55f70),
                   *(int *)(param_1 + 0x55f74),*(undefined1 *)(param_1 + 0x55f78));
      FUN_021956e0(param_1 + 0x68a0);
    }
  }
  *(undefined1 *)(param_1 + 0x55f7c) = 0;
  return;
}

