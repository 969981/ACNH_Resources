
void FUN_038dd6b4(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 9);
  uVar5 = (uint)bVar1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(long **)(param_1 + 0x10) = param_2;
  uVar2 = 8 - bVar1;
  uVar4 = uVar2;
  if (7 < uVar2) {
    uVar4 = 8;
  }
  if (uVar4 != 0) {
    uVar5 = uVar5 + uVar4;
    *(char *)(param_1 + 9) = (char)uVar5;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) << (ulong)(bVar1 & 0x1f));
  }
  if (uVar2 < 8) {
    uVar5 = 8 - uVar4;
    (**(code **)(*param_2 + 8))(param_2,param_1 + 8,1);
    *(char *)(param_1 + 9) = (char)uVar5;
    *(byte *)(param_1 + 8) =
         (byte)((param_4 & 0xff) >> (ulong)(uVar4 & 0x1f)) &
         ((byte)(-1 << (ulong)(uVar5 & 0x1f)) ^ 0xff);
  }
  uVar3 = param_4 >> 8 & 0xff;
  uVar2 = 8 - (uVar5 & 0xff);
  uVar4 = uVar2;
  if (7 < uVar2) {
    uVar4 = 8;
  }
  if (uVar4 != 0) {
    *(char *)(param_1 + 9) = (char)uVar5 + (char)uVar4;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((uVar3 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) << (ulong)(uVar5 & 0x1f));
  }
  if (uVar2 < 8) {
    (**(code **)(*param_2 + 8))(param_2,param_1 + 8,1);
    *(char *)(param_1 + 9) = (char)(8 - uVar4);
    *(byte *)(param_1 + 8) =
         (byte)(uVar3 >> (ulong)(uVar4 & 0x1f)) & ((byte)(-1 << (ulong)(8 - uVar4 & 0x1f)) ^ 0xff);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x10;
  return;
}

