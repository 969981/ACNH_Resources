
void FUN_0244d3bc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  FUN_0244d1b8(0x3f800000);
  if (*(int *)(param_1 + 0x1810) != 1) {
    FUN_023164ec(param_1,6);
    if ((*(int *)(param_1 + 0x1810) == 4) || (*(int *)(param_1 + 0x1810) == 7)) goto LAB_0244d438;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar2,PTR_DAT_04bbde38,6,0,0);
LAB_0244d438:
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar3 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar3;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  return;
}

