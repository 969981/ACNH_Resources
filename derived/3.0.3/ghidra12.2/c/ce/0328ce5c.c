
/* WARNING: Removing unreachable block (ram,0x0328cfdc) */
/* WARNING: Removing unreachable block (ram,0x0328cff4) */

void FUN_0328ce5c(long param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined4 local_78 [2];
  undefined *local_70;
  char *pcStack_68;
  
  *(long *)(param_1 + 0x18) = *param_2;
  if (*param_2 == 0) {
    return;
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  plVar8 = (long *)param_2[10];
  uVar9 = 0;
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  puVar6 = PTR_DAT_04bc8e68;
  puVar3 = PTR_PTR_04bb2238;
  pcVar2 = PTR_DAT_04bb2120;
  uVar9 = *(undefined8 *)(*param_2 + 0xf0);
  pcVar1 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar1 != '\0') {
    local_70 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_68 = pcVar1;
    lVar10 = FUN_032cb8e0(local_78,&local_70);
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar10 + 0xe8);
    }
  }
  uVar7 = FUN_0328d070(uVar9);
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  if (0 < (int)uVar7) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar12 = malloc((ulong)uVar7 << 3);
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar10 + 8);
      if (lVar11 != 0) {
        plVar8 = (long *)(lVar11 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0328cfa4;
      pvVar12 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar7 << 3,8);
    }
    if (pvVar12 != (void *)0x0) {
      *(void **)(param_1 + 0x20) = pvVar12;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 0x28) = uVar7;
    }
  }
LAB_0328cfa4:
  lVar11 = *(long *)puVar4;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
  plVar8 = (long *)(lVar11 + 8);
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 0xa8);
  }
  local_70 = (undefined *)*plVar8;
  local_78[0] = 1;
  pcStack_68 = (char *)0x0;
  *(undefined **)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar9 = *(undefined8 *)(*param_2 + 0xf0);
  if (*(char **)(puVar3 + 8) != (char *)0x0) {
    pcVar2 = *(char **)(puVar3 + 8);
  }
  if (*pcVar2 != '\0') {
    local_70 = puVar6 + 0x10;
    pcStack_68 = pcVar2;
    lVar10 = FUN_032cb8e0(local_78,&local_70,uVar9);
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar10 + 0xe8);
    }
  }
  FUN_0328d0f0(param_1,param_2,uVar9);
  return;
}

