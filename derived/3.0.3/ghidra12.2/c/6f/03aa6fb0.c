
void FUN_03aa6fb0(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined2 local_d4 [2];
  uint local_d0;
  
  if ((*(byte *)(param_1 + 0x3c8) & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x1b0);
    if (*(uint *)(param_1 + 0x1a8) <= param_3) {
      param_3 = 0;
    }
    FUN_038e4cec(local_d4);
    local_d0 = local_d0 & 0xfffffffe;
    local_d4[0] = 1;
    FUN_038e4d90(local_d4,param_2);
    iVar1 = *(int *)(param_1 + 0x3d0);
    if ((iVar1 != 0) && (0 < *(int *)(param_1 + 0x3e0))) {
      lVar4 = *(long *)(param_1 + 0x3d8);
      lVar3 = lVar3 + (long)(int)param_3 * 0x1330;
      iVar5 = 0;
      do {
        lVar2 = lVar4 + (long)iVar5 * 0x50;
        FUN_039437e0(*(float *)(lVar2 + 0x40) * 0.5,param_2,lVar2 + 0x14,lVar2 + 0x20,lVar3,
                     lVar3 + 0x60);
        iVar5 = iVar5 + 1;
        if (iVar1 == iVar5) {
          return;
        }
      } while (iVar5 < *(int *)(param_1 + 0x3e0));
    }
  }
  return;
}

