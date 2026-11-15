
void FUN_01e0baf4(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__ptr;
  long lVar11;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (((long *)*param_1 != (long *)0x0) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)*param_1 + 0x38))();
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[10];
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  param_1[10] = 0;
  *param_1 = 0;
  param_1[0x14] = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = (long)&PTR_LAB_04a5c490;
  param_1[0xc] = (long)(PTR_DAT_04bc1008 + 0x10);
  FUN_03f45838(param_1 + 1);
  plVar6 = (long *)param_1[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
    iVar3 = *(int *)((long)param_1 + 0x14) + -1;
    if (((*(int *)((long)param_1 + 0x14) < 1) ||
        (*(int *)((long)param_1 + 0x14) = iVar3, iVar3 == 0)) && (param_1[3] != 0)) {
      FUN_03f44508();
      param_1[3] = 0;
    }
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar5 = PTR_DAT_04bdf1d8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (long)(puVar5 + 0x10);
  param_1[2] = 0;
  FUN_0082c640(param_1 + 5);
  local_68 = PTR_DAT_04bb2120;
  puStack_70 = PTR_DAT_04bb2020;
  local_48 = 0;
  *param_1 = *param_2;
  puStack_70 = puStack_70 + 0x10;
  local_78 = *param_2;
  local_58 = "WaveSimulation";
  uStack_50 = 0;
  puStack_60 = puStack_70;
  FUN_0082c840(param_1 + 5,&local_78);
  lVar11 = *param_2;
  lVar4 = param_2[1];
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    puVar8 = malloc(0x80);
  }
  else {
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_01e0bcc0;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x80,8);
  }
LAB_01e0bcc0:
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar1 = PTR_DAT_04bb3950 + 0x10;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  puVar8[0xb] = puVar1;
  puVar8[6] = 0;
  puVar8[7] = puVar1;
  param_1[10] = (long)puVar8;
  puVar9 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x50,8);
  puVar8[1] = puVar9;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar8 + 4) = 0xa0028;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xa0002;
  puVar8[2] = lVar11;
  *(int *)(puVar8 + 3) = (int)lVar4;
  *(undefined4 *)((long)puVar8 + 0x1c) = uVar2;
  puVar8[9] = puVar8;
  puVar8[0xd] = puVar8;
  puVar8[7] = &PTR_LAB_04a5c828;
  puVar8[8] = puVar9;
  puVar8[0xb] = &PTR_LAB_04a5c850;
  puVar8[0xc] = puVar9;
  param_1[0xc] = (long)&PTR_LAB_04a5c878;
  param_1[0xd] = (long)param_1;
  return;
}

