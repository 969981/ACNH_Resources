
void FUN_006df6b4(long *param_1,uint param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  void *pvVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x18);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (uint *)0x0;
        goto LAB_006df740;
      }
    }
    puVar5 = (uint *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
  }
LAB_006df740:
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (0 < (int)param_2) {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc((ulong)param_2 << 3);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_006df7b8;
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)param_2 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *puVar5 = param_2;
      *(void **)(puVar5 + 2) = pvVar6;
    }
  }
LAB_006df7b8:
  puVar5[4] = 0;
  puVar5[5] = 0;
  *param_1 = (long)puVar5;
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    puVar5 = malloc(0x18);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar7 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      puVar5 = (uint *)0x0;
      if (param_3 == (long *)0x0) goto LAB_006df820;
    }
    puVar5 = (uint *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
  }
LAB_006df820:
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (0 < (int)param_2) {
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
      pvVar6 = malloc((ulong)param_2 << 3);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_006df89c;
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)param_2 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *puVar5 = param_2;
      *(void **)(puVar5 + 2) = pvVar6;
    }
  }
LAB_006df89c:
  puVar5[4] = 0;
  puVar5[5] = 0;
  param_1[1] = (long)puVar5;
  *(undefined8 *)(*param_1 + 0x10) = 0;
  *(undefined8 *)(param_1[1] + 0x10) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 1;
  return;
}

