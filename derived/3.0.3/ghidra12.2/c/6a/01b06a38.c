
undefined8 FUN_01b06a38(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
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
  local_38 = 0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uVar3 = FUN_0277d6c4(&local_40);
  lVar7 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar4 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        uVar3 = 0;
        if ((uVar1 != 0) && (puVar4 != (uint *)(ulong)uVar1)) {
          puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar1);
          uVar3 = 0;
          if (*puVar5 != 0) {
            uVar3 = puVar5[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar3);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar3 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar3 < 0xbd))
                goto LAB_01b06bbc;
              }
            }
            uVar3 = 0;
          }
        }
        goto LAB_01b06bbc;
      }
    }
  }
  uVar3 = 0xbc;
LAB_01b06bbc:
  if ((uVar3 < 0xe) && ((1 << (ulong)(uVar3 & 0x1f) & 0x2601U) != 0)) {
    return 1;
  }
  if (uVar3 == 0x57) {
    return 1;
  }
  return 0;
}

