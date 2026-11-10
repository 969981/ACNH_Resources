
void FUN_00205e88(long *param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
                 char *param_6,long param_7,long param_8,long param_9,long param_10,
                 undefined4 param_11,undefined4 param_12,byte param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  
  FUN_0019a2a8(param_1,2,&local_80);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *param_1 = (long)(PTR_DAT_04bccbe8 + 0x10);
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  param_1[0x15] = param_3;
  param_1[0x16] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x17) = 1;
  puVar2 = PTR_DAT_04bcc068;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x16] = (long)(puVar2 + 0x10);
  param_1[0x1a] = (long)(param_1 + 0x1a);
  param_1[0x1b] = (long)(param_1 + 0x1a);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x80010001);
  FUN_0018aa70(param_1 + 0x21,&local_80);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_0019c934(param_1 + 0x28);
  param_1[0x2d] = 0;
  param_1[0x2e] = param_7;
  param_1[0x2f] = param_9;
  param_1[0x30] = param_8;
  FUN_001fb850(param_1 + 0x31,0);
  param_1[0x49] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  puVar3 = PTR_DAT_04bcc018;
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  param_1[0x49] = (long)(puVar3 + 0x10);
  uVar8 = FUN_00196a18();
  FUN_00196a24(param_1 + 0x49,uVar8,0);
  param_1[0x50] = param_4;
  puVar4 = PTR_DAT_04bcc9b0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  puVar2 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x5a] = 0;
  puVar5 = PTR_DAT_04bccad0;
  param_1[0x57] = (long)(param_1 + 0x55);
  puVar6 = PTR_DAT_04bccad8;
  puVar2 = puVar2 + 0x10;
  param_1[0x59] = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_04bccac0;
  lVar12 = *(long *)puVar4;
  param_1[0x52] = (long)(puVar6 + 0x10);
  param_1[0x58] = 0x10;
  param_1[0x54] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = (long)puVar1;
  param_1[0x51] = lVar12;
  param_1[0x5d] = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 0x30c) = 0;
  param_1[0x60] = (long)(puVar3 + 0x10);
  uVar8 = FUN_00196a18();
  FUN_00196a24(param_1 + 0x60,uVar8,0);
  FUN_001b8014(param_1 + 0x67);
  FUN_00186524(param_1 + 0x75);
  param_1[0x76] = (long)puVar2;
  param_1[0x79] = (long)(param_1 + 0x77);
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x7a] = 0x10;
  param_1[0x7b] = (long)puVar2;
  param_1[0x7e] = (long)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  puVar1 = PTR_DAT_04bccac8 + 0x10;
  param_1[0x7f] = 0x10;
  param_1[0x5d] = (long)puVar1;
  sVar9 = strlen(param_6);
  piVar10 = (int *)FUN_00187df4(sVar9 + 5);
  *piVar10 = (int)sVar9 + 1;
  param_1[0x2d] = (long)(piVar10 + 1);
  strcpy((char *)(piVar10 + 1),param_6);
  uVar7 = FUN_001b9458();
  *(undefined4 *)((long)param_1 + 0x29c) = uVar7;
  FUN_00189504(param_1 + 0x54,param_5);
  if (param_10 == 0) {
    plVar11 = (long *)FUN_00185a6c(0x10);
    if (plVar11 != (long *)0x0) {
      *plVar11 = 0;
      plVar11[1] = 0;
      FUN_001f98c8(plVar11);
      puVar1 = PTR_DAT_04bcca70;
      *(undefined1 *)((long)plVar11 + 9) = 0;
      *plVar11 = (long)(puVar1 + 0x10);
    }
  }
  else {
    plVar11 = (long *)(**(code **)(**(long **)(param_10 + 8) + 0x10))();
  }
  if ((long *)param_1[0x5a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5a] + 8))();
  }
  param_1[0x5a] = (long)plVar11;
  puVar1 = PTR_DAT_04bcc0c0;
  *(undefined4 *)((long)param_1 + 0x2dc) = param_11;
  puStack_78 = PTR_FUN_04bccbf0;
  *(undefined4 *)(param_1 + 0x5c) = param_12;
  *(byte *)(param_1 + 0x5b) = param_13 & 1;
  local_70 = 0;
  puStack_68 = &DAT_0407ebb1;
  local_80 = puVar1 + 0x10;
  FUN_0019a704(param_1,&local_80);
  return;
}

