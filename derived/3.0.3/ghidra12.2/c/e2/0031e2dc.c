
float FUN_0031e2dc(long param_1)

{
  char cVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x6c);
  fVar5 = *(float *)(param_1 + 0x70);
  lVar3 = *(long *)(*(long *)(param_1 + 0x240) + 0x10);
  fVar2 = 1.0;
  if (((fVar5 < 1.0) && (fVar2 = 1.0, 0.0 <= fVar5 && *(char *)(lVar3 + 0x799) != '\0')) &&
     (cVar1 = *(char *)(*(long *)(param_1 + 0xa0) + 0x799), fVar2 = fVar5, cVar1 != '\x01')) {
    if (cVar1 == '\x03') {
      fVar2 = fVar5 * fVar5 * fVar5 * fVar5;
    }
    else {
      fVar2 = 1.0;
      if (cVar1 == '\x02') {
        fVar2 = fVar5 * fVar5;
      }
    }
  }
  if ((fVar4 < 1.0) && (0.0 <= fVar4 && *(char *)(lVar3 + 0x79b) != '\0')) {
    cVar1 = *(char *)(*(long *)(param_1 + 0xa0) + 0x79b);
    if (cVar1 == '\x01') {
      return fVar2 * fVar4;
    }
    if (cVar1 == '\x03') {
      return fVar2 * fVar4 * fVar4 * fVar4 * fVar4;
    }
    if (cVar1 == '\x02') {
      return fVar2 * fVar4 * fVar4;
    }
  }
  return fVar2 * 1.0;
}

