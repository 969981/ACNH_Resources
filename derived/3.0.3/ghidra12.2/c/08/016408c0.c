
float FUN_016408c0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb2720 == 0) {
    return 1.0;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
  if (lVar7 == 0) {
    return 1.0;
  }
  if (*(int *)(lVar7 + 8) != 4) {
    return 1.0;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
LAB_01640a18:
    fVar8 = 1.0 - *(float *)(param_1 + 0x104);
  }
  else {
    uVar4 = FUN_0180b7a0();
    if ((uVar4 & 1) == 0) {
      lVar7 = *(long *)puVar1;
      iVar3 = 0;
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x330) == 0) {
          iVar3 = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
          iVar2 = FUN_006bd550(*puVar5,0);
          iVar3 = 0;
          if (iVar2 == 0x758f7eaf) {
            lVar7 = *(long *)puVar1;
            iVar3 = 0;
            if (lVar7 != 0) {
              lVar7 = *(long *)(lVar7 + 0x330);
              iVar3 = 0;
              if (lVar7 != 0) {
                iVar3 = *(int *)(lVar7 + 0x244);
              }
            }
          }
        }
      }
      if (DAT_052923e8._4_4_ == iVar3) goto LAB_0164098c;
      if (DAT_05292338 == 0) {
        iVar3 = 0;
LAB_01640a04:
        iVar2 = 0;
      }
      else {
        iVar3 = FUN_017f8a28(DAT_05292338 + 0xda0);
        if (DAT_05292338 == 0) goto LAB_01640a04;
        iVar2 = FUN_017f8990(DAT_05292338 + 0xda0);
      }
      if (*(char *)(param_1 + 0x9c) != '\0') {
        return 1.0;
      }
      if (iVar2 != 0 || iVar3 != 0) goto LAB_01640a18;
    }
    else {
LAB_0164098c:
      lVar7 = *(long *)(param_1 + 0x1f8);
      lVar7 = FUN_0160cc10(lVar7,*(undefined4 *)(lVar7 + 0x298),lVar7 + 0x240,lVar7 + 0x298);
      if (lVar7 == 0) {
        return 1.0;
      }
      piVar6 = (int *)(**(code **)(*(long *)(lVar7 + 0x3c0) + 0xf0))(lVar7 + 0x3c0);
      if (*piVar6 == 0) {
        return 1.0;
      }
      if (*piVar6 != 1) goto LAB_01640a18;
    }
    fVar8 = 0.0;
  }
  return fVar8;
}

