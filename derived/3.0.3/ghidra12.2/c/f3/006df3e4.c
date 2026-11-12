
void FUN_006df3e4(long *param_1,undefined8 param_2,uint param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  void *pvVar6;
  long lVar7;
  size_t sVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x20);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (uint *)0x0;
        goto LAB_006df478;
      }
    }
    puVar5 = (uint *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
LAB_006df478:
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined8 *)(puVar5 + 4) = param_2;
  if ((int)param_3 < 1) {
LAB_006df4ec:
    puVar5[6] = 0;
    puVar5[7] = 0;
    *param_1 = (long)puVar5;
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) goto LAB_006df578;
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
LAB_006df504:
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_006df530;
      puVar5 = (uint *)0x0;
    }
    else {
LAB_006df530:
      puVar5 = (uint *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
    }
  }
  else {
    lVar7 = *(long *)puVar2;
    sVar8 = (ulong)param_3 * 0x6b8;
    if (lVar7 == 0) {
      pvVar6 = malloc(sVar8);
joined_r0x006df550:
      if (pvVar6 != (void *)0x0) {
        *puVar5 = param_3;
        *(void **)(puVar5 + 2) = pvVar6;
      }
      goto LAB_006df4ec;
    }
    plVar4 = param_4;
    if (param_4 != (long *)0x0) {
LAB_006df4cc:
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,sVar8,8);
      goto joined_r0x006df550;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_006df4cc;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *param_1 = (long)puVar5;
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) goto LAB_006df504;
LAB_006df578:
    puVar5 = malloc(0x20);
  }
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined8 *)(puVar5 + 4) = param_2;
  if (0 < (int)param_3) {
    lVar7 = *(long *)puVar2;
    sVar8 = (ulong)param_3 * 0x6b8;
    if (lVar7 == 0) {
      pvVar6 = malloc(sVar8);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_4 = (long *)*puVar1;
        if (param_4 == (long *)0x0) goto LAB_006df5f4;
      }
      pvVar6 = (void *)(**(code **)(*param_4 + 0x30))(param_4,sVar8,8);
    }
    if (pvVar6 != (void *)0x0) {
      *puVar5 = param_3;
      *(void **)(puVar5 + 2) = pvVar6;
    }
  }
LAB_006df5f4:
  puVar5[6] = 0;
  puVar5[7] = 0;
  param_1[1] = (long)puVar5;
  *(undefined8 *)(*param_1 + 0x18) = 0;
  *(undefined8 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 1;
  return;
}

