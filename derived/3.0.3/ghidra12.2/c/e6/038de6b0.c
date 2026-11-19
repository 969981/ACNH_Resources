
void FUN_038de6b0(long param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  if (param_4 != 0) {
    uVar5 = (uint)*(byte *)(param_1 + 9);
    uVar4 = 0;
    do {
      bVar2 = *(byte *)(param_3 + (ulong)(uVar4 >> 3));
      uVar7 = param_4 - uVar4;
      if (7 < uVar7) {
        uVar7 = 8;
      }
      uVar3 = 8 - (uVar5 & 0xff);
      uVar1 = uVar7;
      if (uVar3 <= uVar7) {
        uVar1 = uVar3;
      }
      uVar6 = uVar5;
      if (uVar1 != 0) {
        uVar6 = uVar5 + uVar1;
        *(char *)(param_1 + 9) = (char)uVar6;
        *(byte *)(param_1 + 8) =
             *(byte *)(param_1 + 8) |
             (byte)(((uint)bVar2 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) <<
                   (ulong)(uVar5 & 0x1f));
      }
      uVar5 = uVar6;
      if (uVar3 < uVar7) {
        uVar5 = uVar7 - uVar1;
        (**(code **)(*param_2 + 8))(param_2,param_1 + 8,1);
        *(char *)(param_1 + 9) = (char)uVar5;
        *(byte *)(param_1 + 8) =
             bVar2 >> (ulong)(uVar1 & 0x1f) & ((byte)(-1 << (ulong)(uVar5 & 0x1f)) ^ 0xff);
      }
      uVar4 = uVar7 + uVar4;
    } while (uVar4 < param_4);
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_4;
  return;
}

