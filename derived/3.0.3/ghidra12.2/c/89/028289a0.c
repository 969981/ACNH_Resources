
void FUN_028289a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = &PTR_FUN_04a37f48;
  uStack_2c = *(undefined4 *)(param_1 + 0xc);
  local_30 = param_2;
  uStack_14 = param_3;
  lVar3 = FUN_01b42e7c(&local_38,DAT_0532d280);
  plVar2 = DAT_0532d278;
  if (lVar3 != 0) {
    lVar4 = *DAT_0532d278;
    plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar3);
    *DAT_0532d278 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar2;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  return;
}

