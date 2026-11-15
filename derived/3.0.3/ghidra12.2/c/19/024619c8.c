
void FUN_024619c8(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined1 *)(param_1 + 0xc9d) = 0;
  *(undefined4 *)(param_1 + 0xc90) = *(undefined4 *)(param_1 + 0xc94);
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar2 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x2a0) + 0xf0))(lVar2 + 0x2a0);
  fVar7 = *pfVar3;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar7 * 0.5;
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
  if (((puVar6[0x227] != 0) && (lVar2 = *(long *)(puVar6[0x227] + 0x78), lVar2 != 0)) &&
     (plVar4 = *(long **)(lVar2 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_054ce4e8,*(char *)(param_1 + 0x1918) != '\0');
  }
  if (((*(int *)(param_1 + 0x178) == 0) && (*(long *)PTR_DAT_04bb4718 != 0)) &&
     (*(byte *)(param_1 + 0x1ee8) < 8)) {
    uVar5 = 1;
    if (*(char *)(param_1 + 0x1918) == '\0') {
      uVar5 = 2;
    }
    *(undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x1ee8) * 4 + 0xea0) =
         uVar5;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
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
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerSWalkAction";
  FUN_017029bc(puVar6,&local_40,6,0,0);
  return;
}

