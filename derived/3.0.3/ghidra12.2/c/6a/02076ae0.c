
undefined4 FUN_02076ae0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    return 7;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar2) {
    return 7;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 7;
  }
  local_38 = 0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (puVar4 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar4 != (uint *)0x0)) {
        uVar2 = *puVar4;
        uVar3 = 0;
        if ((uVar2 == 0) || (puVar4 == (uint *)(ulong)uVar2)) goto LAB_02076c64;
        puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
        uVar3 = 0;
        if (*puVar5 == 0) goto LAB_02076c64;
        uVar2 = puVar5[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar2);
            }
            if (*puVar5 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05327190) &&
               (uVar3 = (uint)*(ushort *)(DAT_05327198 + (long)(int)uVar3 * 2), uVar3 < 0x13e))
            goto LAB_02076c64;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_02076c64:
  if (uVar3 - 2 < 7) {
    return *(undefined4 *)(&DAT_04130bac + (long)(int)(uVar3 - 2) * 4);
  }
  return 7;
}

