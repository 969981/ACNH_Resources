
bool FUN_0023d280(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0x12e0);
  if (iVar3 != 1) {
    FUN_00220f24(param_1 + 0x12e0);
    FUN_00220f78(param_1 + 0x12e0);
    uVar4 = *(ushort *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x1310) = 0;
    if (uVar4 != 0) {
      uVar7 = uVar4 & 3;
      if (uVar4 < 4) {
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        do {
          uVar5 = uVar8 & 0x1f;
          uVar6 = uVar8 + 2;
          uVar1 = uVar8 + 1;
          uVar2 = uVar8 + 3;
          uVar8 = uVar8 + 4;
          uVar9 = uVar9 | 1 << (ulong)uVar5 |
                  1 << (ulong)(uVar1 & 0x1f) | 1 << (ulong)(uVar6 & 0x1f) |
                  1 << (ulong)(uVar2 & 0x1f);
        } while (uVar8 != (uVar4 & 0xfffc));
      }
      if ((uVar4 & 3) != 0) {
        do {
          uVar6 = uVar8 & 0x1f;
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 - 1;
          uVar9 = uVar9 | 1 << (ulong)uVar6;
        } while (uVar7 != 0);
      }
      *(uint *)(param_1 + 0x1310) = uVar9;
    }
  }
  return iVar3 != 1;
}

