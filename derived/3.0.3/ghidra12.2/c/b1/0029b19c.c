
void FUN_0029b19c(undefined8 param_1,char *param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((((*param_2 != '\0') && (*(long *)(param_2 + 0xf0) != 0)) &&
      (*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0xf8))) &&
     (*(long **)(param_2 + (ulong)(byte)param_2[0x162] * 8 + 0x168) != (long *)0x0)) {
    uVar1 = (**(code **)(**(long **)(param_2 + (ulong)(byte)param_2[0x162] * 8 + 0x168) + 0xe0))();
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_2 + (ulong)(byte)param_2[0x162] * 8 + 0x168);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0029b224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x100))
                  (param_1,plVar2,*(undefined4 *)(param_2 + (ulong)(byte)param_2[0x162] * 4 + 0x180)
                   ,param_3);
        return;
      }
    }
  }
  local_24 = 0;
  local_34 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

