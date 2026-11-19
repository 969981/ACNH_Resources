
void FUN_03c9b390(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *local_70;
  undefined8 *puStack_68;
  
  lVar11 = *(long *)(param_2 + 0x88);
  FUN_00367b6c();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0x200;
  *param_1 = (long)&PTR_LAB_04b88d50;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = lVar11;
  param_1[0x15] = 0;
  param_1[0x16] = (long)param_1;
  FUN_00364cf0(param_1 + 0x17);
  puVar1 = PTR_DAT_04bb2020;
  param_1[0x21] = (long)(param_1 + 0x20);
  param_1[0x22] = 0x6800000000;
  param_1[0x20] = (long)(param_1 + 0x20);
  puVar2 = PTR_DAT_04bb2120;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)param_1 + 0x14e) = 0;
  param_1[0x27] = (long)puVar1;
  param_1[0x28] = (long)puVar2;
  puStack_68 = &DAT_0407ebb1;
  local_70 = puVar1;
  FUN_03c5a110(param_1 + 0x27,&local_70,0xffffffff,1);
  lVar11 = *(long *)(param_2 + 0x90);
  if (param_4 != 0) {
    lVar11 = param_4;
  }
  param_1[0x12] = lVar11;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x98);
  param_1[5] = *(long *)(param_2 + 0x28);
  puStack_68 = *(undefined8 **)(param_2 + 0x30);
  param_1[6] = (long)puStack_68;
  param_1[8] = *(long *)(param_2 + 0x40);
  lVar11 = *(long *)(param_2 + 0xb8);
  lVar6 = *(long *)(param_2 + 0xc0);
  lVar8 = *(long *)(param_2 + 0xd0);
  param_1[0x19] = *(long *)(param_2 + 200);
  param_1[0x1a] = lVar8;
  param_1[0x17] = lVar11;
  param_1[0x18] = lVar6;
  lVar11 = *(long *)(param_2 + 0xd8);
  lVar6 = *(long *)(param_2 + 0xe0);
  lVar8 = *(long *)(param_2 + 0xf0);
  param_1[0x1d] = *(long *)(param_2 + 0xe8);
  param_1[0x1e] = lVar8;
  param_1[0x1b] = lVar11;
  param_1[0x1c] = lVar6;
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0xf8);
  plVar12 = *(long **)(param_2 + 0x118);
  param_1[0x23] = (long)plVar12;
  lVar6 = *plVar12;
  local_70 = puVar1;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x60));
  lVar11 = FUN_03ca21a0(plVar12,&local_70,0);
  plVar10 = (long *)(lVar11 + 0x28);
  lVar8 = *plVar10;
  plVar12 = (long *)((long)*(int *)(lVar11 + 0x3c) + (long)(param_1 + 0x14));
  *plVar10 = (long)plVar12;
  *plVar12 = lVar8;
  plVar12[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar12;
  }
  *(int *)(lVar11 + 0x38) = *(int *)(lVar11 + 0x38) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x60));
  param_1[0x24] = lVar11;
  param_1[0x26] = *(long *)(param_2 + 0x130);
  puStack_68 = (undefined8 *)param_1[6];
  local_70 = puVar1;
  plVar12 = (long *)FUN_03ca2690(param_1[0x23],&local_70);
  uVar13 = *(undefined8 *)PTR_DAT_04bd0810;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,plVar12);
  lVar11 = FUN_03c92160(*(undefined8 *)(param_2 + 0x18),param_1,1);
  param_1[3] = lVar11;
  if (param_3 != 0) {
    FUN_0037c2a0(lVar11,param_3);
  }
  lVar11 = FUN_00367b30(0x10);
  if (lVar11 != 0) {
    *(long *)lVar11 = lVar11;
    *(long *)(lVar11 + 8) = lVar11;
  }
  param_1[4] = lVar11;
  lVar11 = *(long *)(param_2 + 0x20);
  for (lVar6 = *(long *)(lVar11 + 8); lVar6 != lVar11; lVar6 = *(long *)(lVar6 + 8)) {
    plVar10 = (long *)param_1[3];
    lVar8 = param_1[4];
    uVar14 = *(undefined8 *)(lVar6 + 0x20);
    lVar3 = FUN_00367b30(0x38);
    if (lVar3 != 0) {
      FUN_00367390(lVar3,uVar14);
    }
    for (lVar15 = *(long *)(lVar6 + 0x18); lVar15 != lVar6 + 0x10; lVar15 = *(long *)(lVar15 + 8)) {
      uVar14 = (**(code **)(*plVar10 + 0x60))(plVar10,*(long *)(lVar15 + 0x10) + 0xb0,1);
      FUN_00367494(lVar3,uVar14);
    }
    FUN_00367700(lVar8,lVar3);
  }
  if ((param_1[0x12] != 0) && (lVar11 = FUN_03c9a750(param_1[3]), lVar11 != 0)) {
    plVar10 = (long *)(lVar11 + 0xd8);
    lVar11 = *plVar10;
    plVar9 = (long *)(param_1[0x12] + 0x48);
    *plVar10 = *plVar9;
    *(long **)(lVar11 + 8) = plVar9;
    *(long **)(*plVar9 + 8) = plVar10;
    *plVar9 = lVar11;
  }
  (**(code **)(*param_1 + 0xd8))(param_1);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,uVar13);
  uVar4 = (**(code **)(*plVar12 + 0x90))(plVar12);
  if ((uVar4 & 1) == 0) {
    iVar5 = (int)plVar12[0x28];
    iVar7 = (int)plVar12[0x23];
    if ((iVar5 == 0) && (iVar7 == 1)) {
      lVar11 = 0;
      if (plVar12[0x22] != 0) {
        lVar11 = plVar12[0x22] - (long)*(int *)((long)plVar12 + 0x11c);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      (**(code **)(plVar12[0x1d] + 0x18))(plVar12 + 0x1d);
      if (lVar11 == plVar12[0x1e]) goto LAB_03c9b690;
      iVar7 = (int)plVar12[0x23];
      iVar5 = (int)plVar12[0x28];
    }
    if ((iVar7 != 0) || (iVar5 != 1)) goto LAB_03c9b6a4;
    lVar11 = 0;
    if (plVar12[0x27] != 0) {
      lVar11 = plVar12[0x27] - (long)*(int *)((long)plVar12 + 0x144);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    (**(code **)(plVar12[0x1d] + 0x18))(plVar12 + 0x1d);
    if (lVar11 != plVar12[0x1e]) goto LAB_03c9b6a4;
  }
LAB_03c9b690:
  (**(code **)(*plVar12 + 0x20))(plVar12);
  plVar12 = (long *)0x0;
LAB_03c9b6a4:
  param_1[0x25] = (long)plVar12;
  return;
}

