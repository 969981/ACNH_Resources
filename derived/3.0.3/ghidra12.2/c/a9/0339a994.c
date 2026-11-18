
/* WARNING: Removing unreachable block (ram,0x0339a9e8) */

undefined8 FUN_0339a994(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  long *plVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *local_60;
  undefined8 *puStack_58;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
  plVar11 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2230 + 8) + 0x18);
  if (plVar11 == (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      lVar12 = 1;
      goto LAB_0339aa68;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    lVar12 = 1;
    if (plVar9 == (long *)0x0) {
      pvVar6 = (void *)0x0;
      goto LAB_0339aa74;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar11;
    plVar9 = plVar11;
    if (*(long *)puVar3 == 0) {
LAB_0339aa68:
      pvVar6 = malloc(0x110);
      goto LAB_0339aa74;
    }
  }
  pvVar6 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x110,8);
LAB_0339aa74:
  uVar1 = *(int *)(param_1 + 0xd0) + 1;
  if (uVar1 < 0xfa) {
    puStack_58 = *(undefined8 **)(PTR_s_cInvalid_04bc6398 + (ulong)uVar1 * 8 + 0x1458);
  }
  else {
    puStack_58 = &DAT_0407ebb1;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  FUN_0386a3a0(pvVar6,&local_60);
  *(undefined4 *)((long)pvVar6 + 200) = 1;
  *(undefined4 *)((long)pvVar6 + 0xc0) = 1;
  plVar9 = plVar11;
  if (plVar11 == (long *)0x0) {
    lVar13 = *(long *)puVar3;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68),extraout_x1,0);
    puVar8 = (undefined8 *)(lVar13 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar9 = (long *)*puVar8;
  }
  uVar7 = FUN_038c6d48(0,(long)pvVar6 + 0xa0,plVar9,8,1,0);
  *(undefined8 *)((long)pvVar6 + 0xb8) = uVar7;
  FUN_0339c6d0((int *)(param_1 + 0xd0),pvVar6);
  *(undefined4 *)((long)pvVar6 + 0xc0) = 2;
  (**(code **)(**(long **)((long)pvVar6 + 0xb8) + 0x28))();
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    puVar8 = malloc(0x88);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar8 = (undefined8 *)(lVar5 + 8);
      if (lVar13 != 0) {
        puVar8 = (undefined8 *)(lVar13 + 0xa8);
      }
      plVar11 = (long *)*puVar8;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x88,8);
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_1 + 0xd0);
  bVar10 = *(byte *)(param_1 + 0xd4);
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)((long)puVar8 + 0x14) = bVar10;
  uVar2 = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((long)puVar8 + 0x1b) = *(undefined4 *)(param_1 + 0xdb);
  *(undefined4 *)(puVar8 + 3) = uVar2;
  puVar8[4] = &PTR_LAB_04b240e0;
  (**(code **)(*(long *)(param_1 + 0xe0) + 0x10))((long *)(param_1 + 0xe0));
  puVar8[8] = &PTR_LAB_04b24108;
  (**(code **)(*(long *)(param_1 + 0x100) + 0x10))(param_1 + 0x100);
  puVar8[0xc] = &PTR_LAB_04b24130;
  (**(code **)(*(long *)(param_1 + 0x120) + 0x10))(param_1 + 0x120);
  puVar8[0x10] = pvVar6;
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  plVar11 = (long *)((long)*(int *)(param_1 + 0x17c) + (long)puVar8);
  lVar5 = *(long *)(param_1 + 0x168);
  *(long **)(param_1 + 0x168) = plVar11;
  *plVar11 = lVar5;
  plVar11[1] = param_1 + 0x168;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar11;
  }
  *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  if (lVar12 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar12;
  }
  return 1;
}

