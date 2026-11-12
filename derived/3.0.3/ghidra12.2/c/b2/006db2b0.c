
void FUN_006db2b0(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = param_2;
  if ((int)param_3 < 1) goto LAB_006db3e4;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc((ulong)param_3 * 0xa8);
    if (pvVar4 == (void *)0x0) goto LAB_006db350;
LAB_006db338:
    *param_1 = param_3;
    *(void **)(param_1 + 2) = pvVar4;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if ((plVar3 != (long *)0x0) &&
       (pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,(ulong)param_3 * 0xa8,8),
       pvVar4 != (void *)0x0)) goto LAB_006db338;
LAB_006db350:
    param_3 = *param_1;
    if ((int)param_3 < 1) goto LAB_006db3e4;
  }
  uVar5 = 0;
  do {
    uVar1 = uVar5;
    if (param_3 <= uVar5) {
      uVar1 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0xa8) = 0;
    uVar1 = uVar5;
    if (*param_1 <= uVar5) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0xa8 + 8) = 0;
    uVar1 = uVar5;
    if (*param_1 <= uVar5) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0xa8 + 0x59) = 0;
    uVar1 = uVar5;
    if (*param_1 <= uVar5) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0xa8 + 0x7a) = 0;
    uVar1 = uVar5;
    if (*param_1 <= uVar5) {
      uVar1 = 0;
    }
    uVar5 = uVar5 + 1;
    *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0xa8 + 0xa0) = 0;
    param_3 = *param_1;
  } while ((int)uVar5 < (int)param_3);
LAB_006db3e4:
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

