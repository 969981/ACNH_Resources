
void FUN_023d830c(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = *(ushort *)(param_1 + 0x1918);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FixDirWalkMoveAngle";
  if (((puVar7[0x227] != 0) && (lVar5 = *(long *)(puVar7[0x227] + 0x78), lVar5 != 0)) &&
     (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x30))((float)((ulong)uVar1 << 0x10) * 8.381903e-08,plVar4,&local_40);
  }
  iVar2 = *(int *)(param_1 + 0x178);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar6 = PTR_DAT_04bb2020;
      }
      puVar7 = &DAT_05240280;
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (iVar2 == 0) {
    pcStack_38 = "FixDirWalkAction";
  }
  else {
    pcStack_38 = "FixDirWalkActionRemote";
  }
  local_40 = puVar6 + 0x10;
  FUN_017029bc(puVar7,&local_40,6,0,0);
  if (*(char *)(param_1 + 0x229c) != '\0') {
    *(char *)(param_1 + 0x229c) = '\0';
  }
  return;
}

