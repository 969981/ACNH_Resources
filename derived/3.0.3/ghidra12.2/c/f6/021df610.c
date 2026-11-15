
bool FUN_021df610(int *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = *param_1;
  if (iVar1 == 3) {
    bVar3 = true;
  }
  else {
    if (iVar1 == 2) {
      fVar5 = 65.0;
    }
    else {
      if (iVar1 != 1) {
        return false;
      }
      fVar5 = 20.0;
    }
    if (DAT_05594b4c == '\x01') {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar4;
    }
    else {
      uVar4 = nn::os::GetSystemTick();
      uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      uVar4 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    }
    bVar3 = ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar5;
  }
  return bVar3;
}

