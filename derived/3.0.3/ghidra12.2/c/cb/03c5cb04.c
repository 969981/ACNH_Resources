
void FUN_03c5cb04(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x80))();
  uVar2 = (**(code **)(*(long *)param_1[1] + 0x80))((long *)param_1[1],param_3);
  lVar4 = param_1[1];
  lVar3 = *param_4;
  plVar5 = (long *)(*(long *)(lVar4 + 0x68) +
                   (long)(int)(uVar1 + *(uint *)(lVar4 + 0x60) * uVar2) * 0x18);
  if (*(uint *)(lVar4 + 100) <= uVar2 || *(uint *)(lVar4 + 0x60) <= uVar1) {
    plVar5 = (long *)0x0;
  }
  if (*plVar5 == 0) {
    if (lVar3 == 0) {
      lVar3 = FUN_03c68d44(*param_1,param_4 + 1,param_4 + 3);
    }
    *plVar5 = lVar3;
    *(undefined4 *)(plVar5 + 1) = *(undefined4 *)((long)param_4 + 0x2c);
    *(char *)((long)plVar5 + 0x15) = (char)param_4[6];
    *(undefined1 *)((long)plVar5 + 0x16) = *(undefined1 *)((long)param_4 + 0x31);
  }
  if ((char)param_4[5] != '\0') {
    lVar4 = param_1[1];
    plVar5 = (long *)(*(long *)(lVar4 + 0x68) +
                     (long)(int)(uVar2 + *(uint *)(lVar4 + 0x60) * uVar1) * 0x18);
    if (*(uint *)(lVar4 + 100) <= uVar1 || *(uint *)(lVar4 + 0x60) <= uVar2) {
      plVar5 = (long *)0x0;
    }
    if (*plVar5 == 0) {
      if (lVar3 == 0) {
        lVar3 = FUN_03c68d44(*param_1,param_4 + 1,param_4 + 3);
      }
      *plVar5 = lVar3;
      *(float *)(plVar5 + 1) = -*(float *)((long)param_4 + 0x2c);
      *(char *)((long)plVar5 + 0x15) = (char)param_4[6];
      *(undefined1 *)((long)plVar5 + 0x16) = *(undefined1 *)((long)param_4 + 0x31);
    }
  }
  if (*(char *)((long)param_4 + 0x2a) != '\0') {
    plVar5 = (long *)(*(long *)(param_1[1] + 0x78) + (long)(int)uVar2 * 0x10);
    if (*(uint *)(param_1[1] + 0x70) <= uVar2) {
      plVar5 = (long *)0x0;
    }
    if (*plVar5 == 0) {
      if (lVar3 == 0) {
        lVar3 = FUN_03c68d44(*param_1,param_4 + 1,param_4 + 3);
      }
      *plVar5 = lVar3;
      *(uint *)(plVar5 + 1) = (uint)(0.0 < *(float *)((long)param_4 + 0x2c));
    }
  }
  if (*(char *)((long)param_4 + 0x29) != '\0') {
    plVar5 = (long *)(*(long *)(param_1[1] + 0x78) + (long)(int)uVar1 * 0x10);
    if (*(uint *)(param_1[1] + 0x70) <= uVar1) {
      plVar5 = (long *)0x0;
    }
    if (*plVar5 == 0) {
      if (lVar3 == 0) {
        lVar3 = FUN_03c68d44(*param_1,param_4 + 1,param_4 + 3);
      }
      *plVar5 = lVar3;
      *(uint *)(plVar5 + 1) = (uint)(*(float *)((long)param_4 + 0x2c) < 0.0);
    }
  }
  return;
}

