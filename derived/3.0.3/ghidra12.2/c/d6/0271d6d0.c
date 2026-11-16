
void FUN_0271d6d0(long *param_1,long param_2,long param_3)

{
  long *__s;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  param_1[2] = param_3;
  plVar6 = param_1 + 3;
  *plVar6 = 0;
  puVar1 = PTR_DAT_04bc35c8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x422c0);
  FUN_0271da60(__s);
  lVar2 = 0;
  iVar7 = 0;
  *param_1 = (long)&PTR_LAB_04a8e540;
  do {
    plVar5 = __s + (long)iVar7 * 0x108b;
    lVar3 = *plVar6;
    *plVar6 = (long)plVar5;
    if (lVar3 != 0) {
      plVar5[4] = lVar3;
    }
    lVar3 = param_3 + lVar2;
    plVar5[2] = lVar3 + plVar5[2];
    FUN_026400e0(plVar5,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x181);
    if (lVar4 != 0) {
      plVar5[0x185] = lVar4;
    }
    plVar5[0x183] = lVar3 + plVar5[0x183];
    FUN_026400e0(plVar5 + 0x181,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x302);
    if (lVar4 != 0) {
      plVar5[0x306] = lVar4;
    }
    plVar5[0x304] = lVar3 + plVar5[0x304];
    FUN_026400e0(plVar5 + 0x302,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x483);
    if (lVar4 != 0) {
      plVar5[0x487] = lVar4;
    }
    plVar5[0x485] = lVar3 + plVar5[0x485];
    FUN_026400e0(plVar5 + 0x483,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x604);
    if (lVar4 != 0) {
      plVar5[0x608] = lVar4;
    }
    plVar5[0x606] = lVar3 + plVar5[0x606];
    FUN_026400e0(plVar5 + 0x604,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x785);
    if (lVar4 != 0) {
      plVar5[0x789] = lVar4;
    }
    plVar5[0x787] = lVar3 + plVar5[0x787];
    FUN_026400e0(plVar5 + 0x785,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0x906);
    if (lVar4 != 0) {
      plVar5[0x90a] = lVar4;
    }
    plVar5[0x908] = lVar3 + plVar5[0x908];
    FUN_026400e0(plVar5 + 0x906,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0xa87);
    if (lVar4 != 0) {
      plVar5[0xa8b] = lVar4;
    }
    plVar5[0xa89] = lVar3 + plVar5[0xa89];
    FUN_026400e0(plVar5 + 0xa87,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0xc08);
    if (lVar4 != 0) {
      plVar5[0xc0c] = lVar4;
    }
    plVar5[0xc0a] = lVar3 + plVar5[0xc0a];
    FUN_026400e0(plVar5 + 0xc08,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0xd89);
    if (lVar4 != 0) {
      plVar5[0xd8d] = lVar4;
    }
    plVar5[0xd8b] = lVar3 + plVar5[0xd8b];
    FUN_026400e0(plVar5 + 0xd89,lVar3);
    lVar4 = *plVar6;
    *plVar6 = (long)(plVar5 + 0xf0a);
    if (lVar4 != 0) {
      plVar5[0xf0e] = lVar4;
    }
    plVar5[0xf0c] = lVar3 + plVar5[0xf0c];
    FUN_026400e0(plVar5 + 0xf0a,lVar3);
    lVar2 = lVar2 + 0x6c;
    iVar7 = iVar7 + 1;
  } while (lVar2 != 0x360);
  return;
}

