
undefined8 FUN_026fd390(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  plVar3 = (long *)*param_2;
  if ((((plVar3 == (long *)0x0) || (param_2[1] == 0)) || (param_2[2] == 0)) ||
     (((param_2[3] == 0 || (param_2[4] == 0)) || ((param_2[5] == 0 || (param_2[6] == 0)))))) {
    return 0;
  }
  *param_1 = (long)plVar3;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar4 = malloc(0x93818);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x93818,8);
  }
  FUN_02723430(puVar4,0,0);
  *puVar4 = &PTR_LAB_04a8a070;
  param_1[3] = (long)puVar4;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    pvVar6 = malloc(0x28);
  }
  else {
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        param_1[4] = 0;
        goto LAB_026fd6a8;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
  param_1[4] = (long)pvVar6;
  if (pvVar6 == (void *)0x0) {
LAB_026fd6a8:
    param_1[1] = 0;
    param_1[2] = 0;
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 8))();
      param_1[3] = 0;
      if ((void *)param_1[4] != (void *)0x0) {
        operator_delete((void *)param_1[4]);
        param_1[4] = 0;
      }
    }
    if ((long *)param_1[5] != (long *)0x0) {
      (**(code **)(*(long *)param_1[5] + 0x18))();
      param_1[5] = 0;
    }
    if ((long *)param_1[6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 0x18))();
      param_1[6] = 0;
    }
    *param_1 = 0;
    return 0;
  }
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    plVar3 = malloc(0x28);
  }
  else {
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
  puVar2 = PTR_DAT_04bc3820;
  plVar3[1] = 0x200000000;
  plVar3[2] = (long)(plVar3 + 3);
  *plVar3 = (long)(puVar2 + 0x10);
  param_1[5] = (long)plVar3;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar4 = malloc(0x1050);
  }
  else {
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      puVar4 = (undefined8 *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_026fd5a8;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1050,8);
  }
LAB_026fd5a8:
  *(undefined1 *)(puVar4 + 3) = 0;
  *puVar4 = &PTR_LAB_04a8a1c0;
  puVar4[4] = puVar4 + 4;
  puVar4[5] = puVar4 + 4;
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[7] = puVar4 + 10;
  puVar4[1] = 0;
  puVar4[2] = 0;
  lVar7 = 0;
  while( true ) {
    *(long *)((long)puVar4 + lVar7 + 0x50) = (long)puVar4 + lVar7 + 0x70;
    if (lVar7 == 0xfc0) break;
    *(long *)((long)puVar4 + lVar7 + 0x70) = (long)puVar4 + lVar7 + 0x90;
    lVar7 = lVar7 + 0x40;
  }
  puVar4[0x206] = 0;
  puVar4[8] = puVar4 + 10;
  *(undefined4 *)(puVar4 + 9) = 0x80;
  lVar7 = param_1[2];
  param_1[6] = (long)puVar4;
  puVar4[1] = param_1[1];
  puVar4[2] = lVar7;
  if (param_1[6] != 0) {
    lVar7 = param_1[5];
    if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
      *(long *)(*(long *)(lVar7 + 0x10) + (long)*(int *)(lVar7 + 8) * 8) = param_1[6];
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
  }
  *(long *)param_1[4] = param_2[3];
  *(long *)(param_1[4] + 8) = param_2[4];
  *(long *)(param_1[4] + 0x10) = param_2[5];
  *(long *)(param_1[4] + 0x18) = param_2[6];
  *(long *)(param_1[4] + 0x20) = param_1[5];
  FUN_02640070(param_1[3],0,param_1[1],0,1);
  FUN_02640130(param_1[3],param_1[4]);
  return 1;
}

