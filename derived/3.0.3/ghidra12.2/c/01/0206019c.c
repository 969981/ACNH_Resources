
long * FUN_0206019c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
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
  
  puVar2 = PTR_DAT_04bb2698;
  if (DAT_053cfbe0 != (long *)0x0) {
    return DAT_053cfbe0;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar4 = malloc(0x160);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_0206022c;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x160,8);
  }
LAB_0206022c:
  FUN_038c69f0(plVar4 + 0x28,param_1,3);
  puVar1 = PTR_DAT_04bb2020;
  DAT_053cfbd8 = plVar4 + 0x28;
  plVar4[0x28] = (long)&PTR_FUN_04a6f268;
  puVar1 = puVar1 + 0x10;
  local_80 = "Npc";
  pcStack_48 = "NpcColor";
  local_88 = puVar1;
  local_50 = puVar1;
  FUN_00751ec0(plVar4,&local_88,&local_50,0);
  *plVar4 = (long)&PTR_LAB_04a6f3f8;
  local_80 = "mParamsBuffer";
  lVar7 = *(long *)puVar2;
  puStack_70 = &DAT_04068284;
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
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,plVar8);
    plVar4[0x19] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar6 = (long *)(lVar7 + 0x70);
      lVar5 = *plVar6;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)plVar8);
      *plVar6 = (long)plVar8;
      *plVar8 = lVar5;
      plVar8[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar3 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
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
  plVar4[0x18] = (long)&PTR_LAB_04a6f568;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  plVar4[0x22] = 0;
  *plVar8 = (long)&PTR_LAB_04a6f628;
  *plVar4 = (long)&PTR_LAB_04a6f288;
  DAT_053cfbe0 = plVar4;
  plVar4[0x23] = 0;
  plVar4[0x24] = 0;
  return plVar4;
}

