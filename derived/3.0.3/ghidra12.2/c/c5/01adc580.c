
uint FUN_01adc580(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte local_30 [16];
  
  local_30[0] = 0;
  local_30[1] = 0;
  FUN_01adab50(param_1,local_30);
  uVar3 = 0;
  do {
    if (uVar3 != 0) {
      if (uVar3 < 0xe) {
        uVar2 = uVar3 + 7;
        if (-1 < (int)uVar3) {
          uVar2 = uVar3;
        }
        if (((uint)((int)uVar2 >> 3) < 2) &&
           ((local_30[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) {
          if (uVar3 == 9) {
            puVar4 = *(uint **)(param_1 + 0x10);
            if (puVar4 == (uint *)0x0) {
              uVar3 = 0xbc;
            }
            else {
              uVar2 = *puVar4;
              uVar3 = 0;
              if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
                puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
                uVar3 = 0;
                if (*puVar5 != 0) {
                  uVar3 = puVar5[1];
                  if ((uVar3 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
                    lVar1 = 0xc;
                    if (*(char *)((long)puVar5 + 10) != '\0') {
                      lVar1 = 0x1c;
                    }
                    lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
                    if (lVar1 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar3 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
                      }
                      if (*puVar5 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < DAT_05326ec0) &&
                         (uVar3 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                         uVar3 < 0xbd)) goto LAB_01adc6cc;
                    }
                  }
                  uVar3 = 0;
                }
              }
            }
LAB_01adc6cc:
            uVar3 = (uint)(0x20 < (ulong)uVar3) | (uint)(0x40ffffffL >> ((ulong)uVar3 & 0x3f));
            goto LAB_01adc6b4;
          }
          goto LAB_01adc6b0;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 0xe) {
LAB_01adc6b0:
      uVar3 = 0;
LAB_01adc6b4:
      return uVar3 & 1;
    }
  } while( true );
}

