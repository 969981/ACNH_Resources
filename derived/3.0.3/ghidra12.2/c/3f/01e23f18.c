
void FUN_01e23f18(undefined8 *param_1,uint *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar2 = *param_2;
  *(uint *)(param_1 + 6) = uVar2;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  if (0 < (int)uVar2) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar6 = malloc((ulong)uVar2 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          param_3 = (long *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_01e23fa8;
      }
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar2 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0xd) = uVar2;
      param_1[0xe] = pvVar6;
    }
  }
LAB_01e23fa8:
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    plVar8 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    plVar8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
  }
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)puVar1;
  plVar8[1] = 0;
  param_1[1] = plVar8;
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    puVar9 = malloc(0x30);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar9 = (undefined8 *)(lVar10 + 8);
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x30,8);
  }
  *puVar9 = &PTR_LAB_04a5d078;
  puVar9[2] = &PTR_LAB_04a5d098;
  *param_1 = puVar9;
  puVar9[5] = 0;
  *(undefined1 *)(puVar9 + 1) = 1;
  puVar9[3] = param_1;
  puVar9[4] = &LAB_01e240ac;
  return;
}

