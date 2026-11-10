
byte * FUN_00192290(byte *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  uint __c;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  pbVar6 = param_1;
  if (*param_2 != 0) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      lVar8 = uVar7 + 1;
      uVar7 = uVar1;
    } while (param_2[lVar8] != 0);
    bVar2 = *param_1;
    __c = (uint)bVar2;
    bVar3 = bVar2 == 0 || param_3 == 0;
    if ((bVar2 != 0 && param_3 != 0) && (uVar1 != 0)) {
      uVar7 = 0;
      do {
        iVar4 = toupper(__c);
        iVar5 = toupper((uint)*param_2);
        if (iVar4 != 0) {
          lVar8 = 1;
          uVar9 = uVar1;
          do {
            if ((iVar4 != iVar5) || (uVar9 < 2)) break;
            iVar4 = toupper((uint)param_1[lVar8]);
            iVar5 = toupper((uint)param_2[lVar8]);
            uVar9 = uVar9 - 1;
            lVar8 = lVar8 + 1;
          } while (iVar4 != 0);
        }
        bVar3 = iVar4 != iVar5;
        if (iVar4 == iVar5) break;
        param_1 = param_1 + 1;
        __c = (uint)*param_1;
        if ((__c == 0) || (uVar7 = uVar7 + 1, param_3 <= uVar7)) break;
      } while( true );
    }
    pbVar6 = (byte *)0x0;
    if (!bVar3) {
      pbVar6 = param_1;
    }
  }
  return pbVar6;
}

