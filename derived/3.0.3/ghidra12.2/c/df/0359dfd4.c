
void FUN_0359dfd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = &PTR_LAB_04b3de60;
  param_1[1] = &PTR_LAB_04b3de80;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 6) = 0;
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)puVar2;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar7 = *(long *)puVar2;
  plVar4 = (long *)(lVar6 + 8);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0xa8);
  }
  plVar4 = (long *)*plVar4;
  param_1[7] = plVar4;
  if (lVar7 == 0) {
    plVar4 = malloc(0x140);
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_0359e09c;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x140,8);
  }
LAB_0359e09c:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "Others";
  pcStack_48 = "CommonCurves";
  local_88 = puVar1;
  local_50 = puVar1;
  FUN_00751ec0(plVar4,&local_88,&local_50,0);
  *plVar4 = (long)&PTR_LAB_04b3dea0;
  local_80 = "mParamsBuffer";
  lVar3 = *(long *)puVar2;
  puStack_70 = &DAT_0405ec4f;
  local_58 = 0;
  plVar8 = plVar4 + 0x18;
  *plVar8 = (long)(PTR_DAT_04bd0d40 + 0x10);
  puStack_60 = &DAT_0407ebb1;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x19] = 0;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  if (lVar3 != 0) {
    lVar3 = FUN_038cb610(lVar3,plVar8);
    plVar4[0x19] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar7 = *plVar5;
      plVar8 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar8);
      *plVar5 = (long)plVar8;
      *plVar8 = lVar7;
      plVar8[1] = (long)plVar5;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar8;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  plVar8 = plVar4 + 0x1c;
  *plVar8 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_88 + 0x18))(&local_88);
  plVar4[0x1f] = 0;
  plVar4[0x1d] = (long)local_80;
  plVar4[0x1e] = 0;
  puVar2 = PTR_DAT_04bb60a0;
  plVar4[0x21] = 0;
  *(undefined4 *)(plVar4 + 0x20) = local_58;
  *plVar8 = (long)(puVar2 + 0x10);
  (**(code **)(*plVar4 + 0x140))(plVar4,plVar8);
  *(undefined4 *)(plVar4 + 0x27) = 0;
  plVar4[0x18] = (long)&PTR_LAB_04b3e010;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  plVar4[0x22] = 0;
  *plVar8 = (long)&PTR_LAB_04b3e0d0;
  plVar4[0x23] = 0;
  plVar4[0x24] = 0;
  param_1[8] = plVar4;
  return;
}

