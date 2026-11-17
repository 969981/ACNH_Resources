
void FUN_02f33d24(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar2 + 0x570) != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    FUN_03d5d0e0(*(long *)(lVar2 + 0x570),(int)(char)bVar1,param_2 & 1);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar2 + 0x578) != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    FUN_03d5d0e0(*(long *)(lVar2 + 0x578),(int)(char)bVar1,param_2 & 1);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar2 + 0x580) != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    FUN_03d5d0e0(*(long *)(lVar2 + 0x580),(int)(char)bVar1,param_2 & 1);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar2 + 0x588) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  FUN_03d5d0e0(*(long *)(lVar2 + 0x588),(int)(char)bVar1,param_2 & 1);
  return;
}

