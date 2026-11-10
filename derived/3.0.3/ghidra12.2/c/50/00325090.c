
/* WARNING: Type propagation algorithm not settling */

void FUN_00325090(uint *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (*(char *)(lVar3 + 0x839) != '\0') {
    *param_1 = *param_1 | 8;
  }
  bVar2 = *(byte *)(lVar3 + 0xa37) >> 4;
  if (*(byte *)(lVar3 + 0xa37) < 0x10) {
    *param_1 = *param_1 | 1;
  }
  if (bVar2 == 1) {
    uVar4 = 2;
LAB_003250e0:
    *param_1 = *param_1 | uVar4;
  }
  else if (bVar2 == 2) {
    uVar4 = 4;
    goto LAB_003250e0;
  }
  bVar2 = *(byte *)(lVar3 + 0x94b) >> 4;
  if (*(byte *)(lVar3 + 0x94b) < 0x10) {
    param_1[1] = param_1[1] | 0x1000;
  }
  if (bVar2 == 2) {
    uVar4 = 0x2000;
LAB_00325124:
    param_1[1] = param_1[1] | uVar4;
  }
  else if (bVar2 == 4) {
    uVar4 = 0x4000;
    goto LAB_00325124;
  }
  bVar2 = *(byte *)(lVar3 + 0x94c) >> 4;
  if (*(byte *)(lVar3 + 0x94c) < 0x10) {
    param_1[1] = param_1[1] | 0x8000;
  }
  if (bVar2 == 2) {
    uVar4 = 0x10000;
LAB_00325168:
    param_1[1] = param_1[1] | uVar4;
  }
  else if (bVar2 == 4) {
    uVar4 = 0x20000;
    goto LAB_00325168;
  }
  bVar2 = *(byte *)(lVar3 + 0x94d) >> 4;
  if (*(byte *)(lVar3 + 0x94d) < 0x10) {
    param_1[1] = param_1[1] | 0x40000;
  }
  if (bVar2 == 2) {
    uVar4 = 0x80000;
  }
  else {
    if (bVar2 != 4) goto LAB_003251b8;
    uVar4 = 0x100000;
  }
  param_1[1] = param_1[1] | uVar4;
LAB_003251b8:
  cVar1 = *(char *)(lVar3 + 0xaa0);
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x10;
    cVar1 = *(char *)(lVar3 + 0xaa0);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x20;
    cVar1 = *(char *)(lVar3 + 0xaa0);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x40;
    cVar1 = *(char *)(lVar3 + 0xaa0);
  }
  if (cVar1 == '\x04') {
    fVar6 = *(float *)(lVar3 + 0x118);
    if (0.0 < fVar6) {
      lVar5 = 0;
      do {
        *(int *)(lVar3 + 0x120 + lVar5 * 4) = (int)lVar5;
        lVar5 = lVar5 + 1;
        fVar6 = *(float *)(lVar3 + 0x118);
      } while ((float)(int)lVar5 < fVar6);
    }
    *(float *)(lVar3 + 0x110) = fVar6;
    *param_1 = *param_1 | 0x80;
    cVar1 = *(char *)(lVar3 + 0xab0);
  }
  else {
    cVar1 = *(char *)(lVar3 + 0xab0);
  }
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x100;
    cVar1 = *(char *)(lVar3 + 0xab0);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x200;
    cVar1 = *(char *)(lVar3 + 0xab0);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x400;
    cVar1 = *(char *)(lVar3 + 0xab0);
  }
  if (cVar1 == '\x04') {
    fVar6 = *(float *)(lVar3 + 0x1a8);
    if (0.0 < fVar6) {
      lVar5 = 0;
      do {
        *(int *)(lVar3 + 0x1b0 + lVar5 * 4) = (int)lVar5;
        lVar5 = lVar5 + 1;
        fVar6 = *(float *)(lVar3 + 0x1a8);
      } while ((float)(int)lVar5 < fVar6);
    }
    *(float *)(lVar3 + 0x1a0) = fVar6;
    *param_1 = *param_1 | 0x800;
    cVar1 = *(char *)(lVar3 + 0xac0);
  }
  else {
    cVar1 = *(char *)(lVar3 + 0xac0);
  }
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x1000;
    cVar1 = *(char *)(lVar3 + 0xac0);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x2000;
    cVar1 = *(char *)(lVar3 + 0xac0);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x4000;
    cVar1 = *(char *)(lVar3 + 0xac0);
  }
  if (cVar1 == '\x04') {
    fVar6 = *(float *)(lVar3 + 0x238);
    if (0.0 < fVar6) {
      lVar5 = 0;
      do {
        *(int *)(lVar3 + 0x240 + lVar5 * 4) = (int)lVar5;
        lVar5 = lVar5 + 1;
        fVar6 = *(float *)(lVar3 + 0x238);
      } while ((float)(int)lVar5 < fVar6);
    }
    *(float *)(lVar3 + 0x230) = fVar6;
    *param_1 = *param_1 | 0x8000;
    cVar1 = *(char *)(lVar3 + 0x8f5);
  }
  else {
    cVar1 = *(char *)(lVar3 + 0x8f5);
  }
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x10000;
  }
  if (*(char *)(lVar3 + 0x8f6) != '\0') {
    *param_1 = *param_1 | 0x20000;
  }
  if (*(char *)(lVar3 + 0x8f7) != '\0') {
    *param_1 = *param_1 | 0x40000;
  }
  if (*(char *)(lVar3 + 0xaa5) != '\0') {
    *param_1 = *param_1 | 0x80000;
  }
  if (*(char *)(lVar3 + 0xaa6) != '\0') {
    *param_1 = *param_1 | 0x100000;
  }
  if (*(char *)(lVar3 + 0xab5) != '\0') {
    *param_1 = *param_1 | 0x200000;
  }
  if (*(char *)(lVar3 + 0xab6) != '\0') {
    *param_1 = *param_1 | 0x400000;
  }
  if (*(char *)(lVar3 + 0xac5) != '\0') {
    *param_1 = *param_1 | 0x800000;
  }
  if (*(char *)(lVar3 + 0xac6) != '\0') {
    *param_1 = *param_1 | 0x1000000;
  }
  if (*(char *)(lVar3 + 0xaa7) != '\0') {
    *param_1 = *param_1 | 0x2000000;
  }
  if (*(char *)(lVar3 + 0xab7) != '\0') {
    *param_1 = *param_1 | 0x4000000;
  }
  if (*(char *)(lVar3 + 0xac7) != '\0') {
    *param_1 = *param_1 | 0x8000000;
  }
  if (*(char *)(lVar3 + 0x8fb) != '\0') {
    *param_1 = *param_1 | 0x10000000;
  }
  cVar1 = *(char *)(lVar3 + 0x8f4);
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x40000000;
    cVar1 = *(char *)(lVar3 + 0x8f4);
  }
  if (cVar1 == '\0') {
    *param_1 = *param_1 | 0x20000000;
    cVar1 = *(char *)(lVar3 + 0x8fc);
  }
  else {
    cVar1 = *(char *)(lVar3 + 0x8fc);
  }
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 1;
  }
  if (*(long *)(param_2 + 0x248) != 0) {
    param_1[1] = param_1[1] | 2;
  }
  if (*(long *)(param_2 + 0x250) != 0) {
    param_1[1] = param_1[1] | 0x100;
  }
  if (*(long *)(param_2 + 0x278) != 0) {
    param_1[1] = param_1[1] | 4;
  }
  if (*(long *)(param_2 + 600) != 0) {
    param_1[1] = param_1[1] | 8;
  }
  if (*(long *)(param_2 + 0x270) != 0) {
    param_1[1] = param_1[1] | 0x10;
  }
  if (*(long *)(param_2 + 0x260) != 0) {
    param_1[1] = param_1[1] | 0x20;
  }
  if (*(long *)(param_2 + 0x268) != 0) {
    param_1[1] = param_1[1] | 0x40;
  }
  if (*(long *)(param_2 + 0x280) != 0) {
    param_1[1] = param_1[1] | 0x80;
  }
  if ((ulong)(long)*(char *)(lVar3 + 0x793) < 3) {
    param_1[1] = param_1[1] | *(uint *)(&DAT_04129e04 + (long)*(char *)(lVar3 + 0x793) * 4);
  }
  return;
}

