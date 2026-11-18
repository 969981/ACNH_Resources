
/* WARNING: Removing unreachable block (ram,0x032fe278) */
/* WARNING: Removing unreachable block (ram,0x032fdfb8) */
/* WARNING: Removing unreachable block (ram,0x032fde98) */
/* WARNING: Removing unreachable block (ram,0x032fdbec) */
/* WARNING: Removing unreachable block (ram,0x032fdb88) */
/* WARNING: Removing unreachable block (ram,0x032fdb18) */
/* WARNING: Removing unreachable block (ram,0x032fdaec) */
/* WARNING: Removing unreachable block (ram,0x032fdb4c) */
/* WARNING: Removing unreachable block (ram,0x032fdbb4) */
/* WARNING: Removing unreachable block (ram,0x032fdc64) */
/* WARNING: Removing unreachable block (ram,0x032fdf24) */
/* WARNING: Removing unreachable block (ram,0x032fe24c) */
/* WARNING: Removing unreachable block (ram,0x032fe2b0) */

void FUN_032fdaa0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  undefined *local_70;
  char *pcStack_68;
  ulong local_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "KeyTopManager Fixed Heap";
  local_60 = 0;
  uStack_58 = 0;
  if (*param_2 != 0) {
    local_60 = FUN_038c6d48(0,&local_70,*param_2,8,1,1);
  }
  *(ulong *)(param_1 + 0x4d0) = local_60;
  plVar1 = (long *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d8) = uStack_58;
  local_60 = local_60 & 0xffffffff00000000;
  puVar5 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x30,8);
  local_60 = local_60 & 0xffffffff00000000;
  lVar7 = *plVar1;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_03291da0(puVar5,lVar7,1);
  *(undefined8 **)(param_1 + 0x17e8) = puVar5;
  puVar4 = PTR_DAT_04bc96a8;
  local_60 = local_60 & 0xffffffff00000000;
  pvVar8 = *(void **)PTR_DAT_04bc96a8;
  if (pvVar8 == (void *)0x0) {
    plVar9 = (long *)*plVar1;
    pvVar8 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0xb52f0,8);
    memset(pvVar8,0,0xb52ea);
    *(void **)puVar4 = pvVar8;
    DAT_05730fd0 = plVar9;
  }
  FUN_032ef174(pvVar8,plVar1);
  local_60 = local_60 & 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x1a60) = 0;
  puVar5 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x16f0,8);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  memset(puVar5 + 0xda,0,0x1004);
  lVar7 = 0;
  do {
    lVar2 = lVar7 + 0x20;
    *(undefined4 *)((long)puVar5 + lVar7 + 0x6e0) = 0;
    *(undefined1 *)((long)puVar5 + lVar7 + 0x6dc) = 0;
    *(undefined8 *)((long)puVar5 + lVar7 + 0x6d4) = 0;
    *(undefined4 *)((long)puVar5 + lVar7 + 0x6f0) = 0;
    *(undefined1 *)((long)puVar5 + lVar7 + 0x6ec) = 0;
    *(undefined8 *)((long)puVar5 + lVar7 + 0x6e4) = 0;
    lVar7 = lVar2;
  } while (lVar2 != 0x1000);
  *(undefined4 *)(puVar5 + 0x2dd) = 0;
  *(undefined1 *)((long)puVar5 + 0x16ec) = 0;
  *(undefined4 *)((long)puVar5 + 0x16d4) = 0x4110411;
  *(undefined4 *)(puVar5 + 0xda) = 0;
  memset(puVar5 + 6,0,0x4a0);
  puVar5[0x2db] = 0;
  puVar5[0x9a] = 0xf0f0f0f0f0f0f0f;
  puVar5[0x9b] = 0xf0f0f0f0f0f0f0f;
  puVar5[0x9c] = 0xf0f0f0f0f0f0f0f;
  puVar5[0x9d] = 0xf0f0f0f0f0f0f0f;
  puVar5[0x9e] = 0xf0f0f0f0f0f0f0f;
  puVar5[0x9f] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa0] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa1] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa2] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa3] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa4] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa5] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa6] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa7] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa8] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xa9] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xaa] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xab] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xac] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xad] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xae] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xaf] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb0] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb1] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb2] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb3] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb4] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb5] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb6] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb7] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb8] = 0xf0f0f0f0f0f0f0f;
  puVar5[0xb9] = 0xf0f0f0f0f0f0f0f;
  *(undefined8 *)((long)puVar5 + 0x16dd) = 0;
  puVar5[0xd9] = 0x505050505050505;
  puVar5[0xd8] = 0x505050505050505;
  puVar5[0xd7] = 0x505050505050505;
  puVar5[0xd6] = 0x505050505050505;
  puVar5[0xd5] = 0x505050505050505;
  puVar5[0xd4] = 0x505050505050505;
  puVar5[0xd3] = 0x505050505050505;
  puVar5[0xd2] = 0x505050505050505;
  puVar5[0xd1] = 0x505050505050505;
  puVar5[0xd0] = 0x505050505050505;
  puVar5[0xcf] = 0x505050505050505;
  puVar5[0xce] = 0x505050505050505;
  puVar5[0xcd] = 0x505050505050505;
  puVar5[0xcc] = 0x505050505050505;
  puVar5[0xcb] = 0x505050505050505;
  puVar5[0xca] = 0x505050505050505;
  puVar5[0xc9] = 0x505050505050505;
  puVar5[200] = 0x505050505050505;
  puVar5[199] = 0x505050505050505;
  puVar5[0xc6] = 0x505050505050505;
  puVar5[0xc5] = 0x505050505050505;
  puVar5[0xc4] = 0x505050505050505;
  puVar5[0xc3] = 0x505050505050505;
  puVar5[0xc2] = 0x505050505050505;
  puVar5[0xc1] = 0x505050505050505;
  puVar5[0xc0] = 0x505050505050505;
  puVar5[0xbf] = 0x505050505050505;
  puVar5[0xbe] = 0x505050505050505;
  puVar5[0xbd] = 0x505050505050505;
  puVar5[0xbc] = 0x505050505050505;
  puVar5[0xbb] = 0x505050505050505;
  puVar5[0xba] = 0x505050505050505;
  puVar4 = PTR_DAT_04bb2698;
  pvVar8 = *(void **)(param_1 + 0x17f8);
  *(undefined8 **)(param_1 + 0x17f8) = puVar5;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar4,pvVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar8);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x17f8);
  }
  nn::hid::InitializeKeyboard();
  FUN_032e6374(puVar5);
  *(undefined1 *)(puVar5 + 0x2db) = 1;
  *(undefined1 *)((long)puVar5 + 0x16da) = 1;
  local_60 = local_60 & 0xffffffff00000000;
  uVar6 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x3f8,8);
  FUN_0332600c(uVar6,plVar1);
  pvVar8 = *(void **)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = uVar6;
  if (pvVar8 != (void *)0x0) {
    FUN_0332616c(pvVar8);
    if (*(long *)puVar4 == 0) {
      free(pvVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar4,pvVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar8);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x528);
  }
  FUN_033263a0(uVar6,plVar1);
  local_60 = local_60 & 0xffffffff00000000;
  lVar7 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x718,8);
  FUN_03304d54(lVar7,plVar1);
  pvVar8 = *(void **)(param_1 + 0x518);
  *(long *)(param_1 + 0x518) = lVar7;
  if (pvVar8 != (void *)0x0) {
    FUN_03305008(pvVar8);
    if (*(long *)puVar4 == 0) {
      free(pvVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar4,pvVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar8);
      }
    }
    lVar7 = *(long *)(param_1 + 0x518);
  }
  *(undefined8 *)(lVar7 + 0x500) = *(undefined8 *)(param_1 + 0x528);
  FUN_03305290(*(undefined8 *)(param_1 + 0x518),plVar1);
  local_60 = local_60 & 0xffffffff00000000;
  lVar7 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x1788,8);
  FUN_0335a080(lVar7,plVar1);
  pvVar8 = *(void **)(param_1 + 0x520);
  *(long *)(param_1 + 0x520) = lVar7;
  if (pvVar8 != (void *)0x0) {
    FUN_0335a294(pvVar8);
    if (*(long *)puVar4 == 0) {
      free(pvVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar4,pvVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar8);
      }
    }
    lVar7 = *(long *)(param_1 + 0x520);
  }
  *(undefined8 *)(lVar7 + 0x3a8) = *(undefined8 *)(param_1 + 0x17e8);
  *(undefined8 *)(*(long *)(param_1 + 0x520) + 0x3b0) = *(undefined8 *)(param_1 + 0x17f0);
  *(undefined8 *)(*(long *)(param_1 + 0x520) + 0x2f8) = *(undefined8 *)(param_1 + 0x528);
  FUN_0335b640(*(undefined8 *)(param_1 + 0x520),plVar1);
  *(long *)(*(long *)(param_1 + 0x520) + 8) = param_1 + 0x6e8;
  *(char **)(param_1 + 0x18) = "KeyTopManager";
  if ((*(long *)(param_1 + 0x88) == 0) && (*(long *)(param_1 + 0xb8) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(long *)(param_1 + 0x98) = param_1;
    *(undefined1 **)(param_1 + 0xa0) = &LAB_03301f60;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x90) = &PTR_LAB_04b1d900;
    *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x90);
    lVar7 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x130);
  }
  if ((lVar7 == 0) && (*(long *)(param_1 + 0x160) == 0)) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined ***)(param_1 + 0x138) = &PTR_LAB_04b1d900;
    *(long *)(param_1 + 0x140) = param_1;
    *(long *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined1 **)(param_1 + 0x148) = &LAB_03301f64;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if ((*(long *)(param_1 + 0x1d8) == 0) && (*(long *)(param_1 + 0x208) == 0)) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined ***)(param_1 + 0x1e0) = &PTR_LAB_04b1d900;
    *(long *)(param_1 + 0x1e8) = param_1;
    *(long *)(param_1 + 0x1d8) = param_1 + 0x1e0;
    *(undefined1 **)(param_1 + 0x1f0) = &LAB_03301fd0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    lVar7 = *(long *)(param_1 + 0x280);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x280);
  }
  if ((lVar7 == 0) && (*(long *)(param_1 + 0x2b0) == 0)) {
    *(long *)(param_1 + 0x290) = param_1;
    *(undefined ***)(param_1 + 0x288) = &PTR_LAB_04b1d900;
    *(undefined1 **)(param_1 + 0x298) = &LAB_03302128;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x280) = param_1 + 0x288;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if ((*(long *)(param_1 + 0x328) == 0) && (*(long *)(param_1 + 0x358) == 0)) {
    *(long *)(param_1 + 0x338) = param_1;
    *(undefined ***)(param_1 + 0x330) = &PTR_LAB_04b1d900;
    *(undefined1 **)(param_1 + 0x340) = &LAB_03302194;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(long *)(param_1 + 0x328) = param_1 + 0x330;
    *(undefined8 *)(param_1 + 0x358) = 0;
    lVar7 = *(long *)(param_1 + 0x3d0);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x3d0);
  }
  if ((lVar7 == 0) && (*(long *)(param_1 + 0x400) == 0)) {
    *(long *)(param_1 + 0x3e0) = param_1;
    *(undefined ***)(param_1 + 0x3d8) = &PTR_LAB_04b1d900;
    *(undefined1 **)(param_1 + 1000) = &LAB_0330231c;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(long *)(param_1 + 0x3d0) = param_1 + 0x3d8;
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  if ((*(long *)(param_1 + 0x478) == 0) && (*(long *)(param_1 + 0x4a8) == 0)) {
    *(long *)(param_1 + 0x488) = param_1;
    *(undefined ***)(param_1 + 0x480) = &PTR_LAB_04b1d900;
    *(undefined1 **)(param_1 + 0x490) = &LAB_03302830;
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(long *)(param_1 + 0x478) = param_1 + 0x480;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    lVar7 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  if (lVar7 == 0) {
    *(long *)(param_1 + 0x28) = param_1 + 0x38;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  if (*(long **)(param_1 + 0x4d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4d8) + 0x28))();
  }
  local_70 = puVar3 + 0x10;
  pcStack_68 = "KeyTopManager Heap";
  local_60 = 0;
  uStack_58 = 0;
  if (*param_2 == 0) {
    uStack_58 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_038c6d48(0xc8000,&local_70,*param_2,8,1,1);
  }
  *(undefined8 *)(param_1 + 0x4e0) = uVar6;
  *(undefined8 *)(param_1 + 0x4e8) = uStack_58;
  return;
}

