
void FUN_00720394(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (((*(long *)(param_1 + 0x280) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x280) + 0x10), lVar3 != 0)) &&
     (uVar2 = FUN_03eec2a0(lVar3,param_2), -1 < (int)uVar2)) {
    lVar3 = *(long *)(param_1 + 0x280);
    uVar1 = uVar2;
    if (*(uint *)(lVar3 + 0x30) <= uVar2) {
      uVar1 = 0;
    }
    uVar4 = 0x3f800000;
    if ((param_3 & 1) == 0) {
      uVar4 = 0;
    }
    *(byte *)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8) =
         *(byte *)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8) & 0xfe | param_3 & 1;
    if (*(uint *)(lVar3 + 0x30) <= uVar2) {
      uVar2 = 0;
    }
    *(undefined4 *)(*(long *)(lVar3 + 0x38) + (ulong)uVar2 * 8 + 4) = uVar4;
  }
  if (((*(long *)(param_1 + 0x288) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x288) + 0x10), lVar3 != 0)) &&
     (uVar2 = FUN_03eec2a0(lVar3,param_2), -1 < (int)uVar2)) {
    lVar3 = *(long *)(param_1 + 0x288);
    uVar1 = uVar2;
    if (*(uint *)(lVar3 + 0x30) <= uVar2) {
      uVar1 = 0;
    }
    uVar4 = 0x3f800000;
    if ((param_3 & 1) == 0) {
      uVar4 = 0;
    }
    *(byte *)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8) =
         *(byte *)(*(long *)(lVar3 + 0x38) + (ulong)uVar1 * 8) & 0xfe | param_3 & 1;
    if (*(uint *)(lVar3 + 0x30) <= uVar2) {
      uVar2 = 0;
    }
    *(undefined4 *)(*(long *)(lVar3 + 0x38) + (ulong)uVar2 * 8 + 4) = uVar4;
  }
  return;
}

