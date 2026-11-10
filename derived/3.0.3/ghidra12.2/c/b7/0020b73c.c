
void FUN_0020b73c(long *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 char *param_6,undefined8 param_7,undefined2 param_8,undefined8 *param_9,
                 long param_10,long param_11,long param_12,undefined4 param_13,long param_14,
                 long param_15,long param_16)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  size_t sVar7;
  int *piVar8;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  
  FUN_0019a2a8(param_1,2,&local_80);
  puVar3 = PTR_DAT_04bccc48;
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x15] = (long)puVar1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x18] = (long)(param_1 + 0x16);
  param_1[0x19] = 0x10;
  FUN_0018b070(param_1 + 0x15,*(undefined8 *)(param_5 + 0x18),0xffffffffffffffff);
  param_1[0x1b] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = (long)(param_1 + 0x1c);
  param_1[0x1f] = 0x10;
  FUN_0018b070(param_1 + 0x1b,param_7,0xffffffffffffffff);
  *(undefined2 *)(param_1 + 0x20) = param_8;
  param_1[0x21] = (long)puVar1;
  puVar2 = &DAT_0407ebb1;
  if (param_9 != (undefined8 *)0x0) {
    puVar2 = param_9;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = (long)(param_1 + 0x22);
  param_1[0x25] = 0x10;
  FUN_0018b070(param_1 + 0x21,puVar2,0xffffffffffffffff);
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  param_1[0x26] = param_10;
  param_1[0x27] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  puVar3 = PTR_DAT_04bcc068;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x31] = 0;
  param_1[0x2b] = (long)(param_1 + 0x2b);
  param_1[0x2c] = (long)(param_1 + 0x2b);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x27] = (long)(puVar3 + 0x10);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x80010001);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_0018aa70(param_1 + 0x32,&local_80);
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_001fb850(param_1 + 0x39,0);
  FUN_0018aa4c(param_1 + 0x51);
  FUN_0018aa4c(param_1 + 0x54);
  param_1[0x57] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  puVar1 = PTR_DAT_04bcc018;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  param_1[0x57] = (long)(puVar1 + 0x10);
  uVar4 = FUN_00196a18();
  FUN_00196a24(param_1 + 0x57,uVar4,0);
  param_1[0x5e] = param_3;
  FUN_001b8014(param_1 + 0x5f);
  puVar1 = PTR_DAT_04bccaa0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  param_1[0x6d] = (long)(puVar1 + 0x10);
  FUN_001b8014(param_1 + 0x6f);
  param_1[0x7f] = 0;
  param_1[0x7d] = (long)(param_1 + 0x7d);
  param_1[0x7e] = (long)(param_1 + 0x7d);
  FUN_001b8014(param_1 + 0x80);
  FUN_00186524(param_1 + 0x8e);
  puVar1 = PTR_DAT_04bccaa8;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x8f] = param_4;
  param_1[0x6d] = (long)(puVar1 + 0x10);
  param_1[0x90] = param_11;
  param_1[0x91] = param_12;
  FUN_0018d4c4(param_1 + 0x95,param_13);
  *(undefined2 *)(param_1 + 0x96) = 0;
  lVar5 = FUN_00185a6c(0x48);
  if (lVar5 != 0) {
    FUN_002047a4(lVar5);
  }
  param_1[0x97] = (long)(PTR_DAT_04bccc50 + 0x10);
  plVar6 = (long *)FUN_00185a6c(0x20);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((long)plVar6 + 0xc) = 1;
    puVar1 = PTR_DAT_04bccc58;
    plVar6[2] = lVar5;
    *plVar6 = (long)(puVar1 + 0x10);
  }
  param_1[0x98] = (long)plVar6;
  FUN_001a6af8(param_1 + 0x99);
  param_1[0xa0] = 0;
  param_1[0xa1] = param_14;
  param_1[0xa2] = param_15;
  param_1[0xa3] = param_16;
  param_1[0x1a] = 0;
  if (param_6 != (char *)0x0) {
    sVar7 = strlen(param_6);
    piVar8 = (int *)FUN_00187df4(sVar7 + 5);
    *piVar8 = (int)sVar7 + 1;
    param_1[0x1a] = (long)(piVar8 + 1);
    sVar7 = strlen(param_6);
    if (sVar7 == 0) {
      *(char *)param_1[0x1a] = '\0';
    }
    else {
      strcpy((char *)param_1[0x1a],param_6);
    }
  }
  puStack_78 = PTR_LAB_04bccc60;
  local_80 = PTR_DAT_04bcc0c0 + 0x10;
  *(undefined8 *)param_1[0x26] = 0;
  local_70 = 0;
  puStack_68 = &DAT_0407ebb1;
  FUN_0019a704(param_1,&local_80);
  return;
}

