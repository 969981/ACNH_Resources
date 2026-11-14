
void FUN_01559158(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar6 = malloc(0x40);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_015591d8;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x40,8);
  }
LAB_015591d8:
  puVar4 = PTR_DAT_04bd1840;
  puVar2 = PTR_DAT_04bb2020;
  *(undefined4 *)(plVar6 + 4) = 0;
  *(undefined4 *)(plVar6 + 7) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)(puVar2 + 0x10);
  plVar6[2] = (long)&DAT_0407ebb1;
  plVar6[3] = 0;
  *(undefined4 *)((long)plVar6 + 0x3c) = 0;
  lVar8 = *(long *)puVar3;
  *(long **)(param_1 + 0x378) = plVar6;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x1000);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar8 + 8);
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_01559280;
      }
    }
    pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x1000,0x40);
  }
LAB_01559280:
  plVar6[5] = (long)pvVar7;
  plVar6[6] = (long)pvVar7;
  *(undefined4 *)(plVar6 + 7) = 0x200;
  *(undefined4 *)((long)plVar6 + 0x3c) = 0;
  return;
}

