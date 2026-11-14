
void FUN_016bcb10(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  size_t __size;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_04bb3350;
  if (param_1[0xc] != 0) {
    uVar9 = *(uint *)(param_1 + 0xf);
    if ((int)uVar9 <= *(int *)((long)param_1 + 0x5c)) {
      plVar4 = (long *)param_1[9];
      if (plVar4 != (long *)0x0) {
        do {
          (**(code **)(*plVar4 + 0x40))();
          plVar4 = (long *)param_1[9];
        } while (plVar4 != (long *)0x0);
        uVar9 = *(uint *)(param_1 + 0xf);
      }
      puVar1 = (uint *)(param_1 + 0xb);
      uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
      uVar8 = *(uint *)(param_1 + 0xb);
      if ((int)uVar9 < (int)uVar8) {
        if (uVar9 <= uVar8) {
          lVar12 = (long)(int)uVar9;
          do {
            plVar4 = *(long **)(param_1[0xc] + lVar12 * 8);
            (**(code **)*plVar4)(plVar4);
            lVar12 = lVar12 + 1;
            *plVar4 = param_1[0xd];
            param_1[0xd] = (long)plVar4;
          } while (lVar12 < (int)param_1[0xb]);
          *puVar1 = uVar9;
          uVar8 = uVar9;
        }
      }
      else {
        FUN_016bce30(puVar1,uVar9,param_1 + 4,uVar5);
        uVar8 = *puVar1;
      }
      if (0 < (int)uVar8) {
        uVar10 = 0;
        do {
          plVar4 = *(long **)(param_1[0xc] + uVar10 * 8);
          (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 4);
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
      }
    }
    return;
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar11 = *(long **)(lVar12 + 0xa8);
  plVar4 = (long *)param_1[9];
  lVar12 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar12, plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    lVar12 = DAT_05ae7600;
    plVar4 = (long *)param_1[9];
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  __size = (ulong)uVar9 * 0x78;
  if (lVar12 == 0) {
    pvVar7 = malloc(__size);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar2 = (undefined8 *)(lVar12 + 8);
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar11 = (long *)*puVar2;
      if (plVar11 == (long *)0x0) goto LAB_016bcdb0;
    }
    pvVar7 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,__size,8);
  }
  if (pvVar7 != (void *)0x0) {
    uVar8 = uVar9 - 1;
    param_1[0xd] = (long)pvVar7;
    if (1 < uVar9) {
      if (uVar8 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        plVar4 = (long *)((long)pvVar7 + 0x70);
        do {
          uVar10 = uVar10 + 2;
          plVar4[-0xe] = (long)plVar4;
          *plVar4 = (long)(plVar4 + 0xe);
          plVar4 = plVar4 + 0x1c;
        } while (((ulong)uVar8 & 0xfffffffe) != uVar10);
      }
      if ((uVar8 & 1) != 0) {
        plVar4 = (long *)((long)pvVar7 + uVar10 * 0x70);
        *plVar4 = (long)(plVar4 + 0xe);
      }
    }
    *(undefined8 *)((long)pvVar7 + (long)(int)(uVar8 * 0xe) * 8) = 0;
    param_1[0xe] = (long)pvVar7;
    pvVar7 = (void *)((long)pvVar7 + (ulong)uVar9 * 0x70);
    if (pvVar7 != (void *)0x0) {
      param_1[0xc] = (long)pvVar7;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar9;
    }
  }
LAB_016bcdb0:
  lVar12 = param_1[0xf];
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  FUN_016bce30(param_1 + 0xb,(int)lVar12,param_1 + 4,uVar5);
  uVar9 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar9) {
    uVar10 = 0;
    do {
      plVar4 = *(long **)(param_1[0xc] + uVar10 * 8);
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 4);
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  return;
}

