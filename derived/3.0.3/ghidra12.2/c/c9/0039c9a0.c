
void FUN_0039c9a0(undefined4 param_1,long param_2,long param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined4 local_7c [3];
  
  uVar1 = *(ushort *)(param_2 + 0x32);
  if ((ulong)uVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    uVar9 = 0;
    lVar11 = *(long *)(param_2 + 8);
    do {
      if (*(short *)(param_4 + uVar9 * 2) != -1) {
        uVar10 = (ulong)*(ushort *)(lVar11 + 8);
        lVar8 = lVar5 + uVar10 * 0x30;
        uVar2 = *(ushort *)(lVar11 + 0xc);
        uVar3 = *(ushort *)(lVar11 + 10);
        uVar12 = (uint)uVar3;
        uVar6 = (uint)uVar2;
        if (uVar6 != 0) {
          puVar7 = (undefined4 *)(param_3 + uVar10 * 4);
          do {
            local_7c[0] = 0x7f800000;
            uVar4 = FUN_0039dcf4(param_1,lVar8,local_7c);
            lVar8 = lVar8 + 0x30;
            uVar6 = uVar6 - 1;
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
          } while (uVar6 != 0);
        }
        if (uVar3 != 0) {
          puVar7 = (undefined4 *)(param_3 + (uVar10 + uVar2) * 4);
          do {
            local_7c[0] = 0x7f800000;
            uVar4 = FUN_0039dbd4(param_1,lVar8,local_7c);
            lVar8 = lVar8 + 0x30;
            uVar12 = uVar12 - 1;
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar9 != uVar1);
  }
  return;
}

