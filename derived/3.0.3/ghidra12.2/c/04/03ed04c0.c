
void FUN_03ed04c0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,uint param_7)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  
  if (*(char *)(param_5 + 0x10) != '\0') {
    if (((*(ushort *)(param_3 + 0x7a) >> 3 & 1) == 0) && ((param_7 & 1) == 0)) {
      lVar6 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        sVar2 = *(short *)(*(long *)(lVar4 + 8) +
                          (long)*(int *)(param_5 + (lVar6 + (ulong)*(byte *)(param_5 + 0x11)) * 4 +
                                        0x14));
        if ((uint)(int)sVar2 < *(uint *)(lVar4 + 0x38)) {
          uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x40) + (long)(int)sVar2 * 8);
        }
        else {
          uVar5 = 0;
        }
        lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x140);
        if ((*(char *)(lVar4 + 0x1d08) == '\0') ||
           (uVar3 = FUN_03ed06a0(uVar5,lVar4 + 0x1cf8), (uVar3 & 1) != 0)) {
          uVar1 = *(ushort *)(param_3 + 0x7a);
          *(ushort *)(param_3 + 0x7a) = uVar1 | 2;
          FUN_03ed6420(uVar5,param_2,param_3,param_4,(uVar1 & 2) == 0,0);
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < (uint)*(byte *)(param_5 + 0x10));
    }
    else {
      lVar6 = 0;
      bVar7 = false;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        sVar2 = *(short *)(*(long *)(lVar4 + 8) +
                          (long)*(int *)(param_5 + (lVar6 + (ulong)*(byte *)(param_5 + 0x11)) * 4 +
                                        0x14));
        if ((uint)(int)sVar2 < *(uint *)(lVar4 + 0x38)) {
          uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x40) + (long)(int)sVar2 * 8);
        }
        else {
          uVar5 = 0;
        }
        lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x140);
        if ((*(char *)(lVar4 + 0x1d08) == '\0') ||
           (uVar3 = FUN_03ed06a0(uVar5,lVar4 + 0x1cf8), (uVar3 & 1) != 0)) {
          uVar1 = *(ushort *)(param_3 + 0x7a);
          *(ushort *)(param_3 + 0x7a) = uVar1 | 2;
          if (!bVar7) {
            if ((uVar1 >> 2 & 1) != 0) {
              return;
            }
            *(ushort *)(param_3 + 0x7a) = uVar1 | 6;
          }
          bVar7 = true;
          FUN_03ed6420(uVar5,param_2,param_3,param_4,(uVar1 & 2) == 0,1);
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < (uint)*(byte *)(param_5 + 0x10));
    }
  }
  return;
}

