
void FUN_024445d0(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  FUN_02472404(*(undefined4 *)(param_1 + 0x190c));
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_3 + 0x14);
    if ((*(byte *)(param_1 + 0x18f4) & 1) == 0) {
      bVar2 = *pbVar1 & 0xfe;
    }
    else {
      bVar2 = *pbVar1 | 1;
    }
    *pbVar1 = bVar2;
  }
  FUN_02332d7c(param_1,0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffeff;
  return;
}

