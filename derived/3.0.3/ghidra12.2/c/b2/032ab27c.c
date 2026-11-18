
void FUN_032ab27c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  char *pcStack_28;
  
  iVar3 = *(int *)((long)param_1 + 0x1c);
  if (((iVar3 != 0x2000) && (iVar3 != 0x6000)) && (iVar3 != 0x4000)) {
    return;
  }
  if ((char)param_1[9] == '\0') {
    return;
  }
  if (iVar3 == 0x6000) {
    pcVar4 = "Cmn_FooterKey_LR";
    pcVar5 = "Cmn_FooterKey_SLSR";
  }
  else if (iVar3 == 0x4000) {
    pcVar4 = "Cmn_FooterKey_R";
    pcVar5 = "Cmn_FooterKey_SR";
  }
  else {
    if (iVar3 != 0x2000) {
      pcVar5 = "";
      goto LAB_032ab314;
    }
    pcVar4 = "Cmn_FooterKey_L";
    pcVar5 = "Cmn_FooterKey_SL";
  }
  if ((param_2 & 1) == 0) {
    pcVar5 = pcVar4;
  }
LAB_032ab314:
  local_40 = *(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x18);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_28 = "T_Key";
  local_30 = puVar1;
  local_68 = FUN_0328b6d0(&local_40,&local_30,0);
  plVar2 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar2 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  uStack_58 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_60 = puVar1;
  local_50 = puVar1;
  pcStack_48 = pcVar5;
  (**(code **)(*plVar2 + 0x18))(&local_40,plVar2,&local_50,&local_60);
  local_30 = PTR_DAT_04bb8610 + 0x10;
  pcStack_28 = (char *)local_38;
  FUN_032d67f0(&local_68,&local_30);
  return;
}

