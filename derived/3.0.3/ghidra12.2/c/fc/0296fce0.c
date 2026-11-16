
void FUN_0296fce0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 0x19e8);
  plVar5 = param_2;
  if (param_2 == (long *)0x0) {
LAB_0296fd4c:
    if (lVar2 == 0) {
      return;
    }
    FUN_0296fee0(param_1,param_2);
    lVar2 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) goto LAB_0296fe2c;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar7 = DAT_05ae7600;
      plVar5 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_0296fda0;
      *(undefined8 *)(param_1 + 0x28d0) = 0;
      if (lVar7 != 0) goto LAB_0296fdd0;
      goto LAB_0296fe38;
    }
LAB_0296fda0:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x28d0) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_0296fe38;
    plVar5 = param_2;
    lVar7 = DAT_05ae7600;
    if (param_2 == (long *)0x0) {
LAB_0296fdd0:
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar5 = (long *)(lVar2 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_0296fdfc;
      *(undefined8 *)(param_1 + 0x28d8) = 0;
      if (DAT_05ae7600 != 0) goto LAB_0296fe64;
    }
    else {
LAB_0296fdfc:
      uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
      *(undefined8 *)(param_1 + 0x28d8) = uVar4;
      if (DAT_05ae7600 != 0) {
        if (param_2 == (long *)0x0) {
LAB_0296fe64:
          lVar2 = DAT_05ae7600;
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar1 = (undefined8 *)(lVar2 + 8);
          if (lVar7 != 0) {
            puVar1 = (undefined8 *)(lVar7 + 0xa8);
          }
          param_2 = (long *)*puVar1;
          if (param_2 == (long *)0x0) {
            pvVar6 = (void *)0x0;
            goto LAB_0296fea8;
          }
        }
        pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,1,8);
        goto LAB_0296fea8;
      }
    }
  }
  else {
    if (lVar2 == 0) {
      lVar2 = FUN_038c6d48(0x400,&DAT_055d92c0,param_2,8,1,0);
      *(long *)(param_1 + 0x19e8) = lVar2;
      goto LAB_0296fd4c;
    }
    FUN_0296fee0(param_1,param_2);
    if (*(long *)PTR_DAT_04bb2698 != 0) goto LAB_0296fda0;
LAB_0296fe2c:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x28d0) = pvVar6;
LAB_0296fe38:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x28d8) = pvVar6;
  }
  pvVar6 = malloc(1);
LAB_0296fea8:
  *(void **)(param_1 + 0x28e0) = pvVar6;
  return;
}

