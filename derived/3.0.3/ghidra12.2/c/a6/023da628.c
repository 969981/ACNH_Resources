
void FUN_023da628(byte *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 local_4 [4];
  
  bVar2 = *param_1;
  uVar4 = (uint)bVar2;
  bVar3 = 7 < uVar4;
  if (bVar3) {
    uVar4 = 0xff;
  }
  local_4[0] = (undefined1)uVar4;
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar3) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == DAT_04c487d4) {
    *(undefined4 *)(lVar1 + 0x424) = 3;
    FUN_01393458(lVar1 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar1 + 0x424) = 4;
  }
  if (bVar2 < 8) {
    FUN_02582d8c(local_4,1);
  }
  return;
}

