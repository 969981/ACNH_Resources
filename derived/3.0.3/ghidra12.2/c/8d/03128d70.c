
void FUN_03128d70(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  undefined *local_40;
  undefined4 local_38;
  
  if (*(long *)(param_1 + 0x220) == 0) {
    return;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 600);
  if (plVar4 != (long *)0x0) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x1c0))(plVar4[1]);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == "AttendFishingConvention") {
LAB_03128e54:
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x270);
    goto joined_r0x03128e5c;
  }
  if (*pcVar3 == 'A') {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if ((uVar2 == 0x80000) || (pcVar3[uVar2 + 1] != "AttendFishingConvention"[uVar2 + 1]))
      goto LAB_03128e64;
      uVar1 = uVar2 + 1;
    } while (pcVar3[uVar2 + 1] != '\0');
    if (uVar2 >> 0x13 == 0) goto LAB_03128e54;
  }
LAB_03128e64:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == "AttendInsectConvention") {
LAB_03128ee0:
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x268);
    goto joined_r0x03128e5c;
  }
  if (*pcVar3 == 'A') {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if ((uVar2 == 0x80000) || (pcVar3[uVar2 + 1] != "AttendInsectConvention"[uVar2 + 1]))
      goto LAB_03128ef0;
      uVar1 = uVar2 + 1;
    } while (pcVar3[uVar2 + 1] != '\0');
    if (uVar2 >> 0x13 == 0) goto LAB_03128ee0;
  }
LAB_03128ef0:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == "PlantFruit") {
LAB_03128f70:
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x280);
    goto joined_r0x03128e5c;
  }
  if (*pcVar3 == 'P') {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if ((uVar2 == 0x80000) || (pcVar3[uVar2 + 1] != "PlantFruit"[uVar2 + 1])) goto LAB_03128f80;
      uVar1 = uVar2 + 1;
    } while (pcVar3[uVar2 + 1] != '\0');
    if (uVar2 >> 0x13 == 0) goto LAB_03128f70;
  }
LAB_03128f80:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == "CollectGoldTool") {
LAB_03129000:
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x278);
    goto joined_r0x03128e5c;
  }
  if (*pcVar3 == 'C') {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if ((uVar2 == 0x80000) || (pcVar3[uVar2 + 1] != "CollectGoldTool"[uVar2 + 1]))
      goto LAB_03129010;
      uVar1 = uVar2 + 1;
    } while (pcVar3[uVar2 + 1] != '\0');
    if (uVar2 >> 0x13 == 0) goto LAB_03129000;
  }
LAB_03129010:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == "ChangeSymbol") {
LAB_03129090:
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x288);
  }
  else {
    if (*pcVar3 == 'C') {
      uVar1 = 0;
      do {
        uVar2 = uVar1;
        if ((uVar2 == 0x80000) || (pcVar3[uVar2 + 1] != "ChangeSymbol"[uVar2 + 1]))
        goto LAB_031290a0;
        uVar1 = uVar2 + 1;
      } while (pcVar3[uVar2 + 1] != '\0');
      if (uVar2 >> 0x13 == 0) goto LAB_03129090;
    }
LAB_031290a0:
    uVar1 = FUN_03258450(param_2);
    if ((uVar1 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + 0x290);
  }
joined_r0x03128e5c:
  if (plVar4 != (long *)0x0) {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x158))((float)param_3,plVar4[1]);
  }
  return;
}

