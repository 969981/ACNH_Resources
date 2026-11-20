
void FUN_03d64680(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar8 = malloc(0xa8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar8,8);
  *puVar8 = &PTR_FUN_04b90478;
  puVar8[0x11] = &PTR_LAB_04b90520;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar8 + 4) = 1;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_03c5bcd4(puVar8);
  if ((undefined8 *)puVar8[10] != puVar8 + 9) {
    lVar11 = (long)*(int *)((long)puVar8 + 0x5c);
    puVar12 = (undefined8 *)((long)puVar8[10] - lVar11);
    do {
      (**(code **)*puVar12)(puVar12,*(undefined4 *)((long)puVar8 + 0x24));
      puVar12 = (undefined8 *)(*(long *)((long)puVar12 + lVar11 + 8) - lVar11);
    } while (puVar12 != (undefined8 *)((long)(puVar8 + 9) - lVar11));
  }
  lVar11 = *(long *)(param_2 + 0x18);
  plVar10 = (long *)(lVar11 + 0x60);
  lVar6 = *plVar10;
  plVar7 = (long *)((long)*(int *)(lVar11 + 0x74) + (long)puVar8);
  *plVar10 = (long)plVar7;
  *plVar7 = lVar6;
  plVar7[1] = (long)plVar10;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar7;
  }
  lVar6 = *(long *)puVar3;
  *(int *)(lVar11 + 0x70) = *(int *)(lVar11 + 0x70) + 1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,0xfffffffc);
    }
  }
  *plVar7 = param_2;
  puVar2 = PTR_PTR_04bb2238;
  puVar8[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  plVar7[1] = (long)puVar8;
  *(long **)(param_2 + 0x20) = plVar7;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_6e = 1;
  puVar1 = puVar1 + 0x10;
  local_98 = 0;
  local_88 = "*Decide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,0,1,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Decide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,0,2,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Cancel;<*Decide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,3,4,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,3,5,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvCancel;<*InvDecide";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,4,3,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Valid;<*Invalid";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,3,6,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Invalid";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,0,7,&local_98);
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],0);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],2);
  plVar10 = (long *)plVar7[1];
  lVar11 = plVar10[0xd] + (long)(int)(uVar4 + *(uint *)(plVar10 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar10 + 100) <= uVar5 || *(uint *)(plVar10 + 0xc) <= uVar4) {
    lVar11 = 0;
  }
  if (*(int *)(lVar11 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar11 + 0xc) = 0;
    *(undefined1 *)(lVar11 + 0x14) = 0;
    plVar10 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar10 + 0x80))(plVar10,3);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],5);
  plVar10 = (long *)plVar7[1];
  lVar11 = plVar10[0xd] + (long)(int)(uVar4 + *(uint *)(plVar10 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar10 + 100) <= uVar5 || *(uint *)(plVar10 + 0xc) <= uVar4) {
    lVar11 = 0;
  }
  if (*(int *)(lVar11 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar11 + 0xc) = 3;
    *(undefined1 *)(lVar11 + 0x14) = 0;
    plVar10 = (long *)plVar7[1];
  }
  uVar5 = (**(code **)(*plVar10 + 0x80))(plVar10,6);
  plVar10 = (long *)plVar7[1];
  uVar4 = *(uint *)(plVar10 + 0xc);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar11 = plVar10[0xd] + (long)(int)(uVar9 + uVar4 * uVar5) * 0x18;
      if (*(uint *)((long)plVar10 + 100) <= uVar5 || uVar4 <= uVar9) {
        lVar11 = 0;
      }
      if (*(int *)(lVar11 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar11 + 0xc) = 0;
        *(undefined1 *)(lVar11 + 0x14) = 0;
        plVar10 = (long *)plVar7[1];
      }
      uVar4 = *(uint *)(plVar10 + 0xc);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar5 = (**(code **)(*plVar10 + 0x80))(plVar10,7);
  lVar11 = plVar7[1];
  uVar4 = *(uint *)(lVar11 + 0x60);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(lVar11 + 0x68) + (long)(int)(uVar9 + uVar4 * uVar5) * 0x18;
      if (*(uint *)(lVar11 + 100) <= uVar5 || uVar4 <= uVar9) {
        lVar6 = 0;
      }
      if (*(int *)(lVar6 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar6 + 0xc) = 3;
        *(undefined1 *)(lVar6 + 0x14) = 0;
        lVar11 = plVar7[1];
      }
      uVar4 = *(uint *)(lVar11 + 0x60);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
    free(plVar7);
  }
  else {
    plVar10 = (long *)FUN_038cb610(lVar6,plVar7);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10,plVar7);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x280) = lVar11;
  *(undefined1 **)(lVar11 + 0x98) = &LAB_03d65140;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined ***)(lVar11 + 0x88) = &PTR_LAB_04b905f8;
  *(long *)(lVar11 + 0x90) = param_1;
  plVar7 = *(long **)(param_1 + 0x280);
  *(undefined2 *)(plVar7 + 4) = 1;
  *(undefined4 *)((long)plVar7 + 0x24) = 0;
  *(undefined4 *)(plVar7 + 8) = 0;
  *(undefined4 *)((long)plVar7 + 0x2c) = 0x80000000;
  plVar7[6] = 0;
  plVar7[7] = 0;
  (**(code **)(*plVar7 + 0x28))(plVar7,0);
  if ((long *)plVar7[10] != plVar7 + 9) {
    lVar11 = (long)*(int *)((long)plVar7 + 0x5c);
    puVar8 = (undefined8 *)(plVar7[10] - lVar11);
    do {
      (**(code **)*puVar8)(puVar8,*(undefined4 *)((long)plVar7 + 0x24));
      puVar8 = (undefined8 *)(*(long *)((long)puVar8 + lVar11 + 8) - lVar11);
    } while (puVar8 != (undefined8 *)((long)(plVar7 + 9) - lVar11));
  }
  return;
}

