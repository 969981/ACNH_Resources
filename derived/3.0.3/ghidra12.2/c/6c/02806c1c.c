
undefined8 * FUN_02806c1c(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar1 = (undefined8 *)(param_1 + 0x1fb8);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar1);
  lVar9 = *(long *)puVar4;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_50 = *(undefined2 *)(param_1 + 0x1fb8);
      local_48 = 0;
      local_4e = *(undefined2 *)(param_1 + 0x1fba);
      local_4c = *(undefined4 *)(param_1 + 0x1fbc);
      uVar5 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(puVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar7 != (uint *)0x0 && (uVar5 = *puVar7, uVar5 != 0)) &&
              (puVar7 != (uint *)(ulong)uVar5)))) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
            if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) &&
               ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if (((uVar2 < DAT_05326ec0) &&
                    (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar3 < 0xbd)) &&
                   (uVar3 == 8)) {
                  return puVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (((DAT_0559bd80 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0559bd80), iVar6 != 0)) {
    DAT_0559bd74 = 0x8fe;
    FUN_0277d4ac(&DAT_0559bd74);
    __cxa_guard_release(&DAT_0559bd80);
  }
  return &DAT_0559bd74;
}

