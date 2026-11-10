
void FUN_0018eba0(long *param_1)

{
  long lVar1;
  ThreadType *pTVar2;
  undefined8 *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_04bcbd40 + 0x10);
  lVar1 = DAT_04c58a60;
  if (((char)param_1[10] != '\0') && (DAT_04c58a00 != '\0')) {
    lVar5 = param_1[7];
    plVar3 = (long *)(DAT_04c58a60 + 0x30);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    plVar6 = *(long **)(lVar1 + 0x10);
    if (plVar6 != *(long **)(lVar1 + 0x20)) {
      do {
        (**(code **)(*plVar6 + 0x20))(plVar6,lVar5);
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != *(long **)(lVar1 + 0x20));
    }
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 == (undefined8 *)0x0) goto LAB_0018ecc4;
  pTVar2 = (ThreadType *)*puVar4;
  if (pTVar2 != (ThreadType *)0x0) {
    if (*(char *)(puVar4 + 2) == '\0') {
      nn::os::WaitThread(pTVar2);
      nn::os::DestroyThread((ThreadType *)*puVar4);
      pTVar2 = (ThreadType *)*puVar4;
      if (pTVar2 != (ThreadType *)0x0) goto LAB_0018ec70;
    }
    else {
LAB_0018ec70:
      UNRECOVERED_JUMPTABLE = *(code **)(pTVar2 + -0x10);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        free(pTVar2 + -0x10);
      }
      else {
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    *puVar4 = 0;
  }
  if (puVar4[1] != 0) {
    __ptr = (undefined8 *)(puVar4[1] + -0x14);
    UNRECOVERED_JUMPTABLE = (code *)*__ptr;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      free(__ptr);
    }
    else {
      (*UNRECOVERED_JUMPTABLE)();
    }
    puVar4[1] = 0;
  }
  puVar4 = puVar4 + -2;
  if ((code *)*puVar4 == (code *)0x0) {
    free(puVar4);
  }
  else {
    (*(code *)*puVar4)(puVar4);
  }
LAB_0018ecc4:
  param_1[6] = 0;
  plVar3 = (long *)param_1[4];
  param_1[1] = (long)&PTR_LAB_04a426b8;
  if ((plVar3 == (long *)0x0) || (plVar3 == param_1 + 2)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((long)plVar3 + -0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free((undefined8 *)((long)plVar3 + -0x14));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

