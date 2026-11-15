
void FUN_0220c4a0(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = PTR_DAT_04bb39d8;
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar4[3];
  uVar1 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = uVar1;
  if ((uint)((ulong)uVar1 * 100 >> 0x20) < 0x14) {
    uVar5 = 0x1c;
  }
  else {
    puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
    uVar1 = *puVar4 ^ *puVar4 << 0xb;
    uVar2 = puVar4[3];
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar4[2] = uVar2;
    puVar4[3] = uVar1;
    if ((uint)((ulong)uVar1 * 100 >> 0x20) < 0x28) {
      uVar5 = 0x1d;
    }
    else {
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      uVar2 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1;
      if ((uint)((ulong)uVar1 * 100 >> 0x20) < 0x3c) {
        uVar5 = 0x1e;
      }
      else {
        puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
        uVar1 = *puVar4 ^ *puVar4 << 0xb;
        uVar2 = puVar4[3];
        *puVar4 = puVar4[1];
        puVar4[1] = puVar4[2];
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        puVar4[2] = uVar2;
        puVar4[3] = uVar1;
        uVar5 = 0x1f;
        if (0x4f < (uint)((ulong)uVar1 * 100 >> 0x20)) {
          uVar5 = 0x20;
        }
      }
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "NpcTidyVisitControlFlags";
  FUN_0273f3c4(&local_30,uVar5);
  return;
}

