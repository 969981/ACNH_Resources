
void FUN_03eaaad0(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int local_60;
  uint uStack_5c;
  int *local_58;
  long local_50 [2];
  
  puVar5 = (uint *)param_1[1];
  if ((puVar5 != (uint *)0x0) && ((*puVar5 & 0xfe) == 0xc0)) {
    uVar3 = *puVar5 >> 8;
    if (*(short *)*param_1 == 0x5942) {
      uVar3 = uVar3 & 0xff00 | *puVar5 >> 0x18 | (uVar3 & 0xff) << 0x10;
    }
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        puVar5 = (uint *)param_1[1];
        if (puVar5 != (uint *)0x0) {
          if ((char)*puVar5 == -0x40) {
            uVar8 = (ulong)(*puVar5 >> 8);
            sVar2 = *(short *)*param_1;
            if (sVar2 == 0x5942) {
              uVar8 = uVar8 & 0xff00 | (ulong)(*puVar5 >> 0x18) | (uVar8 & 0xff) << 0x10;
            }
            if (uVar9 < uVar8) {
              bVar1 = *(byte *)((long)puVar5 + uVar9 + 4);
              uVar7 = *(uint *)((long)puVar5 + uVar9 * 4 + (ulong)((int)uVar8 + 3U & 0x1fffffc) + 4)
              ;
LAB_03eaabf8:
              uVar4 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
              uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
              if (sVar2 != 0x5942) {
                uVar4 = uVar7;
              }
              if ((bVar1 & 0xfe) == 0xc0) {
                piVar6 = param_2;
                do {
                  if (piVar6[1] == uVar4) goto LAB_03eaab40;
                  piVar6 = *(int **)(piVar6 + 2);
                } while (piVar6 != (int *)0x0);
                FUN_03ea9348(local_50,param_1,uVar9 & 0xffffffff);
                if (local_50[0] != 0) {
                  local_60 = *param_2 + 1;
                  uStack_5c = uVar4;
                  local_58 = param_2;
                  FUN_03eaaad0(local_50,&local_60);
                }
              }
            }
          }
          else if ((char)*puVar5 == -0x3f) {
            uVar7 = *puVar5 >> 8;
            sVar2 = *(short *)*param_1;
            if (sVar2 == 0x5942) {
              uVar7 = uVar7 & 0xff00 | *puVar5 >> 0x18 | (uVar7 & 0xff) << 0x10;
            }
            if (uVar9 < uVar7) {
              bVar1 = *(byte *)((long)puVar5 + uVar9 * 8 + 7);
              uVar7 = puVar5[uVar9 * 2 + 2];
              goto LAB_03eaabf8;
            }
          }
        }
LAB_03eaab40:
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar3);
    }
  }
  return;
}

