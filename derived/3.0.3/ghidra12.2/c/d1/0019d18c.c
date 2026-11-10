
void FUN_0019d18c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_28;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (DAT_04be21f1 == '\0') {
        FUN_0018cb8c(&local_28);
      }
      else {
        FUN_0018c9b0(&local_28,0);
      }
      *(long *)PTR_DAT_04bcbcb0 = local_28;
      lVar5 = (local_28 - (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28))) +
              *(long *)(param_1 + 0x30);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x30);
    }
    lVar6 = *(long *)(param_1 + 0xa0);
    lVar1 = lVar6;
    if (-1 < lVar5) {
      lVar1 = lVar5;
    }
    uVar3 = lVar6 - lVar1;
    if (0xfffffffe < (long)uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((lVar1 < lVar6) && ((int)uVar3 != 0)) {
      plVar7 = (long *)(param_1 + 0x58);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      if (*(char *)(param_1 + 0x41) == '\0') {
        FUN_0018ac70(param_1 + 0x48,plVar7,uVar3 & 0xffffffff);
      }
      else {
        *(undefined1 *)(param_1 + 0x41) = 0;
      }
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (*(char *)(param_1 + 0xcc) == '\0') {
      if (*(int *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x61,
                     0xe000000e,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (*PTR_DAT_04bcbca8 == '\0') {
        FUN_0018cb8c(&local_28);
      }
      else {
        FUN_0018c9b0(&local_28,0);
      }
      lVar6 = *(long *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      *(long *)PTR_DAT_04bcbcb0 = local_28;
      lVar5 = (local_28 + lVar5) - (lVar6 + lVar2);
      *(long *)(param_1 + 0x30) = lVar5;
      *(undefined4 *)(param_1 + 0x38) = 2;
      *(long *)(param_1 + 0xa8) = lVar5;
      *(long *)(param_1 + 0xb0) = lVar1;
      *(undefined4 *)(param_1 + 200) = 1;
      *(undefined1 *)(param_1 + 0xcc) = 1;
      *(long *)(param_1 + 0xb8) = lVar1;
      *(long *)(param_1 + 0xc0) = lVar1;
      iVar4 = *(int *)(param_1 + 0x38);
    }
    else {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + lVar1;
      if (*(int *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x61,
                     0xe000000e,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (*PTR_DAT_04bcbca8 == '\0') {
        FUN_0018cb8c(&local_28);
      }
      else {
        FUN_0018c9b0(&local_28,0);
      }
      lVar6 = *(long *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      *(long *)PTR_DAT_04bcbcb0 = local_28;
      lVar5 = (local_28 + lVar5) - (lVar6 + lVar2);
      *(long *)(param_1 + 0x30) = lVar5;
      *(undefined4 *)(param_1 + 0x38) = 2;
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + lVar5;
      if (*(long *)(param_1 + 0xc0) < lVar1) {
        *(long *)(param_1 + 0xc0) = lVar1;
      }
      if (lVar1 < *(long *)(param_1 + 0xb8)) {
        *(long *)(param_1 + 0xb8) = lVar1;
        iVar4 = *(int *)(param_1 + 0x38);
        if (iVar4 == 2) goto LAB_0019d324;
        goto LAB_0019d4ac;
      }
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if (iVar4 != 2) {
LAB_0019d4ac:
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,0xe000000e,
                   0);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (iVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,0xe000000e,
                   0);
    }
  }
LAB_0019d324:
  *(int *)(param_1 + 0x38) = iVar4;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_28);
  }
  else {
    FUN_0018c9b0(&local_28,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  DAT_04c589a0 = local_28;
  *(long *)(param_1 + 0x28) = local_28 - *(long *)(param_1 + 0x20);
  return;
}

