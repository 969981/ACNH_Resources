
void FUN_03eab368(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    lVar10 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar9;
  }
  lVar9 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar5 = malloc(0x30);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x30,8);
  }
  puVar3 = PTR_DAT_04bd46d0;
  lVar9 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(plVar5 + 1) = 0;
  *(undefined4 *)(plVar5 + 4) = 0;
  plVar5[5] = lVar9;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[2] = (long)(plVar5 + 2);
  plVar5[3] = (long)(plVar5 + 2);
  plVar6 = *(long **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8);
  (**(code **)(*plVar6 + 0x90))(plVar6,param_2,plVar5);
  plVar6 = (long *)(param_1 + 0x20);
  lVar9 = (long)*(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = (int)lVar9;
  *(long **)(*(long *)(param_1 + 0x40) + lVar9 * 8) = plVar5;
  lVar9 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x20);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar7 = (long *)(lVar4 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    plVar8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8[2] = (long)plVar5;
  plVar8[3] = (long)plVar6;
  lVar9 = *plVar6;
  *plVar6 = (long)plVar8;
  *plVar8 = lVar9;
  plVar8[1] = (long)plVar6;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar8;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  return;
}

