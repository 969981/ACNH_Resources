
bool FUN_021ae710(ulong param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  iVar8 = 0;
  iVar9 = 0;
  bVar1 = true;
  uVar3 = param_1;
  do {
    if ((iVar8 != param_3) && (*(char *)(param_1 + (long)iVar9 * 0xba0 + 0xaf9) != '\0')) {
      lVar10 = param_1 + (long)iVar9 * 0xba0;
      uVar3 = FUN_02197a94(uVar3,(long)*(char *)(lVar10 + 0xaf8),param_2);
      if ((uVar3 & 1) != 0) {
        uVar4 = (uint)*(char *)(lVar10 + 0xaf8);
        lVar10 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar4 * 0x15;
        if (0x6c < uVar4) {
          lVar10 = *(long *)PTR_DAT_04bb4760;
        }
        uVar6 = (ushort)*(byte *)(lVar10 + 4) | (*(byte *)(lVar10 + 5) & 3) << 8;
        if (0x1ff < uVar6) {
          uVar6 = uVar6 | 0xfc00;
        }
        bVar2 = DAT_055c1b60 == &DAT_055c1b58;
        puVar7 = DAT_055c1b60 + -8;
        if ((!bVar2) && (puVar5 = DAT_055c1b60, uVar6 != 0)) {
          do {
            puVar5 = (undefined8 *)puVar5[1];
            uVar6 = uVar6 - 1;
            bVar2 = puVar5 == &DAT_055c1b58;
          } while (!bVar2 && uVar6 != 0);
          puVar7 = puVar5 + -8;
        }
        puVar5 = &DAT_055c04a0;
        if (!bVar2) {
          puVar5 = puVar7;
        }
        if (*(int *)(puVar5 + 7) == 0x6622bd46) {
          return bVar1;
        }
      }
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 1;
    bVar1 = iVar9 != 10;
    if (iVar8 == 10) {
      return bVar1;
    }
  } while( true );
}

