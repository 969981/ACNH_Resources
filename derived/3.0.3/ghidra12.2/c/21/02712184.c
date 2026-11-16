
void FUN_02712184(long *param_1,long param_2,long param_3)

{
  long *__s;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  plVar1 = param_1 + 0x16dc;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  plVar2 = param_1 + 0x124b;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar6 != 0) {
      param_1[4] = lVar6;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0xdb30);
  FUN_027128a0(__s,0,0);
  plVar3 = param_1 + 0x498;
  param_1[7] = (long)&PTR_LAB_04a8d090;
  FUN_027128a0(plVar3,0,0);
  param_1[0x498] = (long)&PTR_LAB_04a8d090;
  plVar4 = param_1 + 0x929;
  FUN_027128a0(plVar4,0,0);
  param_1[0x929] = (long)&PTR_LAB_04a8d090;
  plVar5 = param_1 + 0xdba;
  FUN_027128a0(plVar5,0,0);
  param_1[0xdba] = (long)&PTR_LAB_04a8d090;
  FUN_027128a0(plVar2,0,0);
  *plVar2 = (long)&PTR_LAB_04a8d090;
  FUN_027128a0(plVar1,0,0);
  *plVar1 = (long)&PTR_LAB_04a8d090;
  *param_1 = (long)&PTR_LAB_04a8d060;
  lVar6 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar6 != 0) {
    param_1[0xb] = lVar6;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar6 != 0) {
    param_1[0x49c] = lVar6;
  }
  param_1[0x49a] = param_1[0x49a] + param_3 + 0x6c24;
  FUN_026400e0(plVar3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar6 != 0) {
    param_1[0x92d] = lVar6;
  }
  param_1[0x92b] = param_1[0x92b] + param_3 + 0xd848;
  FUN_026400e0(plVar4);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar6 != 0) {
    param_1[0xdbe] = lVar6;
  }
  param_1[0xdbc] = param_1[0xdbc] + param_3 + 0x1446c;
  FUN_026400e0(plVar5);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar6 != 0) {
    param_1[0x124f] = lVar6;
  }
  param_1[0x124d] = param_1[0x124d] + param_3 + 0x1b090;
  FUN_026400e0(plVar2);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar6 != 0) {
    param_1[0x16e0] = lVar6;
  }
  param_1[0x16de] = param_1[0x16de] + param_3 + 0x21cb4;
  FUN_026400e0(plVar1);
  return;
}

