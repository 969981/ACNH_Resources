
bool FUN_01f6a480(long param_1)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = (float *)FUN_0252d9bc(0);
  bVar1 = false;
  if ((pfVar2 != (float *)0x0) && (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x68), lVar3 != 0)) {
    fVar4 = *(float *)(lVar3 + 0x278) - *pfVar2;
    fVar5 = *(float *)(lVar3 + 0x280) - pfVar2[2];
    bVar1 = fVar5 * fVar5 + fVar4 * fVar4 < 2700.0;
  }
  return bVar1;
}

