
undefined8 FUN_0049dbd0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_51 [33];
  
  uVar12 = 0x80040200;
  uVar8 = FUN_004714d0(param_1 + 0x18,param_2,0xffffffffffffffff);
  if (-1 < (int)uVar8) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb8) + ((long)((ulong)uVar8 << 0x20) >> 0x1d));
    iVar5 = *piVar2;
    iVar6 = piVar2[1];
    if (iVar5 != iVar6) {
      lVar3 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
      pcVar4 = (char *)(lVar3 + iVar5);
      pbVar10 = (byte *)(lVar3 + iVar6);
      pbVar1 = (byte *)(pcVar4 + 1);
      if ((*pcVar4 == '\"' && pbVar1 != pbVar10) && (pbVar10 = pbVar10 + -1, *pbVar10 == 0x22)) {
        uVar13 = (long)pbVar10 - (long)pbVar1;
        if (0 < (int)uVar13) {
          pbVar11 = (byte *)(pcVar4 + 2);
          if (*pbVar1 != 0x2d) {
            pbVar11 = pbVar1;
          }
          if (pbVar11 < pbVar10) {
            bVar7 = pbVar1[*pbVar1 == 0x2d];
            while (bVar7 - 0x30 < 10) {
              pbVar11 = pbVar11 + 1;
              if (pbVar10 <= pbVar11) {
                FUN_0043a2b0(auStack_51 + 1,0x20,pbVar1,uVar13 & 0xffffffff);
                auStack_51[uVar13 + 1] = 0;
                uVar9 = FUN_0043a310(auStack_51 + 1,0);
                uVar12 = 0;
                goto LAB_0049dcc0;
              }
              bVar7 = *pbVar11;
            }
          }
        }
        uVar9 = 0;
LAB_0049dcc0:
        *param_3 = uVar9;
      }
    }
  }
  return uVar12;
}

