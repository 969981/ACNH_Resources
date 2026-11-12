
void FUN_008a6830(byte *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte local_48 [12];
  uint local_3c [3];
  
  FUN_008a5e34();
  local_3c[0] = *param_1 >> 2 & 0xf;
  if ((*param_1 >> 2 & 0xf) != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + 0x70;
      }
    }
    else if (puVar7 == (undefined8 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
    if ((*(long **)(lVar3 + 0x1bf260) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar3 + 0x1bf260), puVar7 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar7)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = FUN_028d53e4(*(long *)(lVar3 + 0x1bf248) + *(long *)(lVar3 + 0x1bf240));
    if ((uVar4 & 1) == 0) {
      FUN_008a6110(param_1,0);
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1bf260) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf260) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    local_3c[0] = *param_1 >> 2 & 0xf;
  }
  if (local_3c[0] != 0) {
    uVar1 = (uint)(byte)*PTR_DAT_04bb32e0;
    if (7 < uVar1) {
      uVar1 = 0xff;
    }
    uVar6 = (uint)param_1[2];
    if (7 < uVar6) {
      uVar6 = 0xff;
    }
    if (uVar1 != uVar6) {
      FUN_02507c6c(local_3c,1,1,0,0);
      uVar1 = local_3c[0] & 0xff;
      local_48[0] = (byte)local_3c[0];
      if ((local_3c[0] & 0xff) < 8) {
        while( true ) {
          uVar4 = (ulong)local_48[0];
          if (uVar1 == uVar6) {
            FUN_008a6110(param_1,2);
          }
          do {
            uVar8 = uVar4;
            if (uVar8 == 7) {
              return;
            }
            uVar5 = FUN_02507924(local_48,&DAT_0548e169 + uVar8);
            uVar4 = uVar8 + 1;
          } while ((uVar5 & 1) == 0);
          local_48[0] = (&DAT_0548e169)[uVar8];
          if (7 < local_48[0]) break;
          uVar1 = (uint)local_48[0];
        }
      }
    }
  }
  return;
}

