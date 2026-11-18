
/* WARNING: Removing unreachable block (ram,0x03305480) */
/* WARNING: Removing unreachable block (ram,0x03305420) */
/* WARNING: Removing unreachable block (ram,0x033053ac) */
/* WARNING: Removing unreachable block (ram,0x03305338) */
/* WARNING: Removing unreachable block (ram,0x033052d8) */
/* WARNING: Removing unreachable block (ram,0x03305304) */
/* WARNING: Removing unreachable block (ram,0x03305378) */
/* WARNING: Removing unreachable block (ram,0x033053e0) */
/* WARNING: Removing unreachable block (ram,0x0330544c) */
/* WARNING: Removing unreachable block (ram,0x03305694) */

void FUN_03305290(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  void *__ptr;
  undefined8 *local_68;
  long lStack_60;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  ulong local_28;
  
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "LayoutInputMode DialogButtom Heap";
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*param_2 == 0) {
    lStack_60 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_038c6d48(0x7800,&local_50,*param_2,8,1,1);
    local_28 = local_28 & 0xffffffff00000000;
  }
  *(undefined8 *)(param_1 + 0x4d0) = uVar5;
  *(long *)(param_1 + 0x4d8) = lStack_60;
  local_50 = puVar1 + 0x10;
  pcStack_48 = "LayoutInputMode SelectBoxMono Heap";
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*param_2 == 0) {
    lStack_60 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_038c6d48(0x4b000,&local_50,*param_2,8,1,1);
    local_28 = local_28 & 0xffffffff00000000;
  }
  *(undefined8 *)(param_1 + 0x4e0) = uVar5;
  *(long *)(param_1 + 0x4e8) = lStack_60;
  local_50 = puVar1 + 0x10;
  pcStack_48 = "LayoutInputMode SelectBoxMulti Heap";
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*param_2 != 0) {
    local_68 = (undefined8 *)FUN_038c6d48(0x4b000,&local_50,*param_2,8,1,1);
    local_28 = local_28 & 0xffffffff00000000;
  }
  *(long *)(param_1 + 0x4f8) = lStack_60;
  *(undefined8 **)(param_1 + 0x4f0) = local_68;
  *(char **)(param_1 + 0x18) = "LayoutInputMode";
  if ((*(long *)(param_1 + 0x88) == 0) && (*(long *)(param_1 + 0xb8) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(long *)(param_1 + 0x98) = param_1;
    *(undefined1 **)(param_1 + 0xa0) = &LAB_033067ac;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x90) = &PTR_LAB_04b1dc88;
    *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x90);
    lVar8 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x130);
  }
  if ((lVar8 == 0) && (*(long *)(param_1 + 0x160) == 0)) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined ***)(param_1 + 0x138) = &PTR_LAB_04b1dc88;
    *(long *)(param_1 + 0x140) = param_1;
    *(long *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined1 **)(param_1 + 0x148) = &LAB_033067b0;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if ((*(long *)(param_1 + 0x1d8) == 0) && (*(long *)(param_1 + 0x208) == 0)) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined ***)(param_1 + 0x1e0) = &PTR_LAB_04b1dc88;
    *(long *)(param_1 + 0x1e8) = param_1;
    *(long *)(param_1 + 0x1d8) = param_1 + 0x1e0;
    *(undefined1 **)(param_1 + 0x1f0) = &LAB_033070b0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    lVar8 = *(long *)(param_1 + 0x280);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x280);
  }
  if ((lVar8 == 0) && (*(long *)(param_1 + 0x2b0) == 0)) {
    *(long *)(param_1 + 0x290) = param_1;
    *(undefined ***)(param_1 + 0x288) = &PTR_LAB_04b1dc88;
    *(undefined1 **)(param_1 + 0x298) = &LAB_033070b4;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x280) = param_1 + 0x288;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if ((*(long *)(param_1 + 0x328) == 0) && (*(long *)(param_1 + 0x358) == 0)) {
    *(long *)(param_1 + 0x338) = param_1;
    *(undefined ***)(param_1 + 0x330) = &PTR_LAB_04b1dc88;
    *(undefined1 **)(param_1 + 0x340) = &LAB_033071b0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(long *)(param_1 + 0x328) = param_1 + 0x330;
    *(undefined8 *)(param_1 + 0x358) = 0;
    lVar8 = *(long *)(param_1 + 0x3d0);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x3d0);
  }
  if ((lVar8 == 0) && (*(long *)(param_1 + 0x400) == 0)) {
    *(long *)(param_1 + 0x3e0) = param_1;
    *(undefined ***)(param_1 + 0x3d8) = &PTR_LAB_04b1dc88;
    *(undefined1 **)(param_1 + 1000) = &LAB_03307ac8;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(long *)(param_1 + 0x3d0) = param_1 + 0x3d8;
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  if ((*(long *)(param_1 + 0x478) == 0) && (*(long *)(param_1 + 0x4a8) == 0)) {
    *(long *)(param_1 + 0x488) = param_1;
    *(undefined ***)(param_1 + 0x480) = &PTR_LAB_04b1dc88;
    *(undefined1 **)(param_1 + 0x490) = &LAB_03307acc;
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(long *)(param_1 + 0x478) = param_1 + 0x480;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    *(long *)(param_1 + 0x28) = param_1 + 0x38;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  local_68 = (undefined8 *)((ulong)local_68 & 0xffffffff00000000);
  plVar6 = *(long **)(param_1 + 0x4d0);
  uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,0xb28,8);
  FUN_0329a604();
  __ptr = *(void **)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = uVar5;
  if (__ptr != (void *)0x0) {
    FUN_0329a9f8(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x508);
  }
  local_58 = param_1 + 0x540;
  lStack_60 = *(long *)PTR_DAT_04bc8e90 + 0x88;
  local_68 = (undefined8 *)(param_1 + 0x4d0);
  FUN_03299ce0(uVar5,&local_68);
  puVar1 = PTR_DAT_04bc8e68;
  local_28 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x508) + 0x28) + 0xf0) + 0x18);
  local_50 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_48 = "P_DummyBgMask";
  plVar6 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
  puVar3 = PTR_DAT_04bc8f38;
  puVar2 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0))
  {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
  if (puVar7 != (undefined8 *)puVar2) {
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar2 && puVar7 != (undefined8 *)0x0);
  }
  local_50 = puVar1 + 0x10;
  *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfe;
  local_28 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x508) + 0x28) + 0xf0) + 0x18);
  pcStack_48 = "P_Shdw";
  plVar6 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
  if (puVar7 != (undefined8 *)puVar2) {
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar2 && puVar7 != (undefined8 *)0x0);
  }
  *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfe;
  *(undefined1 *)(*(long *)(param_1 + 0x508) + 0xb20) = 0;
  return;
}

