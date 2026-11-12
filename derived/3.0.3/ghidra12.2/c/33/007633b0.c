
void FUN_007633b0(uint *param_1,uint param_2,long *param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  if ((int)param_2 < 1) goto LAB_007634e8;
  uVar5 = (ulong)param_2;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar2 = malloc(uVar5 << 3);
    if (pvVar2 == (void *)0x0) goto LAB_00763464;
LAB_00763448:
    *param_1 = param_2;
    *(void **)(param_1 + 2) = pvVar2;
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar6 + 8);
      if (lVar1 != 0) {
        param_3 = (long *)(lVar1 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) goto LAB_00763464;
    }
    pvVar2 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar5 << 3,8);
    if (pvVar2 != (void *)0x0) goto LAB_00763448;
LAB_00763464:
    uVar5 = (ulong)*param_1;
    if ((int)*param_1 < 1) goto LAB_007634e8;
  }
  uVar3 = uVar5 & 3;
  if (uVar5 - 1 < 3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      lVar6 = uVar4 * 8;
      uVar4 = uVar4 + 4;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar6) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar6 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar6 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar6 + 0x18) = 0;
    } while ((uVar5 & 0xfffffffc) != uVar4);
  }
  if (uVar3 != 0) {
    lVar6 = uVar4 << 3;
    do {
      uVar3 = uVar3 - 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar6) = 0;
      lVar6 = lVar6 + 8;
    } while (uVar3 != 0);
  }
LAB_007634e8:
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
  return;
}

