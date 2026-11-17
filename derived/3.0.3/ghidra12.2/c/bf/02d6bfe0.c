
void FUN_02d6bfe0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(param_1 + 0x25f0) = param_2;
  *(undefined4 *)(param_1 + 0x25e8) = 0;
  *(undefined1 *)(param_1 + 0x3622) = 0;
  *(char *)(param_1 + 0x25ec) = '\x01';
  *(undefined1 *)(param_1 + 0x25f8) = 0;
  *(undefined4 *)(param_1 + 0x26c8) = param_3;
  *(undefined4 *)(param_1 + 0x26cc) = param_4;
  FUN_03ebb268(param_1 + 0x2580);
  if ((*(long **)(param_1 + 0x25f0) != (long *)0x0) &&
     (iVar3 = (**(code **)(**(long **)(param_1 + 0x25f0) + 0x28))(), iVar3 == 0)) {
    uVar5 = *(uint *)(param_1 + 0x1578);
    bVar2 = false;
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x1560))) {
      lVar4 = param_1 + 0x1550;
      uVar1 = uVar5 + 1 & 3;
      if (2 < uVar5) {
        uVar5 = uVar5 + 1 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      bVar2 = false;
      if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x1564), lVar4 != 0)) {
        bVar2 = *(int *)(lVar4 + 0x270) == 0x53;
      }
    }
    if (((*(int *)(DAT_05739190 + 0x504) != -1) && (*(int *)(DAT_05739190 + 0x508) != -1)) &&
       ((*(int *)(DAT_05739190 + 0x508) == *(int *)(param_1 + 0x153c) ||
        *(int *)(DAT_05739190 + 0x504) == *(int *)(param_1 + 0x153c)) &&
        (bool)*(char *)(DAT_05739190 + 0x50c) == bVar2)) {
      *(undefined1 *)(param_1 + 0x3622) = 1;
      return;
    }
  }
  if ((*(char *)(param_1 + 0x25ec) != '\0') || (*(int *)(param_1 + 0x2588) != 0)) {
    if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 0x11;
    }
  }
  return;
}

