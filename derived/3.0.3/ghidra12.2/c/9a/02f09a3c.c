
/* WARNING: Removing unreachable block (ram,0x02f09a74) */

bool FUN_02f09a3c(int param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    plVar5 = (long *)puVar4[0x53];
    if (((int)plVar5[0x43] == param_1) ||
       (((plVar5[0x42] != 0 &&
         ((plVar3 = *(long **)(**(long **)(plVar5[0x42] + 0x3f8) + 0x1b0), plVar3 == (long *)0x0 ||
          (uVar2 = (**(code **)(*plVar3 + 0x60))(), (uVar2 & 1) == 0)))) || ((int)plVar5[0x36] != 3)
        ))) {
      return (*(uint *)(plVar5 + 0x3e) & *(uint *)((long)plVar5 + 500)) != 0xffffffff ||
             1 < *(uint *)(plVar5 + 0x36);
    }
    (**(code **)(*plVar5 + 0xb0))(plVar5);
  }
  return true;
}

