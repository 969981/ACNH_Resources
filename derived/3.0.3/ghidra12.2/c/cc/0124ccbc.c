
undefined8 FUN_0124ccbc(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  if (*(long *)puVar1 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar2) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 0;
  }
  uVar3 = FUN_01239cf0(param_2,param_1,0,1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar7 = *(long *)puVar1;
  local_38 = 0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        uVar4 = 0;
        if ((uVar2 != 0) && (puVar5 != (uint *)(ulong)uVar2)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
          uVar4 = 0;
          if (*puVar6 != 0) {
            uVar2 = puVar6[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar4 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar2);
                }
                if (*puVar6 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326ec0) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar4 < 0xbd))
                goto LAB_0124ce88;
              }
            }
            uVar4 = 0;
          }
        }
        goto LAB_0124ce88;
      }
    }
  }
  uVar4 = 0xbc;
LAB_0124ce88:
  if (((param_2 != 0) && (uVar4 - 0x4c < 10)) && ((1 << (ulong)(uVar4 - 0x4c & 0x1f) & 0x215U) != 0)
     ) {
    *(undefined4 *)(param_2 + 4) = param_1[1];
  }
  return 1;
}

