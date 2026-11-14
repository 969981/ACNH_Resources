
/* WARNING: Removing unreachable block (ram,0x01548c74) */
/* WARNING: Removing unreachable block (ram,0x01548b44) */
/* WARNING: Removing unreachable block (ram,0x01548a14) */
/* WARNING: Removing unreachable block (ram,0x015488e4) */
/* WARNING: Removing unreachable block (ram,0x0154897c) */
/* WARNING: Removing unreachable block (ram,0x01548aac) */
/* WARNING: Removing unreachable block (ram,0x01548bdc) */
/* WARNING: Removing unreachable block (ram,0x01548d08) */

void FUN_0154880c(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  if (((DAT_052163f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052163f8), iVar2 != 0)) {
    DAT_052163f0 = DAT_05215bb8;
    DAT_052163f4 = DAT_05215bbc;
    DAT_052163e8 = &DAT_048f9750;
    __cxa_guard_release(&DAT_052163f8);
  }
  puVar1 = PTR_DAT_04bb2698;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_46 = 0;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 8) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x10) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x18) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x20) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x28) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x30) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  local_46 = 0;
  *(void **)(param_1 + 0x38) = pvVar5;
  lVar6 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_052163f0;
  uStack_4c = DAT_052163f4;
  local_48 = 0x100;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x15f8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x15f8,8);
  }
  FUN_012ca2c4(pvVar5,&local_60);
  *(void **)(param_1 + 0x40) = pvVar5;
  return;
}

