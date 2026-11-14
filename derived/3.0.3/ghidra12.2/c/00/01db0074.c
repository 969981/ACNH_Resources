
void FUN_01db0074(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04bc1408;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 < (int)*(uint *)PTR_DAT_04bc1408 && uVar1 < *(uint *)PTR_DAT_04bc1408)) &&
     (lVar3 = *(long *)(*(long *)(PTR_DAT_04bc1408 + 8) + (ulong)uVar1 * 8), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if (((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2 && uVar1 < *(uint *)puVar2)) &&
     (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2 && uVar1 < *(uint *)puVar2)) &&
     (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if ((((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2)) && (uVar1 < *(uint *)puVar2)) &&
     (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  if (((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2)) &&
     ((uVar1 < *(uint *)puVar2 &&
      (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)))) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  if (((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2)) &&
     ((uVar1 < *(uint *)puVar2 &&
      (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)))) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if ((((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2)) && (uVar1 < *(uint *)puVar2)) &&
     (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  if (((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)puVar2)) &&
     ((uVar1 < *(uint *)puVar2 &&
      (lVar3 = *(long *)(*(long *)(puVar2 + 8) + (ulong)uVar1 * 8), lVar3 != 0)))) {
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}

