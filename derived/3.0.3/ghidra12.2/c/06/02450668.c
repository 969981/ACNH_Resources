
void FUN_02450668(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar4 = FUN_017067d4(puVar3,uVar1,0);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x1138) != 0)) {
    FUN_038501b0(0x41200000,*(long *)(lVar4 + 0x1138),0);
    FUN_0384fab0(*(undefined8 *)(lVar4 + 0x1138),0,1);
  }
  if ((((*(int *)(param_1 + 0x178) == 0) && (lVar4 = *(long *)PTR_DAT_04bb4988, lVar4 != 0)) &&
      ((*(byte *)(lVar4 + 8) & 1) != 0)) && ((*(byte *)(lVar4 + 0x18) & 1) != 0)) {
    *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) | 8;
  }
  return;
}

