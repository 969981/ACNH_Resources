
void FUN_02606e80(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar3 = malloc(120000);
joined_r0x02606f04:
    if (pvVar3 != (void *)0x0) {
      lVar6 = 0;
      *(void **)(param_1 + 0x18) = pvVar3;
      while( true ) {
        plVar1 = (long *)((long)pvVar3 + lVar6);
        *plVar1 = (long)(plVar1 + 2);
        if (lVar6 == 0x13860) break;
        lVar6 = lVar6 + 0x20;
        plVar1[2] = (long)(plVar1 + 4);
      }
      *(undefined8 *)((long)pvVar3 + 0x13870) = 0;
      *(void **)(param_1 + 0x20) = pvVar3;
      if ((long)pvVar3 + 80000 != 0) {
        *(long *)(param_1 + 0x10) = (long)pvVar3 + 80000;
        *(undefined4 *)(param_1 + 0xc) = 5000;
        goto LAB_02606fa8;
      }
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_02606ed0:
      pvVar3 = (void *)(**(code **)(*param_2 + 0x30))(param_2,120000,8);
      goto joined_r0x02606f04;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      param_2 = (long *)(lVar2 + 0xa8);
    }
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) goto LAB_02606ed0;
  }
  if (0 < *(int *)(param_1 + 8)) {
    lVar6 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      puVar4 = puVar5;
    } while (lVar6 < *(int *)(param_1 + 8));
  }
LAB_02606fa8:
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

