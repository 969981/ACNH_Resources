
void FUN_03c09d18(long param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined1 auStack_60 [16];
  undefined *local_50;
  char *pcStack_48;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x40) + 0x240);
  }
  else if (iVar1 == 1) {
    puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x48) + 0x30);
  }
  else {
    if (iVar1 != 0) {
      piVar5 = (int *)0x0;
      goto LAB_03c09d9c;
    }
    puVar4 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38) + 0x270);
  }
  piVar5 = (int *)*puVar4;
LAB_03c09d9c:
  FUN_03870d80(piVar5);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    FUN_00244434(piVar5 + 0x13be,*(undefined8 *)(*(long *)PTR_DAT_04bb21d8 + 0x248));
    FUN_00244464(&local_50,piVar5 + 0x13be,"LunchPack2DefaultPhrase",0x17);
    FUN_00244768(auStack_60,piVar5 + 0x144c,"LunchPack2DefaultPhrase",0x17);
    FUN_00229780(&local_50,auStack_60);
  }
  else if ((iVar1 == 2) || (iVar1 == 1)) {
    FUN_03871248(piVar5,0);
  }
  piVar5[1] = piVar5[1] | 1;
  FUN_03870f04(piVar5,1);
  FUN_03870fc8(piVar5,8);
  FUN_038710a0(piVar5,0);
  FUN_03871164(piVar5,200);
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb2700 + 0x568);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "MatchmakeGroupID";
    piVar2 = (int *)FUN_038affc0(*(undefined8 *)PTR_DAT_04bb2668,&local_50,1);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    FUN_03871310(piVar5,4,iVar3 + iVar1);
  }
  FUN_038713e0(piVar5,1);
  FUN_03871638(piVar5);
  piVar5[0x834] = 1;
  FUN_03871908(piVar5,0);
  FUN_0387240c(piVar5,0);
  FUN_0387264c(piVar5);
  return;
}

