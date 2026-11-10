
void FUN_0030e180(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_90 [112];
  
  lVar1 = FUN_002141f8(param_1,3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
  if (lVar2 != 0) {
    FUN_001fb840(lVar2,lVar1);
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0030e1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x68))
                (plVar3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),lVar1 + 0x10);
      return;
    }
    FUN_001b8014(auStack_90);
    (**(code **)(*plVar3 + 0x68))(plVar3,0,auStack_90);
    FUN_001b8504(auStack_90);
  }
  return;
}

