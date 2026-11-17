
void FUN_02dfa5b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (((*PTR_DAT_04bc6750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6750), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc6748 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6750);
  }
  if ((param_2 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc6748), (uVar2 & 1) == 0)) {
    if (((*PTR_DAT_04bc6778 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6778), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc6770 = PTR_DAT_04bc4c70 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6778);
    }
    if ((param_2 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc6770), (uVar2 & 1) != 0)) {
      *(undefined4 *)((long)param_2 + 0x3ec) = 0x2f;
      if (param_2[0xaf] != 0) {
        lVar3 = **(long **)(param_2[0xaf] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb0] != 0) {
        lVar3 = **(long **)(param_2[0xb0] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb1] != 0) {
        lVar3 = **(long **)(param_2[0xb1] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb2] != 0) {
        lVar3 = **(long **)(param_2[0xb2] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb3] != 0) {
        lVar3 = **(long **)(param_2[0xb3] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb4] != 0) {
        lVar3 = **(long **)(param_2[0xb4] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb5] != 0) {
        lVar3 = **(long **)(param_2[0xb5] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      if (param_2[0xb6] != 0) {
        lVar3 = **(long **)(param_2[0xb6] + 0x238);
        FUN_03d59634(param_2,0,5,lVar3);
        *(undefined1 *)(lVar3 + 0xbd) = 0;
      }
      *(undefined1 *)(*(long *)(param_2[0xae] + 0xa0) + 0xbd) = 0;
    }
  }
  else {
    *(undefined4 *)((long)param_2 + 0x3ec) = 0x2e;
  }
  return;
}

