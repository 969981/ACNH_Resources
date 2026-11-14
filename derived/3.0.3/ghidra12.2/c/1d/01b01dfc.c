
void FUN_01b01dfc(undefined2 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined8 uStack_28;
  
  if (((DAT_0532acc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532acc8), iVar4 != 0)) {
    DAT_0532acc0 = 0x3358;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0532acc8);
  }
  iVar4 = FUN_0277d6c4(param_2 + 8);
  if (iVar4 == 0x342f) {
    puVar1 = &uStack_28;
    FUN_01b01a74(&uStack_28,param_2 + 0xc);
    uVar5 = FUN_0277e294(&uStack_28);
    bVar3 = (uVar5 & 1) == 0;
    puVar8 = (undefined1 *)((ulong)puVar1 | 2);
    if (bVar3) {
      puVar8 = (undefined1 *)((long)&DAT_0532acc0 + 2);
    }
    puVar10 = (undefined1 *)((ulong)puVar1 | 3);
    if (bVar3) {
      puVar1 = &DAT_0532acc0;
    }
    if (bVar3) {
      puVar10 = (undefined1 *)((long)&DAT_0532acc0 + 3);
    }
    puVar2 = &uStack_28;
    if (bVar3) {
      puVar2 = &DAT_0532acc0;
    }
    uVar7 = *puVar8;
    uVar6 = *(undefined2 *)puVar1;
    uVar9 = *puVar10;
    uVar11 = *(undefined4 *)((long)puVar2 + 4);
  }
  else {
    uVar7 = DAT_0532acc0._2_1_;
    uVar6 = (undefined2)DAT_0532acc0;
    uVar9 = DAT_0532acc0._3_1_;
    uVar11 = DAT_0532acc0._4_4_;
  }
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar7;
  *(undefined1 *)((long)param_1 + 3) = uVar9;
  *(undefined4 *)(param_1 + 2) = uVar11;
  return;
}

