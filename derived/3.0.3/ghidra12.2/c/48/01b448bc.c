
void FUN_01b448bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 local_3b4 [46];
  undefined1 local_358;
  undefined1 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  char local_2e8;
  undefined1 auStack_2e6 [672];
  ushort local_46;
  undefined2 local_44;
  
  local_3b4[0] = 0;
  local_358 = 0;
  local_2fc = 0;
  local_2f8 = 0xfffe00000000;
  local_2f0 = 0;
  FUN_0277d4ac((long)&local_2f8 + 4);
  local_2ec = 0;
  local_2e8 = '\0';
  memset(auStack_2e6,0,0x2a2);
  local_44 = 0xfffe;
  uVar3 = FUN_01b449d0(param_1,local_3b4,param_3);
  if ((uVar3 & 1) != 0) {
    if (local_2e8 == '\0') {
      uVar3 = FUN_027aed78(local_3b4,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (local_2f8._4_2_ == -2) {
        return;
      }
    }
    else {
      uVar2 = FUN_027aed78(local_3b4,0);
      uVar1 = (uint)local_46 - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
      if (*(uint *)(DAT_05336138 + 0x1d8) <= uVar1) {
        return;
      }
      if (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
          ((uVar2 ^ 0xffffffff) & 1) != 0) {
        return;
      }
    }
    FUN_02827380(param_2,local_3b4);
  }
  return;
}

