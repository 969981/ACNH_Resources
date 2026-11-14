
void FUN_01b01948(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_18;
  
  if (((DAT_0532acb8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532acb8), iVar4 != 0)) {
    DAT_0532acb0 = 0xec9;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_0532acb8);
  }
  lVar1 = param_2 + 8;
  iVar4 = FUN_0277d6c4(lVar1);
  if (((iVar4 == 0x1618) || (iVar4 = FUN_0277d6c4(lVar1), iVar4 == 0x315a)) ||
     (iVar4 = FUN_0277d6c4(lVar1), iVar4 == 0x3805)) {
    FUN_01b01a74(&uStack_18,param_2 + 0xc);
    uVar5 = FUN_0277e294(&uStack_18);
    bVar3 = (uVar5 & 1) == 0;
    puVar2 = &uStack_18;
    if (bVar3) {
      puVar2 = &DAT_0532acb0;
    }
    *(undefined2 *)param_1 = *(undefined2 *)puVar2;
    puVar7 = (undefined1 *)((ulong)&uStack_18 | 2);
    if (bVar3) {
      puVar7 = (undefined1 *)((long)&DAT_0532acb0 + 2);
    }
    *(undefined1 *)((long)param_1 + 2) = *puVar7;
    puVar7 = (undefined1 *)((ulong)&uStack_18 | 3);
    if (bVar3) {
      puVar7 = (undefined1 *)((long)&DAT_0532acb0 + 3);
    }
    *(undefined1 *)((long)param_1 + 3) = *puVar7;
    puVar2 = &uStack_18;
    if (bVar3) {
      puVar2 = &DAT_0532acb0;
    }
    uVar6 = *(undefined4 *)((long)puVar2 + 4);
  }
  else {
    uVar6 = DAT_0532acb0._4_4_;
    *param_1 = (undefined4)DAT_0532acb0;
  }
  param_1[1] = uVar6;
  return;
}

