
void FUN_02462160(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x2a0) + 0xf0))(lVar2 + 0x2a0);
  fVar6 = *pfVar3;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar6 * 0.5;
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
  if (((puVar5[0x227] != 0) && (lVar2 = *(long *)(puVar5[0x227] + 0x78), lVar2 != 0)) &&
     (plVar4 = *(long **)(lVar2 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_054ce4e8,*(char *)(param_1 + 0x1918) != '\0');
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerExitSWalkReady";
  FUN_017029bc(puVar5,&local_40,6,0,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    *(byte *)(param_1 + 0x18f8) = *(byte *)(param_1 + 0x18f8) & 0xcf;
  }
  return;
}

