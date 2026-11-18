
/* WARNING: Removing unreachable block (ram,0x03346118) */
/* WARNING: Removing unreachable block (ram,0x03345b10) */
/* WARNING: Removing unreachable block (ram,0x03345ab0) */
/* WARNING: Removing unreachable block (ram,0x03345adc) */
/* WARNING: Removing unreachable block (ram,0x03345b54) */
/* WARNING: Removing unreachable block (ram,0x0334624c) */

void FUN_03345a60(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  void *pvVar16;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  long lStack_198;
  code *local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined1 local_9d;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "LayoutTextAreaMsgCard Fixed Heap";
  local_1b0 = (undefined *)0x0;
  local_1a8 = (long *)0x0;
  if (*param_2 != 0) {
    local_1b0 = (undefined *)FUN_038c6d48(0,&local_78,*param_2,8,1,1);
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  }
  *(undefined **)(param_1 + 0x2e8) = local_1b0;
  plVar1 = (long *)(param_1 + 0x2e8);
  *(long **)(param_1 + 0x2f0) = local_1a8;
  local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffffff00000000);
  *(undefined4 *)(param_1 + 0x20d8) = *(undefined4 *)(param_3 + 0x3b8);
  uVar9 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0xf80,8);
  FUN_032d04c4(uVar9,plVar1);
  pvVar16 = *(void **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar16 != (void *)0x0) {
    FUN_032d0688(pvVar16);
    if (*(long *)puVar2 == 0) {
      free(pvVar16);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar2,pvVar16);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar16);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x2f8);
  }
  puVar2 = PTR_DAT_04bc8e68;
  local_1b0._0_4_ = 4;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = (undefined8 *)0x0;
  local_190 = (code *)((ulong)local_190 & 0xffffffffff000000);
  if (*(uint *)(*(long *)PTR_DAT_04bc96f8 + 0x10) < 5) {
    local_1b0._0_4_ = 0;
  }
  local_1b0 = (undefined *)
              (*(long *)(*(long *)PTR_DAT_04bc96f8 + 0x18) + (long)(int)local_1b0 * 0x158);
  local_1a8 = (long *)(PTR_DAT_04bc8e68 + 0x10);
  local_1a0 = (undefined **)0x40695b2;
  lStack_198 = 0x640;
  FUN_032d0880(uVar9,&local_1b0);
  if (local_170 != (undefined8 *)0x0) {
    (**(code **)*local_170)();
  }
  puVar4 = PTR_DAT_04bb2120;
  lVar15 = *(long *)(*(long *)(param_1 + 0x2f8) + 0xf0);
  pcVar6 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar6 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar6 != '\0') {
    local_1b0 = puVar2 + 0x10;
    local_1a8 = (long *)pcVar6;
    lVar15 = FUN_032cb8e0(&local_78,&local_1b0,lVar15);
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0xe8);
    }
  }
  *(long **)(param_1 + 0x3d8) = plVar1;
  lVar11 = param_1 + 0x3c0;
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0xf0);
  FUN_032c6b2c(lVar11,1);
  FUN_032c6ccc(lVar11);
  puVar2 = puVar2 + 0x10;
  local_1a8 = (long *)&DAT_040a4215;
  pcStack_70 = "In";
  puStack_80 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_1b0 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  local_78 = puVar2;
  FUN_032c7320(lVar11,&local_1b0,&local_78,&local_88,&local_98);
  FUN_032c83b0(lVar11,0,0);
  *(undefined1 *)(param_1 + 0x17f1) = 0;
  lVar11 = FUN_00369da0(*(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0xf0),"TextAreaPos");
  if (lVar11 != 0) {
    *(long **)(param_1 + 0x430) = plVar1;
    lVar11 = param_1 + 0x418;
    *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0xf0);
    FUN_032c6b2c(lVar11,1);
    FUN_032c6ccc(lVar11);
    local_1a8 = (long *)0x407e084;
    pcStack_70 = "TextAreaPos";
    puStack_80 = &DAT_0407ebb1;
    puStack_90 = &DAT_0407ebb1;
    local_1b0 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    local_78 = puVar2;
    FUN_032c7320(lVar11,&local_1b0,&local_78,&local_88,&local_98);
    *(undefined1 *)(param_1 + 0x17f1) = 1;
  }
  lVar11 = FUN_00369da0(*(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0xf0),&DAT_040d0d96);
  puVar2 = PTR_DAT_04bc8e68;
  if (lVar11 != 0) {
    local_1b0 = PTR_DAT_04bc8e68 + 0x10;
    local_1a8 = (long *)&DAT_040d0d96;
    pcStack_70 = "Err";
    puStack_80 = &DAT_0407ebb1;
    local_88 = local_1b0;
    local_78 = local_1b0;
    FUN_032c5a90(param_1 + 0x470,*(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0xf0),&local_1b0,
                 &local_78,&local_88);
  }
  local_9d = 0;
  puVar5 = (undefined *)((long)&local_1a0 + 4);
  local_1a0._0_5_ = 0x100;
  puVar3 = PTR_DAT_04bb21f8 + 0x10;
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",0);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  puVar2 = puVar2 + 0x10;
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x330) = uVar9;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
  local_9d = 0;
  local_1a0._0_5_ = 0x100;
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",1);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x338) = uVar9;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0xffffffff;
  local_9d = 0;
  local_1a0._0_5_ = 0x100;
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",2);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x340) = uVar9;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0xffffffff;
  local_9d = 0;
  local_1a0._0_5_ = 0x100;
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",3);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x348) = uVar9;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0xffffffff;
  local_9d = 0;
  local_1a0._0_5_ = 0x100;
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",4);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x350) = uVar9;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  local_9d = 0;
  local_1a0 = (undefined **)CONCAT35(local_1a0._5_3_,0x100);
  local_1b0 = puVar3;
  local_1a8 = (long *)puVar5;
  FUN_038d1270(&local_1b0,"P_UnFixed_%02d",5);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  local_88 = *(undefined **)(lVar15 + 0x18);
  pcStack_70 = puVar4;
  if (local_1a8 != (long *)0x0) {
    pcStack_70 = (char *)local_1a8;
  }
  local_78 = puVar2;
  uVar9 = FUN_032a2940(&local_88,&local_78,0);
  *(undefined8 *)(param_1 + 0x358) = uVar9;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  local_78 = *(undefined **)(lVar15 + 0x18);
  local_1a8 = (long *)0x4073c40;
  local_1b0 = puVar2;
  plVar10 = (long *)FUN_032d3050(&local_78,local_78,&local_1b0);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar8 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar2 = PTR_DAT_04bb2698;
  if (plVar10 == (long *)0x0) {
LAB_033460f8:
    plVar10 = (long *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar12 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)PTR_DAT_04bc8f30 && puVar12 != (undefined8 *)0x0);
      if (puVar12 == (undefined8 *)0x0) goto LAB_033460f8;
    }
  }
  *(long **)(param_1 + 0x3a8) = plVar10;
  local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x70,8);
  puVar12[10] = 0;
  *(undefined4 *)(puVar12 + 0xb) = 0;
  puVar12[0xc] = 0;
  *(undefined1 *)(puVar12 + 0xd) = 0;
  puVar12[8] = 0;
  *(undefined4 *)(puVar12 + 9) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  pvVar16 = *(void **)(param_1 + 0x3b8);
  *(undefined8 **)(param_1 + 0x3b8) = puVar12;
  if (pvVar16 != (void *)0x0) {
    FUN_03359a7c(pvVar16);
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      free(pvVar16);
    }
    else {
      plVar10 = (long *)FUN_038cb610(lVar15,pvVar16);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar16);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x3b8);
  }
  FUN_03359b44(puVar12,plVar1);
  FUN_032c8150(0x40000000,*(long *)(param_1 + 0x3b8) + 0x18,1,1);
  lVar15 = *(long *)(param_1 + 0x2f8);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x3b8) + 0x10);
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    plVar10 = *(long **)(*(long *)(lVar15 + 0xf0) + 0x18);
  }
  else {
    local_1b0 = PTR_DAT_04bc8e68 + 0x10;
    local_1a8 = (long *)*(char **)(PTR_PTR_04bb2238 + 8);
    plVar10 = (long *)FUN_032cb8e0(&local_78,&local_1b0,*(undefined8 *)(lVar15 + 0xf0));
  }
  uVar13 = (**(code **)(*plVar10 + 0x60))(plVar10,"N_TextArea_00",1);
  FUN_032d1c90(lVar15,uVar9,uVar13);
  local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x220,8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  *(undefined8 *)((long)puVar12 + 0x4d) = 0;
  puVar3 = PTR_DAT_04bc8e60;
  puVar4 = PTR_DAT_04bc8e60 + 0x10;
  puVar12[0xb] = puVar4;
  puVar12[0xc] = 0;
  puVar12[0x11] = puVar4;
  puVar12[0x12] = 0;
  puVar12[0x17] = puVar4;
  puVar12[0x18] = 0;
  puVar12[0x1d] = puVar4;
  puVar12[0x1e] = 0;
  puVar12[0x23] = puVar4;
  puVar12[0x24] = 0;
  puVar7 = PTR_DAT_04bc8f88;
  puVar5 = PTR_DAT_04bc8f88 + 0x10;
  puVar12[0x41] = 0;
  puVar12[0x29] = puVar5;
  puVar12[0x2a] = 0;
  puVar12[0x2f] = puVar5;
  puVar12[0x30] = 0;
  puVar12[0x35] = puVar5;
  puVar12[0x36] = 0;
  puVar12[0x3b] = puVar5;
  puVar12[0x3c] = 0;
  *(undefined8 *)((long)puVar12 + 0x217) = 0;
  puVar12[0x42] = 0;
  *(undefined4 *)(puVar12 + 0x43) = 1;
  local_1b0 = (undefined *)CONCAT44((int)((ulong)local_1b0 >> 0x20),6);
  *(undefined2 *)(puVar12 + 10) = 0x41;
  *(undefined2 *)((long)puVar12 + 0x53) = 0x50f;
  pvVar16 = *(void **)(param_1 + 0x20c0);
  *(undefined8 **)(param_1 + 0x20c0) = puVar12;
  if (pvVar16 != (void *)0x0) {
    FUN_032c1b04(pvVar16);
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) {
      free(pvVar16);
    }
    else {
      plVar10 = (long *)FUN_038cb610(lVar15,pvVar16);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar16);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x20c0);
  }
  local_1a8 = &local_1a0;
  local_1a0 = &PTR_LAB_04b1fa90;
  local_190 = FUN_03346644;
  local_188 = 0;
  plVar10 = (long *)puVar12[0x18];
  local_1b0 = puVar4;
  lStack_198 = param_1;
  if (plVar10 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b1fa90;
LAB_033463ac:
    uVar9 = (*(code *)ppuVar14[3])(local_1a8,puVar12 + 0x19);
    puVar12[0x18] = uVar9;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 8))();
    }
  }
  else {
    (**(code **)(*plVar10 + 8))(plVar10);
    if (local_1a8 != (long *)0x0) {
      ppuVar14 = (undefined **)*local_1a8;
      goto LAB_033463ac;
    }
    puVar12[0x18] = 0;
  }
  lVar15 = *(long *)(param_1 + 0x20c0);
  local_1b0 = puVar3 + 0x10;
  local_1a8 = &local_1a0;
  local_190 = (code *)&LAB_0334669c;
  local_188 = 0;
  plVar10 = *(long **)(lVar15 + 0xf0);
  local_1a0 = &PTR_LAB_04b1fa90;
  if (plVar10 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b1fa90;
    lStack_198 = param_1;
LAB_0334642c:
    uVar9 = (*(code *)ppuVar14[3])(local_1a8,lVar15 + 0xf8);
    *(undefined8 *)(lVar15 + 0xf0) = uVar9;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 8))();
    }
  }
  else {
    lStack_198 = param_1;
    (**(code **)(*plVar10 + 8))(plVar10);
    if (local_1a8 != (long *)0x0) {
      ppuVar14 = (undefined **)*local_1a8;
      goto LAB_0334642c;
    }
    *(undefined8 *)(lVar15 + 0xf0) = 0;
  }
  lVar15 = *(long *)(param_1 + 0x20c0);
  local_1b0 = puVar7 + 0x10;
  local_1a8 = &local_1a0;
  local_190 = (code *)&LAB_03346768;
  local_188 = 0;
  ppuVar14 = &PTR_LAB_04b1fb18;
  local_1a0 = &PTR_LAB_04b1fb18;
  plVar10 = *(long **)(lVar15 + 0x150);
  lStack_198 = param_1;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    if (local_1a8 == (long *)0x0) {
      *(undefined8 *)(lVar15 + 0x150) = 0;
      goto LAB_033464dc;
    }
    ppuVar14 = (undefined **)*local_1a8;
  }
  uVar9 = (*(code *)ppuVar14[3])(local_1a8,lVar15 + 0x158);
  *(undefined8 *)(lVar15 + 0x150) = uVar9;
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 8))();
  }
LAB_033464dc:
  *(char **)(param_1 + 0x28) = "LayoutTextAreaMsgCard";
  if ((*(long *)(param_1 + 0x98) == 0) && (*(long *)(param_1 + 200) == 0)) {
    *(undefined8 *)(param_1 + 0xa0) = &PTR_LAB_04b1fa90;
    *(long *)(param_1 + 0xa8) = param_1;
    *(undefined1 **)(param_1 + 0xb0) = &LAB_03348ac0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 **)(param_1 + 0x98) = (undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 200) = 0;
    lVar15 = *(long *)(param_1 + 0x140);
  }
  else {
    lVar15 = *(long *)(param_1 + 0x140);
  }
  if ((lVar15 == 0) && (*(long *)(param_1 + 0x170) == 0)) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined ***)(param_1 + 0x148) = &PTR_LAB_04b1fa90;
    *(long *)(param_1 + 0x150) = param_1;
    *(long *)(param_1 + 0x140) = param_1 + 0x148;
    *(undefined1 **)(param_1 + 0x158) = &LAB_03348ad0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if ((*(long *)(param_1 + 0x1e8) == 0) && (*(long *)(param_1 + 0x218) == 0)) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(long *)(param_1 + 0x1f8) = param_1;
    *(undefined1 **)(param_1 + 0x200) = &LAB_03348f34;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(long *)(param_1 + 0x1e8) = param_1 + 0x1f0;
    *(undefined ***)(param_1 + 0x1f0) = &PTR_LAB_04b1fa90;
    lVar15 = *(long *)(param_1 + 0x290);
  }
  else {
    lVar15 = *(long *)(param_1 + 0x290);
  }
  if ((lVar15 == 0) && (*(long *)(param_1 + 0x2c0) == 0)) {
    *(undefined ***)(param_1 + 0x298) = &PTR_LAB_04b1fa90;
    *(long *)(param_1 + 0x2a0) = param_1;
    *(undefined1 **)(param_1 + 0x2a8) = &LAB_03348f90;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(long *)(param_1 + 0x38) = param_1 + 0x48;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x28))();
  }
  return;
}

