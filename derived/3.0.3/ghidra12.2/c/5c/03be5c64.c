
undefined8 FUN_03be5c64(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((*(ushort *)(param_2 + 6) & 1) != 0) {
    puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar4 + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar4;
    }
    if (puVar1 != (uint *)0x0) {
      uVar5 = *puVar1;
      goto LAB_03be5cc4;
    }
  }
  uVar5 = 5;
LAB_03be5cc4:
  lVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + 0x18) + 0x20))();
  lVar2 = (**(code **)(**(long **)(lVar2 + 0xb0) + 0x30))(*(long **)(lVar2 + 0xb0),DAT_04c4bee0,8);
  if (lVar2 == 0 || 5 < uVar5) {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + 0x18) + 0x20))();
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03be5d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&UNK_03be5d24 + (ulong)(byte)(&DAT_041e83dc)[uVar5] * 4))();
  return uVar3;
}

