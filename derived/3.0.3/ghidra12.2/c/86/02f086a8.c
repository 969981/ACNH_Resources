
/* WARNING: Removing unreachable block (ram,0x02f086dc) */

void FUN_02f086a8(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (((puVar3 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) &&
     (puVar3[0x49] != 0)) {
    *(undefined1 *)(puVar3[0x49] + 0x220) = 1;
    plVar4 = (long *)puVar3[0x49];
    if (plVar4 != (long *)0x0) {
      if (*(uint *)(plVar4 + 0x15) < 7 &&
          (1 << (ulong)(*(uint *)(plVar4 + 0x15) & 0x1f) & 0x58U) != 0) {
        uVar2 = (**(code **)(*plVar4 + 0xe0))(plVar4);
        if ((uVar2 & 1) == 0) {
LAB_02f0875c:
                    /* WARNING: Could not recover jumptable at 0x02f08774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0xa8))(plVar4);
          return;
        }
      }
      else if ((int)plVar4[0x15] == 5 || (int)plVar4[0x15] == 2) {
        FUN_03869260(puVar3,plVar4);
        *(undefined1 *)((long)plVar4 + 0x165) = 1;
      }
      else if (*(uint *)(plVar4 + 0x15) < 7 &&
               (1 << (ulong)(*(uint *)(plVar4 + 0x15) & 0x1f) & 0x58U) != 0) goto LAB_02f0875c;
    }
  }
  return;
}

