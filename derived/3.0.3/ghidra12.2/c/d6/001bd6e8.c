
undefined8
FUN_001bd6e8(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar11 + 0x18);
  if (lVar10 == 0) {
    return 0;
  }
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar10 != lVar9) {
    lVar1 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28);
    lVar11 = lVar9 + 1;
    cVar4 = *(char *)(lVar1 + lVar9);
    *(long *)(param_2 + 0x18) = lVar11;
    if (cVar4 != -0xb) {
      return 0;
    }
    if (lVar10 != lVar11) {
      uVar5 = *(undefined1 *)(lVar1 + lVar11);
      lVar11 = lVar9 + 2;
      *(long *)(param_2 + 0x18) = lVar11;
      *(undefined1 *)(param_3 + 0x40) = uVar5;
      if (1 < (ulong)(lVar10 - lVar11)) {
        uVar6 = *(undefined2 *)(lVar1 + lVar11);
        lVar11 = lVar9 + 4;
        *(long *)(param_2 + 0x18) = lVar11;
        *(undefined2 *)(param_3 + 0xfa) = uVar6;
        if (3 < (ulong)(lVar10 - lVar11)) {
          uVar2 = *(undefined4 *)(lVar1 + lVar11);
          lVar11 = lVar9 + 8;
          *(long *)(param_2 + 0x18) = lVar11;
          *(undefined4 *)(param_3 + 0xfc) = uVar2;
          if (3 < (ulong)(lVar10 - lVar11)) {
            uVar2 = *(undefined4 *)(lVar1 + lVar11);
            lVar11 = lVar9 + 0xc;
            *(long *)(param_2 + 0x18) = lVar11;
            *(undefined4 *)(param_3 + 0x100) = uVar2;
            if (1 < (ulong)(lVar10 - lVar11)) {
              uVar6 = *(undefined2 *)(lVar1 + lVar11);
              lVar11 = lVar9 + 0xe;
              *(long *)(param_2 + 0x18) = lVar11;
              *(undefined2 *)(param_3 + 0x104) = uVar6;
              if (1 < (ulong)(lVar10 - lVar11)) {
                uVar6 = *(undefined2 *)(lVar1 + lVar11);
                lVar11 = lVar9 + 0x10;
                *(long *)(param_2 + 0x18) = lVar11;
                *(undefined2 *)(param_3 + 0x106) = uVar6;
                if (3 < (ulong)(lVar10 - lVar11)) {
                  uVar3 = *(uint *)(lVar1 + lVar11);
                  lVar11 = lVar9 + 0x14;
                  *(long *)(param_2 + 0x18) = lVar11;
                  *(uint *)(param_3 + 0x108) = uVar3 ^ 0xdb319579;
                  if (3 < (ulong)(lVar10 - lVar11)) {
                    uVar3 = *(uint *)(lVar1 + lVar11);
                    lVar11 = lVar9 + 0x18;
                    *(long *)(param_2 + 0x18) = lVar11;
                    *(uint *)(param_3 + 0x10c) = uVar3 ^ 0xbee17d2f;
                    if (3 < (ulong)(lVar10 - lVar11)) {
                      uVar2 = *(undefined4 *)(lVar1 + lVar11);
                      *(long *)(param_2 + 0x18) = lVar9 + 0x1c;
                      *(undefined4 *)(param_3 + 0x110) = uVar2;
                      uVar8 = FUN_00197494(param_2,param_3 + 0x48,0x10);
                      if ((uVar8 & 1) == 0) {
                        return 0;
                      }
                      *(undefined8 *)(param_3 + 0x58) = 0x10;
                      if (*(long *)(param_2 + 0x18) != 0x2c) {
                        return 0;
                      }
                      *(undefined4 *)(param_3 + 0x42) = 0xf0b0f0b;
                      lVar10 = *(long *)(param_3 + 0x138);
                      lVar11 = *(long *)(param_2 + 0x10);
                      *(undefined8 *)(lVar10 + 0x18) = 0;
                      *(undefined2 *)(lVar10 + 0x31) = 0;
                      *(undefined8 *)(lVar10 + 0x28) = 0;
                      *(byte *)(lVar10 + 0x30) = *(byte *)(lVar10 + 0x30) & 4;
                      uVar7 = *(short *)(lVar11 + 0x18) - 0x2c;
                      if ((uVar7 != 0) && ((param_5 & 1) != 0)) {
                        uVar8 = FUN_001bda64(uVar8,param_2,param_3);
                        if ((uVar8 & 1) == 0) {
                          return 0;
                        }
                        uVar8 = *(long *)(param_2 + 0x18) + (ulong)uVar7;
                        if (uVar8 <= *(ulong *)(*(long *)(param_2 + 0x10) + 0x18)) {
                          *(ulong *)(param_2 + 0x18) = uVar8;
                        }
                      }
                      if (param_4 != (undefined8 *)0x0) {
                        *param_4 = *(undefined8 *)(lVar11 + 0x18);
                      }
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 8) = 1;
  return 0;
}

