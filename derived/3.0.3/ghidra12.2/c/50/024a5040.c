
void FUN_024a5040(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_18;
  
  FUN_023164ec(param_1,6);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  local_40 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_38 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_016ff8c0(puVar2,8,&local_40);
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  uVar4 = *(undefined8 *)(param_1 + 0x1900);
  local_54 = (undefined2)uVar4;
  local_52 = (undefined1)((ulong)uVar4 >> 0x10);
  local_44 = local_38;
  local_50 = (undefined4)((ulong)uVar4 >> 0x20);
  local_51 = (undefined1)((ulong)uVar4 >> 0x18);
  local_4c = local_40;
  if (*(long *)PTR_DAT_04bb47e0 != 0) {
    uVar3 = FUN_0277d6c4(&local_54);
    FUN_019540fc(uVar3,param_1 + 0x1ee8,uVar3 & 0xffffffff,&local_4c);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02332d7c(param_1,0);
  }
  return;
}

