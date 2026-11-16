
undefined4 FUN_027bf380(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_50 = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0277d6c4(param_2);
    }
  }
  uVar5 = 0;
  uVar2 = 0;
  puVar4 = param_1;
  do {
    puVar4 = puVar4 + 1;
    uVar3 = FUN_0277d7b4((long)param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1d) + 0x1004,param_2);
    if ((uVar3 & 1) != 0) {
      if (0x3ff < uVar5) {
        puVar4 = param_1 + 1;
      }
      goto LAB_027bf470;
    }
    uVar2 = uVar2 + 1;
    uVar5 = uVar5 + 1;
  } while (uVar2 != 0x400);
  puVar4 = &local_44;
  local_44 = 0;
LAB_027bf470:
  return *puVar4;
}

