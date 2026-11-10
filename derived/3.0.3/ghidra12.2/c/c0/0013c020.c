
undefined8 FUN_0013c020(long param_1,undefined8 param_2)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 uStack_200;
  int local_1f8;
  short local_1f4;
  short local_1f2;
  undefined1 auStack_1f0 [112];
  undefined1 auStack_180 [112];
  undefined1 auStack_110 [112];
  undefined1 auStack_a0 [16];
  long local_90;
  long local_70;
  byte local_38;
  
  sVar2 = FUN_00138c70(param_2,auStack_a0);
  if (-1 < sVar2) {
    local_1f4 = FUN_00139d70(auStack_a0,auStack_110,0x70);
    if (local_1f4 < 0) {
      return 0;
    }
    local_218 = auStack_110;
    uVar3 = FUN_001392e0(auStack_a0,auStack_180,0x70);
    local_1f2 = (short)uVar3;
    if (local_1f2 < 0) {
      return 0;
    }
    local_210 = auStack_180;
    if ((local_70 == 0) && (1 < local_38 - 1)) {
      if (local_38 == 3) {
        uVar1 = *(uint *)(local_90 + 0x70);
      }
      else {
        uVar1 = (*(uint *)(local_90 + 8) & 0xff00ff00) >> 8 |
                (*(uint *)(local_90 + 8) & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      }
      if (uVar1 != 0x80020000) {
        if (local_38 == 3) {
          uVar1 = *(uint *)(local_90 + 0x70);
        }
        else {
          uVar1 = (*(uint *)(local_90 + 8) & 0xff00ff00) >> 8 |
                  (*(uint *)(local_90 + 8) & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        }
        if (uVar1 != 0x80030000) {
          if (local_38 == 3) {
            uVar1 = *(uint *)(local_90 + 0x70);
          }
          else {
            uVar1 = (*(uint *)(local_90 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(local_90 + 8) & 0xff00ff) << 8;
            uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          if (uVar1 != 0xe0000) {
            if (local_38 == 3) {
              uVar1 = *(uint *)(local_90 + 0x70);
            }
            else {
              uVar1 = (*(uint *)(local_90 + 8) & 0xff00ff00) >> 8 |
                      (*(uint *)(local_90 + 8) & 0xff00ff) << 8;
              uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
            }
            if (uVar1 != 0xe0001) {
              local_1f8 = 0;
              puVar4 = (undefined1 *)0x0;
              goto LAB_0013c190;
            }
          }
        }
      }
    }
    puVar4 = auStack_1f0;
    local_1f8 = FUN_0013ba60(uVar3,auStack_a0,0,auStack_1f0,0x70);
    if (-1 < local_1f8) {
LAB_0013c190:
      uStack_200 = *(undefined8 *)(param_1 + 0x6f4c0);
      local_208 = puVar4;
      uVar3 = (**(code **)(param_1 + 0x6f4b8))(param_1,&local_218);
      return uVar3;
    }
  }
  return 0;
}

