
void FUN_02d5a36c(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 uStack_59;
  undefined1 local_58 [16];
  undefined1 *local_48;
  
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  if (DAT_05739190 == 0) {
    return;
  }
  if (*(long *)(DAT_05739190 + 0x470) == 0) {
    return;
  }
  piVar7 = *(int **)(*(long *)(DAT_05739190 + 0x470) + 0x18);
  if (piVar7 == (int *)0x0) {
    iVar4 = 0;
    cVar8 = 'R';
LAB_02d5a3e4:
    uVar11 = (uint)(char)iVar4;
    cVar9 = 'R';
  }
  else {
    cVar9 = (char)piVar7[1];
    iVar4 = *piVar7;
    cVar8 = cVar9;
    if (cVar9 == 'S') {
      uVar11 = (iVar4 << 8) >> 0x18;
    }
    else {
      if (cVar9 == 'R') goto LAB_02d5a3e4;
      uVar11 = 0xffffffff;
    }
  }
  auVar12 = FUN_02642d30();
  uVar5 = auVar12._8_8_ & 0xffffffff;
  if (uVar5 == 0xffffffff) goto LAB_02d5a5c0;
  local_48 = &uStack_59;
  local_58 = auVar12;
  lVar2 = (*(code *)(&PTR_LAB_04a88330)[uVar5])(&local_48,local_58);
  if (lVar2 == 0) goto LAB_02d5a590;
  if (*(long **)(lVar2 + 0x95718) == (long *)0x0) {
    uVar5 = 0;
    if (cVar9 != 'S') goto LAB_02d5a45c;
LAB_02d5a47c:
    pcVar6 = (char *)(*(long *)(lVar2 + 0x95700) + *(long *)(lVar2 + 0x956f8) + 100);
LAB_02d5a488:
    pcVar1 = pcVar6 + uVar11;
    if (99 < uVar11) {
      pcVar1 = pcVar6;
    }
    cVar10 = *pcVar1;
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar2 + 0x95718) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x95718) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
    if (cVar10 != -1) goto LAB_02d5a594;
    auVar12 = FUN_02642d30();
    uVar5 = auVar12._8_8_ & 0xffffffff;
    if (uVar5 == 0xffffffff) {
LAB_02d5a5c0:
      local_58 = auVar12;
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_48 = &uStack_59;
    local_58 = auVar12;
    lVar2 = (*(code *)(&PTR_LAB_04a88330)[uVar5])(&local_48,local_58);
    if (lVar2 == 0) {
LAB_02d5a590:
      cVar10 = '\0';
      goto LAB_02d5a594;
    }
    if (*(long **)(lVar2 + 0x95718) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar3 = (undefined8 *)**(long **)(lVar2 + 0x95718);
      uVar5 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar3)();
      }
    }
    if (cVar9 == 'S') {
      pcVar6 = (char *)(*(long *)(lVar2 + 0x95700) + *(long *)(lVar2 + 0x956f8) + 100);
    }
    else {
      if (cVar9 != 'R') {
        if (((uVar5 & 1) != 0) && (lVar2 = *(long *)(lVar2 + 0x95718), lVar2 != 0))
        goto LAB_02d5a528;
        goto LAB_02d5a590;
      }
      pcVar6 = (char *)(*(long *)(lVar2 + 0x95700) + *(long *)(lVar2 + 0x956f8));
    }
    cVar10 = *pcVar6;
    if (((uVar5 & 1) == 0) || (lVar2 = *(long *)(lVar2 + 0x95718), lVar2 == 0)) goto LAB_02d5a594;
  }
  else {
    puVar3 = (undefined8 *)**(long **)(lVar2 + 0x95718);
    uVar5 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar3)();
    }
    if (cVar9 == 'S') goto LAB_02d5a47c;
LAB_02d5a45c:
    if (cVar9 == 'R') {
      pcVar6 = (char *)(*(long *)(lVar2 + 0x95700) + *(long *)(lVar2 + 0x956f8));
      goto LAB_02d5a488;
    }
    if (((uVar5 & 1) == 0) || (lVar2 = *(long *)(lVar2 + 0x95718), lVar2 == 0)) goto LAB_02d5a590;
LAB_02d5a528:
    cVar10 = '\0';
  }
  if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(lVar2 + 8))();
  }
LAB_02d5a594:
  FUN_0344d0c0(param_1,(int)cVar10,cVar8 == 'S');
  return;
}

