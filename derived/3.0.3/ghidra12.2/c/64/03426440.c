
uint FUN_03426440(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      uVar4 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar5 != (uint *)0x0)) {
            uVar4 = *puVar5;
            if (uVar4 == 0) {
              return 0;
            }
            if (puVar5 == (uint *)(ulong)uVar4) {
              return 0;
            }
            puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
            if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar4);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327490) &&
                   (uVar2 = *(ushort *)(DAT_05327498 + (long)(int)uVar1 * 2), uVar2 < 6)) {
                  return 0x2cU >> (ulong)(uVar2 & 0x1f) & 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

