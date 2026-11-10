
void FUN_001b3808(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *(ulong *)PTR_DAT_04bcbcb0;
  local_18 = uVar2;
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(ulong *)(param_1 + 0x138) < uVar2)) {
    FUN_001b3920(param_1);
    uVar1 = (ulong)DAT_04be223c;
    if ((int)DAT_04be223c < 0) {
      uVar1 = -(ulong)-DAT_04be223c;
    }
    *(ulong *)(param_1 + 0x138) = uVar1 + uVar2;
  }
  if (*(ulong *)(param_1 + 0x90) < uVar2) {
    FUN_001afc40(param_1);
    FUN_001ad890(param_1);
    uVar1 = (ulong)DAT_04be2230;
    if ((int)DAT_04be2230 < 0) {
      uVar1 = -(ulong)-DAT_04be2230;
    }
    *(ulong *)(param_1 + 0x90) = uVar1 + uVar2;
    uVar1 = *(ulong *)(param_1 + 0x140);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x140);
  }
  if (uVar2 <= uVar1) {
    return;
  }
  if ((*(uint *)(param_1 + 0xb4) & 0xfffffffe) == 2) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    FUN_001984a0(param_1 + 0xa0);
  }
  FUN_001adcb0(param_1);
  FUN_001b3560(param_1,&local_18);
  uVar1 = (ulong)DAT_04be2240;
  if ((int)DAT_04be2240 < 0) {
    uVar1 = -(ulong)-DAT_04be2240;
  }
  *(ulong *)(param_1 + 0x140) = uVar1 + uVar2;
  return;
}

