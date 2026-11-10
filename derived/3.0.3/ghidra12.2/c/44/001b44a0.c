
void FUN_001b44a0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  FUN_0019a2a8(param_1,2,&local_70);
  puVar2 = PTR_DAT_04bcbc48;
  *param_1 = (long)(PTR_DAT_04bcc490 + 0x10);
  param_1[0x15] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  puVar2 = PTR_DAT_04bcc068;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x15] = (long)(puVar2 + 0x10);
  param_1[0x19] = (long)(param_1 + 0x19);
  param_1[0x1a] = (long)(param_1 + 0x19);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x80010001);
  FUN_0018aa70(param_1 + 0x20,&local_70);
  plVar1 = param_1 + 0x28;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = (long)plVar1;
  param_1[0x29] = (long)plVar1;
  param_1[0x2a] = 0;
  for (lVar5 = *(long *)(param_3 + 8); lVar5 != param_3; lVar5 = *(long *)(lVar5 + 8)) {
    plVar3 = (long *)FUN_00187df4(0x80);
    *plVar3 = 0;
    FUN_001b8358(plVar3 + 2,lVar5 + 0x10);
    plVar3[1] = (long)plVar1;
    lVar4 = param_1[0x28];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x28] = (long)plVar3;
    param_1[0x2a] = param_1[0x2a] + 1;
  }
  FUN_001b8358(param_1 + 0x2b,param_4);
  FUN_00194070(param_2);
  puStack_68 = PTR_FUN_04bcc498;
  local_60 = 0;
  puStack_58 = &DAT_0407ebb1;
  local_70 = PTR_DAT_04bcc0c0 + 0x10;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  FUN_0019a704(param_1,&local_70);
  return;
}

