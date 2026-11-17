
/* WARNING: Removing unreachable block (ram,0x02f08d50) */

void FUN_02f08d18(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (((puVar4 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) &&
     (iVar1 = *(int *)((long)puVar4 + 700), *(undefined4 *)((long)puVar4 + 700) = 2, iVar1 == 0)) {
    lVar3 = *(long *)PTR_DAT_04bc5c78;
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + (ulong)*param_1 * 800 + 0x220);
      if (7 < *param_1) {
        plVar5 = (long *)(lVar3 + 0x1b20);
      }
      if (((*(uint *)((long)plVar5 + 0x30c) & 1) != 0) && ((int)plVar5[0x60] == 7)) {
        if ((*(uint *)((long)plVar5 + 0x30c) >> 3 & 1) == 0) {
          *(undefined4 *)(plVar5 + 0x5f) = 0;
        }
        else {
          (**(code **)(*plVar5 + 0x38))(plVar5);
          plVar5[0x5f] = 0;
          plVar5[0x61] = 0;
          plVar5[0x5d] = 0x7fc000007fc00000;
          plVar5[99] = 0;
          *(undefined4 *)(plVar5 + 0x5e) = 0x7fc00000;
          *(undefined4 *)(plVar5 + 0x60) = 1;
          plVar5[0x62] = -1;
        }
      }
    }
    if (((long *)puVar4[0x4a] != (long *)0x0) &&
       (uVar2 = (**(code **)(*(long *)puVar4[0x4a] + 0xe8))(), (uVar2 & 1) == 0)) {
      plVar5 = (long *)puVar4[0x4a];
      uVar2 = (**(code **)(*plVar5 + 0xe8))(plVar5);
      if (((uVar2 & 1) == 0) && ((int)plVar5[0x36] != 4)) {
        *(undefined4 *)(plVar5 + 0x45) = 1;
      }
    }
  }
  return;
}

