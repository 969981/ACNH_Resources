
undefined1  [16] FUN_0047aa40(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  plVar1 = (long *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar5 = PTR_DAT_048607b8;
    uVar8 = *(uint *)(*(long *)(param_1 + 0x68) + 0xa0);
    uVar9 = (ulong)uVar8;
    if (0 < (int)uVar8) {
      uVar8 = 0;
      uVar10 = 0;
      if ((param_2 & 1) == 0) {
LAB_0047ab4c:
        do {
          uVar4 = *(int *)(param_1 + 0x20) - 1;
          if (0 < (int)uVar4) {
            uVar3 = (int)uVar10 * -0x61c8864f;
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            uVar3 = uVar4 & (uVar3 >> 0x10 | uVar3 << 0x10);
            uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 4);
            while (uVar2 != 0xffffffff) {
              if (uVar10 == uVar2) {
                if (((int)uVar3 < *(int *)(param_1 + 0x20)) &&
                   (lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + uVar10 * 8),
                   *(char *)(lVar7 + 0x34) == '\0')) {
                  if (uVar8 == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
                    FUN_00426990(puVar5,plVar1,8);
                    uVar8 = *(uint *)(param_1 + 0x58);
                  }
                  *(long *)(*(long *)(param_1 + 0x50) + (long)(int)uVar8 * 8) = lVar7;
                  uVar8 = uVar8 + 1;
                  *(uint *)(param_1 + 0x58) = uVar8;
                  uVar10 = uVar10 + 1;
                  if (uVar10 == uVar9) goto LAB_0047ac04;
                  goto LAB_0047ab4c;
                }
                break;
              }
              uVar3 = uVar3 + 1 & uVar4;
              uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 4);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
      else {
        do {
          uVar4 = *(int *)(param_1 + 0x20) - 1;
          if (0 < (int)uVar4) {
            uVar3 = (int)uVar10 * -0x61c8864f;
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            uVar3 = uVar4 & (uVar3 >> 0x10 | uVar3 << 0x10);
            uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 4);
            while (uVar2 != 0xffffffff) {
              if (uVar10 == uVar2) {
                if ((int)uVar3 < *(int *)(param_1 + 0x20)) {
                  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + uVar10 * 8)
                  ;
                  if (uVar8 == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
                    FUN_00426990(puVar5,plVar1,8);
                    uVar8 = *(uint *)(param_1 + 0x58);
                  }
                  *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar8 * 8) = uVar11;
                  uVar8 = uVar8 + 1;
                  *(uint *)(param_1 + 0x58) = uVar8;
                }
                break;
              }
              uVar3 = uVar3 + 1 & uVar4;
              uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 4);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
LAB_0047ac04:
      if (uVar8 != 0) {
        lVar6 = *plVar1;
        lVar7 = lVar6 + (long)(int)uVar8 * 8;
        goto LAB_0047ac1c;
      }
    }
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *plVar1;
    lVar7 = lVar6 + (long)*(int *)(param_1 + 0x58) * 8;
  }
LAB_0047ac1c:
  auVar12._8_8_ = lVar7;
  auVar12._0_8_ = lVar6;
  return auVar12;
}

