
void FUN_0182f83c(long param_1,float *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  
  bVar8 = *(byte *)(param_1 + 0x670);
  *(byte *)(param_1 + 0x670) = bVar8 | 1;
  if (DAT_0537d558 == (long *)0x0) {
LAB_0182f944:
    bVar8 = bVar8 | 3;
    goto LAB_0182fa30;
  }
  bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    uVar10 = (long)(char)bVar5 & 0xffffffff;
    pbVar2 = pbVar1 + uVar10 * 0x80;
    if (7 < bVar5) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar9 = DAT_0537d558[2] + 0x108 + uVar10 * 0xc;
      if (0xb < bVar5) {
        lVar9 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar9 + 10) == '\0') goto LAB_0182f944;
    }
  }
  iVar3 = *(int *)(param_1 + 0x5f8);
  iVar4 = *(int *)(param_1 + 0x5fc);
  iVar6 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  iVar7 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
  if (iVar6 == iVar3 && iVar7 == iVar4) {
    return;
  }
  if ((iVar3 == DAT_0529d218) && (iVar4 == DAT_0529d21c)) {
    if (DAT_052ae838 < '\x02') {
      DAT_052ae838 = DAT_052ae838 + '\x01';
    }
LAB_0182f9b4:
    if (((DAT_052ae848 != 0) && (DAT_052ae7c8 <= iVar6 && iVar6 <= DAT_052ae7d8)) &&
       (DAT_052ae7cc <= iVar7 && iVar7 <= DAT_052ae7dc)) {
      lVar9 = (long)(int)((iVar6 - DAT_052ae7c8) + DAT_052ae840 * (iVar7 - DAT_052ae7cc));
      if (DAT_052ae844 <= (uint)(iVar7 - DAT_052ae7cc) ||
          DAT_052ae840 <= (uint)(iVar6 - DAT_052ae7c8)) {
        lVar9 = 0;
      }
      if (*(char *)(DAT_052ae848 + lVar9) < '\x01') {
        *(char *)(DAT_052ae848 + lVar9) = *(char *)(DAT_052ae848 + lVar9) + '\x01';
      }
    }
  }
  else if (DAT_052ae848 != 0) {
    if ((((DAT_052ae7c8 <= iVar3) && (iVar3 <= DAT_052ae7d8)) && (DAT_052ae7cc <= iVar4)) &&
       (iVar4 <= DAT_052ae7dc)) {
      lVar9 = (long)(int)((iVar3 - DAT_052ae7c8) + DAT_052ae840 * (iVar4 - DAT_052ae7cc));
      if (DAT_052ae844 <= (uint)(iVar4 - DAT_052ae7cc) ||
          DAT_052ae840 <= (uint)(iVar3 - DAT_052ae7c8)) {
        lVar9 = 0;
      }
      if ('\0' < *(char *)(DAT_052ae848 + lVar9)) {
        *(char *)(DAT_052ae848 + lVar9) = *(char *)(DAT_052ae848 + lVar9) + -1;
      }
    }
    goto LAB_0182f9b4;
  }
  *(int *)(param_1 + 0x5f8) = iVar6;
  *(int *)(param_1 + 0x5fc) = iVar7;
  *(undefined1 *)(param_1 + 0x3fa) = 1;
  bVar8 = *(byte *)(param_1 + 0x670) & 0xfd;
LAB_0182fa30:
  *(byte *)(param_1 + 0x670) = bVar8;
  return;
}

