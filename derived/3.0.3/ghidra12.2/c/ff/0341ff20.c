
/* WARNING: Removing unreachable block (ram,0x034200b0) */

undefined8 FUN_0341ff20(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(param_2);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar5;
  if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_0341fff4:
    uVar4 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    uVar4 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326f18) &&
             (uVar4 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar4 < 0xf))
          goto LAB_0341fff8;
        }
      }
      goto LAB_0341fff4;
    }
  }
LAB_0341fff8:
  if (uVar4 != 0xb) {
    return 0;
  }
  uVar3 = *puVar5;
  if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar7 != 0) {
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05327180) &&
           (uVar4 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2), uVar4 < 3)) goto LAB_034200b4;
      }
    }
  }
  uVar4 = 0;
LAB_034200b4:
  if (uVar4 == 0) {
    return 1;
  }
  return 0;
}

