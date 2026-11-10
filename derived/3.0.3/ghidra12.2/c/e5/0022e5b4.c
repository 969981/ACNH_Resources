
void FUN_0022e5b4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = FUN_0021fea0(param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0021fea0(param_1 + 0x20);
    uVar2 = FUN_002200e4(param_1 + 0x20,param_2);
    if ((uVar2 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
        uVar1 = FUN_002200e4(param_1 + 0x40,param_2);
      }
      else {
        uVar1 = FUN_0021fea0(param_1 + 0x40);
        uVar3 = 4;
        if ((uVar1 & 1) == 0) {
          uVar3 = 1;
        }
        uVar1 = FUN_002200e4(param_1 + 0x40,param_2);
      }
      if ((uVar1 & 1) == 0) {
        if (uVar3 == 4) {
          uVar1 = FUN_0021fea0(param_1 + 0x60);
          uVar3 = 4;
          if ((uVar1 & 1) == 0) {
            uVar3 = 2;
          }
        }
        uVar1 = FUN_002200e4(param_1 + 0x60,param_2);
        if ((uVar1 & 1) == 0) {
          if (uVar3 == 4) {
            uVar1 = FUN_0021fea0(param_1 + 0x80);
            uVar3 = 3;
            if ((uVar1 & 1) != 0) {
              uVar3 = 4;
            }
          }
          uVar1 = FUN_002200e4(param_1 + 0x80,param_2);
          if (((uVar1 & 1) == 0) && (uVar3 != 4)) {
            FUN_0021f54c(param_1 + (ulong)uVar3 * 0x20 + 0x20,param_2);
            return;
          }
        }
      }
    }
  }
  return;
}

