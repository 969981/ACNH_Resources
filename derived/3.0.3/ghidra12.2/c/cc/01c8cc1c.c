
void FUN_01c8cc1c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar9 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = param_2;
  }
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0xb0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar2 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0xb0,8);
  }
  FUN_01c8ce64(pvVar6,2,1);
  *(void **)(param_1 + 0x30) = pvVar6;
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0xb0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar2 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0xb0,8);
  }
  FUN_01c8ce64(pvVar6,3,0);
  *(void **)(param_1 + 0x38) = pvVar6;
  plVar7 = DAT_05352aa0;
  plVar1 = (long *)((long)*(int *)((long)DAT_05352aa0 + 0x14) + *(long *)(param_1 + 0x30));
  lVar4 = *DAT_05352aa0;
  *DAT_05352aa0 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar7;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  plVar7 = DAT_05352aa0;
  plVar1 = (long *)((long)*(int *)((long)DAT_05352aa0 + 0x14) + *(long *)(param_1 + 0x38));
  lVar4 = *DAT_05352aa0;
  *DAT_05352aa0 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar7;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  plVar8 = DAT_05352aa0;
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  plVar7 = plVar8 + 4;
  lVar4 = *plVar7;
  plVar1 = (long *)(*(int *)((long)plVar8 + 0x34) + param_1);
  *plVar7 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar7;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  plVar1 = DAT_05352aa0;
  *(int *)(plVar8 + 6) = (int)plVar8[6] + 1;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x30) + 0x18;
  }
  plVar7 = (long *)(lVar4 + *(int *)((long)plVar1 + 0x34));
  plVar8 = plVar1 + 4;
  lVar4 = *plVar8;
  *plVar8 = (long)plVar7;
  *plVar7 = lVar4;
  plVar7[1] = (long)plVar8;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar7;
  }
  plVar7 = DAT_05352aa0;
  *(int *)(plVar1 + 6) = (int)plVar1[6] + 1;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = *(long *)(param_1 + 0x38) + 0x18;
  }
  plVar1 = (long *)(lVar4 + *(int *)((long)plVar7 + 0x34));
  plVar8 = plVar7 + 4;
  lVar4 = *plVar8;
  *plVar8 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar8;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(plVar7 + 6) = (int)plVar7[6] + 1;
  if (lVar9 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar9;
  }
  return;
}

