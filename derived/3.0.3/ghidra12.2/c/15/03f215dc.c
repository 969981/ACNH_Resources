
void FUN_03f215dc(long param_1,undefined8 param_2,long *param_3,int param_4,short *param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong __size;
  long lVar6;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  puVar2 = PTR_DAT_04bb2698;
  if (0 < param_4) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      pvVar5 = malloc((long)(param_4 << 3));
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03f21680;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)(param_4 << 3),8);
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x20) = pvVar5;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0x1c) = param_4;
    }
  }
LAB_03f21680:
  if (param_5 == (short *)0x0) goto LAB_03f21724;
  if (*param_5 == 0x3143) {
    lVar6 = *(long *)puVar2;
    __size = (ulong)param_6;
    if (lVar6 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar6 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          pvVar5 = (void *)0x0;
          goto LAB_03f21710;
        }
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
LAB_03f21710:
    memcpy(pvVar5,param_5,__size);
  }
  else {
    pvVar5 = (void *)0x0;
  }
  *(void **)(param_1 + 0x50) = pvVar5;
LAB_03f21724:
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x20);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        return;
      }
    }
    pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x20,8);
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0x400000000;
    *(void **)(param_1 + 0xc0) = pvVar5;
  }
  return;
}

