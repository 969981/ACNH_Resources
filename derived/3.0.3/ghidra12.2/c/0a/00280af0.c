
void FUN_00280af0(long *param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  size_t __n;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  
  __n = (size_t)*(ushort *)((long)param_1 + 0x3c);
  if (*(ushort *)((long)param_1 + 0x3c) != 0) {
    uVar5 = 0;
    bVar4 = 0;
    do {
      if ((param_2 >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        uVar7 = 0;
        bVar6 = 0;
        do {
          if ((bVar4 != bVar6) && ((param_2 >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
            lVar8 = *param_1;
            lVar3 = __n * uVar5 + (ulong)uVar7;
            if (*(short *)(lVar8 + lVar3 * 2) == 0) {
              bVar1 = *(byte *)(param_1[1] + lVar3);
              if ((bVar1 != bVar4) &&
                 ((bVar1 == bVar6 ||
                  (((uint)bVar1 < (uint)__n &&
                   ((*(short *)(lVar8 + (__n * uVar5 + (ulong)bVar1) * 2) == 0 ||
                    (*(short *)(lVar8 + ((ulong)uVar7 + (uint)bVar1 * __n) * 2) == 0)))))))) {
                *(char *)(param_1[1] + lVar3) = (char)param_1[8];
              }
            }
          }
          __n = (size_t)*(ushort *)((long)param_1 + 0x3c);
          bVar6 = bVar6 + 1;
          uVar7 = (uint)bVar6;
        } while (uVar7 < *(ushort *)((long)param_1 + 0x3c));
      }
      bVar4 = bVar4 + 1;
      uVar5 = (uint)bVar4;
    } while (uVar5 < (uint)__n);
  }
  memset((void *)param_1[2],0,__n);
  uVar5 = (uint)*(ushort *)((long)param_1 + 0x3c);
  if (*(ushort *)((long)param_1 + 0x3c) != 0) {
    lVar3 = 0;
    uVar7 = 0;
    do {
      if (uVar5 != 0) {
        lVar8 = 0;
        do {
          bVar4 = *(byte *)(param_1[1] + lVar3 * (ulong)uVar5 + lVar8);
          if ((bVar4 < uVar5 && uVar7 != bVar4) && (uint)lVar8 != (uint)bVar4) {
            *(char *)(param_1[2] + (ulong)bVar4) = *(char *)(param_1[2] + (ulong)bVar4) + '\x01';
            uVar5 = (uint)*(ushort *)((long)param_1 + 0x3c);
          }
          lVar8 = lVar8 + 1;
        } while ((uint)lVar8 < uVar5);
      }
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + 1;
    } while (uVar7 < uVar5);
  }
  do {
    uVar2 = FUN_00280c80(param_1,param_2,param_3);
  } while ((uVar2 & 1) == 0);
  return;
}

