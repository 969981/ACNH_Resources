
void FUN_003c46b0(long param_1,uint param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  if ((param_3 & 1) != 0) {
    FUN_003c5228(auStack_58,param_4,param_5);
    uVar2 = FUN_003c5280(auStack_58,0x10,8,param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    if ((int)param_2 < 1) {
      uVar2 = FUN_003c5280(auStack_58,0x10,8,param_2);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
    else {
      uVar5 = (ulong)param_2;
      if (uVar5 == 1) {
        uVar3 = 0;
      }
      else {
        lVar4 = 0;
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 2;
          lVar1 = *(long *)(param_1 + 0x28) + lVar4;
          *(long *)lVar1 = lVar1;
          *(long *)(lVar1 + 8) = lVar1;
          lVar1 = *(long *)(param_1 + 0x28) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(long *)(lVar1 + 0x10) = lVar1 + 0x10;
          *(long *)(lVar1 + 0x18) = lVar1 + 0x10;
        } while ((uVar5 & 0xfffffffe) != uVar3);
      }
      if ((param_2 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x28) + uVar3 * 0x10;
        *(long *)lVar4 = lVar4;
        *(long *)(lVar4 + 8) = lVar4;
      }
      uVar2 = FUN_003c5280(auStack_58,0x10,8,param_2);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      if (0 < (int)param_2) {
        if (uVar5 == 1) {
          uVar3 = 0;
        }
        else {
          lVar4 = 0;
          uVar3 = 0;
          do {
            uVar3 = uVar3 + 2;
            lVar1 = *(long *)(param_1 + 0x30) + lVar4;
            *(long *)lVar1 = lVar1;
            *(long *)(lVar1 + 8) = lVar1;
            lVar1 = *(long *)(param_1 + 0x30) + lVar4;
            lVar4 = lVar4 + 0x20;
            *(long *)(lVar1 + 0x10) = lVar1 + 0x10;
            *(long *)(lVar1 + 0x18) = lVar1 + 0x10;
          } while ((uVar5 & 0xfffffffe) != uVar3);
        }
        if ((param_2 & 1) != 0) {
          lVar4 = *(long *)(param_1 + 0x30) + uVar3 * 0x10;
          *(long *)lVar4 = lVar4;
          *(long *)(lVar4 + 8) = lVar4;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x38) = param_3 & 1;
  return;
}

