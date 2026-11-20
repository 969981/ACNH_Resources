
void FUN_03d83b30(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_98;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar7 = malloc(0xa8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar7,0x12);
  *puVar7 = &PTR_FUN_04b92960;
  puVar7[0x11] = &PTR_LAB_04b92a08;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  *(undefined2 *)(puVar7 + 4) = 1;
  *(undefined4 *)((long)puVar7 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_03c5bcd4(puVar7);
  if ((undefined8 *)puVar7[10] != puVar7 + 9) {
    lVar10 = (long)*(int *)((long)puVar7 + 0x5c);
    puVar11 = (undefined8 *)((long)puVar7[10] - lVar10);
    do {
      (**(code **)*puVar11)(puVar11,*(undefined4 *)((long)puVar7 + 0x24));
      puVar11 = (undefined8 *)(*(long *)((long)puVar11 + lVar10 + 8) - lVar10);
    } while (puVar11 != (undefined8 *)((long)(puVar7 + 9) - lVar10));
  }
  lVar10 = *(long *)(param_2 + 0x18);
  plVar9 = (long *)(lVar10 + 0x60);
  lVar5 = *plVar9;
  plVar6 = (long *)((long)*(int *)(lVar10 + 0x74) + (long)puVar7);
  *plVar9 = (long)plVar6;
  *plVar6 = lVar5;
  plVar6[1] = (long)plVar9;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar6;
  }
  lVar5 = *(long *)puVar1;
  *(int *)(lVar10 + 0x70) = *(int *)(lVar10 + 0x70) + 1;
  if (lVar5 == 0) {
    plVar6 = malloc(0x10);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar5 + 8);
    if (lVar10 != 0) {
      plVar6 = (long *)(lVar10 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x10,0xfffffffc);
    }
  }
  *plVar6 = param_2;
  puVar2 = PTR_PTR_04bb2238;
  puVar7[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  plVar6[1] = (long)puVar7;
  local_98 = 0;
  *(long **)(param_2 + 0x20) = plVar6;
  local_70 = 0;
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_6e = 1;
  puVar1 = puVar1 + 0x10;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Select";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0,1,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*UnSelect;<*Select";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,1,2,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,1,3,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Cancel;<*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,2,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_88 = "*InvSelect";
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,4,5,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvUnSelect;<*InvSelect";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,5,4,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,5,6,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,5,7,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,1,7,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvCancel;<*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,6,4,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchSelect;*Select";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0,8,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchUnSelect;<*TouchSelect;*UnSelect;<*Select";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,8,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_88 = "*TouchDecide;*Decide";
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,8,9,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchDecide;*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,8,10,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,8,2,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,8,3,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*TouchCancel;*Cancel;<*TouchDecide;<*Decide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,9,0,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_88 = "*InvTouchSelect;*InvSelect";
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,4,0xb,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvTouchUnSelect;<*InvTouchSelect;*InvUnSelect;<*InvSelect";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xb,4,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvTouchDecide;*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xb,0xc,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvTouchDecide;*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xb,0xd,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xb,6,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xb,7,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*InvTouchCancel;*InvCancel;<*InvTouchDecide;<*InvDecide";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0xc,4,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Valid;<*Invalid";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,4,0xe,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_6e = 1;
  local_98 = 0;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Invalid";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,0,0xf,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Invalid";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,1,0x10,&local_98);
  local_78 = *(undefined8 *)(puVar2 + 8);
  local_70 = 0;
  local_98 = 0;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0x100;
  local_88 = "*Valid;<*Invalid";
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_03c5cb04(plVar6,5,0x11,&local_98);
  uVar3 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],1);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],3);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 1;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],2);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 1;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],3);
  puVar1 = PTR_DAT_04bb2698;
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 1;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,5);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],7);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 5;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],7);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 5;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,4);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],6);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 5;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,4);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],7);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 5;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,8);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],10);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 0;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,8);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],3);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0xc) = 0;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],9);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 8;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],10);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 8;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0xb);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],0xd);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined1 *)(lVar10 + 0x14) = 0;
    *(undefined4 *)(lVar10 + 0xc) = 4;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0xb);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],7);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0xc) == -0x80000000) {
    *(undefined1 *)(lVar10 + 0x14) = 0;
    *(undefined4 *)(lVar10 + 0xc) = 4;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,4);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],0xc);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 0xb;
    plVar9 = (long *)plVar6[1];
  }
  uVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,4);
  uVar4 = (**(code **)(*(long *)plVar6[1] + 0x80))((long *)plVar6[1],0xd);
  plVar9 = (long *)plVar6[1];
  lVar10 = plVar9[0xd] + (long)(int)(uVar3 + *(uint *)(plVar9 + 0xc) * uVar4) * 0x18;
  if (*(uint *)((long)plVar9 + 100) <= uVar4 || *(uint *)(plVar9 + 0xc) <= uVar3) {
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + 0x10) == -0x80000000) {
    *(undefined4 *)(lVar10 + 0x10) = 0xb;
    plVar9 = (long *)plVar6[1];
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,0xe);
  plVar9 = (long *)plVar6[1];
  uVar3 = *(uint *)(plVar9 + 0xc);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar10 = plVar9[0xd] + (long)(int)(uVar8 + uVar3 * uVar4) * 0x18;
      if (*(uint *)((long)plVar9 + 100) <= uVar4 || uVar3 <= uVar8) {
        lVar10 = 0;
      }
      if (*(int *)(lVar10 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar10 + 0xc) = 0;
        *(undefined1 *)(lVar10 + 0x14) = 1;
        plVar9 = (long *)plVar6[1];
      }
      uVar3 = *(uint *)(plVar9 + 0xc);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,0xf);
  plVar9 = (long *)plVar6[1];
  uVar3 = *(uint *)(plVar9 + 0xc);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar10 = plVar9[0xd] + (long)(int)(uVar8 + uVar3 * uVar4) * 0x18;
      if (*(uint *)((long)plVar9 + 100) <= uVar4 || uVar3 <= uVar8) {
        lVar10 = 0;
      }
      if (*(int *)(lVar10 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar10 + 0xc) = 4;
        *(undefined1 *)(lVar10 + 0x14) = 1;
        plVar9 = (long *)plVar6[1];
      }
      uVar3 = *(uint *)(plVar9 + 0xc);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,0x10);
  plVar9 = (long *)plVar6[1];
  uVar3 = *(uint *)(plVar9 + 0xc);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar10 = plVar9[0xd] + (long)(int)(uVar8 + uVar3 * uVar4) * 0x18;
      if (*(uint *)((long)plVar9 + 100) <= uVar4 || uVar3 <= uVar8) {
        lVar10 = 0;
      }
      if (*(int *)(lVar10 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar10 + 0xc) = 5;
        *(undefined1 *)(lVar10 + 0x14) = 1;
        plVar9 = (long *)plVar6[1];
      }
      uVar3 = *(uint *)(plVar9 + 0xc);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  uVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,0x11);
  lVar10 = plVar6[1];
  uVar3 = *(uint *)(lVar10 + 0x60);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar5 = *(long *)(lVar10 + 0x68) + (long)(int)(uVar8 + uVar3 * uVar4) * 0x18;
      if (*(uint *)(lVar10 + 100) <= uVar4 || uVar3 <= uVar8) {
        lVar5 = 0;
      }
      if (*(int *)(lVar5 + 0xc) == -0x80000000) {
        *(undefined4 *)(lVar5 + 0xc) = 1;
        *(undefined1 *)(lVar5 + 0x14) = 1;
        lVar10 = plVar6[1];
      }
      uVar3 = *(uint *)(lVar10 + 0x60);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  if (*(long *)puVar1 == 0) {
    free(plVar6);
  }
  else {
    plVar9 = (long *)FUN_038cb610(*(long *)puVar1,plVar6);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,plVar6);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x280) = lVar10;
  *(undefined8 *)(lVar10 + 0x98) = 0x150;
  *(undefined8 *)(lVar10 + 0xa0) = 1;
  *(undefined ***)(lVar10 + 0x88) = &PTR_LAB_04b92be8;
  *(long *)(lVar10 + 0x90) = param_1;
  plVar6 = *(long **)(param_1 + 0x280);
  *(undefined4 *)((long)plVar6 + 0x2c) = 0x80000000;
  *(undefined2 *)(plVar6 + 4) = 1;
  *(undefined4 *)((long)plVar6 + 0x24) = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  (**(code **)(*plVar6 + 0x28))(plVar6,0);
  if ((long *)plVar6[10] != plVar6 + 9) {
    lVar10 = (long)*(int *)((long)plVar6 + 0x5c);
    puVar7 = (undefined8 *)(plVar6[10] - lVar10);
    do {
      (**(code **)*puVar7)(puVar7,*(undefined4 *)((long)plVar6 + 0x24));
      puVar7 = (undefined8 *)(*(long *)((long)puVar7 + lVar10 + 8) - lVar10);
    } while (puVar7 != (undefined8 *)((long)(plVar6 + 9) - lVar10));
  }
  return;
}

