
undefined8 * FUN_02c050e8(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  if (**(char **)(param_2 + 8) == '\0') {
    if ((*PTR_DAT_04bc5510 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bc5510);
      param_2 = PTR_DAT_04bc5508;
      if (iVar4 != 0) {
        *(undefined **)PTR_DAT_04bc5508 = puVar1 + 0x10;
        *(char **)(param_2 + 8) = "SonkatsuResultWindowBtnCtrl";
        __cxa_guard_release(PTR_DAT_04bc5510);
      }
    }
    else {
      param_2 = PTR_DAT_04bc5508;
    }
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_48 = *(undefined8 *)(param_1 + 0x50);
  local_58 = puVar1 + 0x10;
  uStack_50 = *(undefined8 *)(param_2 + 8);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar6 = malloc(0x570);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x570,8);
    }
  }
  FUN_030bed84(plVar6,&local_58,param_3);
  *plVar6 = (long)(PTR_DAT_04bc83e0 + 0x10);
  memset(plVar6 + 0x81,0,0x168);
  plVar9 = (long *)(param_1 + 0x38);
  lVar10 = *plVar9;
  plVar7 = (long *)((long)*(int *)(param_1 + 0x4c) + (long)plVar6);
  *plVar9 = (long)plVar7;
  *plVar7 = lVar10;
  plVar7[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar7;
  }
  lVar10 = *(long *)puVar2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  plVar6[6] = param_1;
  if (lVar10 == 0) {
    puVar8 = malloc(0x58);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x58,0xfffffff8);
    }
  }
  puVar8[2] = 0;
  puVar8[3] = plVar6;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_04aabd88;
  puVar8[1] = 0;
  puVar8[6] = 0;
  puVar8[7] = param_3;
  puVar1 = PTR_DAT_04bc4e08 + 0x10;
  puVar8[10] = plVar6;
  puVar8[8] = puVar1;
  puVar8[9] = plVar6;
  plVar7 = (long *)(param_1 + 0x78);
  lVar10 = *plVar7;
  plVar6 = (long *)((long)*(int *)(param_1 + 0x8c) + (long)puVar8);
  *plVar7 = (long)plVar6;
  *plVar6 = lVar10;
  plVar6[1] = (long)plVar7;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar6;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if ((*(byte *)(param_3 + 0x2c) & 1) == 0) {
    FUN_03c68fb0(puVar8);
  }
  return puVar8;
}

