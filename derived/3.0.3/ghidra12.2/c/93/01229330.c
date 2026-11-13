
void FUN_01229330(long param_1,byte *param_2,long param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auStack_18 [8];
  
  bVar2 = *param_2;
  param_1 = param_1 + 0x7c60;
  bVar3 = 7 < bVar2;
  if (bVar3) {
    bVar2 = 0xff;
  }
  lVar1 = param_1 + (ulong)(uint)(int)(char)bVar2 * 0x18;
  if (bVar3) {
    lVar1 = param_1;
  }
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  bVar2 = *param_2;
  bVar3 = 7 < bVar2;
  if (bVar3) {
    bVar2 = 0xff;
  }
  lVar1 = param_1 + (ulong)(uint)(int)(char)bVar2 * 0x18;
  if (bVar3) {
    lVar1 = param_1;
  }
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) | 1;
  bVar2 = *param_2;
  bVar3 = 7 < bVar2;
  if (bVar3) {
    bVar2 = 0xff;
  }
  lVar1 = param_1 + (ulong)(uint)(int)(char)bVar2 * 0x18;
  if (bVar3) {
    lVar1 = param_1;
  }
  bVar2 = 2;
  if ((param_4 & 1) == 0) {
    bVar2 = 0;
  }
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xfd | bVar2;
  FUN_02556920(auStack_18,param_2,1);
  return;
}

