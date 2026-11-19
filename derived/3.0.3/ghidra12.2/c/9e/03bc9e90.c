
int FUN_03bc9e90(undefined8 *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  
  lVar5 = param_1[1];
  if ((lVar5 != 0) && (param_2 < *(byte *)(lVar5 + 0x30))) {
    if ((int)param_2 < 1) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      iVar2 = 0;
      pbVar1 = (byte *)(lVar5 + 0x31);
      do {
        if (uVar4 < *(byte *)(lVar5 + 0x30)) {
          pbVar7 = pbVar1;
          if (uVar4 != 0) {
            if (3 < uVar4) {
              uVar6 = uVar4 & 0xfffffffc;
              do {
                uVar6 = uVar6 - 4;
                pbVar7 = pbVar7 + (ulong)*pbVar7 * 2 + 1;
                pbVar7 = pbVar7 + (ulong)*pbVar7 * 2 + 1;
                pbVar7 = pbVar7 + (ulong)*pbVar7 * 2 + 1 +
                         (ulong)pbVar7[(ulong)*pbVar7 * 2 + 1] * 2 + 1;
              } while (uVar6 != 0);
            }
            if ((uVar4 & 3) != 0) {
              uVar6 = uVar4 & 3;
              do {
                uVar6 = uVar6 - 1;
                pbVar7 = pbVar7 + (ulong)*pbVar7 * 2 + 1;
              } while (uVar6 != 0);
            }
          }
          uVar6 = (uint)*pbVar7;
        }
        else {
          uVar6 = 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = uVar6 + iVar2;
      } while (uVar4 != param_2);
    }
    piVar3 = (int *)*param_1;
    if ((((piVar3 != (int *)0x0) && (*piVar3 == 0x56415742)) &&
        (((char)(*(ushort *)(piVar3 + 1) >> 8) != -1 || ((*(ushort *)(piVar3 + 1) & 0xff) != 0xfe)))
        ) && (((*(short *)((long)piVar3 + 6) == 1 && (uVar4 = iVar2 + param_3, -1 < (int)uVar4)) &&
              (uVar4 < *(ushort *)((long)piVar3 + 0xe))))) {
      piVar3 = piVar3 + 4;
      if (uVar4 != 0) {
        if (iVar2 + param_3 != 1) {
          uVar6 = uVar4 & 0xfffffffe;
          do {
            uVar6 = uVar6 - 2;
            piVar3 = piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 +
                              (ulong)*(ushort *)
                                      (piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 + 0x1e) * 3 +
                              0x20;
          } while (uVar6 != 0);
        }
        if ((uVar4 & 1) != 0) {
          piVar3 = piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 + 0x10;
        }
      }
      return piVar3[1];
    }
  }
  return 0;
}

