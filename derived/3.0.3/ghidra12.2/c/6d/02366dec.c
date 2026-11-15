
undefined4 FUN_02366dec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
       (uVar3 = FUN_0170dc74(param_2,0), (uVar3 & 1) != 0)) {
      puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x15f0) + 0xf0))(param_1 + 0x15f0);
      uVar6 = *puVar4;
      (**(code **)(*(long *)(param_1 + 0x1620) + 0xf0))(param_1 + 0x1620);
      goto LAB_02366eb4;
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x15f0) + 0xf0))(param_1 + 0x15f0);
  uVar6 = *puVar4;
LAB_02366eb4:
  (**(code **)(*(long *)(param_1 + 0x1650) + 0xf0))(param_1 + 0x1650);
  return uVar6;
}

