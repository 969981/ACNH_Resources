
undefined4 FUN_01b957f0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  
  uVar4 = 0;
  do {
    plVar1 = (long *)((long)param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 0x250);
    if (*plVar1 != 0) {
      pfVar6 = (float *)(param_1 + (long)(int)uVar4 * 2 + 0x4b);
      if ((-1e-07 <= *pfVar6) &&
         (fVar7 = *pfVar6 + *(float *)(param_1 + 0x49), *pfVar6 = fVar7, 1.0 <= fVar7)) {
        *plVar1 = 0;
        *pfVar6 = 0.0;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  lVar5 = param_1[0x47];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      plVar1 = (long *)(lVar5 + 0x250 + ((long)((ulong)uVar4 << 0x20) >> 0x1c));
      if (*plVar1 != 0) {
        pfVar6 = (float *)(lVar5 + 0x250 + (long)(int)uVar4 * 0x10 + 8);
        if ((-1e-07 <= *pfVar6) &&
           (fVar7 = *pfVar6 + *(float *)(lVar5 + 0x248), *pfVar6 = fVar7, 1.0 <= fVar7)) {
          *plVar1 = 0;
          *pfVar6 = 0.0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  lVar5 = param_1[0x48];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      plVar1 = (long *)(lVar5 + 0x250 + ((long)((ulong)uVar4 << 0x20) >> 0x1c));
      if (*plVar1 != 0) {
        pfVar6 = (float *)(lVar5 + 0x250 + (long)(int)uVar4 * 0x10 + 8);
        if ((-1e-07 <= *pfVar6) &&
           (fVar7 = *pfVar6 + *(float *)(lVar5 + 0x248), *pfVar6 = fVar7, 1.0 <= fVar7)) {
          *plVar1 = 0;
          *pfVar6 = 0.0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  if (param_2 != (long *)0x0) {
    param_1[0x43] = (long)param_2;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x44] = lVar5;
    param_1[0x45] = lVar5;
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    param_1[0x45] = param_1[0x45] + (uVar2 & 0xffffffff) * 2 + -2;
    (**(code **)(*(long *)param_1[0x43] + 0x38))();
  }
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar3 != 0) && (uVar2 = (**(code **)(*param_3 + 0x20))(param_3), lVar5 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar4 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar4;
    plVar1 = param_1 + 1 + (ulong)uVar4 * 6;
    if (9 < uVar4) {
      plVar1 = param_1 + 1;
    }
    *plVar1 = lVar5;
    plVar1[1] = lVar3 + (uVar2 & 0xffffffff) * 2;
    plVar1[2] = (long)&PTR_FUN_048fc6e0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  (**(code **)(*param_2 + 0x30))(param_2,param_3);
  return *(undefined4 *)((long)param_1 + 0x24c);
}

