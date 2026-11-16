
void FUN_02875b04(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar6 = *(long *)puVar2;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar4 = FUN_0277d7b4(param_1,param_2);
      if ((uVar4 & 1) != 0) {
        lVar5 = 0;
        bVar1 = true;
        goto LAB_02875bf0;
      }
      lVar6 = *(long *)puVar2;
    }
  }
  uVar3 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
       (uVar4 = FUN_0277d7b4(param_1 + 8,param_2), (uVar4 & 1) != 0)) {
      bVar1 = true;
      lVar5 = 1;
      goto LAB_02875bf0;
    }
  }
  bVar1 = false;
  lVar5 = 0xffffffff;
LAB_02875bf0:
  if (bVar1) {
    *(undefined1 *)(param_1 + lVar5 + 0x10) = 0;
    param_1 = param_1 + lVar5 * 0x38;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 2;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

