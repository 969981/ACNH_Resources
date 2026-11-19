
void FUN_03a7ff30(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_1 + 0x428);
  if (((lVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x670) != '\0')) &&
     ((*(byte *)(lVar2 + 8) & 1) != 0)) {
    lVar3 = *(long *)(param_2 + 0x18);
    uVar1 = (uint)*(byte *)(param_2 + 8);
    if (*(uint *)(lVar2 + 0x10) <= (uint)*(byte *)(param_2 + 8)) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(lVar2 + 0x18) + (ulong)uVar1 * 0x5b0;
    FUN_03a50a30(lVar4 + 4,lVar3 + 0x60);
    fVar5 = *(float *)(lVar3 + 0x14c);
    fVar6 = *(float *)(lVar3 + 0x154);
    *(float *)(lVar4 + 0x5a4) = fVar6;
    *(float *)(lVar4 + 0x5a0) = fVar5 * fVar6;
    fVar6 = *(float *)(lVar3 + 0x160);
    fVar5 = *(float *)(lVar3 + 0x154);
    *(float *)(lVar4 + 0x5a8) =
         (*(float *)(lVar3 + 0x15c) + *(float *)(lVar3 + 0x15c)) * *(float *)(lVar3 + 0x14c) * fVar5
    ;
    *(float *)(lVar4 + 0x5ac) = fVar5 * (fVar6 + fVar6);
    if (*(int *)(lVar2 + 0x268) != *(int *)(lVar2 + 0x264)) {
      *(int *)(lVar2 + 0x264) = *(int *)(lVar2 + 0x268);
      FUN_03a902b4(lVar2);
      return;
    }
  }
  return;
}

