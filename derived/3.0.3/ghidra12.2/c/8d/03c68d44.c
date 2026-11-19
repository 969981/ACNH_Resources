
long * FUN_03c68d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_80;
  undefined *local_78;
  char local_6a;
  undefined *local_68;
  undefined *local_60;
  char local_52;
  
  puVar3 = PTR_DAT_04bb2120;
  puVar2 = PTR_DAT_04bb2020;
  lVar7 = *(long *)(param_1 + 0x18);
  local_52 = '\0';
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = PTR_DAT_04bb2120;
  local_68 = puVar1;
  FUN_03c5a110(&local_68,param_2,0xffffffff,0);
  local_6a = '\0';
  local_78 = puVar3;
  local_80 = puVar1;
  FUN_03c5a110(&local_80,param_3,0xffffffff,0);
  plVar4 = (long *)FUN_03c5a760(lVar7 + 0x138,&local_68,&local_80);
  if (local_6a != '\0') {
    (**(code **)(local_80 + 0x18))(&local_80);
    puVar1 = local_78;
    if (local_78 != (undefined *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_78);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_78);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar1);
        }
      }
    }
  }
  if (local_52 != '\0') {
    (**(code **)(local_68 + 0x18))(&local_68);
    puVar1 = local_60;
    if (local_60 != (undefined *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_60);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_60);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar1);
        }
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    return plVar4;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar4 = malloc(0x60);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x60,8);
    }
  }
  FUN_03c5a424(plVar4,*(undefined8 *)(param_1 + 0x18));
  plVar4[6] = (long)(puVar2 + 0x10);
  puVar1 = PTR_DAT_04bd39f8;
  plVar4[7] = (long)puVar3;
  *(undefined1 *)((long)plVar4 + 0x46) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_03c5a110(plVar4 + 6,param_3,0xffffffff,0);
  plVar4[10] = (long)puVar3;
  plVar4[9] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)plVar4 + 0x5e) = 0;
  FUN_03c5a110(plVar4 + 9,param_2,0xffffffff,0);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(lVar7 + 0x138);
  plVar5 = (long *)((long)*(int *)(lVar7 + 0x14c) + (long)plVar4);
  *(long **)(lVar7 + 0x138) = plVar5;
  *plVar5 = lVar6;
  plVar5[1] = lVar7 + 0x138;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar5;
  }
  *(int *)(lVar7 + 0x148) = *(int *)(lVar7 + 0x148) + 1;
  return plVar4;
}

