
void FUN_00332ac0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_2 + 4) < 0x21) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  *(ulong *)(param_1 + 0xe0) = (ulong)*(uint *)(param_2 + 4);
  uVar2 = FUN_0039c3f8(param_2 + (ulong)uVar1);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_0039c5a0(uVar2,*(undefined8 *)(param_1 + 0x10));
    FUN_003491ac(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0xa8),*(undefined8 *)(param_1 + 0x10),
                 "NnVfx2GfxMemoryPool");
    FUN_00333270(param_1,*(undefined8 *)(param_1 + 0x90));
    return;
  }
  FUN_0039c640();
  FUN_00333270(param_1,*(undefined8 *)(param_1 + 0x90));
  return;
}

