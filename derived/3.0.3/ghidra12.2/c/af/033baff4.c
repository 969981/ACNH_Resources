
void FUN_033baff4(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined1 *__src;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined **local_118;
  undefined1 *puStack_110;
  int local_108;
  undefined1 auStack_104 [63];
  undefined1 local_c5;
  undefined **local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined8 local_68;
  undefined4 local_60;
  int local_54;
  int local_38;
  int local_34;
  
  iVar3 = *(int *)(param_1 + 0x50);
  local_138 = CONCAT44(local_138._4_4_,iVar3);
  if (iVar3 != -1 && *(int *)(param_1 + 0x6c) != 0) {
    local_38 = 0;
    uVar6 = FUN_033bb2d0(param_1,&local_38,iVar3,param_2);
    if ((uVar6 & 1) != 0) {
      local_54 = 0;
      uVar6 = FUN_033bb2d0(param_1,&local_54,*(undefined4 *)(param_1 + 0x50),param_3);
      iVar4 = local_38;
      iVar3 = local_54;
      if ((((uVar6 & 1) != 0) && (local_38 != local_54)) && (*(long *)(DAT_05739190 + 0x30) != 0)) {
        plVar1 = (long *)(*(long *)(DAT_05739190 + 0x30) + 0xf0);
        iVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
        if (((iVar4 < iVar5) && (lVar7 = (**(code **)(*plVar1 + 0x158))(plVar1,iVar4), lVar7 != 0))
           && ((iVar5 = (**(code **)(*plVar1 + 0x168))(plVar1), iVar3 < iVar5 &&
               (lVar7 = (**(code **)(*plVar1 + 0x158))(plVar1,iVar3), lVar7 != 0)))) {
          *(int *)(param_1 + 0x7c8) = iVar4;
          *(undefined1 *)(param_1 + 0x338) = 1;
          *(int *)(param_1 + 0x7cc) = iVar3;
          *(undefined4 *)(param_1 + 0x340) = 0;
          local_108 = 0x40;
          *(int *)(param_1 + 0xb0) = local_54;
          local_138 = 0;
          uStack_130 = 0x3f800000;
          local_120 = 0x40a00000;
          local_c5 = 0;
          local_128 = 0;
          local_118 = &PTR_LAB_048fd2d8;
          puStack_110 = auStack_104;
          (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
          __src = DAT_05743420;
          if (auStack_104 != DAT_05743420) {
            (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
            lVar7 = 0;
            do {
              if (DAT_05743420[lVar7] == '\0') goto LAB_033bb1c0;
              if (DAT_05743420[lVar7 + 1] == '\0') {
                lVar7 = lVar7 + 1;
                goto LAB_033bb1c0;
              }
              if (DAT_05743420[lVar7 + 2] == '\0') {
                lVar7 = lVar7 + 2;
                goto LAB_033bb1c0;
              }
              lVar7 = lVar7 + 3;
            } while (lVar7 != 0x80001);
            lVar7 = 0;
LAB_033bb1c0:
            iVar3 = (int)lVar7;
            if (local_108 <= (int)lVar7) {
              iVar3 = local_108 + -1;
            }
            memcpy(auStack_104,__src,(long)iVar3);
            auStack_104[iVar3] = 0;
          }
          local_b8 = local_ac;
          local_b0 = 0x40;
          local_6d = 0;
          local_ac[0] = 0;
          local_118 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
          local_c0 = local_118;
          FUN_033bb4ec(param_1,&local_138,*(undefined4 *)(param_1 + 0xb0));
          if (DAT_05231900 != 0) {
            pppuVar2 = &local_118;
            if (*(char *)(param_1 + 0x68) != '\0') {
              pppuVar2 = &local_c0;
            }
            FUN_01640a40(*(undefined8 *)(DAT_05231900 + 0x70),pppuVar2);
          }
          *(undefined8 *)(param_1 + 0x11bc) = local_68;
          local_34 = *(int *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 0x11c4) = local_60;
          if (((local_34 != -1) && (*(int *)(param_1 + 0x70) != 0)) &&
             (uVar6 = FUN_033bab78(param_1), (uVar6 & 1) != 0)) {
            if (*(int *)(param_1 + 0x50) == 0) {
              FUN_033bc1a0(0,param_1);
            }
            else {
              FUN_033c3eb4(param_1,PTR_DAT_04bb2ce0);
            }
          }
        }
      }
    }
  }
  return;
}

