
/* WARNING: Removing unreachable block (ram,0x031958e0) */

void FUN_031956f8(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_2;
  if (0x27 < param_2) {
    uVar1 = 0xffffffff;
  }
  uVar3 = (ulong)param_2;
  if (0x27 < param_2) {
    uVar3 = 0;
  }
  FUN_02675b70(param_1 + 0x1f8,uVar1);
  uVar1 = *(uint *)(param_1 + 0x1c1b8 + uVar3 * 4);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < 0x10e) {
      lVar5 = param_1 + 0x268 + (ulong)uVar1 * 0x1a8;
      if (*(int *)(lVar5 + 0x1a0) != 0) {
        lVar4 = param_1 + 0x268 + (ulong)uVar1 * 0x1a8;
        **(undefined1 **)(lVar4 + 0x60) = 0;
        *(undefined1 *)(lVar4 + 0xf0) = 0;
        if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar4 + 0x140) == -1)) {
          *(undefined4 *)(lVar4 + 0x140) = 1;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1c1b8 + uVar3 * 4) = 0xffffffff;
  }
  lVar5 = *(long *)(param_1 + 0x210);
  if ((int)param_2 < 0x14) {
    plVar6 = (long *)(lVar5 + 0x590) + param_2;
    if (0x13 < param_2) {
      plVar6 = (long *)(lVar5 + 0x590);
    }
    plVar6 = (long *)*plVar6;
  }
  else if (param_2 < 0x28) {
    plVar6 = *(long **)(lVar5 + (ulong)(param_2 - 0x14) * 8 + 0x630);
  }
  else if (param_2 == 0x28) {
    plVar6 = *(long **)(lVar5 + 0x6d0);
  }
  else if (param_2 < 0x2a) {
    plVar6 = *(long **)(lVar5 + 0x6d8);
  }
  else {
    if (param_2 != 0x2a) {
      return;
    }
    plVar6 = *(long **)(lVar5 + 0x6e0);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar2 = *(long **)(**(long **)(lVar5 + 0x3f8) + 0x1b0);
  if ((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x50))(), (uVar3 & 1) != 0)) {
    *(undefined1 *)((long)plVar6 + 0x314) = 1;
  }
  (**(code **)(*plVar6 + 0x140))(plVar6,0,0);
                    /* WARNING: Could not recover jumptable at 0x0319589c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_031958a0 + (ulong)DAT_0418419c * 4))();
  return;
}

