
float FUN_0163fb94(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = FUN_00a8c31c(DAT_04da7238);
  iVar1 = *(int *)(DAT_04da7238 + 0x65204);
  iVar2 = FUN_00a82f40(uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  fVar4 = (float)(iVar2 + -1) / 365.0;
  if (iVar1 == 1) {
    fVar5 = 0.5;
    if (0.5 <= fVar4) {
      fVar5 = -0.5;
    }
    fVar4 = fVar4 + fVar5;
  }
  return fVar4;
}

