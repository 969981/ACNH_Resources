
void FUN_03149b50(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  int local_24;
  
  local_24 = param_1;
  if (param_1 == 0) {
    local_2c[0] = *param_2;
    if (7 < local_2c[0]) {
      local_2c[0] = 0xff;
    }
    uVar1 = FUN_031536a0(0,local_2c);
    if ((uVar1 & 1) != (param_3 & 1)) {
      iVar6 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar4,0);
          iVar6 = 0;
          if (((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) &&
             (iVar6 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
      if (DAT_05292434 == iVar6) {
        if (DAT_0523a180 != 0) {
          uVar5 = 0;
LAB_03149d94:
          FUN_016b78b0(DAT_0523a180,uVar5);
          return;
        }
      }
      else if (DAT_05abbc58 != 0) {
        uVar5 = 0;
LAB_03149db8:
        FUN_0372e870(DAT_05abbc58,uVar5);
        return;
      }
    }
  }
  else if (param_1 == 2) {
    local_30[0] = *param_2;
    if (7 < local_30[0]) {
      local_30[0] = 0xff;
    }
    uVar1 = FUN_031536a0(2,local_30);
    if ((uVar1 & 1) != (param_3 & 1)) {
      iVar6 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar4,0);
          iVar6 = 0;
          if (((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) &&
             (iVar6 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
      if (DAT_05292434 == iVar6) {
        if (DAT_0523adf0 != 0) {
          if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
            if (DAT_053e0208 != 0) {
              FUN_020b8cb0(DAT_053e0208,1);
              return;
            }
          }
          else if (DAT_0523a180 != 0) {
            uVar5 = 1;
            goto LAB_03149d94;
          }
        }
      }
      else if (DAT_05abbc58 != 0) {
        uVar5 = 1;
        goto LAB_03149db8;
      }
    }
  }
  else if ((param_1 == 1) && (uVar3 = FUN_033fe650(), (uVar3 & 1) == 0)) {
    local_28[0] = *param_2;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    uVar1 = FUN_031536a0(1,local_28);
    if ((uVar1 & 1) != (param_3 & 1)) {
      FUN_02546978(param_2);
      return;
    }
  }
  return;
}

