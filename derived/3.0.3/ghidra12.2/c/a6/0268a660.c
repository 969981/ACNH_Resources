
undefined4 FUN_0268a660(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return 0xbd;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar2) {
    return 0xbd;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 0xbd;
  }
  local_38 = 0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        uVar4 = 0;
        if ((uVar2 != 0) && (puVar5 != (uint *)(ulong)uVar2)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
          uVar4 = 0;
          if (*puVar6 != 0) {
            uVar2 = puVar6[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar8 != 0) {
                uVar4 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar2);
                }
                if (*puVar6 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326ec0) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar4 < 0xbd))
                goto LAB_0268a80c;
              }
            }
            uVar4 = 0;
          }
        }
        goto LAB_0268a80c;
      }
    }
  }
  uVar4 = 0xbc;
LAB_0268a80c:
  uVar4 = uVar4 - 9;
  if ((uVar4 < 0xc) && ((0xa83U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_0417b44c + (long)(int)uVar4 * 4);
  }
  uVar3 = FUN_0277e294(param_1);
  uVar7 = 0;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0xbd;
  }
  return uVar7;
}

