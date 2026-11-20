
undefined8 FUN_03ea9f60(undefined8 *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint *puVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  short *local_40;
  uint *puStack_38;
  uint local_30;
  uint uStack_2c;
  uint *local_28;
  
  local_30 = 0;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar7 = FUN_03ea9450(param_1,&local_30);
  if (((uVar7 & 1) != 0) && ((uStack_2c & 0xff) - 0xc0 < 2)) {
    local_40 = (short *)*param_1;
    puStack_38 = (uint *)((long)local_40 + (ulong)local_30);
    if (local_40 != (short *)0x0) {
      if ((char)*puStack_38 == -0x3f) {
        uVar8 = *puStack_38 >> 8;
        sVar3 = *local_40;
        if (sVar3 == 0x5942) {
          uVar8 = uVar8 & 0xff00 | *puStack_38 >> 0x18 | (uVar8 & 0xff) << 0x10;
        }
        if (uVar8 == 0) {
          return 0;
        }
        cVar2 = *(char *)((long)puStack_38 + 7);
        uVar8 = puStack_38[2];
      }
      else {
        if ((char)*puStack_38 != -0x40) {
          return 0;
        }
        sVar3 = *local_40;
        uVar1 = *puStack_38;
        uVar8 = uVar1 >> 8;
        if (sVar3 == 0x5942) {
          uVar8 = uVar8 & 0xff00 | uVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
          if (uVar8 == 0) {
            return 0;
          }
        }
        else if (uVar1 < 0x100) {
          return 0;
        }
        cVar2 = (char)puStack_38[1];
        uVar8 = *(uint *)((long)puStack_38 + (ulong)(uVar8 + 3 & 0x1fffffc) + 4);
      }
      uVar1 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (sVar3 != 0x5942) {
        uVar1 = uVar8;
      }
      if ((cVar2 == -0x2d) || ((cVar2 == -0x2f && (-1 < (int)uVar1)))) {
        *(char *)(param_2 + 0x10) = (char)uVar1;
        FUN_03ea9348(&local_30,&local_40,1);
        psVar6 = (short *)CONCAT44(uStack_2c,local_30);
        if (psVar6 != (short *)0x0) {
          if ((local_28 == (uint *)0x0) || ((*local_28 & 0xfe) != 0xc0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = *local_28 >> 8;
            if (*psVar6 == 0x5942) {
              uVar8 = uVar8 & 0xff00 | *local_28 >> 0x18 | (uVar8 & 0xff) << 0x10;
            }
          }
          uVar1 = (uint)*(byte *)(param_2 + 0x12);
          if (uVar8 <= *(byte *)(param_2 + 0x12)) {
            uVar1 = uVar8;
          }
          if (uVar1 != 0) {
            uVar7 = 0;
            puVar5 = local_28;
            do {
              if (local_28 != (uint *)0x0) {
                if ((char)*local_28 == -0x3f) {
                  uVar8 = *local_28 >> 8;
                  sVar3 = *psVar6;
                  if (sVar3 == 0x5942) {
                    uVar8 = uVar8 & 0xff00 | *local_28 >> 0x18 | (uVar8 & 0xff) << 0x10;
                  }
                  if (uVar8 != 0) {
                    cVar2 = *(char *)((long)puVar5 + 7);
                    uVar8 = puVar5[2];
LAB_03eaa1b0:
                    uVar4 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                    if (sVar3 != 0x5942) {
                      uVar4 = uVar8;
                    }
                    if (cVar2 == -0x2e) {
                      *(uint *)(*(long *)(param_2 + 8) + uVar7 * 4) = uVar4;
                    }
                  }
                }
                else if (((char)*local_28 == -0x40) && (-1 < (int)(uint)uVar7)) {
                  sVar3 = *psVar6;
                  uVar8 = *local_28 >> 8;
                  if (sVar3 == 0x5942) {
                    uVar8 = uVar8 & 0xff00 | *local_28 >> 0x18 | (uVar8 & 0xff) << 0x10;
                  }
                  if ((uint)uVar7 < uVar8) {
                    cVar2 = *(char *)((long)local_28 + uVar7 + 4);
                    uVar8 = *(uint *)((long)local_28 +
                                     uVar7 * 4 + ((ulong)(uVar8 + 3) & 0x1fffffc) + 4);
                    goto LAB_03eaa1b0;
                  }
                }
              }
              uVar7 = uVar7 + 1;
              puVar5 = puVar5 + 2;
            } while (uVar1 != uVar7);
          }
          *(char *)(param_2 + 0x13) = (char)uVar1;
          return 1;
        }
      }
    }
  }
  return 0;
}

