
undefined8 FUN_0016f280(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x94c) <= (int)(uVar1 ^ 0x7fffffff)) {
        *(uint *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + uVar1;
LAB_0016f364:
        if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
           (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8))
           , iVar2 == 0)) {
          return 0;
        }
        return 0xfffffc7a;
      }
      uVar4 = 0xfffffdf4;
      pcVar5 = (char *)0x0;
      goto LAB_0016f3e8;
    }
LAB_0016f3d4:
    pcVar5 = "WINDOW_UPDATE: window_size_increment == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      pcVar5 = "WINDOW_UPDATE to idle stream";
    }
    else {
      lVar3 = FUN_001726f0(param_1);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0xdc) == 5) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0xdc) != 4) ||
         ((*(uint *)(lVar3 + 0xb8) != 0 &&
          ((*(uint *)(lVar3 + 0xb8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0'))))) {
        uVar1 = *(uint *)(param_2 + 0x10);
        if (uVar1 != 0) {
          if ((int)(uVar1 ^ 0x7fffffff) < *(int *)(lVar3 + 0xbc)) {
            uVar4 = FUN_0017211c(param_1,*(undefined4 *)(param_2 + 8),param_2,0xfffffdf4);
            return uVar4;
          }
          iVar2 = *(int *)(lVar3 + 0xbc) + uVar1;
          *(int *)(lVar3 + 0xbc) = iVar2;
          if (((0 < iVar2) && (iVar2 = FUN_00172b3c(lVar3), iVar2 != 0)) &&
             (uVar4 = FUN_00172af0(lVar3,4), (int)uVar4 < -900)) {
            return uVar4;
          }
          goto LAB_0016f364;
        }
        goto LAB_0016f3d4;
      }
      pcVar5 = "WINDOW_UPADATE to reserved stream";
    }
  }
  uVar4 = 0xfffffe07;
LAB_0016f3e8:
  uVar4 = FUN_0016e544(param_1,param_2,uVar4,pcVar5);
  return uVar4;
}

