
long FUN_008c7330(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == 0x62) {
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
    uVar4 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30710),0);
    iVar2 = *(int *)(param_1 + 0x305b0);
    if (iVar2 != 0) {
      uVar6 = 0;
      iVar7 = iVar2 + -1;
      if (iVar7 == 0 || iVar2 < 1) {
        lVar5 = *(long *)(param_1 + 0x305b8);
      }
      else {
        lVar5 = *(long *)(param_1 + 0x305b8);
        do {
          iVar2 = iVar7 + uVar6;
          if (iVar2 < 0 != SCARRY4(iVar7,uVar6)) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar2 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar5 + (long)(int)uVar1 * 8) + 0x18);
          if (uVar3 == uVar4) goto joined_r0x008c73f8;
          if (uVar3 < uVar4) {
            uVar6 = uVar1 + 1;
          }
          else {
            iVar7 = uVar1 - 1;
          }
        } while ((int)uVar6 < iVar7);
      }
      uVar1 = uVar6;
      if (*(uint *)(*(long *)(lVar5 + (long)(int)uVar6 * 8) + 0x18) == uVar4) {
joined_r0x008c73f8:
        if ((-1 < (int)uVar1) && (lVar5 = **(long **)(lVar5 + (ulong)uVar1 * 8), lVar5 != 0)) {
          return lVar5;
        }
      }
    }
  }
  if (param_2 < *(uint *)(param_1 + 0x548)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x550) + (long)(int)param_2 * 8);
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}

