
/* WARNING: Removing unreachable block (ram,0x03326448) */
/* WARNING: Removing unreachable block (ram,0x033263e8) */
/* WARNING: Removing unreachable block (ram,0x03326414) */
/* WARNING: Removing unreachable block (ram,0x03326484) */

void FUN_033263a0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  undefined *local_e8;
  undefined *puStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "LayoutKeyTopBG Heap";
  local_e8 = (undefined *)0x0;
  puStack_e0 = (undefined *)0x0;
  if (*param_2 != 0) {
    local_e8 = (undefined *)FUN_038c6d48(0,&local_60,*param_2,8,1,1);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  }
  *(undefined **)(param_1 + 0x380) = local_e8;
  plVar1 = (long *)(param_1 + 0x380);
  *(undefined **)(param_1 + 0x388) = puStack_e0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  uVar2 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0xf80,8);
  FUN_032d04c4(uVar2,plVar1);
  __ptr = *(void **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = uVar2;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x390);
  }
  local_e8._0_4_ = 4;
  local_c6 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  if (*(uint *)(*(long *)PTR_DAT_04bc96f8 + 0x10) < 5) {
    local_e8._0_4_ = 0;
  }
  local_e8 = (undefined *)
             (*(long *)(*(long *)PTR_DAT_04bc96f8 + 0x18) + (long)(int)local_e8 * 0x158);
  local_c8 = 0;
  puStack_e0 = &DAT_04b177a8;
  local_d8 = "SwkbdBgKeytop.bflyt";
  uStack_d0 = 0x640;
  FUN_032d0880(uVar2,&local_e8);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  *(long **)(param_1 + 0x3b0) = plVar1;
  lVar4 = param_1 + 0x398;
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0);
  FUN_032c6b2c(lVar4,4);
  FUN_032c6ccc(lVar4);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_DAT_04c4a3b0 != (undefined *)0x0) {
    puStack_e0 = PTR_DAT_04c4a3b0;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_DAT_04c4a3b8 != (undefined *)0x0) {
    puStack_e0 = PTR_DAT_04c4a3b8;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_s_ContentsUIn_04c4a3c0 != (undefined *)0x0) {
    puStack_e0 = PTR_s_ContentsUIn_04c4a3c0;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_s_ContentsUOut_04c4a3c8 != (undefined *)0x0) {
    puStack_e0 = PTR_s_ContentsUOut_04c4a3c8;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_s_ContentsIn_04c4a3d0 != (undefined *)0x0) {
    puStack_e0 = PTR_s_ContentsIn_04c4a3d0;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_s_ContentsOut_04c4a3d8 != (undefined *)0x0) {
    puStack_e0 = PTR_s_ContentsOut_04c4a3d8;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  local_70 = &DAT_04b177a8;
  puStack_68 = &DAT_0407ebb1;
  local_80 = &DAT_04b177a8;
  puStack_78 = &DAT_0407ebb1;
  puStack_e0 = &DAT_0419b684;
  if (PTR_DAT_04c4a3e0 != (undefined *)0x0) {
    puStack_e0 = PTR_DAT_04c4a3e0;
  }
  local_e8 = &DAT_04b177a8;
  local_60 = &DAT_04b177a8;
  pcStack_58 = puStack_e0;
  FUN_032c7320(lVar4,&local_e8,&local_60,&local_70,&local_80);
  FUN_032c8670(lVar4,1,0);
  *(char **)(param_1 + 0x18) = "LayoutKeyTopBG";
  if ((*(long *)(param_1 + 0x88) == 0) && (*(long *)(param_1 + 0xb8) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(long *)(param_1 + 0x98) = param_1;
    *(undefined1 **)(param_1 + 0xa0) = &LAB_03326a74;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x90) = &PTR_LAB_04b1ebf0;
    *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x90);
    lVar4 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x130);
  }
  if ((lVar4 == 0) && (*(long *)(param_1 + 0x160) == 0)) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined ***)(param_1 + 0x138) = &PTR_LAB_04b1ebf0;
    *(long *)(param_1 + 0x140) = param_1;
    *(long *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined1 **)(param_1 + 0x148) = &LAB_03326a80;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if ((*(long *)(param_1 + 0x1d8) == 0) && (*(long *)(param_1 + 0x208) == 0)) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined ***)(param_1 + 0x1e0) = &PTR_LAB_04b1ebf0;
    *(long *)(param_1 + 0x1e8) = param_1;
    *(long *)(param_1 + 0x1d8) = param_1 + 0x1e0;
    *(undefined1 **)(param_1 + 0x1f0) = &LAB_03326b68;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    lVar4 = *(long *)(param_1 + 0x280);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x280);
  }
  if ((lVar4 == 0) && (*(long *)(param_1 + 0x2b0) == 0)) {
    *(long *)(param_1 + 0x290) = param_1;
    *(undefined ***)(param_1 + 0x288) = &PTR_LAB_04b1ebf0;
    *(undefined1 **)(param_1 + 0x298) = &LAB_03326b70;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x280) = param_1 + 0x288;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if ((*(long *)(param_1 + 0x328) == 0) && (*(long *)(param_1 + 0x358) == 0)) {
    *(long *)(param_1 + 0x338) = param_1;
    *(undefined ***)(param_1 + 0x330) = &PTR_LAB_04b1ebf0;
    *(undefined1 **)(param_1 + 0x340) = &LAB_03326c70;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(long *)(param_1 + 0x328) = param_1 + 0x330;
    *(undefined8 *)(param_1 + 0x358) = 0;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 == 0) {
    *(long *)(param_1 + 0x28) = param_1 + 0x38;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  if (*(long **)(param_1 + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x388) + 0x28))();
  }
  return;
}

