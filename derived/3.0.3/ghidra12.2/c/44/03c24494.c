
void FUN_03c24494(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[5] = param_1;
  param_1[6] = 0;
  memset(param_1 + 9,0,0x208);
  *param_1 = &PTR_LAB_04b7e438;
  FUN_038e18e4(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((long)param_1 + 0x294) = 0;
  FUN_038e3114(param_1 + 0x53,0,0x7fff);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_038e3114(param_1 + 0x5d,0,0x7fff);
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((long)param_1 + 0x364) = 0;
  param_1[0x6b] = (undefined1 *)((long)param_1 + 0x364);
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x400;
  puVar1 = PTR_DAT_04bb2f40 + 0x10;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0xed) = 1;
  param_1[0x6a] = puVar1;
  param_1[7] = &DAT_04066c7f;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x69) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x763) = 0;
  puVar2 = PTR_DAT_04bb3350;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    DAT_05aecba8 = malloc(0x18);
    *(undefined4 *)(DAT_05aecba8 + 2) = 0;
    *DAT_05aecba8 = 0;
    DAT_05aecba8[1] = 0;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
    }
    lVar7 = *(long *)puVar1;
    *(undefined4 *)(plVar4 + 2) = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    DAT_05aecba8 = plVar4;
    if (lVar7 != 0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xf0,8);
      goto joined_r0x03c24638;
    }
  }
  plVar4 = DAT_05aecba8;
  pvVar6 = malloc(0xf0);
joined_r0x03c24638:
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)(plVar4 + 2) = 0;
    *plVar4 = (long)pvVar6;
    plVar4[1] = 0x1e;
  }
  return;
}

