
void FUN_017e5388(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2640;
  if (DAT_05aed670 == 0) goto LAB_017e5464;
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 == 0x758f7eaf) {
      if (DAT_05aed670 == 0) goto LAB_017e5464;
      if ((*(long *)(DAT_05aed670 + 0x330) != 0) &&
         (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 0)) {
        return;
      }
    }
    else if (DAT_05aed670 == 0) goto LAB_017e5464;
  }
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)puVar1 + 0x18))
                       (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if ((((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
        (lVar5 = *(long *)(DAT_05aed670 + 0x330), lVar5 != 0)) &&
       (((*(int *)(lVar5 + 0x260) != 0 && (lVar5 = *(long *)(lVar5 + 600), lVar5 != 0)) &&
        (lVar5 != 0x40)))) {
      *(undefined1 *)(lVar5 + -4) = 0;
    }
  }
LAB_017e5464:
  uVar4 = FUN_03772f40();
  if ((uVar4 & 1) == 0) {
    if (DAT_05aed670 == 0) {
      return;
    }
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      return;
    }
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 != 0x758f7eaf) {
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
    lVar5 = *(long *)(DAT_05aed670 + 0x330);
    if (lVar5 == 0) {
      return;
    }
    if (*(uint *)(lVar5 + 0x260) < 3) {
      return;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(lVar5 + 600) + 8) + 8);
    lVar5 = lVar7 + -0x40;
    if (lVar7 == 0 || lVar5 == 0) {
      return;
    }
    uVar6 = 1;
  }
  else {
    if (DAT_05aed670 == 0) {
      return;
    }
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      return;
    }
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 != 0x758f7eaf) {
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
    lVar5 = *(long *)(DAT_05aed670 + 0x330);
    if (lVar5 == 0) {
      return;
    }
    if (*(uint *)(lVar5 + 0x260) < 3) {
      return;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(lVar5 + 600) + 8) + 8);
    lVar5 = lVar7 + -0x40;
    if (lVar7 == 0 || lVar5 == 0) {
      return;
    }
    uVar6 = 0;
  }
  *(undefined1 *)(lVar5 + 0x3c) = uVar6;
  return;
}

