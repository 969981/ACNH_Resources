
void FUN_016da654(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_24;
  
  if (param_1 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    local_24 = param_4;
    if (puVar4 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    puVar1 = PTR_DAT_04bb2020;
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "MoveLocalDirection";
    if (((puVar4[0x227] != 0) && (lVar5 = *(long *)(puVar4[0x227] + 0x78), lVar5 != 0)) &&
       (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_38,local_24);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    local_38 = puVar1 + 0x10;
    pcStack_30 = "CommonBedOut";
    FUN_017081d0(puVar4,&local_38,6,0,0);
  }
  return;
}

