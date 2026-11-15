
void FUN_02498670(long param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *__dest;
  undefined8 *puVar10;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
  cVar4 = *(char *)(param_2 + 0x20);
  cVar3 = *(char *)(param_2 + 0x21);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerLadderToUp";
  pcStack_58 = "PlayerLadderIsSkew";
  local_50 = local_60;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  bVar1 = '\0' < cVar4;
  if (((puVar10[0x227] != 0) && (lVar8 = *(long *)(puVar10[0x227] + 0x78), lVar8 != 0)) &&
     (plVar6 = *(long **)(lVar8 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_50,bVar1);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (((puVar10[0x227] != 0) && (lVar8 = *(long *)(puVar10[0x227] + 0x78), lVar8 != 0)) &&
     (plVar6 = *(long **)(lVar8 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_60,cVar3 != '\0');
  }
  cVar3 = *(char *)(param_2 + 0x22);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (cVar3 == '\0') {
    FUN_017029bc(puVar10,&DAT_054d7008,6,0,0);
  }
  else {
    FUN_017029bc(puVar10,&DAT_054d6ff8,6,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0x230);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar10 = &DAT_05240280;
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    lVar8 = FUN_0170b82c(puVar10,uVar2,0);
    uVar2 = *(undefined4 *)(param_1 + 0x230);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0,uVar2);
        puVar10 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    lVar7 = FUN_017067d4(puVar10,uVar2,0);
    if (lVar7 != 0) {
      if (((*(long *)(lVar7 + 0x1138) != 0) &&
          (lVar9 = *(long *)(*(long *)(lVar7 + 0x1138) + 0x78), lVar9 != 0)) &&
         (plVar6 = *(long **)(lVar9 + 0x48), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_50,bVar1);
      }
      FUN_01751d60(lVar7,PTR_DAT_04bbe270,10,0,0);
    }
    if (lVar8 != 0) {
      __dest = *(undefined **)(lVar8 + 0x2f0);
      if (__dest != PTR_DAT_04bb2f90 + 0x19) {
        iVar5 = 4;
        if (*(int *)(lVar8 + 0x2f8) < 5) {
          iVar5 = *(int *)(lVar8 + 0x2f8) + -1;
        }
        memcpy(__dest,PTR_DAT_04bb2f90 + 0x19,(long)iVar5);
        __dest[iVar5] = 0;
      }
      *(undefined1 *)(lVar8 + 0x42d) = 0;
      *(undefined4 *)(lVar8 + 0x340) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x420) = *(undefined4 *)(lVar8 + 0x424);
    }
  }
  return;
}

