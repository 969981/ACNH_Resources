
/* WARNING: Removing unreachable block (ram,0x0018e814) */

void FUN_0018e780(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  (**(code **)(DAT_04c58af8 + 0x10))(&DAT_04c58af8);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX-4_6_11--Release");
  if (DAT_04c58a08 == (undefined8 *)0x0) {
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar6 = malloc(0x88);
    }
    else {
      puVar6 = (undefined8 *)(*DAT_04c57ea0)(0x88);
    }
    puVar5 = PTR_DAT_04bcba28;
    puVar8 = puVar6 + 2;
    *puVar6 = *(undefined8 *)PTR_DAT_04bcba28;
    FUN_0018d038(puVar8);
    DAT_04c58a60 = puVar8;
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar6 = malloc(0x238);
    }
    else {
      puVar6 = (undefined8 *)(*DAT_04c57ea0)(0x238);
    }
    *puVar6 = *(undefined8 *)puVar5;
    FUN_0018dc74(puVar6 + 2);
    DAT_04c58a08 = puVar6 + 2;
LAB_0018e8b8:
                    /* WARNING: Could not recover jumptable at 0x0018e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_04c58af8 + 0x20))(&DAT_04c58af8);
    return;
  }
  piVar1 = (int *)(DAT_04c58a08 + 1);
  iVar7 = *piVar1;
  if (iVar7 == *piVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0018e8b8;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0018e8b8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar2;
  } while( true );
}

