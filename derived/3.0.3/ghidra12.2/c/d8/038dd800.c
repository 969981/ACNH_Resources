
void FUN_038dd800(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)(param_1 + 9);
  uVar4 = (uint)bVar2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar1 = param_1 + 8;
  *(long **)(param_1 + 0x10) = param_2;
  uVar6 = 8 - bVar2;
  uVar3 = uVar6;
  if (7 < uVar6) {
    uVar3 = 8;
  }
  if (uVar3 != 0) {
    uVar4 = uVar4 + uVar3;
    *(char *)(param_1 + 9) = (char)uVar4;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) << (ulong)(bVar2 & 0x1f));
  }
  if (uVar6 < 8) {
    uVar4 = 8 - uVar3;
    (**(code **)(*param_2 + 8))(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar4;
    *(byte *)(param_1 + 8) =
         (byte)((param_4 & 0xff) >> (ulong)(uVar3 & 0x1f)) &
         ((byte)(-1 << (ulong)(uVar4 & 0x1f)) ^ 0xff);
  }
  uVar6 = 8 - (uVar4 & 0xff);
  uVar3 = uVar6;
  if (7 < uVar6) {
    uVar3 = 8;
  }
  uVar5 = uVar4;
  if (uVar3 != 0) {
    uVar5 = uVar4 + uVar3;
    *(char *)(param_1 + 9) = (char)uVar5;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 >> 8 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) <<
               (ulong)(uVar4 & 0x1f));
  }
  if (uVar6 < 8) {
    uVar5 = 8 - uVar3;
    (**(code **)(*param_2 + 8))(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar5;
    *(byte *)(param_1 + 8) =
         (byte)((param_4 >> 8 & 0xff) >> (ulong)(uVar3 & 0x1f)) &
         ((byte)(-1 << (ulong)(uVar5 & 0x1f)) ^ 0xff);
  }
  uVar3 = 8 - (uVar5 & 0xff);
  uVar4 = uVar3;
  if (7 < uVar3) {
    uVar4 = 8;
  }
  uVar6 = uVar5;
  if (uVar4 != 0) {
    uVar6 = uVar5 + uVar4;
    *(char *)(param_1 + 9) = (char)uVar6;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 >> 0x10 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) <<
               (ulong)(uVar5 & 0x1f));
  }
  if (uVar3 < 8) {
    uVar6 = 8 - uVar4;
    (**(code **)(*param_2 + 8))(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar6;
    *(byte *)(param_1 + 8) =
         (byte)((param_4 >> 0x10 & 0xff) >> (ulong)(uVar4 & 0x1f)) &
         ((byte)(-1 << (ulong)(uVar6 & 0x1f)) ^ 0xff);
  }
  uVar3 = 8 - (uVar6 & 0xff);
  uVar4 = uVar3;
  if (7 < uVar3) {
    uVar4 = 8;
  }
  if (uVar4 != 0) {
    *(char *)(param_1 + 9) = (char)uVar6 + (char)uVar4;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 >> 0x18 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) <<
               (ulong)(uVar6 & 0x1f));
  }
  if (uVar3 < 8) {
    (**(code **)(*param_2 + 8))(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)(8 - uVar4);
    *(byte *)(param_1 + 8) =
         (byte)((param_4 >> 0x18) >> (ulong)(uVar4 & 0x1f)) &
         ((byte)(-1 << (ulong)(8 - uVar4 & 0x1f)) ^ 0xff);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
  return;
}

