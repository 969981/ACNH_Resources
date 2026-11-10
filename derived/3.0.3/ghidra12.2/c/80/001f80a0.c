
void FUN_001f80a0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04bcc1b8;
  lVar3 = *(long *)PTR_DAT_04bcc1b8;
  if (lVar3 == 0xffffffff) {
    operator_new__(0x3fffffffc);
    lVar3 = *(long *)puVar2;
  }
  lVar3 = FUN_00187df4(lVar3 << 2);
  uVar4 = *(ulong *)puVar2;
  *(long *)(param_1 + 0x10) = lVar3;
  if (uVar4 != 0) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      *(undefined4 *)(lVar3 + uVar5 * 4) = *(undefined4 *)(param_1 + 0x1c);
      bVar1 = uVar6 < uVar4;
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  return;
}

