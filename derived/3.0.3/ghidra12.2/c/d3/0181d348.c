
void FUN_0181d348(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = FUN_01813a64();
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0181ff68(param_1);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_018201d4(param_1), (uVar5 & 1) == 0)) {
      uVar5 = FUN_018204dc(param_1);
      if ((uVar5 & 1) == 0) {
        iVar4 = (**(code **)(*(long *)(param_1 + 0x4d8) + (ulong)*(byte *)(param_1 + 0x4ec) * 8))
                          (param_1 + 0x4d8);
        iVar2 = *(int *)(param_1 + 0x4e8);
        *(int *)(param_1 + 0x4e0) = iVar4;
        iVar3 = *(int *)(param_1 + 0x4e4);
        iVar1 = iVar3;
        if (iVar3 <= iVar2) {
          iVar1 = iVar2;
          iVar2 = iVar3;
        }
        if ((iVar4 <= iVar2) || (iVar1 <= iVar4)) {
          if (*(uint *)(param_1 + 0x3e4) == 0) {
            *(undefined4 *)(param_1 + 0x3e4) = 1;
          }
          else if (((*(uint *)(param_1 + 0x3e4) & 0xfffffffe) == 2) &&
                  (*(int *)(param_1 + 0x280) != 6)) {
            uVar6 = 6;
            goto LAB_0181d398;
          }
        }
      }
      else if (*(int *)(param_1 + 0x280) != 0) {
        uVar6 = 0;
        goto LAB_0181d398;
      }
    }
    else if (*(int *)(param_1 + 0x280) != 8) {
      uVar6 = 8;
LAB_0181d398:
      FUN_03ebb160(param_1 + 0x278,uVar6);
      return;
    }
  }
  return;
}

