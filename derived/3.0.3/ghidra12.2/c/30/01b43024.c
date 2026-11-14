
void FUN_01b43024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 local_3c4 [46];
  undefined1 local_368;
  undefined1 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  char local_2f8;
  undefined1 auStack_2f6 [672];
  ushort local_56;
  undefined2 local_54;
  char local_34 [4];
  
  local_3c4[0] = 0;
  local_368 = 0;
  local_30c = 0;
  local_308 = 0xfffe00000000;
  local_300 = 0;
  FUN_0277d4ac((long)&local_308 + 4);
  local_2fc = 0;
  local_2f8 = '\0';
  memset(auStack_2f6,0,0x2a2);
  local_34[0] = '\0';
  local_54 = 0xfffe;
  uVar3 = FUN_01b4316c(param_1,local_3c4,local_34,param_3,param_5);
  if ((uVar3 & 1) != 0) {
    if (local_2f8 == '\0') {
      uVar3 = FUN_027aed78(local_3c4,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (local_308._4_2_ == -2) {
        return;
      }
    }
    else {
      uVar2 = FUN_027aed78(local_3c4,0);
      uVar1 = (uint)local_56 - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
      if (*(uint *)(DAT_05336138 + 0x1d8) <= uVar1) {
        return;
      }
      if (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
          ((uVar2 ^ 0xffffffff) & 1) != 0) {
        return;
      }
    }
    FUN_02827380(param_2,local_3c4);
    if (local_34[0] != '\0') {
      FUN_01b40a60(local_3c4,param_3,param_4);
    }
  }
  return;
}

