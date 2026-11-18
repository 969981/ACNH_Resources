
void FUN_0375dd88(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 uVar4;
  long lVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  lVar3 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) || ((*(byte *)(lVar3 + 0x1a71) >> 2 & 1) != 0))
     && ((*(long *)PTR_DAT_04bc1530 != 0 &&
         (lVar5 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar5 != 0)))) {
    if ((*(long **)(lVar5 + 0x1790) != (long *)0x0) &&
       (puVar1 = (undefined8 *)**(long **)(lVar5 + 0x1790), puVar1 != (undefined8 *)0x0)) {
      uVar2 = (**(code **)*puVar1)();
      uVar4 = *(undefined2 *)(*(long *)(lVar5 + 0x1778) + *(long *)(lVar5 + 6000) + 2);
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x1790) != 0)) &&
         (puVar1 = *(undefined8 **)(*(long *)(lVar5 + 0x1790) + 8), puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)();
      }
      goto LAB_0375de48;
    }
    lVar3 = *(long *)(lVar5 + 0x1778) + *(long *)(lVar5 + 6000);
  }
  uVar4 = *(undefined2 *)(lVar3 + 2);
LAB_0375de48:
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  FUN_037827e0(&local_58,uVar4);
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x3c) = local_38._4_4_;
  FUN_0375dec0(&local_58);
  *(undefined4 *)(param_1 + 0x50) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x54) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x60) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 100) = local_38._4_4_;
  return;
}

