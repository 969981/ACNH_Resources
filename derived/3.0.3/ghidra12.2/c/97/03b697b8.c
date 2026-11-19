
uint FUN_03b697b8(long param_1,void *param_2,undefined8 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xb8);
  uVar3 = *(int *)(param_1 + 0xb4) - param_4;
  if (param_5 <= uVar3) {
    uVar3 = param_5;
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 == 6) {
    uVar2 = param_4 % 0xe;
    lVar5 = 1;
    if ((uVar2 & 1) != 0) {
      lVar5 = 2;
    }
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = lVar5 + ((int)((uVar2 + ((uVar2 & 0x80) >> 7)) * 0x1000000) >> 0x19);
    }
    lVar4 = lVar4 + (long)(param_4 / 0xe) * 8;
  }
  else {
    if (iVar1 == 2) {
      lVar4 = nn::audio::GetSampleByteSize(2);
      lVar4 = lVar4 * param_4;
      iVar1 = *(int *)(param_1 + 0xc4);
    }
    else {
      lVar4 = 0;
    }
    if (iVar1 != 6) {
      if (iVar1 == 2) {
        lVar5 = nn::audio::GetSampleByteSize(2);
        __n = lVar5 * (int)uVar3;
      }
      else {
        __n = 0;
      }
      goto LAB_03b698ec;
    }
  }
  uVar2 = (int)uVar3 % 0xe;
  if (uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 1;
    if ((uVar2 & 1) != 0) {
      lVar5 = 2;
    }
    lVar5 = lVar5 + ((int)((uVar2 + ((uVar2 & 0x80) >> 7)) * 0x1000000) >> 0x19);
  }
  __n = lVar5 + (long)((int)uVar3 / 0xe) * 8;
LAB_03b698ec:
  memcpy(param_2,(void *)(lVar4 + lVar6),__n);
  *(uint *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - uVar3;
  return uVar3;
}

