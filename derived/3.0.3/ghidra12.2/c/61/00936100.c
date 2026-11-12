
float FUN_00936100(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  uVar6 = nn::os::GetSystemTick();
  iVar1 = *(int *)(param_1 + 0x2ec) + 1;
  iVar7 = *(int *)(param_1 + 0x2dc);
  if (iVar1 != iVar7) {
    uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    uVar6 = uVar5 ^ uVar5 * 0x800;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
    iVar2 = *(int *)(param_1 + 0x2c4);
    iVar3 = *(int *)(param_1 + 0x2d8);
    iVar4 = *(int *)(param_1 + 0x2c0);
    uVar9 = (ulong)*(uint *)(param_1 + 0x2f0) * (ulong)(uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5)
            >> 0x20;
    iVar8 = iVar3;
    do {
      if (((((iVar4 <= iVar8) && (iVar8 <= iVar4 + 0x14)) && (iVar2 <= iVar7)) &&
          ((iVar7 <= iVar2 + 0x14 && ((uint)(iVar8 - iVar4) < 0x14)))) &&
         (((uint)(iVar7 - iVar2) < 0x14 &&
          (uVar6 = (iVar8 - iVar4) + (iVar7 - iVar2) * 0x14,
          (*(uint *)(param_1 + 0x280 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0))
         )) {
        if ((int)uVar9 < 2) goto LAB_00936218;
        uVar9 = (ulong)((int)uVar9 - 1);
      }
      if (iVar8 < *(int *)(param_1 + 0x2e8)) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = iVar3;
      }
    } while ((iVar3 != iVar8) || (iVar1 != iVar7));
  }
  iVar8 = 0;
LAB_00936218:
  return (float)iVar8 * 5.0 + 2.5;
}

