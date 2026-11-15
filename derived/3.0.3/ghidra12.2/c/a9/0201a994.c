
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a994(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  
  lVar11 = *(long *)(param_2 + 0x60a0) +
           ((ulong)*(uint *)(*(long *)(param_2 + 0x60a0) + 0x10) & 1) * 0x20;
  uVar5 = *(undefined2 *)(lVar11 + 0x14);
  uVar3 = *(undefined1 *)(lVar11 + 0x16);
  uVar4 = *(undefined1 *)(lVar11 + 0x17);
  uVar2 = *(undefined4 *)(lVar11 + 0x18);
  *(undefined2 *)param_1 = uVar5;
  *(undefined1 *)((long)param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 3) = uVar4;
  param_1[1] = uVar2;
  puVar7 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_1);
  lVar11 = *(long *)puVar7;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_58 = 0;
      local_60 = uVar5;
      local_5e = uVar3;
      local_5d = uVar4;
      local_5c = uVar2;
      uVar8 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar7 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_1);
          uVar2 = DAT_0558600c;
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar9 != (uint *)0x0 && (uVar8 = *puVar9, uVar8 != 0)) &&
              (puVar9 != (uint *)(ulong)uVar8)))) {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
            if (((*puVar10 != 0) && (uVar8 = puVar10[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar10[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar8);
                }
                if (*puVar10 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   uVar6 < 0xbd && (uVar6 | 4) == 0xc)) {
                  *param_1 = _DAT_05586008;
                  param_1[1] = uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

