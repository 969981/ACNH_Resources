
void FUN_039c3f70(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_1 + 0x2c8);
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x2d0);
      uVar1 = uVar9;
      if (*(uint *)(param_1 + 0x2c8) <= uVar9) {
        uVar1 = 0;
      }
      lVar7 = lVar10 + (long)(int)uVar1 * 0x338;
      *(undefined4 *)(lVar7 + 0x1f0) = 0;
      uVar4 = (**(code **)(*(long *)(lVar7 + 0x238) + 0x88))(lVar7 + 0x238);
      if ((uVar4 & 1) != 0) {
        pvVar8 = *(void **)(lVar10 + (long)(int)uVar1 * 0x338 + 0x250);
        if (pvVar8 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar8);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
            }
          }
        }
        *(undefined1 *)(lVar10 + (long)(int)uVar1 * 0x338 + 0x25c) = 0;
      }
      lVar7 = lVar10 + (long)(int)uVar1 * 0x338;
      *(undefined4 *)(lVar7 + 0x210) = 0;
      *(undefined4 *)(lVar7 + 0x230) = 0;
      uVar4 = (**(code **)(*(long *)(lVar7 + 0x310) + 0x88))(lVar7 + 0x310);
      if ((uVar4 & 1) != 0) {
        pvVar8 = *(void **)(lVar10 + (long)(int)uVar1 * 0x338 + 0x328);
        if (pvVar8 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar8);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
            }
          }
        }
        *(undefined1 *)(lVar10 + (long)(int)uVar1 * 0x338 + 0x334) = 0;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar10 + (long)(int)uVar1 * 0x338 + 0x2e8) = 0;
    } while (uVar2 != uVar9);
  }
  lVar10 = *(long *)(param_1 + 0x2d0);
  if (lVar10 != 0) {
    plVar5 = (long *)(lVar10 + -8);
    if (*plVar5 != 0) {
      lVar7 = *plVar5 * 0x338;
      do {
        FUN_039c36c4(lVar10 + -0x338 + lVar7);
        lVar7 = lVar7 + -0x338;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  return;
}

