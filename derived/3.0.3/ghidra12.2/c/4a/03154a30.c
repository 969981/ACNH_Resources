
ulong FUN_03154a30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
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
LAB_03154bc8:
        uVar4 = FUN_016b7da0(DAT_0523a180,uVar5);
        return uVar4;
      }
    }
    else if (DAT_05abbc58 != 0) {
      uVar5 = 0;
LAB_03154be8:
      uVar4 = FUN_0372f8b0(DAT_05abbc58,uVar5);
      return uVar4;
    }
  }
  else if (param_1 == 2) {
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar6 = 0;
        if (((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) &&
           (iVar6 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
          iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
    if (DAT_05292434 == iVar6) {
      uVar1 = 0;
      if (DAT_0523adf0 == 0) goto LAB_03154c18;
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        if (DAT_053e0208 != 0) {
          uVar4 = FUN_020b9030(DAT_053e0208,1);
          return uVar4;
        }
      }
      else if (DAT_0523a180 != 0) {
        uVar5 = 1;
        goto LAB_03154bc8;
      }
    }
    else if (DAT_05abbc58 != 0) {
      uVar5 = 1;
      goto LAB_03154be8;
    }
  }
  else if (param_1 == 1) {
    uVar1 = FUN_033fe650();
    uVar1 = uVar1 ^ 1;
    goto LAB_03154c18;
  }
  uVar1 = 0;
LAB_03154c18:
  return (ulong)(uVar1 & 1);
}

