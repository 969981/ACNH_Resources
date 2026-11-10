
void FUN_0018a360(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bcbda0;
  *param_1 = (long)(PTR_DAT_04bcbd98 + 0x10);
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1);
  puVar3 = PTR_DAT_04bcbda8;
  plVar6 = *(long **)(PTR_DAT_04bcbda8 + 8);
  plVar8 = *(long **)(PTR_DAT_04bcbda8 + 0x18);
  if (plVar6 != plVar8) {
    lVar5 = *(long *)(PTR_DAT_04bcbda8 + 0x20);
    do {
      plVar7 = param_1;
      if (plVar6 != param_1) {
        plVar7 = plVar6;
        do {
          plVar7 = (long *)plVar7[1];
        } while (plVar7 != plVar8 && plVar7 != param_1);
      }
      if (plVar7 == plVar8) break;
      plVar6 = (long *)plVar7[1];
      lVar2 = plVar7[2];
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar6;
      }
      plVar7[2] = 0;
      if (plVar6 != (long *)0x0) {
        plVar6[2] = lVar2;
      }
      plVar7[1] = 0;
      if (*(long **)(puVar3 + 8) == plVar7) {
        *(long **)(puVar3 + 8) = plVar6;
        plVar8 = *(long **)(puVar3 + 0x10);
      }
      else {
        plVar8 = *(long **)(puVar3 + 0x10);
      }
      if (plVar8 == plVar7) {
        *(long *)(puVar3 + 0x10) = lVar2;
      }
      plVar8 = *(long **)(puVar3 + 0x18);
      lVar5 = lVar5 + -1;
      *(long *)(puVar3 + 0x20) = lVar5;
    } while (plVar6 != plVar8);
  }
  if (((char)param_1[0xf] != '\0') && ((int)param_1[9] != 0)) {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_28);
    }
    else {
      FUN_0018c9b0(&local_28,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = local_28;
  }
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  puVar3 = PTR_DAT_04bc0ec8;
  plVar6 = (long *)param_1[0x19];
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x16] = (long)puVar1;
  if ((plVar6 != (long *)0x0) && (plVar6 != param_1 + 0x17)) {
    pcVar4 = *(code **)((long)plVar6 + -0x14);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)((long)plVar6 + -0x14));
      plVar6 = (long *)param_1[0x14];
      param_1[0x11] = (long)puVar1;
      goto joined_r0x0018a4dc;
    }
    (*pcVar4)();
  }
  plVar6 = (long *)param_1[0x14];
  param_1[0x11] = (long)puVar1;
joined_r0x0018a4dc:
  if ((plVar6 != (long *)0x0) && (plVar6 != param_1 + 0x12)) {
    pcVar4 = *(code **)((long)plVar6 + -0x14);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)((long)plVar6 + -0x14));
    }
    else {
      (*pcVar4)();
    }
  }
  plVar6 = (long *)param_1[0xd];
  param_1[10] = (long)(puVar3 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar6 != param_1 + 0xb)) {
    pcVar4 = *(code **)((long)plVar6 + -0x14);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)((long)plVar6 + -0x14));
      return;
    }
    (*pcVar4)();
  }
  return;
}

