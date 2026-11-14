
void FUN_015924f0(long *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  puVar1 = (uint *)(param_1 + 0xb);
  if (param_1[0xc] != 0) {
    uVar9 = *(uint *)(param_1 + 0xf);
    if (*(int *)((long)param_1 + 0x5c) < (int)uVar9) {
      return;
    }
    plVar3 = (long *)param_1[9];
    if (plVar3 != (long *)0x0) {
      do {
        (**(code **)(*plVar3 + 0x40))();
        plVar3 = (long *)param_1[9];
      } while (plVar3 != (long *)0x0);
      uVar9 = *(uint *)(param_1 + 0xf);
    }
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0);
    uVar6 = *(uint *)(param_1 + 0xb);
    if ((int)uVar9 < (int)uVar6) {
      if (uVar9 <= uVar6) {
        lVar10 = (long)(int)uVar9;
        do {
          plVar3 = *(long **)(param_1[0xc] + lVar10 * 8);
          (**(code **)*plVar3)(plVar3);
          lVar10 = lVar10 + 1;
          *plVar3 = param_1[0xd];
          param_1[0xd] = (long)plVar3;
        } while (lVar10 < (int)param_1[0xb]);
        *puVar1 = uVar9;
        uVar6 = uVar9;
      }
    }
    else {
      FUN_015927d0(puVar1,uVar9,param_1 + 4,uVar4);
      uVar6 = *puVar1;
    }
    if ((int)uVar6 < 1) {
      return;
    }
    uVar7 = 0;
    do {
      plVar3 = *(long **)(param_1[0xc] + uVar7 * 8);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
    return;
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  plVar8 = *(long **)(lVar10 + 0xa8);
  plVar3 = (long *)param_1[9];
  lVar10 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar10, plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    lVar10 = DAT_05ae7600;
    plVar3 = (long *)param_1[9];
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  if (lVar10 == 0) {
    plVar3 = malloc((ulong)uVar9 * 0x1160);
  }
  else {
    if (plVar8 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar10 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      plVar8 = (long *)*puVar2;
      if (plVar8 == (long *)0x0) goto LAB_01592748;
    }
    plVar3 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar9 * 0x1160,8);
  }
  if (plVar3 != (long *)0x0) {
    uVar6 = uVar9 - 1;
    param_1[0xd] = (long)plVar3;
    if (1 < uVar9) {
      if (uVar6 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        plVar8 = plVar3;
        do {
          uVar7 = uVar7 + 2;
          *plVar8 = (long)(plVar8 + 0x22b);
          plVar8[0x22b] = (long)(plVar8 + 0x456);
          plVar8 = plVar8 + 0x456;
        } while (((ulong)uVar6 & 0xfffffffe) != uVar7);
      }
      if ((uVar6 & 1) != 0) {
        plVar3[uVar7 * 0x22b] = (long)(plVar3 + uVar7 * 0x22b + 0x22b);
      }
    }
    plVar3[(int)(uVar6 * 0x22b)] = 0;
    param_1[0xe] = (long)plVar3;
    if (plVar3 + (ulong)uVar9 * 0x22b != (long *)0x0) {
      param_1[0xc] = (long)(plVar3 + (ulong)uVar9 * 0x22b);
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar9;
    }
  }
LAB_01592748:
  lVar10 = param_1[0xf];
  uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0);
  FUN_015927d0(puVar1,(int)lVar10,param_1 + 4,uVar4);
  uVar9 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar9) {
    uVar7 = 0;
    do {
      plVar3 = *(long **)(param_1[0xc] + uVar7 * 8);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar7);
  }
  return;
}

