
void FUN_023d8b84(long param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = *(ushort *)(param_1 + 0x1918);
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
  puVar5 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FixDirWalkMoveAngle";
  if (((puVar6[0x227] != 0) && (lVar4 = *(long *)(puVar6[0x227] + 0x78), lVar4 != 0)) &&
     (plVar3 = *(long **)(lVar4 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x30))((float)((ulong)uVar1 << 0x10) * 8.381903e-08,plVar3,&local_40);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      puVar5 = PTR_DAT_04bb2020;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "FixDirWalkFailure";
  FUN_017029bc(puVar6,&local_40,6,0,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0xee0) = 0;
    *(undefined1 *)(param_1 + 0xee8) = 0;
  }
  return;
}

