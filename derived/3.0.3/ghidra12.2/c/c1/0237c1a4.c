
void FUN_0237c1a4(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x1901);
  bVar2 = *(byte *)(param_1 + 0x1900);
  if (2 < bVar2) {
    bVar2 = 0;
  }
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar3 != 0) {
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
     (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_0549c190,bVar2);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (cVar1 == '\0') {
    pcStack_38 = "PlayerCurtainClose";
  }
  else {
    pcStack_38 = "PlayerCurtainOpen";
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar6,&local_40,6,0,0);
  return;
}

