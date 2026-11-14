
void FUN_0178fb50(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  param_1[0x982] = &PTR_LAB_049c3820;
  param_1[0x94e] = &PTR_LAB_049c3820;
  param_1[0x91a] = &PTR_LAB_049c3820;
  param_1[0x8e6] = &PTR_LAB_049c3820;
  param_1[0x8b2] = &PTR_LAB_049c38b0;
  param_1[0x87e] = &PTR_LAB_049c38b0;
  param_1[0x84a] = &PTR_LAB_049c38b0;
  param_1[0x816] = &PTR_LAB_049c38b0;
  param_1[0x7e2] = &PTR_LAB_049c38b0;
  param_1[0x7ae] = &PTR_LAB_049c38b0;
  param_1[0x77a] = &PTR_LAB_049c38b0;
  param_1[0x746] = &PTR_LAB_049c38b0;
  param_1[0x712] = &PTR_LAB_049c38b0;
  param_1[0x6de] = &PTR_LAB_049c38b0;
  param_1[0x6aa] = &PTR_LAB_049c38b0;
  param_1[0x676] = &PTR_LAB_049c38b0;
  param_1[0x642] = &PTR_LAB_049c38b0;
  param_1[0x60e] = &PTR_LAB_049c38b0;
  param_1[0x5da] = &PTR_LAB_049c38b0;
  param_1[0x5a6] = &PTR_LAB_049c38b0;
  param_1[0x572] = &PTR_LAB_049c38b0;
  param_1[0x53e] = &PTR_LAB_049c38b0;
  param_1[0x50a] = &PTR_LAB_049c38b0;
  param_1[0x4d6] = &PTR_LAB_049c38b0;
  param_1[0x4a2] = &PTR_LAB_049c38b0;
  param_1[0x46e] = &PTR_LAB_049c38b0;
  param_1[0x43a] = &PTR_LAB_049c38b0;
  param_1[0x406] = &PTR_LAB_049c38b0;
  param_1[0x3d2] = &PTR_LAB_049c38b0;
  param_1[0x39e] = &PTR_LAB_049c38b0;
  param_1[0x36a] = &PTR_LAB_049c38b0;
  param_1[0x336] = &PTR_LAB_049c38b0;
  param_1[0x302] = &PTR_LAB_049c38b0;
  param_1[0x2ce] = &PTR_LAB_049c38b0;
  param_1[0x29a] = &PTR_LAB_049c38b0;
  param_1[0x266] = &PTR_LAB_049c38b0;
  param_1[0x232] = &PTR_LAB_049c38b0;
  param_1[0x1fe] = &PTR_LAB_049c38b0;
  param_1[0x1ca] = &PTR_LAB_049c38b0;
  param_1[0x196] = &PTR_LAB_049c38b0;
  param_1[0x162] = &PTR_LAB_049c38b0;
  param_1[0x12e] = &PTR_LAB_049c38b0;
  param_1[0xfa] = &PTR_LAB_049c38b0;
  param_1[0xc6] = &PTR_LAB_049c38b0;
  param_1[0x92] = &PTR_LAB_049c38b0;
  *param_1 = &PTR_LAB_048fce60;
  param_1[0x50] = &PTR_LAB_049c3820;
  if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
    lVar3 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)((long)param_1[0x16] - lVar3);
    lVar4 = (long)plVar2 + lVar3;
    do {
      plVar1 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0xbc));
      lVar4 = *(long *)(lVar4 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (long *)(lVar4 - lVar3);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar3));
  }
  return;
}

