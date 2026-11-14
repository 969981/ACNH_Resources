
undefined8 FUN_01d6ca38(long *param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(0x10);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_01d6cad8;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x10,8);
  }
LAB_01d6cad8:
  *puVar5 = 0;
  puVar5[1] = 0;
  param_1[1] = (long)puVar5;
  lVar2 = DAT_05ae7600;
  if (param_2 < 1) {
LAB_01d6cb48:
    uVar7 = 0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc((long)(param_2 << 3));
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar2 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_01d6cb48;
      }
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(param_2 << 3),8);
      if (pvVar6 == (void *)0x0) {
        return 0;
      }
    }
    puVar5[1] = pvVar6;
    uVar7 = 1;
    *(undefined4 *)puVar5 = 0;
    *(int *)((long)puVar5 + 4) = param_2;
  }
  return uVar7;
}

