
void FUN_023fa4f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(byte *)(param_1 + 0x1900) < 4) {
    uVar4 = *(undefined4 *)(&DAT_04102280 + (long)(int)(uint)*(byte *)(param_1 + 0x1900) * 4);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    uVar4 = 2;
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0,param_2,uVar4);
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
  puVar1 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MailBoxType";
  if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_40,uVar4);
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
  local_40 = puVar1 + 0x10;
  pcStack_38 = "PlayerMailBoxOpenKeep";
  FUN_017081d0(puVar6,&local_40,6,1,0);
  return;
}

