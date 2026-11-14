
void FUN_01bfb490(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined *local_48;
  undefined4 local_40;
  char local_34;
  uint local_14;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x2461) != '\0') {
      return;
    }
  }
  else {
    *(char *)(param_1 + 0x2461) = '\x01';
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x21ac) == 4) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x21ac) = 1;
  }
  else {
    FUN_01bfd554();
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 3) {
      pbVar5 = (byte *)(param_1 + 0x9e);
LAB_01bfb52c:
      bVar3 = 0;
      if (*pbVar5 < 0x2f) {
        bVar3 = *pbVar5;
      }
    }
    else {
      if (iVar1 == 2) {
        pbVar5 = (byte *)(param_1 + 0x9b);
        goto LAB_01bfb52c;
      }
      if (iVar1 == 1) {
        pbVar5 = (byte *)(param_1 + 0x96);
        goto LAB_01bfb52c;
      }
      bVar3 = 0;
    }
    FUN_01b97520(&local_48,bVar3);
    if (local_34 == '\0') {
      uVar8 = (uint)(*(char *)(*(long *)(param_1 + 0x28) + 0xdfd) == '\0');
    }
    else {
      uVar8 = 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    if (lVar6 != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
      if (iVar1 == 2) {
        plVar2 = (long *)(lVar6 + 0x228);
      }
      else if (iVar1 == 1) {
        plVar2 = (long *)(lVar6 + 0x220);
      }
      else {
        if (iVar1 != 0) goto LAB_01bfb60c;
        plVar2 = (long *)(lVar6 + 0x218);
      }
      if ((((long *)*plVar2 != (long *)0x0) &&
          (lVar6 = (**(code **)(*(long *)*plVar2 + 0x228))(), lVar6 != 0)) &&
         (plVar2 = *(long **)(lVar6 + 0x48), plVar2 != (long *)0x0)) {
        local_48 = PTR_DAT_04bc0cb8 + 0x10;
        local_40 = 0x37;
        local_14 = uVar8;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
        (**(code **)(plVar2[3] + 0x388))(plVar2[1],&local_14);
      }
    }
  }
LAB_01bfb60c:
  lVar6 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  if (lVar7 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
    if (iVar1 == 2) {
      plVar2 = *(long **)(lVar7 + 0x228);
    }
    else if (iVar1 == 1) {
      plVar2 = *(long **)(lVar7 + 0x220);
    }
    else {
      if (iVar1 != 0) goto LAB_01bfb680;
      plVar2 = *(long **)(lVar7 + 0x218);
    }
    if (plVar2 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar2 + 0x228))();
      **(undefined8 **)(param_1 + 0x18) = 1;
      if (lVar7 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar7 + 0x48);
      }
      goto LAB_01bfb690;
    }
  }
LAB_01bfb680:
  uVar4 = 0;
  **(undefined8 **)(param_1 + 0x18) = 1;
LAB_01bfb690:
  FUN_01ba8e98(*(undefined8 *)(param_1 + 0x18),uVar4,lVar6 + 0x6f8);
  return;
}

