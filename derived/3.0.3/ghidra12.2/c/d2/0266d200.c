
undefined1 FUN_0266d200(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 auStack_64 [31];
  undefined1 local_45;
  undefined4 local_40;
  uint local_34;
  
  local_34 = 0;
  if (DAT_05aed670 == 0) {
    plVar10 = &DAT_055c04a0;
  }
  else {
    plVar10 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      plVar10 = (long *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        plVar10 = &DAT_055c04a0;
      }
    }
  }
  local_45 = 0;
  (**(code **)(*plVar10 + 0x18))(plVar10);
  puVar11 = (undefined1 *)plVar10[1];
  if (auStack_64 != puVar11) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar8) == '\0') goto LAB_0266d320;
      lVar1 = plVar10[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0266d320;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0266d320;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0266d320:
    iVar3 = (int)lVar8;
    if (0x1f < (int)lVar8) {
      iVar3 = 0x1f;
    }
    memcpy(auStack_64,puVar11,(long)iVar3);
    auStack_64[iVar3] = 0;
  }
  local_40 = (undefined4)plVar10[7];
  uVar7 = FUN_02b5f400(&local_34);
  uVar4 = local_34;
  if (((uVar7 & 1) != 0) && (DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = lVar8 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar8 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar8 == 0) {
        return 0;
      }
    }
    if (uVar4 < 8) {
      lVar1 = lVar8 + 0x119228 + (ulong)uVar4 * 0xfa08;
      if (7 < uVar4) {
        lVar1 = lVar8 + 0x119228;
      }
      uVar4 = FUN_0180da90();
      if ((*(long **)(lVar1 + 0xf9f8) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar1 + 0xf9f8), puVar6 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar6)();
        uVar5 = uVar5 ^ 1;
      }
      lVar8 = *(long *)(lVar1 + 0xf9e0) + *(long *)(lVar1 + 0xf9d8);
      pcVar2 = (char *)(lVar8 + 1 + (ulong)uVar4);
      if (5 < uVar4) {
        pcVar2 = (char *)(lVar8 + 1);
      }
      if (*pcVar2 == '\0') {
        uVar9 = 0;
      }
      else {
        puVar11 = (undefined1 *)(lVar8 + 7) + uVar4;
        if (5 < uVar4) {
          puVar11 = (undefined1 *)(lVar8 + 7);
        }
        uVar9 = *puVar11;
      }
      if ((uVar5 & 1) != 0) {
        return uVar9;
      }
      if (*(long *)(lVar1 + 0xf9f8) == 0) {
        return uVar9;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0xf9f8) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return uVar9;
      }
      (**(code **)*puVar6)();
      return uVar9;
    }
  }
  return 0;
}

