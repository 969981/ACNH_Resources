
void FUN_0338ba40(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar2 = DAT_05739da8;
  if (DAT_05739db8 < 2) {
    return;
  }
  iVar3 = FUN_00b08880("cMyDesignList",0,0);
  iVar4 = 0;
  while ((&DAT_05739dc8)[(long)iVar4 * 0x4a] != iVar3) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x4f) {
      return;
    }
  }
  if (&DAT_05739e08 + (long)iVar4 * 0x25 != plVar2) {
    return;
  }
  plVar1 = (long *)0x0;
  if ((long **)*plVar2 != &DAT_05739da8) {
    plVar1 = (long *)*plVar2;
  }
  iVar3 = FUN_00b08880("MenuDevice",0,0);
  iVar4 = 0;
  while ((&DAT_05739dc8)[(long)iVar4 * 0x4a] != iVar3) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x4f) {
      return;
    }
  }
  if (&DAT_05739e08 + (long)iVar4 * 0x25 != plVar1 || plVar2 == plVar1) {
    return;
  }
  plVar6 = (long *)*plVar1;
  plVar5 = (long *)*plVar2;
  if (plVar6 != plVar2) {
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    puVar7 = (undefined8 *)plVar6[1];
    plVar6[1] = (long)plVar2;
    *plVar2 = (long)plVar6;
    plVar2[1] = (long)puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = plVar2;
    }
  }
  if (plVar5 == plVar1) {
    return;
  }
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  puVar7 = (undefined8 *)plVar5[1];
  plVar5[1] = (long)plVar1;
  *plVar1 = (long)plVar5;
  plVar1[1] = (long)puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  *puVar7 = plVar1;
  return;
}

