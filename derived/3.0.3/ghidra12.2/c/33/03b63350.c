
void FUN_03b63350(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x78);
  *(byte *)(param_1 + 0x7c) = param_2;
  if (*(ushort *)(param_1 + 0x78) != 0) {
    uVar2 = 0;
    uVar3 = 1;
    do {
      if ((int)uVar2 < (int)*(uint *)(param_1 + 0xf8)) {
        if (uVar2 < *(uint *)(param_1 + 0xf8)) {
          lVar4 = param_1 + 0xe8;
          if (6 < uVar2) {
            uVar6 = uVar3 & 0xfffffff8;
            do {
              uVar6 = uVar6 - 8;
              lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *
                                                  )(lVar4 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar6 != 0);
          }
          if ((uVar2 + 1 & 7) != 0) {
            uVar6 = uVar3 & 7;
            do {
              lVar4 = *(long *)(lVar4 + 8);
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          lVar4 = 0;
        }
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar5 = lVar4 - *(int *)(param_1 + 0xfc);
        }
      }
      else {
        lVar5 = 0;
      }
      if (*(int *)(lVar5 + 300) == 1) {
        *(byte *)(lVar5 + 0x110) = param_2 & 1;
        uVar1 = (uint)*(ushort *)(param_1 + 0x78);
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

