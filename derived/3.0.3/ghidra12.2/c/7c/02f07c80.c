
/* WARNING: Removing unreachable block (ram,0x02f07cc4) */

undefined8 FUN_02f07c80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
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
  plVar5 = (long *)puVar4[0x44];
  if ((int)plVar5[0x15] == 5 || (int)plVar5[0x15] == 2) {
    FUN_03869260(puVar4,plVar5);
    *(undefined1 *)((long)plVar5 + 0x165) = 1;
  }
  else if (*(uint *)(plVar5 + 0x15) < 7 &&
           (1 << (ulong)(*(uint *)(plVar5 + 0x15) & 0x1f) & 0x58U) != 0) {
    (**(code **)(*plVar5 + 0xa8))(plVar5);
  }
  uVar3 = FUN_02fbb3e4(puVar4[0x44],param_1,param_2,param_3);
  return uVar3;
}

