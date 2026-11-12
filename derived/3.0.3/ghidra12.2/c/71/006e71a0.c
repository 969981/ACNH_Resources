
void FUN_006e71a0(uint *param_1,size_t param_2,uint param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  *param_1 = 0;
  param_1[2] = 0;
  puVar3 = PTR_DAT_04bb2698;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar4 = PTR_DAT_04bb3350;
  uVar8 = (ulong)param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  *(size_t *)(param_1 + 8) = param_2;
  if ((int)param_3 < 1) {
    if (param_3 == 0) goto LAB_006e7270;
  }
  else {
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
      pvVar7 = malloc(uVar8 << 3);
joined_r0x006e7298:
      if (pvVar7 != (void *)0x0) {
        *param_1 = param_3;
        *(void **)(param_1 + 2) = pvVar7;
      }
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) goto LAB_006e73dc;
      if (param_4 == (long *)0x0) {
LAB_006e72b0:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_006e72f4;
      }
      else {
        plVar6 = param_4;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar8 * 0xfa8,8);
    }
    else {
      plVar6 = param_4;
      if (param_4 != (long *)0x0) {
LAB_006e7230:
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar8 << 3,8);
        goto joined_r0x006e7298;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_006e7230;
      lVar10 = *(long *)puVar3;
      if (lVar10 != 0) goto LAB_006e72b0;
LAB_006e73dc:
      pvVar7 = malloc(uVar8 * 0xfa8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[4] = param_3;
      *(void **)(param_1 + 6) = pvVar7;
    }
  }
LAB_006e72f4:
  uVar9 = 0;
  do {
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
      pvVar7 = malloc(param_2);
    }
    else {
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          pvVar7 = (void *)0x0;
          goto LAB_006e7314;
        }
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,param_2,8);
    }
LAB_006e7314:
    uVar1 = uVar9;
    if (*param_1 <= uVar9) {
      uVar1 = 0;
    }
    *(void **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8) = pvVar7;
    uVar1 = uVar9;
    if (*param_1 <= uVar9) {
      uVar1 = 0;
    }
    uVar2 = uVar9;
    if (param_1[4] <= uVar9) {
      uVar2 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 6) + (ulong)uVar2 * 0xfa8 + 0xf90) =
         *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
    uVar1 = uVar9;
    if (param_1[4] <= uVar9) {
      uVar1 = 0;
    }
    *(size_t *)(*(long *)(param_1 + 6) + (ulong)uVar1 * 0xfa8 + 0xf98) = param_2;
    uVar1 = uVar9;
    if (param_1[4] <= uVar9) {
      uVar1 = 0;
    }
    uVar9 = uVar9 + 1;
    *(undefined8 *)(*(long *)(param_1 + 6) + (ulong)uVar1 * 0xfa8 + 4000) = 0;
  } while (param_3 != uVar9);
LAB_006e7270:
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

