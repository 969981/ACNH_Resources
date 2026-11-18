
void FUN_03345600(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  param_1[0x4a4] = 0;
  puVar3 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[0x418];
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
  param_1[0x409] = 0;
  thunk_FUN_0035008c(param_1 + 0x3fb);
  puVar1 = param_1 + 0x8e;
  param_1[0x9c] = 0;
  if ((long *)param_1[0x95] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x95] + 8))();
  }
  plVar4 = (long *)param_1[0x8e];
  param_1[0x93] = 0;
  param_1[0x91] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x90];
    lVar6 = param_1[0x8f];
    param_1[0x90] = 0;
    *puVar1 = 0;
    param_1[0x8f] = 0;
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
  puVar2 = param_1 + 0x83;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *puVar1 = 0;
  FUN_032c6840(puVar2);
  plVar4 = (long *)param_1[0x83];
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x85];
    lVar6 = param_1[0x84];
    param_1[0x85] = 0;
    *puVar2 = 0;
    param_1[0x84] = 0;
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
  puVar1 = param_1 + 0x78;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *puVar2 = 0;
  FUN_032c6840(puVar1);
  plVar4 = (long *)param_1[0x78];
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = param_1[0x7a];
    lVar6 = param_1[0x79];
    param_1[0x7a] = 0;
    *puVar1 = 0;
    param_1[0x79] = 0;
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
  pvVar7 = (void *)param_1[0x77];
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
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
  pvVar7 = (void *)param_1[0x5f];
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
  param_1[0x60] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
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
  param_1[0x48] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x58] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x58] + 8))();
  }
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 8))();
  }
  param_1[0x33] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 8))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 8))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 8))();
  }
  param_1[0x1e] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 8))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  if ((long *)param_1[0x22] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x22] + 8))();
  }
  param_1[9] = &PTR_LAB_04b174e0;
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 8))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 8))();
  }
  *param_1 = &PTR_LAB_04b1f920;
  param_1[1] = 0;
  return;
}

