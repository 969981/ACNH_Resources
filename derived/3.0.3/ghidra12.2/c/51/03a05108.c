
void FUN_03a05108(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    param_3 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x110) + (long)(int)param_3 * 0x430;
  if ((*(byte *)(lVar5 + 0x3c8) & 1) != 0) {
    plVar1 = *(long **)(param_1 + 0x5590);
    if (plVar1 != (long *)0x0) {
      uVar2 = (uint)*(byte *)(lVar5 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar5 + 8)) {
        uVar2 = 0;
      }
      (**(code **)(*plVar1 + 0x38))
                (plVar1,param_2,0,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar2 * 0x430);
    }
    FUN_03a7f080(param_1 + 0x46b0,param_2,lVar5);
    if ((((*(char *)(*(long *)(param_1 + 0x31e0) + 0x6d0) == '\0') ||
         (*(int *)(param_1 + 0x46a0) < 1)) || (lVar3 = *(long *)(lVar5 + 1000), lVar3 == 0)) ||
       (*(int *)(lVar3 + 0x7c) < 1 || (*(uint *)(lVar3 + 0x5c) & 0x800) == 0)) {
      FUN_03ab2b90(param_1 + 0x15f8,param_2,lVar5);
    }
    if (((*(char *)(*(long *)(param_1 + 0x118) + 0x610) != '\0') &&
        (*(long *)(param_1 + 0x3190) != 0)) &&
       ((*(char *)(*(long *)(param_1 + 0x2ef0) + 0x14a0) != '\0' &&
        (*(char *)(*(long *)(param_1 + 0x2ef0) + 0x610) != '\0')))) {
      FUN_03a6f700(*(long *)(param_1 + 0x3190),param_2);
    }
    FUN_03a7b9fc(*(undefined8 *)(param_1 + 0x55d0),param_2,lVar5);
    if ((((*(byte *)(lVar5 + 0x3c8) >> 2 & 1) != 0) &&
        (FUN_03a80004(param_1 + 0x46b0,param_2,lVar5), *(long *)(param_1 + 0x55c0) != 0)) &&
       (*(char *)(*(long *)(param_1 + 0x118) + 0x4b0) != '\0')) {
      uVar4 = *(undefined8 *)(param_1 + 0x518);
      *(undefined8 *)(lVar5 + 0x220) = *(undefined8 *)(lVar5 + 200);
      *(undefined8 *)(lVar5 + 200) = uVar4;
      FUN_03afcb00(*(undefined8 *)(param_1 + 0x55c0),param_2,lVar5);
      if (*(long *)(lVar5 + 0x220) != 0) {
        *(long *)(lVar5 + 200) = *(long *)(lVar5 + 0x220);
        *(undefined8 *)(lVar5 + 0x220) = 0;
      }
    }
    plVar1 = *(long **)(param_1 + 0x5590);
    if (plVar1 != (long *)0x0) {
      uVar2 = (uint)*(byte *)(lVar5 + 8);
      if (*(uint *)(param_1 + 0x108) <= (uint)*(byte *)(lVar5 + 8)) {
        uVar2 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x03a052c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))
                (plVar1,param_2,1,param_1,*(long *)(param_1 + 0x110) + (ulong)uVar2 * 0x430);
      return;
    }
  }
  return;
}

