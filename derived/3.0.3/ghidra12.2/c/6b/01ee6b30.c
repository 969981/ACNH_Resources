
bool FUN_01ee6b30(long param_1,undefined8 param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)FUN_0251b3b0(param_2,0);
  bVar1 = false;
  if (pfVar2 != (float *)0x0) {
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x778) = 1;
    plVar4 = *(long **)(param_1 + 8);
    pfVar3 = (float *)(**(code **)(*plVar4 + 0x108))(plVar4);
    fVar5 = pfVar3[1] - pfVar2[1];
    fVar6 = -fVar5;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    bVar1 = fVar6 < *(float *)(plVar4 + 0x4f) &&
            (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2]) +
            (*pfVar2 - *pfVar3) * (*pfVar2 - *pfVar3) < *(float *)((long)plVar4 + 0x274);
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x778) = 0;
  }
  return bVar1;
}

