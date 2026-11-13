
uint FUN_0124cac0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0123e350(param_4,param_1,0,param_2,param_3);
      if (param_4 != 0) {
        local_50 = *param_1;
        uStack_4c = param_1[1];
        lVar8 = *(long *)puVar3;
        local_48 = 0;
        uVar5 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(param_1);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
               (((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar6 != (uint *)0x0 && (uVar5 = *puVar6, uVar5 != 0)) &&
                (puVar6 != (uint *)(ulong)uVar5)))) {
              puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
              if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) &&
                 ((ulong)(ushort)puVar7[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar5);
                  }
                  if (*puVar7 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < DAT_05326ec0) &&
                      (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                     (uVar5 = uVar2 - 0x4c, uVar5 < 10 && (1 << (ulong)(uVar5 & 0x1f) & 0x215U) != 0
                     )) {
                    *(undefined4 *)(param_4 + 4) = param_1[1];
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0124cca0;
    }
  }
  uVar4 = 0;
LAB_0124cca0:
  return uVar4 & 1;
}

