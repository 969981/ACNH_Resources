
void FUN_03ee1828(long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x138);
  if (*(uint *)(param_1 + 0x130) <= param_2) {
    param_2 = 0;
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(*param_3);
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(param_3[1]);
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(param_3[2]);
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(*param_4);
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(param_4[1]);
  }
  plVar1 = *(long **)(lVar2 + (long)(int)param_2 * 0x78 + 0x70);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ee191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(param_4[2]);
  return;
}

