
void FUN_03fffef0(long param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong extraout_x12;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x90) != lVar10) {
    lVar9 = *(long *)(param_1 + 0x70);
    uVar4 = (ulong)(uint)(param_2 - *(int *)(lVar9 + lVar10 * 0x20));
    uVar3 = *(ulong *)(param_1 + 0x58);
    uVar7 = (uVar3 - lVar10) + *(long *)(param_1 + 0x90);
    uVar6 = 0;
    if (uVar3 <= uVar7) {
      uVar6 = uVar3;
    }
    if (uVar4 < uVar7 - uVar6) {
      uVar4 = lVar10 + uVar4;
      uVar7 = 0;
      if (uVar3 <= uVar4) {
        uVar7 = uVar3;
      }
      lVar10 = uVar4 - uVar7;
      if (*(int *)(lVar9 + lVar10 * 0x20) != param_2) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        uVar6 = extraout_x12;
      }
      iVar5 = (int)uVar6;
      lVar9 = lVar9 + lVar10 * 0x20;
      if (*(int *)(lVar9 + 0x14) == 1) {
        iVar5 = *(int *)(lVar9 + 0x18);
      }
      else {
        uVar2 = *(uint *)(lVar9 + 0x10);
        if (uVar2 == 0) {
          iVar5 = 0x1505;
        }
        else {
          if (uVar2 == 1) {
            uVar7 = 0;
            iVar8 = 0x2b5a5;
          }
          else {
            uVar7 = 0;
            iVar5 = 0x1505;
            do {
              pbVar1 = (byte *)(*(long *)(lVar9 + 8) + uVar7);
              uVar7 = uVar7 + 2;
              iVar5 = (iVar5 * 0x21 + (uint)*pbVar1) * 0x21 + (uint)pbVar1[1];
            } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
            iVar8 = iVar5 * 0x21;
          }
          if ((uVar2 & 1) != 0) {
            iVar5 = iVar8 + (uint)*(byte *)(*(long *)(lVar9 + 8) + uVar7);
          }
        }
        *(int *)(lVar9 + 0x18) = iVar5;
        *(int *)(lVar9 + 0x14) = 1;
      }
      *param_3 = iVar5;
    }
  }
  return;
}

