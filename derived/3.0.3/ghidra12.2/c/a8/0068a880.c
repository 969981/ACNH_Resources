
undefined8 FUN_0068a880(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = puVar4 + (long)*(int *)(param_1 + 0x18) * 3;
    iVar1 = *(int *)(param_3 + 1);
    if (iVar1 < 1) {
      do {
        pbVar6 = (byte *)*puVar4;
        if (pbVar6 == (byte *)0x0) {
          if (iVar1 == 0) goto LAB_0068a98c;
        }
        else {
          uVar8 = (ulong)*pbVar6;
          if (*pbVar6 != 0) {
            uVar8 = 0;
            do {
              lVar3 = uVar8 + 1;
              uVar8 = uVar8 + 1;
            } while (pbVar6[lVar3] != 0);
          }
          if ((int)uVar8 == iVar1) goto LAB_0068a98c;
        }
        puVar4 = puVar4 + 3;
      } while (puVar4 != puVar5);
    }
    else {
      do {
        pbVar6 = (byte *)*puVar4;
        if (pbVar6 == (byte *)0x0) {
          if (iVar1 == 0) goto LAB_0068a95c;
        }
        else {
          uVar8 = (ulong)*pbVar6;
          if (*pbVar6 != 0) {
            uVar8 = 0;
            do {
              lVar3 = uVar8 + 1;
              uVar8 = uVar8 + 1;
            } while (pbVar6[lVar3] != 0);
          }
          if ((int)uVar8 == iVar1) {
LAB_0068a95c:
            pbVar9 = (byte *)*param_3;
            iVar7 = iVar1 + 1;
            while( true ) {
              bVar2 = *pbVar6;
              if (bVar2 == 0 || bVar2 != *pbVar9) break;
              iVar7 = iVar7 + -1;
              pbVar6 = pbVar6 + 1;
              pbVar9 = pbVar9 + 1;
              if (iVar7 < 2) goto LAB_0068a98c;
            }
            if (bVar2 == *pbVar9) {
LAB_0068a98c:
              if (*(int *)(puVar4 + 2) != 3) {
                return 0;
              }
              pbVar6 = (byte *)puVar4[1];
              if (pbVar6 == (byte *)0x0) {
                *param_2 = 0;
                *(undefined4 *)(param_2 + 1) = 0;
                return 1;
              }
              uVar8 = (ulong)*pbVar6;
              if (*pbVar6 != 0) {
                uVar8 = 0;
                do {
                  lVar3 = uVar8 + 1;
                  uVar8 = uVar8 + 1;
                } while (pbVar6[lVar3] != 0);
              }
              *param_2 = pbVar6;
              *(int *)(param_2 + 1) = (int)uVar8;
              return 1;
            }
          }
        }
        puVar4 = puVar4 + 3;
      } while (puVar4 != puVar5);
    }
  }
  return 0;
}

