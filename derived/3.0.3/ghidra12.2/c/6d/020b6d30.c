
void FUN_020b6d30(long param_1,byte *param_2,undefined4 *param_3,long *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined **local_60;
  byte local_58;
  undefined4 local_54;
  
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar3 = FUN_006bd550(param_4[1],0);
  uVar2 = *(uint *)(param_1 + 0x4f08);
  if (uVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x4f10);
    if ((int)uVar2 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar7 = uVar2 - 1;
      do {
        uVar1 = iVar7 + uVar5;
        if ((int)uVar1 < 0 != SCARRY4(iVar7,uVar5)) {
          uVar1 = uVar1 + 1;
        }
        uVar6 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar4 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar3) {
          if ((int)uVar6 < 0) goto LAB_020b6e10;
          goto LAB_020b6df8;
        }
        if (uVar1 < uVar3) {
          uVar5 = uVar6 + 1;
        }
        else {
          iVar7 = uVar6 - 1;
        }
      } while ((int)uVar5 < iVar7);
    }
    if ((*(uint *)(lVar4 + (long)(int)uVar5 * 0x20 + 0x18) == uVar3) &&
       (uVar6 = uVar5, -1 < (int)uVar5)) {
LAB_020b6df8:
      if (uVar2 <= uVar6) {
        uVar6 = 0;
      }
      (**(code **)(lVar4 + (ulong)uVar6 * 0x20))(param_1);
    }
  }
LAB_020b6e10:
  if ((param_5 & 1) != 0) {
    local_58 = *param_2;
    local_60 = &PTR_FUN_04a73148;
    if (7 < local_58) {
      local_58 = 0xff;
    }
    local_54 = *param_3;
    FUN_020b020c(param_1,&local_60);
  }
  return;
}

