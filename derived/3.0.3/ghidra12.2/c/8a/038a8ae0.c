
void FUN_038a8ae0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_2 - 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_2 < 1) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc((long)(int)(param_2 * 0x38));
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) goto LAB_038a8c00;
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(param_2 * 0x38),8);
  }
  if (pvVar6 != (void *)0x0) {
    *(uint *)((long)param_1 + 0x1c) = param_2;
    param_1[1] = pvVar6;
    if (param_2 < 2) {
      lVar8 = 0;
    }
    else {
      if (uVar1 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        plVar5 = (long *)((long)pvVar6 + 0x38);
        do {
          uVar7 = uVar7 + 2;
          plVar5[-7] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 7);
          plVar5 = plVar5 + 0xe;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
      }
      if ((uVar1 & 1) != 0) {
        plVar5 = (long *)((long)pvVar6 + uVar7 * 0x38);
        *plVar5 = (long)(plVar5 + 7);
      }
      lVar8 = (long)(int)(uVar1 * 7);
    }
    *(undefined8 *)((long)pvVar6 + lVar8 * 8) = 0;
    param_1[2] = pvVar6;
  }
LAB_038a8c00:
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    pvVar6 = malloc((long)(int)(param_2 * 0x30));
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(param_2 * 0x30),8);
  }
  if (pvVar6 != (void *)0x0) {
    *(uint *)((long)param_1 + 0x3c) = param_2;
    param_1[5] = pvVar6;
    if (1 < param_2) {
      if (uVar1 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        plVar5 = (long *)((long)pvVar6 + 0x30);
        do {
          uVar7 = uVar7 + 2;
          plVar5[-6] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 6);
          plVar5 = plVar5 + 0xc;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
      }
      if ((uVar1 & 1) != 0) {
        plVar5 = (long *)((long)pvVar6 + uVar7 * 0x30);
        *plVar5 = (long)(plVar5 + 6);
      }
    }
    *(undefined8 *)((long)pvVar6 + (long)(int)(uVar1 * 6) * 8) = 0;
    param_1[6] = pvVar6;
  }
  return;
}

