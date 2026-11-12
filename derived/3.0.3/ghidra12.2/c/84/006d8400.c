
void FUN_006d8400(uint *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((int)param_2 < 1) goto LAB_006d84ec;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar3 = malloc((ulong)param_2 * 0x1cb8);
    if (pvVar3 == (void *)0x0) goto LAB_006d84a8;
LAB_006d8490:
    *param_1 = param_2;
    *(void **)(param_1 + 2) = pvVar3;
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) goto LAB_006d84a8;
    }
    pvVar3 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2 * 0x1cb8,8);
    if (pvVar3 != (void *)0x0) goto LAB_006d8490;
LAB_006d84a8:
    param_2 = *param_1;
    if ((int)param_2 < 1) goto LAB_006d84ec;
  }
  uVar4 = 0;
  do {
    uVar1 = uVar4;
    if (param_2 <= uVar4) {
      uVar1 = 0;
    }
    memset((void *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x1cb8),0,0x1cb8);
    param_2 = *param_1;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < (int)param_2);
LAB_006d84ec:
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

