
int FUN_03bca0e0(undefined8 *param_1,uint param_2,uint param_3)

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
        ) && (((*(short *)((long)piVar3 + 6) == 1 && (-1 < (int)(iVar2 + param_3))) &&
              (iVar2 + param_3 < (uint)*(ushort *)((long)piVar3 + 0xe))))) {
      piVar3 = piVar3 + 4;
      if (0 < (int)param_3) {
        if (param_3 != 1) {
          uVar4 = param_3 & 0xfffffffe;
          do {
            uVar4 = uVar4 - 2;
            piVar3 = piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 +
                              (ulong)*(ushort *)
                                      (piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 + 0x1e) * 3 +
                              0x20;
          } while (uVar4 != 0);
        }
        if ((param_3 & 1) != 0) {
          piVar3 = piVar3 + (ulong)*(ushort *)(piVar3 + 0xe) * 3 + 0x10;
        }
      }
      return piVar3[2];
    }
  }
  return 0;
}

