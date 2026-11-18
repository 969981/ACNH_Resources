
int FUN_0347b22c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if ((*(uint *)(param_1 + 0x248) < 2) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)*(uint *)(param_1 + 0x248) * 8 + 0x570),
     lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x298) < 2) {
      iVar4 = 0;
LAB_0347b2d0:
      fVar5 = 1.0;
      if ((float)iVar4 <= 1.0) {
        fVar5 = (float)iVar4;
      }
      return (int)fVar5;
    }
    iVar3 = *(int *)(lVar2 + 0x430);
    if ((*(int *)(lVar2 + 0x418) != 2) &&
       (fVar5 = *(float *)(lVar2 + 0x424) - *(float *)(lVar2 + 0x428),
       iVar3 = *(int *)(lVar2 + 0x420), fVar5 <= 0.0001 && -0.0001 <= fVar5)) {
      iVar3 = *(int *)(lVar2 + 0x430);
    }
    iVar1 = *(int *)(lVar2 + 0x2e8);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = param_2 / iVar1;
    }
    iVar4 = iVar4 - iVar3;
    if (-1 < iVar4) {
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar2 + 0x2f0) / iVar1;
      }
      if (iVar4 <= iVar3) goto LAB_0347b2d0;
    }
  }
  return 0;
}

