
void FUN_02ef8e04(long param_1,byte *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar1 = *(int *)(param_1 + 0x210) == -1;
  if ((bVar1 && 6 < *(byte *)(param_1 + 0x214)) && (!bVar1 || *(byte *)(param_1 + 0x214) != 7)) {
    puVar2 = (undefined4 *)(param_1 + 0x210);
  }
  else if ((*(int *)(param_1 + 0x224) == -1) && (7 < *(byte *)(param_1 + 0x228))) {
    puVar2 = (undefined4 *)(param_1 + 0x224);
  }
  else if ((*(int *)(param_1 + 0x238) == -1) && (7 < *(byte *)(param_1 + 0x23c))) {
    puVar2 = (undefined4 *)(param_1 + 0x238);
  }
  else {
    if (*(int *)(param_1 + 0x24c) != -1) {
      return;
    }
    if (*(byte *)(param_1 + 0x250) < 8) {
      return;
    }
    puVar2 = (undefined4 *)(param_1 + 0x24c);
  }
  bVar3 = *param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(puVar2 + 1) = bVar3;
  *puVar2 = 10;
  puVar2[3] = 1;
  return;
}

