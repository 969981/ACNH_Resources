
void FUN_023f0794(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_4c [12];
  undefined *local_40;
  char *pcStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  cVar3 = *(char *)(param_1 + 0x1922);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerChairBedToSWalk";
  if (((puVar5[0x227] != 0) && (lVar4 = *(long *)(puVar5[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_40,cVar3 != '\0');
    cVar3 = *(char *)(param_1 + 0x1922);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x1810) = 7;
  }
  FUN_016da654(param_1,&local_40,auStack_4c,*(undefined1 *)(param_1 + 0x1920));
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 4;
  return;
}

