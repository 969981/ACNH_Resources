
bool FUN_02f853d4(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  lVar7 = DAT_05574040;
  if ((((DAT_05574040 == 0) || (uVar5 = FUN_026f4a88(DAT_05574040), (uVar5 & 1) == 0)) ||
      (*(long *)(lVar7 + 0x10) == 0)) ||
     ((plVar6 = *(long **)(*(long *)(lVar7 + 0x10) + 0xe8), plVar6 == (long *)0x0 ||
      (lVar7 = (**(code **)(*plVar6 + 0x38))(), lVar7 == 0)))) {
    uVar9 = 0xffffffff;
  }
  else {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar8)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
    if (*(int *)(lVar1 + 0x120) - 0x23001U < 0xfffdd000) {
      uVar9 = 0;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x110);
      iVar4 = FUN_006f6900(lVar1 + 0x114,0x2301c,0);
      uVar9 = 0;
      if (iVar2 == iVar4) {
        if ((*(int *)(lVar1 + 0x23140) - 0x23001U < 0xfffdd000) ||
           (iVar2 = *(int *)(lVar1 + 0x23130), iVar4 = FUN_006f6900(lVar1 + 0x23134,0x2301c,0),
           iVar2 != iVar4)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 2;
          if (0xfffdcfff < *(int *)(lVar1 + 0x46160) - 0x23001U) {
            iVar2 = *(int *)(lVar1 + 0x46150);
            iVar4 = FUN_006f6900(lVar1 + 0x46154,0x2301c,0);
            uVar9 = 2;
            if (iVar2 == iVar4) {
              uVar9 = 0xffffffff;
            }
          }
        }
      }
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return uVar9 < 3;
}

