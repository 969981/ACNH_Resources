
/* WARNING: Removing unreachable block (ram,0x01c846ac) */

void FUN_01c845c4(undefined1 *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    plVar2 = (long *)((long)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0xc4) * 8);
    if (0x16 < *(uint *)(param_1 + 0xc4)) {
      plVar2 = (long *)(param_1 + 8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))(plVar2,0);
    }
  }
  if (param_1[1] != '\0') {
    plVar2 = (long *)((long)(param_1 + 8) + (ulong)(byte)param_1[2] * 8);
    if (0x16 < (byte)param_1[2]) {
      plVar2 = (long *)(param_1 + 8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
    }
    param_1[1] = 0;
  }
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb21d8 + 0x3d0);
  if (((*PTR_DAT_04bc1448 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1448);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc1440);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  (*(code *)**(undefined8 **)puVar4[7])();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}

