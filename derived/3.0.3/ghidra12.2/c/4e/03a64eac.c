
void FUN_03a64eac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  lVar2 = *(long *)(param_1 + 0x2b8);
  if (((lVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x630) != '\0')) &&
     (*(char *)(lVar2 + 0x468) != '\0')) {
    bVar1 = *(byte *)(param_3 + 8);
    uVar4 = (uint)bVar1;
    if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
      uVar4 = 0;
    }
    FUN_03a71d00(lVar2,param_2,bVar1,
                 *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0 +
                 (ulong)(*(int *)(lVar2 + 0x488) == 1) * 0x7c0 + 0x610);
    FUN_03a4f7f0(param_3,param_2,param_4,3,0,0,0);
    bVar1 = *(byte *)(param_3 + 8);
    uVar4 = (uint)bVar1;
    if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
      uVar4 = 0;
    }
    FUN_03a72840(*(long *)(param_1 + 0x2b8),param_2,bVar1,
                 *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0 +
                 (ulong)(*(int *)(*(long *)(param_1 + 0x2b8) + 0x488) == 1) * 0x7c0 + 0x8c8);
    uVar4 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x2b8) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
      uVar4 = 0;
    }
    *(ulong *)(param_3 + 0xd0) =
         *(long *)(*(long *)(param_1 + 0x2b8) + 0x1d8) + (ulong)uVar4 * 0x560 + 0x158;
  }
  plVar3 = *(long **)(param_3 + 0x318);
  if (plVar3 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
  return;
}

