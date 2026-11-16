
undefined8 FUN_027bc998(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        uVar4 = *puVar7;
        if (uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 = (uint)uVar2,
                 uVar2 < 0xbd)) goto LAB_027bcae8;
            }
          }
        }
        uVar4 = 0;
        goto LAB_027bcae8;
      }
    }
  }
  uVar4 = 0xbc;
LAB_027bcae8:
  switch(uVar4) {
  case 0x69:
    uVar4 = 0x69;
    break;
  case 0x6a:
    break;
  case 0x6b:
    uVar4 = 0x6b;
    break;
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    return 0;
  case 0x70:
    uVar4 = 0x70;
    break;
  default:
    if (1 < uVar4 - 0xa4) {
      return 0;
    }
    uVar5 = FUN_027bc660(param_1,0xa4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar4 = 0xa5;
  }
  uVar6 = FUN_027bc660(param_1,uVar4);
  return uVar6;
}

