
void FUN_016bc0d0(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  
  plVar6 = (long *)param_1[9];
  plVar5 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar5, plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar5 = (long *)PTR_DAT_04bb2698;
    plVar6 = (long *)param_1[9];
  }
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar11 = 0;
      do {
        plVar6 = *(long **)(param_1[0xc] + lVar11 * 8);
        (**(code **)*plVar6)(plVar6);
        lVar11 = lVar11 + 1;
        *plVar6 = param_1[0xd];
        param_1[0xd] = (long)plVar6;
      } while (lVar11 < (int)param_1[0xb]);
    }
    pvVar10 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar10 != (void *)0x0) {
      if (*plVar5 == 0) {
        free(pvVar10);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*plVar5,pvVar10);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(uint *)(param_2 + 0x78);
  uVar4 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar11 = *plVar5;
    if (lVar11 == 0) {
      pvVar10 = malloc((ulong)uVar2 * 0x78);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar11 + 8);
        if (lVar7 != 0) {
          puVar1 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_016bc2c0;
      }
      pvVar10 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar2 * 0x78,8);
    }
    if (pvVar10 != (void *)0x0) {
      param_1[0xd] = (long)pvVar10;
      if (1 < uVar2) {
        if (uVar4 == 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          plVar6 = (long *)((long)pvVar10 + 0x70);
          do {
            uVar9 = uVar9 + 2;
            plVar6[-0xe] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0xe);
            plVar6 = plVar6 + 0x1c;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar9);
        }
        if ((uVar4 & 1) != 0) {
          plVar6 = (long *)((long)pvVar10 + uVar9 * 0x70);
          *plVar6 = (long)(plVar6 + 0xe);
        }
      }
      *(undefined8 *)((long)pvVar10 + (long)(int)(uVar4 * 0xe) * 8) = 0;
      param_1[0xe] = (long)pvVar10;
      pvVar10 = (void *)((long)pvVar10 + (ulong)uVar2 * 0x70);
      if (pvVar10 != (void *)0x0) {
        param_1[0xc] = (long)pvVar10;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar2;
      }
    }
  }
LAB_016bc2c0:
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar8 = (**(code **)(*param_1 + 0x60))(param_1,param_4);
  FUN_016bc350(param_1 + 0xb,uVar3,param_2 + 0x58,param_1 + 4,uVar8);
  uVar2 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar9 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 4);
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  return;
}

