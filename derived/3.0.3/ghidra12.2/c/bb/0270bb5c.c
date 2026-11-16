
void FUN_0270bb5c(undefined8 param_1,long param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  *param_3 = 0;
  if (param_2 == 0) {
    return;
  }
  *(undefined1 *)param_3 = 1;
  lVar4 = param_2 + 0x194b0;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar4 = *(long *)(DAT_05574040 + 0x20);
    plVar3 = *(long **)(lVar4 + 0x28);
  }
  else {
    plVar3 = *(long **)(param_2 + 0x194d8);
  }
  if ((plVar3 == (long *)0x0) || ((undefined8 *)*plVar3 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar3)();
    uVar1 = uVar1 ^ 1;
  }
  *(byte *)((long)param_3 + 1) =
       *(byte *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x38884) & 1;
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0270bc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)();
    return;
  }
  return;
}

