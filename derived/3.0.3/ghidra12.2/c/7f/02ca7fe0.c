
void FUN_02ca7fe0(long param_1,undefined4 param_2,byte param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bc9c80;
  switch(param_2) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar2 + 0x610) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x610),0,0 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x618) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x618),0,1 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x620) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x620),0,2 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x628) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x628),0,3 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x630) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x630),0,4 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x638) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x638),0,5 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x640) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x640),0,6 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x648) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x648),0,7 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x650) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x650),0,8 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x658) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x658),0,9 < *(int *)(param_1 + 0xca0) & param_3);
    }
    if (*(long *)(lVar2 + 0x660) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x660),0,10 < *(int *)(param_1 + 0xca0) & param_3);
    }
    lVar2 = *(long *)(lVar2 + 0x668);
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xca0) < 0xc) {
      param_3 = 0;
      goto LAB_02ca83b8;
    }
    goto LAB_02ca83b0;
  case 1:
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x678);
    goto joined_r0x02ca823c;
  case 2:
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x680);
    if ((param_3 & 1) == 0) {
      FUN_0345b550(lVar2,param_4);
      if (*(int *)(param_1 + 0x650) != 0x10) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x690);
      goto LAB_02ca8418;
    }
    local_40 = PTR_DAT_04bc9c80 + 0x10;
    uStack_38 = 0xffffffff01000100;
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x298) < 2) {
        if ((((*(int *)(lVar2 + 0x2f8) != 0 && *(int *)(lVar2 + 0x208) != 0) &&
             (*(long *)(lVar2 + 0x270) != 0)) && (*(long *)(*(long *)(lVar2 + 0x270) + 8) != 0)) &&
           (((*(long *)(lVar2 + 0x480) == 0 || (*(int *)(*(long *)(lVar2 + 0x480) + 0x14) != -1)) &&
            ((*(long *)(lVar2 + 0x2d8) != 0 &&
             ((0 < *(int *)(lVar2 + 0x3d8) && (*(int *)(lVar2 + 0x3d4) != 0)))))))) {
          FUN_03ebb160(lVar2 + 0x290,2);
        }
      }
      else {
        FUN_03864fe0(lVar2,&local_40);
      }
    }
    if (*(int *)(param_1 + 0x650) != 0x10) {
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x690);
    goto LAB_02ca8518;
  case 3:
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x670);
joined_r0x02ca823c:
    if ((param_3 & 1) == 0) {
LAB_02ca8418:
      FUN_0345b550(lVar2,param_4);
      return;
    }
    if (lVar2 == 0) {
      return;
    }
    if (1 < *(uint *)(lVar2 + 0x298)) {
LAB_02ca8530:
      uStack_38 = 0xffffffff01000100;
      local_40 = puVar1 + 0x10;
      FUN_03864fe0(lVar2,&local_40);
      return;
    }
    if (*(int *)(lVar2 + 0x2f8) == 0 || *(int *)(lVar2 + 0x208) == 0) {
      return;
    }
LAB_02ca855c:
    uStack_38 = 0xffffffff01000100;
    local_40 = puVar1 + 0x10;
    if (*(long *)(lVar2 + 0x270) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar2 + 0x270) + 8) == 0) {
      return;
    }
    if ((*(long *)(lVar2 + 0x480) != 0) && (*(int *)(*(long *)(lVar2 + 0x480) + 0x14) == -1)) {
      return;
    }
    if (*(long *)(lVar2 + 0x2d8) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x3d8) < 1) {
      return;
    }
    if (*(int *)(lVar2 + 0x3d4) == 0) {
      return;
    }
    FUN_03ebb160(lVar2 + 0x290,2);
    return;
  case 4:
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x688);
    if ((param_3 & 1) == 0) {
      FUN_0345b550(lVar2,param_4);
      if (*(int *)(param_1 + 0xad0) != 0xc) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x698);
      goto LAB_02ca8418;
    }
    local_40 = PTR_DAT_04bc9c80 + 0x10;
    uStack_38 = 0xffffffff01000100;
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x298) < 2) {
        if (((((*(int *)(lVar2 + 0x2f8) != 0 && *(int *)(lVar2 + 0x208) != 0) &&
              (*(long *)(lVar2 + 0x270) != 0)) && (*(long *)(*(long *)(lVar2 + 0x270) + 8) != 0)) &&
            ((*(long *)(lVar2 + 0x480) == 0 || (*(int *)(*(long *)(lVar2 + 0x480) + 0x14) != -1))))
           && ((*(long *)(lVar2 + 0x2d8) != 0 &&
               ((0 < *(int *)(lVar2 + 0x3d8) && (*(int *)(lVar2 + 0x3d4) != 0)))))) {
          FUN_03ebb160(lVar2 + 0x290,2);
        }
      }
      else {
        FUN_03864fe0(lVar2,&local_40);
      }
    }
    if (*(int *)(param_1 + 0xad0) != 0xc) {
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x210) + 0x698);
LAB_02ca8518:
    if (lVar2 == 0) {
      return;
    }
    if (1 < *(uint *)(lVar2 + 0x298)) goto LAB_02ca8530;
    if (*(int *)(lVar2 + 0x2f8) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x208) == 0) {
      return;
    }
    goto LAB_02ca855c;
  case 5:
    lVar2 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar2 + 0x598) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x598),0,param_3 & 1);
    }
    if (*(long *)(lVar2 + 0x5a0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5a0),0,param_3 & 1);
    }
    lVar2 = *(long *)(lVar2 + 0x5a8);
    goto joined_r0x02ca8304;
  case 6:
    lVar2 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar2 + 0x5b0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b0),0,param_3 & 1);
    }
    if (*(long *)(lVar2 + 0x5b8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b8),0,param_3 & 1);
    }
    if (*(long *)(lVar2 + 0x5c0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5c0),0,param_3 & 1);
    }
    lVar2 = *(long *)(lVar2 + 0x5c8);
joined_r0x02ca8304:
    if (lVar2 == 0) {
      return;
    }
    goto LAB_02ca83b0;
  case 7:
    lVar3 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(lVar3 + 0x5d0);
    if (lVar2 != 0) {
      FUN_03d5d0e0(lVar2,0,param_3 & 1);
    }
    lVar2 = *(long *)(lVar3 + 0x5d8);
    break;
  case 8:
    lVar2 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar2 + 0x5e0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e0),0,param_3 & 1);
    }
    if (*(long *)(lVar2 + 0x5e8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e8),0,param_3 & 1);
    }
    lVar2 = *(long *)(lVar2 + 0x5f0);
    break;
  case 9:
    lVar2 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar2 + 0x588) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x588),0,param_3 & 1);
      lVar2 = *(long *)(param_1 + 0x210);
    }
    lVar2 = *(long *)(lVar2 + 0x590);
    break;
  case 10:
    lVar3 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(lVar3 + 0x5f8);
    if (lVar2 != 0) {
      FUN_03d5d0e0(lVar2,0,param_3 & 1);
    }
    lVar2 = *(long *)(lVar3 + 0x600);
    break;
  default:
    goto switchD_02ca8020_default;
  }
  if (lVar2 == 0) {
switchD_02ca8020_default:
    return;
  }
LAB_02ca83b0:
  param_3 = param_3 & 1;
LAB_02ca83b8:
  FUN_03d5d0e0(lVar2,0,param_3);
  return;
}

