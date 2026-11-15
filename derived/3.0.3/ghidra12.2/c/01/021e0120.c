
undefined4 FUN_021e0120(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar1 = FUN_0277d6c4();
  lVar6 = *(long *)puVar4;
  if (lVar6 == 0) {
    return 4;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar1) {
    return 4;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar1 * 8) == 0) {
    return 4;
  }
  local_48 = 0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  uVar1 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 == 0) {
LAB_021e02a8:
    uVar2 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar1) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar1 * 8) == 0)) goto LAB_021e02a8;
    lVar6 = *(long *)PTR_DAT_04bc0428;
    uVar1 = FUN_0277d6c4(param_1);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar1) ||
       (puVar3 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar1 * 8), puVar3 == (uint *)0x0)
       ) goto LAB_021e02a8;
    uVar1 = *puVar3;
    uVar2 = 0;
    if ((uVar1 != 0) && (puVar3 != (uint *)(ulong)uVar1)) {
      puVar5 = (uint *)((long)puVar3 - (long)(ulong)uVar1);
      uVar2 = 0;
      if (*puVar5 != 0) {
        uVar1 = puVar5[1];
        if ((uVar1 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar2 = 0;
            if ((ulong)uVar1 != 0) {
              uVar2 = (uint)((ulong)((long)puVar3 - lVar6) / (ulong)uVar1);
            }
            if (*puVar5 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_053271b0) &&
               (uVar2 = (uint)*(ushort *)(DAT_053271b8 + (long)(int)uVar2 * 2), uVar2 < 5))
            goto LAB_021e02ac;
          }
        }
        goto LAB_021e02a8;
      }
    }
  }
LAB_021e02ac:
  switch(*param_2) {
  case 0:
    if (uVar2 < 5) {
      puVar4 = &DAT_04179cc4;
LAB_021e0330:
      return *(undefined4 *)(puVar4 + (long)(int)uVar2 * 4);
    }
    break;
  case 1:
    if (uVar2 < 5) {
      puVar4 = &DAT_04179cd8;
      goto LAB_021e0330;
    }
    break;
  case 2:
    if (uVar2 < 5) {
      puVar4 = &DAT_04179cec;
      goto LAB_021e0330;
    }
    break;
  case 3:
    if (uVar2 < 5) {
      puVar4 = &DAT_04130b8c;
      goto LAB_021e0330;
    }
  }
  return 4;
}

