
void FUN_0249eda4(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CommonNetWait";
  FUN_017081d0(puVar5,&local_40,6,1,0);
  lVar6 = FUN_024a00b0(param_1);
  puVar3 = PTR_DAT_04bb5d60;
  puVar2 = PTR_DAT_04bb27c8;
  if (lVar6 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar7 != 0) && (*(char *)(lVar6 + 0x289) != '\0')) {
      if (*(long *)(lVar6 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar6 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar6 + 0x289) = 0;
    }
    *(undefined **)(lVar6 + 0x300) = puVar3 + 0x10;
  }
  lVar6 = FUN_024a0450(param_1);
  if (lVar6 != 0) {
    lVar7 = *(long *)puVar2;
    if ((lVar7 != 0) && (*(char *)(lVar6 + 0x289) != '\0')) {
      if (*(long *)(lVar6 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar6 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar6 + 0x289) = 0;
    }
    *(undefined **)(lVar6 + 0x300) = puVar3 + 0x10;
  }
  lVar6 = FUN_024a07f0(param_1);
  if (lVar6 != 0) {
    lVar7 = *(long *)puVar2;
    if ((lVar7 != 0) && (*(char *)(lVar6 + 0x289) != '\0')) {
      if (*(long *)(lVar6 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar6 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar6 + 0x289) = 0;
    }
    *(undefined **)(lVar6 + 0x300) = puVar3 + 0x10;
  }
  FUN_0249efc0(param_1,0);
  return;
}

