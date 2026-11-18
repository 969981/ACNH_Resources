
void FUN_033eb304(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar6 = malloc(0x38);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x38,8);
  }
  puVar4 = PTR_DAT_04bc9c30;
  *(undefined4 *)(plVar6 + 5) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  lVar8 = *(long *)puVar2;
  plVar6[3] = (long)(plVar6 + 3);
  plVar6[4] = (long)(plVar6 + 3);
  *(undefined8 *)((long)plVar6 + 0x2c) = 0xffffffff00000008;
  *(long **)(param_1 + 0x228) = plVar6;
  plVar6[1] = -0x3c0affff3b9f0000;
  plVar6[2] = 0x43f5000044610000;
  if (lVar8 == 0) {
    plVar6 = malloc(0xd0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    plVar6 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xd0,8);
    }
  }
  puVar2 = PTR_DAT_04bc9c38;
  *(undefined4 *)(plVar6 + 6) = 0;
  plVar6[4] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 0xb) = 0;
  plVar6[7] = 0x7f7fffff7f7fffff;
  plVar6[8] = -0x80000000800001;
  *(undefined8 *)((long)plVar6 + 0x74) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)plVar6 + 0x7c) = 0xff7fffffff7fffff;
  plVar6[0x15] = 0x7fc0000000000002;
  plVar6[0x11] = 0x7f7fffff7f7fffff;
  plVar6[0x12] = -0x80000000800001;
  plVar6[0x13] = 0x7f7fffff7f7fffff;
  plVar6[0x14] = -0x80000000800001;
  *plVar6 = (long)(puVar2 + 0x10);
  plVar6[1] = 0;
  lVar8 = *(long *)(param_1 + 0x228);
  *(long **)(param_1 + 0x230) = plVar6;
  plVar7 = (long *)(lVar8 + 0x18);
  lVar5 = *plVar7;
  plVar6 = (long *)((long)*(int *)(lVar8 + 0x2c) + (long)plVar6);
  *plVar7 = (long)plVar6;
  *plVar6 = lVar5;
  plVar6[1] = (long)plVar7;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar6;
  }
  *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x230) + 0xa8) = 2;
  return;
}

