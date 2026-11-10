
void FUN_001dec70(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04bcc1b8;
  lVar3 = *(long *)PTR_DAT_04bcc1b8;
  if (lVar3 == 0xffffffff) {
    operator_new__(0xffffffff);
    lVar3 = *(long *)puVar2;
  }
  uVar4 = FUN_00187df4(lVar3);
  lVar3 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (lVar3 != 0) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar5) = *(undefined1 *)(param_1 + 0x19);
      bVar1 = uVar6 < *(ulong *)puVar2;
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  return;
}

