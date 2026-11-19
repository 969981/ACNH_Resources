
void FUN_03bf6b84(uint *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  size_t __size;
  long lVar6;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_3 < 1) goto LAB_03bf6cc8;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc((ulong)param_3 << 3);
joined_r0x03bf6c58:
    if (pvVar5 != (void *)0x0) {
      *param_1 = param_3;
      *(void **)(param_1 + 2) = pvVar5;
    }
    lVar6 = *(long *)puVar2;
    __size = (size_t)(int)(param_3 << 3);
    if (lVar6 == 0) goto LAB_03bf6ce4;
    if (param_2 == (long *)0x0) {
LAB_03bf6c78:
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) goto LAB_03bf6cc8;
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
  }
  else {
    plVar4 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03bf6c04:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)param_3 << 3,8);
      goto joined_r0x03bf6c58;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_03bf6c04;
    lVar6 = *(long *)puVar2;
    __size = (size_t)(int)(param_3 << 3);
    if (lVar6 != 0) goto LAB_03bf6c78;
LAB_03bf6ce4:
    pvVar5 = malloc(__size);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 6) = pvVar5;
    param_1[4] = 0;
    param_1[5] = param_3;
  }
LAB_03bf6cc8:
  param_1[4] = 0;
  param_1[8] = 0;
  return;
}

