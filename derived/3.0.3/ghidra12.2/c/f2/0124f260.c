
undefined8 FUN_0124f260(undefined4 *param_1,undefined2 *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      if (((param_3 & 1) != 0) || (uVar5 = FUN_0123fb30(param_1,param_2,0), (uVar5 & 1) == 0)) {
        if ((param_4 & 1) != 0) {
          FUN_01233310();
          lVar9 = DAT_05150da0;
          if (DAT_05150d98 != '\0') {
            uVar4 = 0;
            do {
              uVar5 = FUN_0277d7b4(lVar9 + ((long)((ulong)uVar4 << 0x20) >> 0x1c),param_1);
              if ((uVar5 & 1) != 0) {
                if (param_2 == (undefined2 *)0x0) {
                  return 1;
                }
                lVar9 = lVar9 + (long)(int)uVar4 * 0x10;
                *param_2 = *(undefined2 *)(lVar9 + 8);
                *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar9 + 10);
                *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar9 + 0xb);
                uVar6 = *(undefined4 *)(lVar9 + 0xc);
                goto LAB_0124f500;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x5d);
          }
          uVar5 = FUN_0123fb30(param_1,param_2,0);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
        uVar5 = FUN_01239cf0(param_2,param_1,1,param_3 & 1);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        local_60 = *param_1;
        uStack_5c = param_1[1];
        lVar9 = *(long *)puVar3;
        local_58 = 0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar3 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
               (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0)) &&
                (puVar7 != (uint *)(ulong)uVar4)))) {
              puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
              if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) &&
                 ((ulong)(ushort)puVar8[2] != 0)) {
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
                  if (((uVar1 < DAT_05326ec0) &&
                      (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                     (uVar4 = uVar2 - 0x4c, uVar4 < 10 && (1 << (ulong)(uVar4 & 0x1f) & 0x215U) != 0
                     )) {
                    uVar6 = param_1[1];
LAB_0124f500:
                    *(undefined4 *)(param_2 + 2) = uVar6;
                  }
                }
              }
            }
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

