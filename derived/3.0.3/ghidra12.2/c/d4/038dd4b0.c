
void FUN_038dd4b0(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  
  *(undefined8 **)(param_1 + 0x10) = param_2;
  if (*(char *)(param_1 + 10) == '\0') {
    *(undefined2 *)(param_1 + 9) = 0x108;
  }
  if (param_4 != 0) {
    uVar4 = 0;
    do {
      bVar2 = *(byte *)(param_1 + 9);
      uVar5 = param_4 - (int)uVar4;
      if (7 < uVar5) {
        uVar5 = 8;
      }
      uVar3 = 8 - bVar2;
      uVar1 = uVar5;
      if (uVar3 <= uVar5) {
        uVar1 = uVar3;
      }
      if (uVar1 == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = *(byte *)(param_1 + 8) >> (ulong)(bVar2 & 0x1f) &
                ((byte)(-1 << (ulong)(uVar1 & 0x1f)) ^ 0xff);
        *(byte *)(param_1 + 9) = bVar2 + (char)uVar1;
      }
      if (uVar3 < uVar5) {
        (**(code **)*param_2)(param_2,param_1 + 8,1);
        *(char *)(param_1 + 9) = (char)(uVar5 - uVar1);
        bVar6 = bVar6 | (byte)(((uint)*(byte *)(param_1 + 8) &
                               (-1 << (ulong)(uVar5 - uVar1 & 0x1f) ^ 0xffffffffU)) <<
                              (ulong)(uVar1 & 0x1f));
      }
      uVar5 = uVar5 + (int)uVar4;
      *(byte *)(param_3 + (uVar4 >> 3)) = bVar6;
      uVar4 = (ulong)uVar5;
    } while (uVar5 < param_4);
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_4;
  return;
}

