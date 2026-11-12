
void FUN_00691080(undefined8 *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  size_t __n;
  
  puVar6 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  do {
    if (puVar6 == puVar7) {
      return;
    }
    if (param_3 != 0) {
      lVar9 = 0;
      do {
        puVar5 = (undefined *)0x0;
        if (param_2[lVar9] == 0x3d) {
          puVar5 = &UNK_0408bc49;
        }
        puVar3 = &UNK_0408bc48;
        if (param_2[lVar9] != 0x2c) {
          puVar3 = puVar5;
        }
        puVar5 = &UNK_0408bc4a;
        if (puVar3 != (undefined *)0x0) {
          puVar5 = puVar3;
        }
        if (puVar5 + -0x408bc48 != (undefined *)0x2 &&
            ((ulong)(puVar5 + -0x408bc48) & 0xffffffff) != 0xffffffff) goto LAB_00691178;
        lVar9 = lVar9 + 1;
      } while ((int)param_3 != lVar9);
    }
    lVar9 = 0xffffffff;
LAB_00691178:
    uVar4 = param_3;
    if ((uint)lVar9 <= param_3) {
      uVar4 = (uint)lVar9;
    }
    lVar9 = (long)(int)uVar4;
    pbVar10 = param_2;
    if (uVar4 == 0) {
      pbVar8 = param_2;
    }
    else {
      pbVar8 = param_2 + lVar9;
      do {
        if ((4 < *pbVar10 - 9) && (*pbVar10 != 0x20)) goto LAB_006911d4;
        pbVar10 = pbVar10 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      pbVar10 = pbVar8;
LAB_006911d4:
      iVar1 = uVar4 + ((int)param_2 - (int)pbVar10);
      lVar9 = (long)iVar1;
      pbVar8 = pbVar10;
      if (iVar1 != 0) {
        do {
          if ((4 < pbVar10[lVar9 + -1] - 9) && (pbVar10[lVar9 + -1] != 0x20)) {
            pbVar8 = pbVar10 + lVar9;
            goto LAB_006910c4;
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
LAB_006910c4:
    param_3 = param_3 - uVar4;
    *puVar6 = pbVar10;
    param_2 = param_2 + uVar4;
    __n = (size_t)(int)param_3;
    *(int *)(puVar6 + 1) = (int)pbVar8 - (int)pbVar10;
    pbVar8 = memchr(param_2,0x2c,__n);
    puVar6 = puVar6 + 2;
    pbVar10 = param_2 + __n;
    if (pbVar8 != (byte *)0x0) {
      pbVar10 = pbVar8;
    }
    uVar4 = 0;
    if ((long)pbVar10 - (long)param_2 != __n) {
      uVar4 = (int)((long)pbVar10 - (long)param_2) + 1;
    }
    uVar2 = param_3;
    if (uVar4 <= param_3) {
      uVar2 = uVar4;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + uVar2;
  } while( true );
}

