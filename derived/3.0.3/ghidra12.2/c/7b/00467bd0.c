
/* WARNING: Removing unreachable block (ram,0x00467c8c) */
/* WARNING: Removing unreachable block (ram,0x00467df8) */

undefined8 FUN_00467bd0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 local_8 [8];
  
  pbVar5 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar5 == pbVar2) {
    return 0;
  }
  bVar6 = *pbVar5;
  pbVar4 = pbVar5;
  if (bVar6 != 0x2c) {
    pbVar3 = pbVar5;
    do {
      pbVar3 = pbVar3 + 1;
      if (bVar6 < 0x3e) {
        if (bVar6 == 0x22) {
LAB_00467d10:
          uVar9 = 4;
LAB_00467d14:
          pcVar7 = (char *)((ulong)local_8 | uVar9);
          cVar8 = *pcVar7 + '\x01';
          goto LAB_00467ca0;
        }
        if (bVar6 == 0x29) {
          pcVar7 = (char *)((ulong)local_8 | 1);
          cVar8 = *pcVar7;
          goto joined_r0x00467c68;
        }
code_r0x00467ccc:
        if (0x3b < bVar6) {
          if (bVar6 == 0x3c) {
            uVar9 = 5;
          }
          else if (bVar6 == 0x5b) {
            uVar9 = 3;
          }
          else {
            if (bVar6 != 0x7b) goto LAB_00467ca4;
            uVar9 = 2;
          }
          goto LAB_00467d14;
        }
        if (bVar6 == 0x22) goto LAB_00467d10;
        if (bVar6 == 0x28) {
          uVar9 = 1;
          goto LAB_00467d14;
        }
      }
      else {
        if (bVar6 == 0x3e) {
          pcVar7 = (char *)((ulong)local_8 | 5);
          cVar8 = *pcVar7;
        }
        else if (bVar6 == 0x5d) {
          pcVar7 = (char *)((ulong)local_8 | 3);
          cVar8 = *pcVar7;
        }
        else {
          if (bVar6 != 0x7d) goto code_r0x00467ccc;
          pcVar7 = (char *)((ulong)local_8 | 2);
          cVar8 = *pcVar7;
        }
joined_r0x00467c68:
        if (cVar8 != '\0') {
          cVar8 = cVar8 + -1;
LAB_00467ca0:
          *pcVar7 = cVar8;
        }
      }
LAB_00467ca4:
      pbVar4 = pbVar2;
    } while ((pbVar2 != pbVar3) && (bVar6 = *pbVar3, pbVar4 = pbVar3, bVar6 != 0x2c));
  }
  pbVar3 = pbVar5;
  if ((pbVar5 != pbVar4) && (bVar6 = *pbVar5, bVar6 != 0x28)) {
    do {
      pbVar3 = pbVar3 + 1;
      if (bVar6 < 0x3e) {
        if (bVar6 == 0x22) {
LAB_00467e7c:
          uVar9 = 4;
LAB_00467e80:
          pcVar7 = (char *)((ulong)local_8 | uVar9);
          cVar8 = *pcVar7 + '\x01';
          goto LAB_00467e0c;
        }
        if (bVar6 == 0x29) {
          pcVar7 = (char *)((ulong)local_8 | 1);
          cVar8 = *pcVar7;
          goto joined_r0x00467dd4;
        }
code_r0x00467e38:
        if (0x3b < bVar6) {
          if (bVar6 == 0x3c) {
            uVar9 = 5;
          }
          else if (bVar6 == 0x5b) {
            uVar9 = 3;
          }
          else {
            if (bVar6 != 0x7b) goto LAB_00467e10;
            uVar9 = 2;
          }
          goto LAB_00467e80;
        }
        if (bVar6 == 0x22) goto LAB_00467e7c;
        if (bVar6 == 0x28) {
          uVar9 = 1;
          goto LAB_00467e80;
        }
      }
      else {
        if (bVar6 == 0x3e) {
          pcVar7 = (char *)((ulong)local_8 | 5);
          cVar8 = *pcVar7;
        }
        else if (bVar6 == 0x5d) {
          pcVar7 = (char *)((ulong)local_8 | 3);
          cVar8 = *pcVar7;
        }
        else {
          if (bVar6 != 0x7d) goto code_r0x00467e38;
          pcVar7 = (char *)((ulong)local_8 | 2);
          cVar8 = *pcVar7;
        }
joined_r0x00467dd4:
        if (cVar8 != '\0') {
          cVar8 = cVar8 + -1;
LAB_00467e0c:
          *pcVar7 = cVar8;
        }
      }
LAB_00467e10:
      if (pbVar4 == pbVar3) {
        pbVar3 = pbVar4;
        goto LAB_00467ec4;
      }
      bVar6 = *pbVar3;
    } while (bVar6 != 0x28);
  }
LAB_00467ec4:
  pbVar10 = (byte *)0x0;
  if (pbVar4 != pbVar2) {
    pbVar10 = pbVar4 + 1;
  }
  pbVar1 = (byte *)0x0;
  if (pbVar4 != pbVar2) {
    pbVar1 = pbVar2;
  }
  param_1[2] = (long)pbVar5;
  param_1[3] = (long)pbVar3;
  *param_1 = (long)pbVar10;
  param_1[1] = (long)pbVar1;
  if (pbVar5 == pbVar3) {
LAB_00467f2c:
    if (pbVar5 == pbVar3) {
      param_1[2] = (long)pbVar5;
      param_1[3] = (long)pbVar3;
      bVar6 = *pbVar3;
    }
    else {
      pbVar2 = pbVar3;
      do {
        pbVar10 = pbVar2 + -1;
        if ((0x20 < *pbVar10) || ((1L << ((ulong)*pbVar10 & 0x3f) & 0x100000600U) == 0))
        goto LAB_00467f70;
        pbVar2 = pbVar10;
      } while (pbVar5 != pbVar10);
      pbVar2 = pbVar5;
LAB_00467f70:
      param_1[2] = (long)pbVar5;
      param_1[3] = (long)pbVar2;
      bVar6 = *pbVar3;
    }
  }
  else {
    do {
      if (0x20 < *pbVar5 || (1L << ((ulong)*pbVar5 & 0x3f) & 0x100000600U) == 0) goto LAB_00467f2c;
      pbVar5 = pbVar5 + 1;
    } while (pbVar3 != pbVar5);
    param_1[2] = (long)pbVar3;
    param_1[3] = (long)pbVar3;
    bVar6 = *pbVar3;
  }
  if (bVar6 != 0) {
    param_1[4] = (long)pbVar3;
    param_1[5] = (long)pbVar4;
    if (pbVar4 != pbVar3) {
      do {
        pbVar5 = pbVar4 + -1;
        if ((0x20 < *pbVar5) || ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100000600U) == 0))
        goto LAB_00467fc0;
        pbVar4 = pbVar5;
      } while (pbVar3 != pbVar5);
      pbVar4 = pbVar3;
    }
LAB_00467fc0:
    param_1[5] = (long)pbVar4;
  }
  return 1;
}

