
undefined8 FUN_01ba7e20(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long local_c8;
  byte *local_c0;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar8 = *(long *)(param_1 + 8);
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_0074fda4(&local_c8,"%s.msbt",param_3[1]);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    uVar5 = (uint)*local_c0;
    if (*local_c0 == 0) {
      uVar6 = 0;
      iVar3 = *(int *)(lVar8 + 0x10);
    }
    else {
      uVar6 = 0xffffffff;
      do {
        local_c0 = local_c0 + 1;
        uVar6 = crc32b(uVar6,uVar5,0x4c11db7);
        uVar5 = (uint)*local_c0;
      } while (uVar5 != 0);
      uVar6 = ~uVar6;
      iVar3 = *(int *)(lVar8 + 0x10);
    }
    if (iVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x18);
      if (iVar3 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        iVar7 = iVar3 + -1;
        do {
          iVar1 = iVar7 + uVar5;
          if (iVar1 < 0 != SCARRY4(iVar7,uVar5)) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          uVar4 = **(uint **)(lVar8 + (long)(int)uVar2 * 8);
          if (uVar4 == uVar6) goto joined_r0x01ba7f28;
          if (uVar4 < uVar6) {
            uVar5 = uVar2 + 1;
          }
          else {
            iVar7 = uVar2 - 1;
          }
        } while ((int)uVar5 < iVar7);
      }
      uVar2 = uVar5;
      if (**(uint **)(lVar8 + (long)(int)uVar5 * 8) == uVar6) {
joined_r0x01ba7f28:
        if ((-1 < (int)uVar2) && ((int)uVar2 < iVar3)) {
          FUN_006f5950(param_2,*(long *)(lVar8 + (ulong)uVar2 * 8) + 8,param_3,param_4);
          return 1;
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x38))(param_2);
  return 0;
}

