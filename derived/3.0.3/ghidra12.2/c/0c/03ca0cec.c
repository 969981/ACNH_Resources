
undefined8 FUN_03ca0cec(long param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 *puStack_68;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar8 = malloc(0x20);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar12 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
    }
  }
  uVar13 = *(undefined8 *)PTR_DAT_04bd1e18;
  plVar7 = (long *)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  puVar4 = PTR_DAT_04bb2020;
  local_80 = *(undefined8 *)(param_1 + 0x18);
  puVar8[3] = 0;
  local_88 = puVar4 + 0x10;
  *puVar8 = 0;
  puVar8[1] = 0;
  lVar12 = *(long *)puVar5;
  if (lVar12 == 0) {
    puVar10 = malloc(0x108);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x108,8);
    }
  }
  FUN_03b1bd74(puVar10);
  *(undefined4 *)(puVar10 + 0x1f) = 0;
  *puVar10 = &PTR_FUN_04b89148;
  puVar10[0x1d] = puVar10 + 0x1d;
  puVar10[0x1e] = puVar10 + 0x1d;
  *(undefined8 *)((long)puVar10 + 0xfc) = 0x3f80000000000008;
  puVar8[2] = puVar10;
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar10[4] = uVar13;
  puVar10[0x16] = local_80;
  *(byte *)((long)puVar10 + 0xe6) = *(byte *)((long)puVar10 + 0xe6) | 8;
  plVar11 = (long *)(param_1 + 0x60);
  lVar12 = *plVar11;
  plVar9 = (long *)((long)*(int *)(param_1 + 0x74) + (long)puVar8);
  *plVar11 = (long)plVar9;
  *plVar9 = lVar12;
  plVar9[1] = (long)plVar11;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar9;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  lVar12 = (**(code **)(**(long **)(param_1 + 0x30) + 0x78))();
  local_88 = *(undefined **)(param_1 + 0x30);
  local_80 = 0;
  pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar5 = PTR_DAT_04bd44c8;
  local_78 = *(undefined8 *)PTR_DAT_04bd44c8;
  *(undefined ***)PTR_DAT_04bd44c8 = &local_88;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  lVar6 = puVar8[2];
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  plVar9 = (long *)FUN_00367b30(0x168);
  if (plVar9 != (long *)0x0) {
    FUN_00367b6c(plVar9);
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    plVar9[0x12] = 0;
    *(undefined2 *)(plVar9 + 0x13) = 0x200;
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    plVar9[0x10] = 0;
    plVar9[0x11] = lVar6;
    puVar2 = PTR_DAT_04bd44d0 + 0x10;
    plVar9[0x16] = (long)plVar9;
    *plVar9 = (long)puVar2;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    FUN_00364cf0(plVar9 + 0x17);
    *(undefined1 *)(plVar9 + 0x1f) = uVar3;
    plVar9[0x20] = (long)(plVar9 + 0x20);
    plVar9[0x21] = (long)(plVar9 + 0x20);
    plVar9[0x24] = 0;
    plVar9[0x25] = 0;
    plVar9[0x22] = 0x6800000000;
    plVar9[0x23] = param_2;
    local_70 = puVar4 + 0x10;
    plVar9[0x26] = param_3;
    plVar9[0x27] = (long)local_70;
    puVar2 = PTR_DAT_04bb2120;
    *(undefined1 *)((long)plVar9 + 0x14e) = 0;
    plVar9[0x28] = (long)puVar2;
    puStack_68 = &DAT_0407ebb1;
    FUN_03c5a110(plVar9 + 0x27,&local_70,0xffffffff,1);
    plVar9[0x2b] = 0;
    plVar9[0x2c] = 0;
    plVar9[0x2a] = 0;
  }
  puVar8[3] = plVar9;
  FUN_03c9b870(plVar9,plVar7,*(undefined8 *)(param_1 + 0x58),param_1 + 0x78);
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  FUN_03ca1050(*(undefined8 *)(puVar8[3] + 0x18),puVar8[3],&local_70);
  *(undefined8 *)puVar5 = local_78;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  nn::os::UnlockMutex(pMVar1);
  lVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x78))();
  if (puVar8[3] == 0) {
    uVar13 = 0;
  }
  else {
    *(long *)(puVar8[3] + 0x150) = lVar12 - lVar6;
    uVar13 = puVar8[3];
  }
  return uVar13;
}

