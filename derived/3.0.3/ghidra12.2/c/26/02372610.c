
void FUN_02372610(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerLowerBodyWaitAnimType";
  uVar1 = *(int *)(param_1 + 0x1810) - 2;
  if (uVar1 < 7) {
    uVar4 = *(undefined4 *)(&DAT_0417a870 + (long)(int)uVar1 * 4);
  }
  else {
    uVar4 = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_30,uVar4);
  }
  return;
}

