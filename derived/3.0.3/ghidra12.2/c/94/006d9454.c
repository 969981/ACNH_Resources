
void FUN_006d9454(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  param_1[8] = 0xc38eb;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  puVar3 = PTR_DAT_04bb2a38;
  puVar1 = PTR_DAT_04bb2950;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = *puVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)((long)param_1 + 0x4d) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = uVar2;
  *param_1 = &PTR_LAB_048fad28;
  param_1[1] = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x31;
  puVar1 = PTR_DAT_04bb2a58 + 0x10;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xe] = puVar1;
  param_1[0xf] = (long)param_1 + 0x84;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (lVar7 == 0) {
    pvVar6 = malloc(0x200);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x200,8);
  }
  if (pvVar6 != (void *)0x0) {
    param_1[0x19] = pvVar6;
    *(undefined4 *)(param_1 + 0x18) = 0x200;
  }
  return;
}

