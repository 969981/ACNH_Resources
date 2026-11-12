
void FUN_006d8240(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x18);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
  }
  FUN_006d8400(pvVar5,param_2,param_3);
  *param_1 = pvVar5;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x18);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
  }
  FUN_006d8400(pvVar5,param_2,param_3);
  puVar7 = (uint *)*param_1;
  param_1[1] = pvVar5;
  uVar6 = *puVar7;
  if (0 < (int)uVar6) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar6 <= uVar8) {
        uVar1 = 0;
      }
      memset((void *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 0x1cb8),0,0x1cb8);
      uVar6 = *puVar7;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar6);
  }
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7 = (uint *)param_1[1];
  uVar6 = *puVar7;
  if (0 < (int)uVar6) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar6 <= uVar8) {
        uVar1 = 0;
      }
      memset((void *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 0x1cb8),0,0x1cb8);
      uVar6 = *puVar7;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar6);
  }
  puVar7[4] = 0;
  puVar7[5] = 0;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

