
/* WARNING: Removing unreachable block (ram,0x03d5d900) */
/* WARNING: Removing unreachable block (ram,0x03d5d920) */

void FUN_03d5d740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x208);
  if (lVar6 == 0) {
    lVar6 = FUN_03c688b0(param_2,param_4);
    *(long *)(param_1 + 0x208) = lVar6;
    lVar5 = *(long *)(param_1 + 0x210);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x210);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_03c688b0(param_2,param_5);
    lVar6 = *(long *)(param_1 + 0x208);
    *(long *)(param_1 + 0x210) = lVar5;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar4 = malloc(0x14d0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x14d0,8);
    }
  }
  puVar1 = PTR_DAT_04bd4520;
  plVar4[5] = 0;
  plVar4[6] = 0;
  puVar2 = PTR_DAT_04bd4538;
  plVar4[0xb] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  plVar4[7] = 0;
  plVar4[8] = (long)(puVar2 + 0x10);
  plVar4[4] = (long)(puVar2 + 0x10);
  memset(plVar4 + 0xc,0,0x1400);
  FUN_03d4a724(plVar4 + 0xc);
  plVar4[0x295] = 0;
  plVar4[0x294] = 0;
  plVar4[0x296] = 1;
  *(undefined1 *)(plVar4 + 0x297) = 0;
  plVar4[0x28c] = 0;
  plVar4[0x28d] = 0;
  plVar4[0x28e] = 0;
  plVar4[0x28f] = 0;
  plVar4[0x290] = 0;
  plVar4[0x291] = 0;
  plVar4[0x292] = 0;
  plVar4[0x293] = 0;
  puVar1 = PTR_DAT_04bd4528 + 0x10;
  plVar4[0x298] = lVar6;
  *plVar4 = (long)puVar1;
  FUN_03d49f5c(plVar4);
  puVar1 = PTR_DAT_04bd4530;
  plVar4[0x299] = lVar5;
  *plVar4 = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x218) = plVar4;
  plVar4[6] = (long)FUN_03d5d93c;
  plVar4[7] = 0;
  plVar4[4] = (long)&PTR_LAB_04b8fc38;
  plVar4[5] = param_1;
  plVar4[8] = (long)&PTR_LAB_04b8fc38;
  plVar4[9] = param_1;
  plVar4[10] = (long)FUN_03d5d93c;
  plVar4[0xb] = 0;
  FUN_03d5d280(param_1,4);
  return;
}

