
void FUN_02497d80(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if ((param_2 & 1) == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerFixLadderReadyWait";
    FUN_017029bc(puVar3,&local_40,6,0,0);
  }
  else {
    FUN_017029bc(puVar3,&DAT_054d6fe8,6,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    lVar4 = FUN_0170b82c(puVar3,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
        puVar3 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    lVar5 = FUN_017067d4(puVar3,uVar1,0);
    if (lVar5 != 0) {
      FUN_01751d60(lVar5,PTR_DAT_04bbe268,10,0,0);
    }
    if (lVar4 != 0) {
      __dest = *(undefined **)(lVar4 + 0x2f0);
      if (__dest != PTR_DAT_04bb2f90 + 0x19) {
        iVar2 = 4;
        if (*(int *)(lVar4 + 0x2f8) < 5) {
          iVar2 = *(int *)(lVar4 + 0x2f8) + -1;
        }
        memcpy(__dest,PTR_DAT_04bb2f90 + 0x19,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined1 *)(lVar4 + 0x42d) = 0;
      *(undefined4 *)(lVar4 + 0x340) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x420) = *(undefined4 *)(lVar4 + 0x424);
    }
  }
  return;
}

