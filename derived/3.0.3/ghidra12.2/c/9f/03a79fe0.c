
void FUN_03a79fe0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_88 [56];
  
  if (*(char *)(param_1 + 0x4d0) != '\0') {
    uVar2 = param_3;
    if (*(uint *)(param_1 + 0x230) <= param_3) {
      uVar2 = 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x238) + (long)(int)uVar2 * 0x6d0) != '\0') {
      FUN_03a750d0(param_1,param_2,param_3);
      FUN_03a75d10(param_1,param_2,param_3,param_4);
      FUN_03a76ac0(param_1,param_2,param_3);
      uVar2 = *(uint *)(param_1 + 0x220);
      if (0 < (int)uVar2) {
        uVar3 = 0;
        do {
          uVar1 = uVar3;
          if (uVar2 <= uVar3) {
            uVar1 = 0;
          }
          if (*(char *)(*(long *)(param_1 + 0x228) + (ulong)uVar1 * 0x2c) != '\0') {
            if (*(char *)(param_1 + 0x21e) == '\0') {
              FUN_03a77a80(param_1,param_2,param_3,uVar3);
            }
            else {
              FUN_03a789b0(param_1,param_2,param_3,uVar3);
            }
            FUN_03a799d0(param_1,param_2,param_3,uVar3);
            uVar2 = *(uint *)(param_1 + 0x220);
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar2);
        if (0 < (int)uVar2) {
          uVar3 = 0;
          do {
            uVar1 = uVar3;
            if (uVar2 <= uVar3) {
              uVar1 = 0;
            }
            if (*(char *)(*(long *)(param_1 + 0x228) + (ulong)uVar1 * 0x2c) != '\0') {
              FUN_006d8678(auStack_88,"%d : mask",uVar3);
              FUN_006d8678(auStack_88,"%d : raw",uVar3);
              FUN_006d8678(auStack_88,"%d : depth",uVar3);
              uVar2 = *(uint *)(param_1 + 0x220);
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < (int)uVar2);
        }
      }
      if (*(char *)(param_1 + 0x4d0) != '\0') {
        uVar2 = param_3;
        if (*(uint *)(param_1 + 0x230) <= param_3) {
          uVar2 = 0;
        }
        if (*(char *)(*(long *)(param_1 + 0x238) + (long)(int)uVar2 * 0x6d0) != '\0' &&
            *(char *)(param_1 + 0x248) != '\0') {
          return;
        }
      }
      FUN_03a758b0(param_1,param_3);
    }
  }
  return;
}

