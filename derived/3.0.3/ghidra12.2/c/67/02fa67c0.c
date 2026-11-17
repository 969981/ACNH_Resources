
void FUN_02fa67c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar8 = malloc(0xa8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
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
  FUN_03c5ba20(puVar8,0xb);
  *puVar8 = &PTR_FUN_04ae91a8;
  puVar8[0x11] = &PTR_LAB_04ae9250;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar8 + 4) = 1;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_03c5bcd4(puVar8);
  if ((undefined8 *)puVar8[10] != puVar8 + 9) {
    lVar10 = (long)*(int *)((long)puVar8 + 0x5c);
    puVar11 = (undefined8 *)((long)puVar8[10] - lVar10);
    do {
      (**(code **)*puVar11)(puVar11,*(undefined4 *)((long)puVar8 + 0x24));
      puVar11 = (undefined8 *)(*(long *)((long)puVar11 + lVar10 + 8) - lVar10);
    } while (puVar11 != (undefined8 *)((long)(puVar8 + 9) - lVar10));
  }
  lVar10 = *(long *)(param_2 + 0x18);
  plVar9 = (long *)(lVar10 + 0x60);
  lVar6 = *plVar9;
  plVar7 = (long *)((long)*(int *)(lVar10 + 0x74) + (long)puVar8);
  *plVar9 = (long)plVar7;
  *plVar7 = lVar6;
  plVar7[1] = (long)plVar9;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar7;
  }
  lVar6 = *(long *)puVar1;
  *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + 1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 0xa8);
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
  puVar3 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2020;
  puVar8[3] = *(undefined8 *)(param_2 + 0x18);
  plVar7[1] = (long)puVar8;
  *(long **)(param_2 + 0x20) = plVar7;
  local_78 = *(undefined8 *)(puVar3 + 8);
  puVar1 = puVar2 + 0x10;
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_70._4_4_ = 0x3f800000;
  local_98 = 0;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "In";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "InS";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,3,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_88 = "Out";
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,10,6,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "InHard";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,1,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "InHardS";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,4,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "OutHard";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,10,7,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "InSoft";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,2,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "InSoftS";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,9,5,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70._3_5_ = local_70._3_5_;
  local_70._0_3_ = 0x10000;
  local_98 = 0;
  local_70._4_4_ = 0x3f800000;
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffffffff0000);
  local_88 = "OutSoft";
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,10,8,&local_98);
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],0);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],1);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],2);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],3);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],4);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,9);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],5);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 10;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,10);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],6);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 9;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,10);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],7);
  plVar9 = (long *)plVar7[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar4 + *(uint *)(plVar9 + 0xc) * uVar5) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar5 || *(uint *)(plVar9 + 0xc) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 9;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar7[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,10);
  uVar5 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],8);
  lVar6 = plVar7[1];
  lVar10 = *(long *)(lVar6 + 0x68) + (long)(int)(uVar4 + *(uint *)(lVar6 + 0x60) * uVar5) * 0x18;
  if (*(uint *)(lVar6 + 100) <= uVar5 || *(uint *)(lVar6 + 0x60) <= uVar4) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 9;
    *(undefined1 *)(lVar10 + 0x14) = 0;
  }
  local_78 = *(undefined8 *)(puVar3 + 8);
  puVar2 = puVar2 + 0x10;
  puVar8 = &local_68;
  local_98 = 0;
  local_88 = "In";
  local_70 = (undefined1  [8])0x3f80000000000000;
  local_68 = &DAT_3f8000003f800000;
  puStack_90 = puVar2;
  puStack_80 = puVar2;
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],9);
  plVar9 = (long *)(*(long *)(plVar7[1] + 0x78) + (long)(int)uVar4 * 0x10);
  if (*(uint *)(plVar7[1] + 0x70) <= uVar4) {
    plVar9 = (long *)0x0;
  }
  if (*plVar9 == 0) {
    lVar10 = FUN_03c68d44(*plVar7,&puStack_90,&puStack_80);
    *plVar9 = lVar10;
    *(undefined4 *)(plVar9 + 1) = local_70._0_4_;
    if (local_70._0_4_ == 2) {
      puVar11 = puVar8;
    }
    else if (local_70._0_4_ == 4) {
      puVar11 = (undefined8 *)(local_70 + 4);
    }
    else {
      puVar11 = (undefined8 *)((long)&local_68 + 4);
      if (local_70._0_4_ != 3) goto LAB_02fa7030;
    }
    *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)puVar11;
  }
LAB_02fa7030:
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_68 = &DAT_3f8000003f800000;
  local_98 = 0;
  local_88 = "In";
  local_70 = (undefined1  [8])0x3f80000000000001;
  puStack_90 = puVar2;
  puStack_80 = puVar2;
  uVar4 = (**(code **)(*(long *)plVar7[1] + 0x80))((long *)plVar7[1],10);
  puVar1 = PTR_DAT_04bb2698;
  plVar9 = (long *)(*(long *)(plVar7[1] + 0x78) + (long)(int)uVar4 * 0x10);
  if (*(uint *)(plVar7[1] + 0x70) <= uVar4) {
    plVar9 = (long *)0x0;
  }
  if (*plVar9 == 0) {
    lVar10 = FUN_03c68d44(*plVar7,&puStack_90,&puStack_80);
    *plVar9 = lVar10;
    *(undefined4 *)(plVar9 + 1) = local_70._0_4_;
    if (local_70._0_4_ != 2) {
      if (local_70._0_4_ == 4) {
        puVar8 = (undefined8 *)(local_70 + 4);
      }
      else {
        puVar8 = (undefined8 *)((long)&local_68 + 4);
        if (local_70._0_4_ != 3) goto LAB_02fa70d8;
      }
    }
    *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)puVar8;
  }
LAB_02fa70d8:
  lVar10 = plVar7[1];
  if (*(long *)puVar1 == 0) {
    free(plVar7);
  }
  else {
    plVar9 = (long *)FUN_038cb610(*(long *)puVar1,plVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,plVar7);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x20) = lVar10;
  return;
}

