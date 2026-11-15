
void FUN_02497188(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *__dest;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      param_2 = param_2 & 0xffffffff;
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  if ((param_2 & 1) == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerFixLadderReady";
    FUN_017029bc(puVar5,&local_40,6,0,0);
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerLadderReady";
    FUN_017029bc(puVar5,&local_40,6,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    lVar3 = FUN_0170b82c(puVar5,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
        puVar5 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    lVar4 = FUN_017067d4(puVar5,uVar1,0);
    if (lVar4 != 0) {
      FUN_01751d60(lVar4,PTR_DAT_04bbe268,6,0,0);
    }
    if (lVar3 != 0) {
      __dest = *(undefined **)(lVar3 + 0x2f0);
      if (__dest != PTR_DAT_04bb2f90 + 0x19) {
        iVar2 = 4;
        if (*(int *)(lVar3 + 0x2f8) < 5) {
          iVar2 = *(int *)(lVar3 + 0x2f8) + -1;
        }
        memcpy(__dest,PTR_DAT_04bb2f90 + 0x19,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined4 *)(lVar3 + 0x340) = 0xffffffff;
      *(undefined2 *)(lVar3 + 0x42c) = 0x100;
      *(undefined4 *)(lVar3 + 0x428) = 6;
      *(undefined8 *)(lVar3 + 0x420) = 0;
      *(undefined8 *)(lVar3 + 0x40c) = *(undefined8 *)(lVar3 + 0x3dc);
      *(undefined8 *)(lVar3 + 0x404) = *(undefined8 *)(lVar3 + 0x3d4);
      *(undefined8 *)(lVar3 + 0x3ec) = *(undefined8 *)(lVar3 + 0x3bc);
      *(undefined8 *)(lVar3 + 0x3e4) = *(undefined8 *)(lVar3 + 0x3b4);
      *(undefined8 *)(lVar3 + 0x3fc) = *(undefined8 *)(lVar3 + 0x3cc);
      *(undefined8 *)(lVar3 + 0x3f4) = *(undefined8 *)(lVar3 + 0x3c4);
    }
  }
  return;
}

