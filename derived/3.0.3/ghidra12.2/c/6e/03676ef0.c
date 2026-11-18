
void FUN_03676ef0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  piVar1 = (int *)(param_1 + 0x8b00);
  puVar2 = (uint *)(param_1 + 0x88b0);
  if (*(long *)(param_1 + 0x2e0) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2e0) + 0x10) = 0;
  }
  if (*puVar2 != 0xffffffff) {
    (*(code *)(&PTR_LAB_04b42be8)[*puVar2])(&uStack_32,param_1 + 800);
  }
  iVar3 = *piVar1;
  *puVar2 = 0;
  while (0 < iVar3) {
    plVar4 = *(long **)(param_1 + 0x8b08);
    lVar6 = *plVar4;
    memmove(plVar4,plVar4 + 1,(long)(iVar3 * 8 + -8));
    *piVar1 = *piVar1 + -1;
    if (lVar6 == 0) break;
    (**(code **)(**(long **)(param_1 + 0x8af8) + 0x38))(*(long **)(param_1 + 0x8af8),lVar6);
    iVar3 = *piVar1;
  }
  *(undefined8 *)(param_1 + 0x8af8) = 0;
  FUN_0367fbc4(param_1 + 0x88d0);
  *(undefined ***)(param_1 + 0x8a70) = &PTR_LAB_04bb1ab8;
  if (*(char *)(param_1 + 0x8ab8) != '\0') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x8ac0));
    *(undefined1 *)(param_1 + 0x8ab8) = 0;
  }
  *(undefined ***)(param_1 + 0x89f8) = &PTR_LAB_04bb1ab8;
  if (*(char *)(param_1 + 0x8a40) != '\0') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x8a48));
    *(undefined1 *)(param_1 + 0x8a40) = 0;
  }
  if (*(char *)(param_1 + 0x8908) != '\0') {
    nn::mem::StandardAllocator::Finalize();
  }
  plVar4 = *(long **)(param_1 + 0x88c0);
  *(undefined8 *)(param_1 + 0x88c0) = 0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 0xb6) = 1;
    *(undefined4 *)(plVar4 + 0x8a) = 1;
    FUN_04002c24(plVar4 + 0x3d);
    nn::audio::StopAudioOut((AudioOut *)(plVar4 + 1));
    nn::audio::CloseAudioOut((AudioOut *)(plVar4 + 1));
    if (plVar4[0x95] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
    }
    if (plVar4[0x96] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*puVar2 != 0xffffffff) {
    (*(code *)(&PTR_LAB_04b42be8)[*puVar2])(&uStack_31,param_1 + 800);
  }
  *puVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 0x2f0) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 0x18))
              (*(long **)(param_1 + 0x2f8),*(undefined8 *)(param_1 + 0x300));
  }
  plVar4 = *(long **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 0x69) = (int)plVar4[0x69] + 1;
    if ((int)plVar4[0xc6] != 0) {
      FUN_03fffbc0(plVar4 + 0x4f);
    }
    plVar4[0x68] = 0;
    plVar4[0x58] = 0;
    plVar4[0x59] = 0;
    plVar4[0x60] = 0;
    plVar4[0x61] = 0;
    plVar4[0x50] = 0;
    plVar4[0x51] = 0;
    if (plVar4[99] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
      plVar4[99] = 0;
    }
    if (plVar4[3] != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[3] = 0;
    }
    *(undefined1 *)(plVar4 + 0x10) = 0;
    (**(code **)(*plVar4 + 0x68))(plVar4);
  }
  plVar4 = *(long **)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (plVar4 != (long *)0x0) {
    FUN_03671840(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  plVar5 = *(long **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  plVar4 = DAT_05b059a0;
  if (plVar5 != (long *)0x0) {
    puVar7 = (undefined8 *)plVar5[5];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar7);
    }
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_036803b0(param_1 + 0xa8);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  FUN_0367c540(param_1);
  return;
}

