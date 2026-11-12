
void FUN_006e9270(uint *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((int)param_2 < 1) goto LAB_006e935c;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar3 = malloc((ulong)param_2 * 0x410);
    if (pvVar3 == (void *)0x0) goto LAB_006e9318;
LAB_006e9300:
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
      if (param_3 == (long *)0x0) goto LAB_006e9318;
    }
    pvVar3 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2 * 0x410,8);
    if (pvVar3 != (void *)0x0) goto LAB_006e9300;
LAB_006e9318:
    param_2 = *param_1;
    if ((int)param_2 < 1) goto LAB_006e935c;
  }
  uVar4 = 0;
  do {
    uVar1 = uVar4;
    if (param_2 <= uVar4) {
      uVar1 = 0;
    }
    memset((void *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x410),0,0x410);
    param_2 = *param_1;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < (int)param_2);
LAB_006e935c:
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

