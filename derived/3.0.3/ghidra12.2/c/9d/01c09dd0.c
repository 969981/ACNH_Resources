
void FUN_01c09dd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    FUN_01c09ed8(param_1);
    iVar2 = *param_1;
  }
  if (iVar2 == 2) {
    piVar1 = param_1 + 2;
    uVar3 = FUN_03f2dedc(piVar1,0);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_03f2d924(piVar1);
      if ((uVar3 & 1) == 0) {
        iVar2 = 4;
      }
      else {
        puVar4 = (undefined8 *)FUN_03f2d7f0(piVar1);
        if (((*PTR_DAT_04bc0cd0 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0cd0), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bc0cc8 = PTR_DAT_04bb4448 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc0cd0);
        }
        if ((puVar4 == (undefined8 *)0x0) ||
           (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc0cc8), (uVar3 & 1) == 0)) {
          puVar4 = (undefined8 *)0x0;
          iVar2 = 4;
        }
        else {
          iVar2 = 3;
        }
        *(undefined8 **)(param_1 + 0x10) = puVar4;
      }
      *param_1 = iVar2;
      goto LAB_01c09e88;
    }
    iVar2 = *param_1;
  }
  if (iVar2 == 0) {
    return;
  }
LAB_01c09e88:
  param_1[0x12] = param_1[0x12] + 1;
  return;
}

