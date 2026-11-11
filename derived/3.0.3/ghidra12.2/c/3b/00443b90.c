
void FUN_00443b90(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_04c6f418 != (code *)0x0) {
    (*DAT_04c6f418)(param_2 + 2,DAT_04c6f428);
    if (DAT_04c6f418 != (code *)0x0) {
      (*DAT_04c6f418)(param_3 + 2,DAT_04c6f428);
    }
  }
  plVar1 = *(long **)(param_1 + 8);
  uVar3 = (long)plVar1 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_1 + 0x10)) &&
     (*(ulong *)(param_1 + 8) = uVar3, plVar1 != (long *)0x0)) {
    *plVar1 = param_2;
    plVar1[2] = param_3;
    lVar2 = nn::os::GetSystemTick();
    plVar1[1] = lVar2;
  }
  return;
}

