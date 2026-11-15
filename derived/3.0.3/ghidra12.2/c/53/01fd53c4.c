
void FUN_01fd53c4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*(ushort *)(param_1 + 0x1242c) >> 8 & 1) != 0) {
    FUN_01ea5580(param_1,0x5b,param_3,0);
    return;
  }
  FUN_01ea5580(param_1,param_2,param_3,param_4 & 1);
  if (((int)param_2 - 3U < 5) && ((*(byte *)(param_1 + 0xafb2) >> 6 & 1) == 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x568) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
  }
  return;
}

