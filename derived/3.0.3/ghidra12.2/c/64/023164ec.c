
void FUN_023164ec(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  char local_74 [63];
  undefined1 local_35;
  
  switch(*(undefined4 *)(param_1 + 0x1810)) {
  case 2:
  case 3:
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    pcStack_80 = "CommonSitWait";
    break;
  case 4:
    local_35 = 0;
    local_78 = 0x40;
    pcStack_80 = local_74;
    local_74[0] = '\0';
    local_88 = PTR_DAT_04bb2bc0 + 0x10;
    FUN_023ea384(param_1,&local_88);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    goto LAB_02316708;
  case 5:
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    pcStack_80 = "CommonSwimWait";
    break;
  case 6:
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    pcStack_80 = "CommonDiveWait";
    goto LAB_023166fc;
  case 7:
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    pcStack_80 = "PlayerSWalkWait";
LAB_023166fc:
    local_88 = PTR_DAT_04bb2020 + 0x10;
LAB_02316708:
    ppuVar2 = &local_88;
    goto LAB_02316714;
  default:
    FUN_0231ade8(param_1,param_2);
    return;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar3,&local_88,param_2,1,0);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,8);
  if ((*(uint *)((long)puVar3 + 0x15f4) >> 8 & 1) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    param_2 = 6;
    ppuVar2 = (undefined **)PTR_DAT_04bbde38;
LAB_02316714:
    FUN_017081d0(puVar3,ppuVar2,param_2,1,0);
  }
  return;
}

