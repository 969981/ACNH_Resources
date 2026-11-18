
void FUN_03354a94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  puVar3 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[0x2f1];
  if (pvVar7 != (void *)0x0) {
    FUN_032c1b04(pvVar7);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  param_1[0x26b] = 0;
  thunk_FUN_0035008c(param_1 + 0x25d);
  param_1[0x94] = 0;
  if ((long *)param_1[0x93] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x93] + 8))();
  }
  puVar1 = param_1 + 0x88;
  FUN_032c6840(puVar1);
  plVar4 = (long *)param_1[0x88];
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x8a];
    lVar6 = param_1[0x89];
    param_1[0x8a] = 0;
    *puVar1 = 0;
    param_1[0x89] = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar5;
    }
  }
  puVar2 = param_1 + 0x7d;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *puVar1 = 0;
  FUN_032c6840(puVar2);
  plVar4 = (long *)param_1[0x7d];
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x7f];
    lVar6 = param_1[0x7e];
    param_1[0x7f] = 0;
    *puVar2 = 0;
    param_1[0x7e] = 0;
    if ((undefined8 *)*plVar4 == puVar2) {
      *plVar4 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar5;
    }
  }
  puVar1 = param_1 + 0x72;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *puVar2 = 0;
  FUN_032c6840(puVar1);
  plVar4 = (long *)param_1[0x72];
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x74];
    lVar6 = param_1[0x73];
    param_1[0x74] = 0;
    *puVar1 = 0;
    param_1[0x73] = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar5;
    }
  }
  pvVar7 = (void *)param_1[0x71];
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *puVar1 = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_03359a7c(pvVar7);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  pvVar7 = (void *)param_1[0x60];
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_032d0688(pvVar7);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  param_1[0x47] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 8))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 8))();
  }
  if ((long *)param_1[0x4b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b] + 8))();
  }
  param_1[0x32] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 8))();
  }
  if ((long *)param_1[0x3c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c] + 8))();
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 8))();
  }
  param_1[0x1d] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 8))();
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  param_1[8] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  *param_1 = &PTR_LAB_04b1f920;
  param_1[1] = 0;
  return;
}

