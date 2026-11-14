
void FUN_01a39700(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04bbfe48;
  puVar1 = PTR_DAT_04bb31d0;
  plVar6 = param_1 + 0xc4b;
  param_1[0xcc0] = 0;
  plVar2 = param_1 + 0xc0a;
  plVar3 = param_1 + 0x992;
  param_1[0xc44] = (long)&PTR_LAB_049fcac0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[0xcbb] = (long)(puVar1 + 0x10);
  if (0 < (int)*plVar6) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc4c] + lVar7 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar7 = lVar7 + 1;
      *plVar5 = param_1[0xc4d];
      param_1[0xc4d] = (long)plVar5;
    } while (lVar7 < (int)*plVar6);
  }
  *(undefined4 *)plVar6 = 0;
  param_1[0xc03] = (long)&PTR_LAB_049fcc40;
  if (0 < (int)*plVar2) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc0b] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0xc0c];
      param_1[0xc0c] = (long)plVar6;
    } while (lVar7 < (int)*plVar2);
  }
  *(undefined4 *)plVar2 = 0;
  param_1[0x98b] = (long)&PTR_LAB_049fcdc0;
  if (0 < (int)*plVar3) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x993] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x994];
      param_1[0x994] = (long)plVar6;
    } while (lVar7 < (int)*plVar3);
  }
  *(undefined4 *)plVar3 = 0;
  param_1[0x713] = (long)&PTR_LAB_049fcdc0;
  if (0 < (int)param_1[0x71a]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x71b] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x71c];
      param_1[0x71c] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x71a]);
  }
  puVar4 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x71a) = 0;
  param_1[0x712] = 0;
  param_1[0x70c] = 0;
  param_1[0x70d] = (long)(puVar1 + 0x10);
  param_1[0x459] = (long)&PTR_LAB_049fcf40;
  param_1[0x707] = (long)(puVar4 + 0x10);
  if (0 < (int)param_1[0x460]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x461] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x462];
      param_1[0x462] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x460]);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  param_1[0x418] = (long)&PTR_LAB_049fcc40;
  if (0 < (int)param_1[0x41f]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x420] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x421];
      param_1[0x421] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x41f]);
  }
  *(undefined4 *)(param_1 + 0x41f) = 0;
  param_1[0x3a1] = (long)&PTR_LAB_049fcac0;
  if (0 < (int)param_1[0x3a8]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x3a9] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x3aa];
      param_1[0x3aa] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x3a8]);
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  param_1[0x288] = (long)&PTR_LAB_049fd0c0;
  if (0 < (int)param_1[0x28f]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x290] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x291];
      param_1[0x291] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x28f]);
  }
  puVar1 = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x28f) = 0;
  param_1[0x282] = (long)puVar1;
  param_1[0x287] = 0;
  param_1[0x27c] = (long)puVar1;
  param_1[0x281] = 0;
  param_1[0x1e] = (long)&PTR_LAB_049fd240;
  if (0 < (int)param_1[0x25]) {
    lVar7 = 0;
    do {
      plVar6 = *(long **)(param_1[0x26] + lVar7 * 8);
      (**(code **)*plVar6)(plVar6);
      lVar7 = lVar7 + 1;
      *plVar6 = param_1[0x27];
      param_1[0x27] = (long)plVar6;
    } while (lVar7 < (int)param_1[0x25]);
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x1d] = 0;
  return;
}

