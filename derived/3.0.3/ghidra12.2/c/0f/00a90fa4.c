
float FUN_00a90fa4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  uVar7 = FUN_00a8c31c();
  iVar1 = *(int *)(DAT_04da7238 + 0x65204);
  iVar4 = FUN_00a82f40(uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
  iVar2 = iVar4 + -1;
  iVar5 = FUN_00a82f40(uVar7 & 0xffffffff,6,0x15,0);
  iVar3 = iVar5 + -1;
  iVar6 = FUN_00a82f40(uVar7 & 0xffffffff,0xc,0x15,0);
  if (iVar4 < iVar5) {
    fVar8 = ((float)((0x16e - iVar6) + iVar2) / (float)((0x16e - iVar6) + iVar3)) * 2.0 + -1.0;
  }
  else if (iVar4 < iVar6) {
    fVar8 = ((float)(iVar2 - iVar3) / (float)((iVar6 + -1) - iVar3)) * -2.0 + 1.0;
  }
  else {
    fVar8 = 1.0 - (float)(iVar2 - (iVar6 + -1)) / (float)((iVar5 - iVar6) + 0x16d);
    fVar8 = 1.0 - (fVar8 + fVar8);
  }
  fVar9 = -fVar8;
  if (iVar1 != 1) {
    fVar9 = fVar8;
  }
  return fVar9;
}

