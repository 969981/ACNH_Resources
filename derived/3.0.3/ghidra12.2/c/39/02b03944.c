
uint FUN_02b03944(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_026641e0(param_1,0);
  if (iVar1 != -1) {
    iVar1 = FUN_021d9f50(param_1,iVar1);
    if (iVar1 == 1) {
      uVar2 = 7;
      goto LAB_02b039fc;
    }
    if (iVar1 == 0) {
      lVar3 = *(long *)(DAT_05231900 + 0x70);
      if (lVar3 == 0) {
        uVar2 = 1;
      }
      else {
        fVar4 = *(float *)(lVar3 + 0x108) + -0.5;
        fVar5 = 0.0;
        if (0.0 <= fVar4) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(lVar3 + 0x104) + fVar5 * 2.0;
        fVar5 = 1.0;
        if (fVar4 <= 1.0) {
          fVar5 = fVar4;
        }
        fVar6 = 0.0;
        if (0.0 <= fVar4) {
          fVar6 = fVar5;
        }
        uVar2 = 3;
        if (fVar6 < 0.5) {
          uVar2 = 1;
        }
      }
      goto LAB_02b039fc;
    }
  }
  uVar2 = 5;
LAB_02b039fc:
  return (uint)(uVar2 < 8) & 10U >> (ulong)uVar2;
}

