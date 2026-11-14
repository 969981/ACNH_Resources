
void FUN_01831b88(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  
  if (((*(byte *)(param_1 + 0x670) & 1) != 0) &&
     (*(byte *)(param_1 + 0x670) = *(byte *)(param_1 + 0x670) & 0xf8, DAT_0537d558 != (long *)0x0))
  {
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      uVar6 = (long)(char)bVar5 & 0xffffffff;
      pbVar2 = pbVar1 + uVar6 * 0x80;
      if (7 < bVar5) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar7 = DAT_0537d558[2] + 0x108 + uVar6 * 0xc;
        if (0xb < bVar5) {
          lVar7 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar7 + 10) == '\0') {
          return;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x5f8);
    iVar4 = *(int *)(param_1 + 0x5fc);
    if ((iVar3 != DAT_0529d218) || (iVar4 != DAT_0529d21c)) {
      if ('\0' < DAT_052ae838) {
        DAT_052ae838 = DAT_052ae838 + -1;
      }
      if ((((DAT_052ae848 != 0) && (DAT_052ae7c8 <= iVar3)) && (iVar3 <= DAT_052ae7d8)) &&
         ((DAT_052ae7cc <= iVar4 && (iVar4 <= DAT_052ae7dc)))) {
        lVar7 = (long)(int)((iVar3 - DAT_052ae7c8) + DAT_052ae840 * (iVar4 - DAT_052ae7cc));
        if (DAT_052ae844 <= (uint)(iVar4 - DAT_052ae7cc) ||
            DAT_052ae840 <= (uint)(iVar3 - DAT_052ae7c8)) {
          lVar7 = 0;
        }
        if ('\0' < *(char *)(DAT_052ae848 + lVar7)) {
          *(char *)(DAT_052ae848 + lVar7) = *(char *)(DAT_052ae848 + lVar7) + -1;
        }
      }
      iVar3 = DAT_0529d21c;
      *(int *)(param_1 + 0x5f8) = DAT_0529d218;
      *(int *)(param_1 + 0x5fc) = iVar3;
      *(undefined1 *)(param_1 + 0x3fa) = 0;
      return;
    }
  }
  return;
}

