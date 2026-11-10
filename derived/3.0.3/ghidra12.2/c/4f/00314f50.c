
void FUN_00314f50(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  int local_44;
  undefined4 local_40;
  char local_3c [4];
  char local_38 [4];
  undefined4 local_34;
  
  cVar2 = *(char *)(param_1 + 0x69);
  if (cVar2 == '\0') {
    local_38[0] = *(char *)(param_2 + 8);
    local_3c[0] = '\0';
    pcVar1 = local_38;
    if (local_38[0] != '\0') {
      pcVar1 = local_3c;
    }
    FUN_00197478(param_1,pcVar1,1);
    local_40 = 0;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_40,4);
  }
  else {
    uVar5 = 0;
  }
  local_34 = (undefined4)*(undefined8 *)(param_2 + 0x20);
  FUN_00197478(param_1,&local_34,4);
  plVar6 = *(long **)(param_2 + 0x10);
  while (plVar6 != (long *)(param_2 + 0x18)) {
    FUN_001f7044(param_1,plVar6 + 4);
    FUN_001f7340(param_1,plVar6 + 9);
    plVar3 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar4 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar4);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  if (cVar2 == '\0') {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar5);
    local_44 = ((int)uVar8 - (int)uVar5) + -4;
    FUN_00197478(param_1,&local_44,4);
    FUN_00197454(param_1,uVar8);
    return;
  }
  return;
}

