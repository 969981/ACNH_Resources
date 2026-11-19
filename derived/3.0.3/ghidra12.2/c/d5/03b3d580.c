
void FUN_03b3d580(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  while (puVar2 != param_1) {
    puVar5 = (undefined8 *)puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar5;
  }
  puVar2 = param_1 + 8;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1;
  param_1[1] = param_1;
  puVar5 = (undefined8 *)param_1[9];
  while (puVar5 != puVar2) {
    puVar6 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar6;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  pvVar7 = (void *)param_1[6];
  param_1[8] = puVar2;
  param_1[9] = puVar2;
  if (pvVar7 != (void *)0x0) {
    puVar1 = (uint *)(param_1 + 5);
    if (0 < (int)*puVar1) {
      uVar8 = 0;
      do {
        FUN_03b428a8(*(undefined8 *)(param_1[6] + uVar8 * 8));
        uVar4 = *(uint *)(param_1 + 5);
        if ((uVar8 < uVar4) && (plVar3 = *(long **)(param_1[6] + uVar8 * 8), plVar3 != (long *)0x0))
        {
          (**(code **)(*plVar3 + 8))();
          uVar4 = *puVar1;
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar4);
      pvVar7 = (void *)param_1[6];
      if (pvVar7 == (void *)0x0) goto LAB_03b3d694;
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[6] = 0;
  }
LAB_03b3d694:
  if (param_1[0xb] != 0) {
    FUN_03bc3410();
    if ((long *)param_1[0xb] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb] + 8))();
    }
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_03bc3de0();
    if ((long *)param_1[0xc] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xc] + 8))();
    }
    param_1[0xc] = 0;
  }
  pvVar7 = (void *)param_1[0x28];
  if (pvVar7 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x28] = 0;
  }
  pvVar7 = (void *)param_1[0x2c];
  if (pvVar7 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x2c] = 0;
  }
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 8))();
    param_1[0x2d] = 0;
  }
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 8))();
    param_1[0x2e] = 0;
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 8))();
    param_1[0x2f] = 0;
  }
  return;
}

