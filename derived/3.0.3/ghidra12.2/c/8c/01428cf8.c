
void FUN_01428cf8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 0x2b28);
  plVar5 = param_2;
  if (param_2 == (long *)0x0) {
LAB_01428d64:
    if (lVar2 == 0) {
      return;
    }
    FUN_014290f0(param_1,param_2);
    lVar2 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) goto LAB_01428e48;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar7 = DAT_05ae7600;
      plVar5 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01428db8;
      *(undefined8 *)(param_1 + 0x3a10) = 0;
      if (lVar7 != 0) goto LAB_01428de8;
      goto LAB_01428e54;
    }
LAB_01428db8:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x3a10) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_01428e54;
    plVar5 = param_2;
    lVar7 = DAT_05ae7600;
    if (param_2 == (long *)0x0) {
LAB_01428de8:
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar5 = (long *)(lVar2 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01428e14;
      *(undefined8 *)(param_1 + 0x3a18) = 0;
      if (DAT_05ae7600 != 0) goto LAB_01428ec0;
      goto LAB_01428e60;
    }
LAB_01428e14:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x3a18) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_01428e60;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
LAB_01428ec0:
      lVar2 = DAT_05ae7600;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar2 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01428eec;
      *(undefined8 *)(param_1 + 0x3a20) = 0;
      if (DAT_05ae7600 != 0) goto LAB_01428f44;
      goto LAB_01428e6c;
    }
LAB_01428eec:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x3a20) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_01428e6c;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
LAB_01428f44:
      lVar2 = DAT_05ae7600;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar2 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01428f70;
      *(undefined8 *)(param_1 + 0x3a28) = 0;
      if (DAT_05ae7600 != 0) goto LAB_01428fb8;
      goto LAB_01428e78;
    }
LAB_01428f70:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x3a28) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_01428e78;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
LAB_01428fb8:
      lVar2 = DAT_05ae7600;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar2 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01428fe4;
      *(undefined8 *)(param_1 + 0x3a30) = 0;
      if (DAT_05ae7600 != 0) goto LAB_0142902c;
      goto LAB_01428e84;
    }
LAB_01428fe4:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
    *(undefined8 *)(param_1 + 0x3a30) = uVar4;
    if (DAT_05ae7600 == 0) goto LAB_01428e84;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
LAB_0142902c:
      lVar2 = DAT_05ae7600;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar2 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01429058;
      *(undefined8 *)(param_1 + 0x3a38) = 0;
      if (DAT_05ae7600 != 0) goto LAB_0142909c;
    }
    else {
LAB_01429058:
      uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,1,8);
      *(undefined8 *)(param_1 + 0x3a38) = uVar4;
      if (DAT_05ae7600 != 0) {
        if (param_2 == (long *)0x0) {
LAB_0142909c:
          lVar2 = DAT_05ae7600;
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar1 = (undefined8 *)(lVar2 + 8);
          if (lVar7 != 0) {
            puVar1 = (undefined8 *)(lVar7 + 0xa8);
          }
          param_2 = (long *)*puVar1;
          if (param_2 == (long *)0x0) {
            pvVar6 = (void *)0x0;
            goto LAB_01428e98;
          }
        }
        pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,1,8);
        goto LAB_01428e98;
      }
    }
  }
  else {
    if (lVar2 == 0) {
      lVar2 = FUN_038c6d48(0x400,&DAT_051ba460,param_2,8,1,0);
      *(long *)(param_1 + 0x2b28) = lVar2;
      goto LAB_01428d64;
    }
    FUN_014290f0(param_1,param_2);
    if (*(long *)PTR_DAT_04bb2698 != 0) goto LAB_01428db8;
LAB_01428e48:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a10) = pvVar6;
LAB_01428e54:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a18) = pvVar6;
LAB_01428e60:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a20) = pvVar6;
LAB_01428e6c:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a28) = pvVar6;
LAB_01428e78:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a30) = pvVar6;
LAB_01428e84:
    pvVar6 = malloc(1);
    *(void **)(param_1 + 0x3a38) = pvVar6;
  }
  pvVar6 = malloc(1);
LAB_01428e98:
  *(void **)(param_1 + 0x3a40) = pvVar6;
  return;
}

