
void FUN_038dd5ec(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(long **)(param_1 + 0x10) = param_2;
  uVar2 = 8 - bVar1;
  uVar3 = uVar2;
  if (7 < uVar2) {
    uVar3 = 8;
  }
  if (uVar3 != 0) {
    *(byte *)(param_1 + 9) = bVar1 + (char)uVar3;
    *(byte *)(param_1 + 8) =
         *(byte *)(param_1 + 8) |
         (byte)((param_4 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) << (ulong)(bVar1 & 0x1f));
  }
  if (uVar2 < 8) {
    (**(code **)(*param_2 + 8))(param_2,param_1 + 8,1);
    *(char *)(param_1 + 9) = (char)(8 - uVar3);
    *(byte *)(param_1 + 8) =
         (byte)((param_4 & 0xff) >> (ulong)(uVar3 & 0x1f)) &
         ((byte)(-1 << (ulong)(8 - uVar3 & 0x1f)) ^ 0xff);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  return;
}

