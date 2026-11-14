
void FUN_01594c80(long *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  
  puVar1 = (uint *)(param_1 + 0xb);
  if (param_1[0xc] != 0) {
    uVar10 = *(uint *)(param_1 + 0xf);
    if (*(int *)((long)param_1 + 0x5c) < (int)uVar10) {
      return;
    }
    plVar3 = (long *)param_1[9];
    if (plVar3 != (long *)0x0) {
      do {
        (**(code **)(*plVar3 + 0x40))();
        plVar3 = (long *)param_1[9];
      } while (plVar3 != (long *)0x0);
      uVar10 = *(uint *)(param_1 + 0xf);
    }
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0);
    uVar7 = *(uint *)(param_1 + 0xb);
    if ((int)uVar10 < (int)uVar7) {
      if (uVar10 <= uVar7) {
        lVar11 = (long)(int)uVar10;
        do {
          plVar3 = *(long **)(param_1[0xc] + lVar11 * 8);
          (**(code **)*plVar3)(plVar3);
          lVar11 = lVar11 + 1;
          *plVar3 = param_1[0xd];
          param_1[0xd] = (long)plVar3;
        } while (lVar11 < (int)param_1[0xb]);
        *puVar1 = uVar10;
        uVar7 = uVar10;
      }
    }
    else {
      FUN_01594f50(puVar1,uVar10,param_1 + 4,uVar4);
      uVar7 = *puVar1;
    }
    if ((int)uVar7 < 1) {
      return;
    }
    uVar8 = 0;
    do {
      plVar3 = *(long **)(param_1[0xc] + uVar8 * 8);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 4);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    return;
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  plVar9 = *(long **)(lVar11 + 0xa8);
  plVar3 = (long *)param_1[9];
  lVar11 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar11, plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    lVar11 = DAT_05ae7600;
    plVar3 = (long *)param_1[9];
  }
  uVar10 = *(uint *)(param_1 + 0xf);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  if (lVar11 == 0) {
    pvVar6 = malloc((ulong)uVar10 * 0xf10);
  }
  else {
    if (plVar9 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar11 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) goto LAB_01594ecc;
    }
    pvVar6 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar10 * 0xf10,8);
  }
  if (pvVar6 != (void *)0x0) {
    uVar7 = uVar10 - 1;
    param_1[0xd] = (long)pvVar6;
    if (1 < uVar10) {
      if (uVar7 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        plVar3 = (long *)((long)pvVar6 + 0xf08);
        do {
          uVar8 = uVar8 + 2;
          plVar3[-0x1e1] = (long)plVar3;
          *plVar3 = (long)(plVar3 + 0x1e1);
          plVar3 = plVar3 + 0x3c2;
        } while (((ulong)uVar7 & 0xfffffffe) != uVar8);
      }
      if ((uVar7 & 1) != 0) {
        plVar3 = (long *)((long)pvVar6 + uVar8 * 0xf08);
        *plVar3 = (long)(plVar3 + 0x1e1);
      }
    }
    *(undefined8 *)((long)pvVar6 + (long)(int)(uVar7 * 0x1e1) * 8) = 0;
    param_1[0xe] = (long)pvVar6;
    pvVar6 = (void *)((long)pvVar6 + (ulong)uVar10 * 0xf08);
    if (pvVar6 != (void *)0x0) {
      param_1[0xc] = (long)pvVar6;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar10;
    }
  }
LAB_01594ecc:
  lVar11 = param_1[0xf];
  uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0);
  FUN_01594f50(puVar1,(int)lVar11,param_1 + 4,uVar4);
  uVar10 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar10) {
    uVar8 = 0;
    do {
      plVar3 = *(long **)(param_1[0xc] + uVar8 * 8);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 4);
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar8);
  }
  return;
}

