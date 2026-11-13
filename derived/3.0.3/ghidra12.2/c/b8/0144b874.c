
void FUN_0144b874(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_30;
  undefined8 uStack_28;
  
  (**(code **)(DAT_051c6d70 + 0x18))(&DAT_051c6d70);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  uStack_28 = DAT_051c6d78;
  iVar2 = FUN_02743000(&local_30);
  *(bool *)(param_1 + 0x35c) = iVar2 != 0;
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x280);
  uVar1 = *(undefined4 *)(param_1 + 0x284);
  *(uint *)(param_1 + 0x290) = uVar3;
  *(uint *)(param_1 + 0x280) = uVar3;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined1 *)(param_1 + 0x299) = 1;
  if (*(uint *)(param_1 + 0x2a0) <= uVar3) {
    uVar3 = 0;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x2a8) + (ulong)uVar3 * 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (*(code *)*puVar4)();
  }
  return;
}

