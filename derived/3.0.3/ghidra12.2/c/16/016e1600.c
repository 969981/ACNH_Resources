
void FUN_016e1600(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined2 local_28 [2];
  undefined4 local_24;
  
  plVar2 = (long *)param_1[0xc];
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  uVar3 = (**(code **)(*plVar2 + 0x100))();
  if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*param_1 + 0x160))(param_1), (uVar3 & 1) != 0)) {
    local_28[0] = 0;
    FUN_016e1780(param_1,local_28);
  }
  puVar6 = (undefined8 *)param_1[0xc];
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_24 = 3;
  if ((*(uint *)((long)puVar6 + 0x15f4) >> 3 & 1) != 0) {
    lVar4 = FUN_0251e98c(1);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x2320) + 0xf0))(lVar4 + 0x2320);
    *(undefined4 *)(param_1 + 0x5d) = *puVar5;
  }
  return;
}

