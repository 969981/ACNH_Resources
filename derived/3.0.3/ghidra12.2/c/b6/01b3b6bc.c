
void FUN_01b3b6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 local_408 [46];
  undefined1 local_3ac;
  undefined1 local_350;
  undefined8 local_34c;
  undefined4 local_344;
  undefined1 local_340;
  char local_33c;
  undefined1 auStack_33a [672];
  ushort local_9a;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  
  local_408[0] = 0;
  local_3ac = 0;
  local_350 = 0;
  local_34c = 0xfffe00000000;
  local_344 = 0;
  FUN_0277d4ac((long)&local_34c + 4);
  local_340 = 0;
  local_33c = '\0';
  memset(auStack_33a,0,0x2a2);
  local_98 = 0xfffe;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_5c = 0;
  uVar3 = FUN_01b3b7ec(param_1,local_408,param_3,param_4);
  if ((uVar3 & 1) != 0) {
    if (local_33c == '\0') {
      uVar3 = FUN_027aed78(local_408,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (local_34c._4_2_ == -2) {
        return;
      }
    }
    else {
      uVar2 = FUN_027aed78(local_408,0);
      uVar1 = (uint)local_9a - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
      if (*(uint *)(DAT_05336138 + 0x1d8) <= uVar1) {
        return;
      }
      if (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
          ((uVar2 ^ 0xffffffff) & 1) != 0) {
        return;
      }
    }
    FUN_02826ca0(param_2,local_408);
  }
  return;
}

