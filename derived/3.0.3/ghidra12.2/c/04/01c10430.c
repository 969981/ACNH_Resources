
void FUN_01c10430(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_DAT_04bb2718;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "STR_Itchy";
  local_50 = puVar1;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_50);
  lVar5 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar4 + 0x408),&local_50);
  if (lVar5 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 8);
  }
  uVar3 = param_2[3];
  pcStack_48 = "STR_Itchy";
  uVar2 = *param_2 ^ *param_2 << 0xb;
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  local_50 = puVar1;
  FUN_006f5290(param_1,&local_50,(ulong)uVar6 * (ulong)uVar2 >> 0x20);
  return;
}

