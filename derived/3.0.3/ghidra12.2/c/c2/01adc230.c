
undefined8 FUN_01adc230(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  byte local_30 [16];
  
  local_30[0] = 0;
  local_30[1] = 0;
  FUN_01adab50(param_1,local_30);
  uVar3 = 0;
  do {
    if ((uVar3 != 0) && (uVar3 < 0xe)) {
      uVar2 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      if (((uint)((int)uVar2 >> 3) < 2) &&
         ((local_30[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) {
        if (uVar3 != 9) {
          return 0;
        }
        puVar4 = *(uint **)(param_1 + 0x10);
        if (puVar4 == (uint *)0x0) {
          uVar3 = 0x21;
        }
        else {
          uVar3 = *puVar4;
          uVar5 = 0;
          if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
            puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
            uVar5 = 0;
            if (*puVar7 != 0) {
              uVar3 = puVar7[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
                  goto LAB_01adc35c;
                }
              }
              uVar5 = 0;
            }
          }
LAB_01adc35c:
          if (uVar5 == 0x1e) {
            return 1;
          }
          uVar2 = *puVar4;
          uVar3 = 0;
          if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
            puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
            uVar3 = 0;
            if (*puVar7 != 0) {
              uVar3 = puVar7[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326af0) &&
                     (uVar3 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar3 < 0xa2))
                  goto LAB_01adc414;
                }
              }
              uVar3 = 0;
            }
          }
        }
LAB_01adc414:
        if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
          if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
               (puVar4 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
              ((*(uint *)(DAT_0532a7a0 + 200) <= uVar3 ||
               (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar3) != '\0')))) &&
             (((uVar3 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar4 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            puVar4 = (uint *)((ulong)(puVar4[1] * uVar3 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                             (long)puVar4);
            goto joined_r0x01adc548;
          }
        }
        else if (uVar3 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
          if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar3) {
            uVar3 = 0;
          }
          puVar4 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01adc548:
          uVar5 = 0;
          if (puVar4 == (uint *)0x0) goto LAB_01adc554;
          uVar5 = 0;
          uVar3 = *puVar4;
          if ((uVar3 == 0) || (puVar4 == (uint *)(ulong)uVar3)) goto LAB_01adc554;
          puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar7 == 0) goto LAB_01adc554;
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326b00) &&
                 (uVar5 = *(ushort *)(DAT_05326b08 + (long)(int)uVar2 * 2), uVar5 < 0x75))
              goto LAB_01adc554;
            }
          }
        }
        uVar5 = 0;
LAB_01adc554:
        if (uVar5 == 0x4c) {
          return 1;
        }
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 0xe) {
      return 0;
    }
  } while( true );
}

