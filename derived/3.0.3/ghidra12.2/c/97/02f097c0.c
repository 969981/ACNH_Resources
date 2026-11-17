
/* WARNING: Removing unreachable block (ram,0x02f09800) */

undefined8 FUN_02f097c0(int param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar4 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) == 0)) {
    return 0;
  }
  plVar5 = (long *)puVar4[0x53];
  if (((int)plVar5[0x3e] == -1 && *(int *)((long)plVar5 + 500) == -1) &&
      *(uint *)(plVar5 + 0x36) < 2) {
    if (*(int *)((long)plVar5 + 0x244) == 2) {
      *(undefined4 *)((long)plVar5 + 0x244) = 0;
    }
    else if (*(int *)((long)plVar5 + 0x244) == 0) {
      *(undefined1 *)(plVar5 + 0x47) = 0;
      FUN_033ead68(plVar5,param_1,param_2);
      *(undefined4 *)((long)plVar5 + 0x244) = 1;
      pcVar3 = *(code **)(*plVar5 + 0xa8);
      goto LAB_02f098c8;
    }
  }
  else if ((int)plVar5[0x43] != param_1) {
    if (*(int *)((long)plVar5 + 0x21c) == param_1) {
      return 1;
    }
    *(int *)((long)plVar5 + 0x21c) = param_1;
    *(short *)(plVar5 + 0x44) = (short)param_2;
    *(undefined1 *)((long)plVar5 + 0x222) = 1;
    pcVar3 = *(code **)(*plVar5 + 0xb0);
LAB_02f098c8:
    (*pcVar3)(plVar5);
    return 1;
  }
  return 1;
}

