
int FUN_00113a80(long param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte local_4 [4];
  
  psVar1 = (short *)(param_1 + 0x702c0);
  uVar3 = 0xfffffc17;
  uVar5 = 0x3e9;
  lVar6 = 1;
  uVar2 = param_2 & 0xff;
  while( true ) {
    if (uVar2 != 0) {
      uVar2 = uVar3;
      uVar4 = uVar5;
      if (((char)param_2 < '\0') && (psVar1[-4] != 0)) {
        uVar4 = (uint)psVar1[-4];
        uVar2 = uVar4;
        if ((int)uVar4 <= (int)uVar3) {
          uVar2 = uVar3;
        }
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      uVar3 = uVar2;
      uVar5 = uVar4;
      if (((param_2 >> 6 & 1) != 0) && (psVar1[-3] != 0)) {
        uVar5 = (uint)psVar1[-3];
        uVar3 = uVar5;
        if ((int)uVar5 <= (int)uVar2) {
          uVar3 = uVar2;
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
      uVar2 = uVar3;
      uVar4 = uVar5;
      if (((param_2 >> 5 & 1) != 0) && (psVar1[-2] != 0)) {
        uVar4 = (uint)psVar1[-2];
        uVar2 = uVar4;
        if ((int)uVar4 <= (int)uVar3) {
          uVar2 = uVar3;
        }
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      uVar3 = uVar2;
      uVar5 = uVar4;
      if (((param_2 >> 4 & 1) != 0) && (psVar1[-1] != 0)) {
        uVar5 = (uint)psVar1[-1];
        uVar3 = uVar5;
        if ((int)uVar5 <= (int)uVar2) {
          uVar3 = uVar2;
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
      uVar2 = uVar3;
      uVar4 = uVar5;
      if (((param_2 >> 3 & 1) != 0) && (*psVar1 != 0)) {
        uVar4 = (uint)*psVar1;
        uVar2 = uVar4;
        if ((int)uVar4 <= (int)uVar3) {
          uVar2 = uVar3;
        }
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      uVar3 = uVar2;
      uVar5 = uVar4;
      if (((param_2 >> 2 & 1) != 0) && (psVar1[1] != 0)) {
        uVar5 = (uint)psVar1[1];
        uVar3 = uVar5;
        if ((int)uVar5 <= (int)uVar2) {
          uVar3 = uVar2;
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
      uVar2 = uVar3;
      uVar4 = uVar5;
      if (((param_2 >> 1 & 1) != 0) && (psVar1[2] != 0)) {
        uVar4 = (uint)psVar1[2];
        uVar2 = uVar4;
        if ((int)uVar4 <= (int)uVar3) {
          uVar2 = uVar3;
        }
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      uVar3 = uVar2;
      uVar5 = uVar4;
      if (((param_2 & 1) != 0) && (psVar1[3] != 0)) {
        uVar5 = (uint)psVar1[3];
        uVar3 = uVar5;
        if ((int)uVar5 <= (int)uVar2) {
          uVar3 = uVar2;
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
    }
    if (lVar6 == 4) break;
    param_2 = (uint)local_4[lVar6];
    lVar6 = lVar6 + 1;
    psVar1 = psVar1 + 8;
    uVar2 = param_2;
  }
  return (uVar5 & (int)uVar5 >> 0x1f) + (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
}

