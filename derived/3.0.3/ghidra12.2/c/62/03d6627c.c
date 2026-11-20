
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03d6627c(long *param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  undefined *local_50;
  long *plStack_48;
  long local_28;
  
  plVar2 = (long *)param_1[0xb];
  local_28 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_28);
  }
  pvVar7 = (void *)param_1[0x36];
  if (pvVar7 == (void *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar7 = malloc(0x40);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar8 + 8);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0xa8);
      }
      pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x40,8);
    }
    FUN_03d62e50(pvVar7,param_2);
    param_1[0x36] = (long)pvVar7;
  }
  *(long **)((long)pvVar7 + 8) = param_1;
  if (param_1[0x37] == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar7 = malloc(0x20);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar8 + 8);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0xa8);
      }
      pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
    }
    FUN_03d66f24(pvVar7,param_2,&local_28);
    param_1[0x37] = (long)pvVar7;
  }
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  plStack_48 = (long *)&DAT_040ba9de;
  if ((local_28 != 0) && (uVar4 = FUN_03c9c780(local_28,&local_50), (uVar4 & 1) != 0)) {
    local_50 = puVar1 + 0x10;
    plStack_48 = (long *)&DAT_040ba9de;
    lVar8 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
    param_1[0x38] = lVar8;
  }
  if (param_1[0x39] == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar7 = malloc(0x18);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar8 + 8);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0xa8);
      }
      pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x18,8);
    }
    FUN_03d674a4(pvVar7,param_2,param_1);
    param_1[0x39] = (long)pvVar7;
  }
  local_50 = puVar1 + 0x10;
  plStack_48 = &DAT_0407ebb1;
  lVar8 = FUN_03c688b0(param_2,&local_50);
  param_1[0x3a] = lVar8;
  if (param_3 == (undefined *)0x0) {
    plVar2 = *(long **)(param_2 + 0x28);
    if (plVar2 != (long *)0x0) {
      plVar5 = (long *)param_1[0x36];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x80))(plVar5,plVar2);
      }
      (**(code **)(*param_1 + 0xe0))(param_1,plVar2);
      if (_DAT_00000038 == (undefined8 *)0x0) {
        FUN_03d66ac0(param_1,plVar2,0);
      }
      else {
        local_50 = (undefined *)0x0;
        plStack_48 = param_1;
        (**(code **)*_DAT_00000038)(_DAT_00000038,plVar2,&local_50);
      }
      FUN_03ea4ab0(plVar2,*(undefined1 *)
                           (*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x50) + 0x40) + 0x70));
      lVar8 = *plVar2;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(plVar2);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar2);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,plVar2);
        }
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      param_1[0x3c] = lVar8;
    }
  }
  else if ((param_3[0x2c] & 1) == 0) {
    plVar2 = *(long **)(param_2 + 0x28);
    if (plVar2 != (long *)0x0) {
      plVar5 = (long *)param_1[0x36];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x80))(plVar5,plVar2);
      }
      (**(code **)(*param_1 + 0xe0))(param_1,plVar2);
      puVar6 = *(undefined8 **)(param_3 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_03d66ac0(param_1,plVar2,param_3);
      }
      else {
        local_50 = param_3;
        plStack_48 = param_1;
        (**(code **)*puVar6)(puVar6,plVar2,&local_50);
      }
      FUN_03ea4ab0(plVar2,*(undefined1 *)
                           (*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x50) + 0x40) + 0x70));
      lVar8 = *plVar2;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(plVar2);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar2);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,plVar2);
        }
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      param_1[0x3c] = lVar8;
    }
  }
  else {
    lVar8 = *(long *)(param_3 + 0x30);
    if (lVar8 != 0) {
      plVar2 = (long *)param_1[0x36];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x78))(plVar2,lVar8,param_3);
      }
      FUN_03d72360(lVar8,param_3 + 0x10,param_1);
      (**(code **)(*param_1 + 0xd8))(param_1,lVar8,param_3);
    }
  }
  return;
}

