
void FUN_024efcc0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte local_28 [2];
  short local_26;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_24 = 0;
    local_28[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    lVar3 = *(long *)PTR_DAT_04bb2720;
    if (lVar3 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(lVar3 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar3 + 0x338));
        iVar1 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      local_26 = 0;
      puVar4 = DAT_055c1b60;
      do {
        if (*(int *)(puVar4 + -1) == *(int *)(puVar5 + 7)) {
          if (local_26 != -1) goto LAB_024efdc4;
          break;
        }
        puVar4 = (undefined8 *)puVar4[1];
        local_26 = local_26 + 1;
      } while (puVar4 != &DAT_055c1b58);
    }
    local_26 = 0;
LAB_024efdc4:
    FUN_0254497c(local_28);
    local_24 = 1;
    FUN_0254497c(local_28);
    plVar2 = *(long **)(param_1 + 0x60);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x60);
  }
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
  (**(code **)(*plVar2 + 0x4e0))(0x3f800000);
  FUN_02334578(param_1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    *(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb44b9) =
         *(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb44b9) | 2;
  }
  return;
}

