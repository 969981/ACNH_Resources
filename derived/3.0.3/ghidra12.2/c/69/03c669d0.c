
void FUN_03c669d0(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  long lStack_58;
  undefined **local_40;
  long lStack_38;
  long local_30;
  
  uVar3 = FUN_03c65fa0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  if ((uVar3 & 1) == 0) {
    if (((DAT_05aee368 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05aee368), iVar2 != 0)) {
      FUN_038e2df8(&DAT_05aee2b0);
      FUN_001001d0(PTR_FUN_04bcb458,&DAT_05aee2b0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee368);
    }
    FUN_038e2f80(&DAT_05aee2b0);
    local_60 = &PTR_LAB_04b822f8;
    local_30 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    local_40 = &PTR_LAB_04b82320;
    if (*(long *)(lVar4 + 0x268) != lVar4 + 0x260) {
      lVar7 = (long)*(int *)(lVar4 + 0x274);
      lVar6 = *(long *)(lVar4 + 0x268) - lVar7;
      lVar5 = lVar6 + lVar7;
      do {
        lVar5 = *(long *)(lVar5 + 8);
        if (*(long *)(lVar6 + 0x20) == local_30) {
          plVar1 = (long *)(lVar6 + *(int *)(lVar4 + 0x274));
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar4 + 0x270) = *(int *)(lVar4 + 0x270) + -1;
          plVar1 = (long *)(lVar6 + *(int *)(local_30 + 0x28c));
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(local_30 + 0x288) = *(int *)(local_30 + 0x288) + -1;
        }
        lVar6 = lVar5 - lVar7;
      } while (lVar6 != (lVar4 + 0x260) - lVar7);
      lVar4 = *(long *)(param_1 + 0x28);
    }
    lStack_58 = param_1;
    lStack_38 = param_1;
    FUN_03c667c0(lVar4,&local_40);
    FUN_03c66870(*(undefined8 *)(param_1 + 0x20),&local_60);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(lVar4 + 0x260);
    plVar1 = (long *)(*(int *)(lVar4 + 0x274) + param_1);
    *(long **)(lVar4 + 0x260) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = lVar4 + 0x260;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar1;
    }
    *(int *)(lVar4 + 0x270) = *(int *)(lVar4 + 0x270) + 1;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(lVar4 + 0x278);
    plVar1 = (long *)(*(int *)(lVar4 + 0x28c) + param_1);
    *(long **)(lVar4 + 0x278) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = lVar4 + 0x278;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar1;
    }
    *(int *)(lVar4 + 0x288) = *(int *)(lVar4 + 0x288) + 1;
    FUN_038e3040(&DAT_05aee2b0);
  }
  return;
}

