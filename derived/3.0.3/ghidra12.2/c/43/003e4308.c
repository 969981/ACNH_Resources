
/* WARNING: Type propagation algorithm not settling */

void FUN_003e4308(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if ((uVar1 & 1) != 0) {
      *param_1 = param_2[1];
      param_1[1] = param_2[2];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1[5] = param_2[4];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1[6] = param_2[3];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1[7] = param_2[5];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(uint **)(param_1 + 8) = param_2 + 6;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(uint **)(param_1 + 10) = param_2 + 0xe;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(uint **)(param_1 + 0xc) = param_2 + 0x1e;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(uint **)(param_1 + 0xe) = param_2 + 0x42;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(uint **)(param_1 + 0x10) = param_2 + 0x46;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1[2] = param_2[0x52];
      uVar1 = *param_2;
    }
    if ((uVar1 & 0x3000) == 0x2000) {
      param_1[3] = param_2[0x53];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1[4] = param_2[0x54];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1[0x14] = param_2[0x55];
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x56);
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(uint **)(param_1 + 0x12) = param_2 + 0x4c;
      uVar1 = *param_2;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(char *)(param_1 + 0x18) = (char)param_2[0x58];
    }
  }
  return;
}

