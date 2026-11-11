
undefined4 FUN_003a4cf8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *(long *)(param_1 + 0x88) = lVar1;
  uVar5 = FUN_003a49f0(param_1,lVar1);
  uVar3 = *(uint *)(param_1 + 0x7c);
  uVar6 = (uint)*(byte *)((long)param_2 + 0x11) << 6;
  uVar4 = uVar3 & 0xffffffbf | uVar6;
  *(uint *)(param_1 + 0x7c) = uVar4;
  if (lVar1 == lVar2 || (char)param_2[2] == '\0') {
    uVar6 = uVar3 & 0xffffff9f | uVar6;
    *(uint *)(param_1 + 0x7c) = uVar6;
  }
  else {
    *(uint *)(param_1 + 0x7c) = uVar4 | 0x20;
    uVar5 = FUN_003a4db0(param_1,lVar1,lVar2);
    uVar6 = *(uint *)(param_1 + 0x7c);
  }
  (**(code **)(PTR_PTR_04bd0a68 + (ulong)(uVar6 >> 5 & 3) * 0x10))(param_1,lVar1);
  return uVar5;
}

