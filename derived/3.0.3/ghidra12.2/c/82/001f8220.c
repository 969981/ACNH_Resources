
void FUN_001f8220(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04bcc1b8;
  lVar4 = *(long *)PTR_DAT_04bcc1b8;
  if (lVar4 == 0xffffffff) {
    operator_new__(0x7fffffff8);
    lVar4 = *(long *)puVar2;
  }
  uVar3 = FUN_00187df4(lVar4 << 3);
  uVar5 = *(ulong *)puVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  if (uVar5 != 0) {
    uVar6 = 0;
    uVar7 = 1;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar6 * 8) = *(undefined8 *)(param_1 + 0x20);
      bVar1 = uVar7 < uVar5;
      uVar6 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
  return;
}

