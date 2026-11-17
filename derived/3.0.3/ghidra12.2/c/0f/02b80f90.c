
void FUN_02b80f90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  param_1[0x18e] = (long)(PTR_DAT_04bc4608 + 0x10);
  puVar1 = PTR_DAT_04bc4788;
  param_1[0xab] = (long)(PTR_DAT_04bc4568 + 0x10);
  param_1[0xc2] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x185] = (long)puVar1;
  puVar2 = PTR_DAT_04bbc5d8;
  param_1[0x177] = (long)puVar1;
  param_1[0x169] = (long)puVar1;
  param_1[0x15b] = (long)puVar1;
  param_1[0x14d] = (long)puVar1;
  param_1[0x13f] = (long)puVar1;
  param_1[0x131] = (long)puVar1;
  param_1[0x123] = (long)puVar1;
  param_1[0x115] = (long)puVar1;
  param_1[0x107] = (long)puVar1;
  param_1[0xf9] = (long)puVar1;
  param_1[0xeb] = (long)puVar1;
  param_1[0xdd] = (long)puVar1;
  param_1[0xcf] = (long)puVar1;
  param_1[0xbd] = (long)puVar1;
  param_1[0xb8] = (long)puVar1;
  param_1[0xae] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x180] = (long)puVar2;
  param_1[0x172] = (long)puVar2;
  param_1[0x164] = (long)puVar2;
  param_1[0x156] = (long)puVar2;
  param_1[0x148] = (long)puVar2;
  param_1[0x13a] = (long)puVar2;
  param_1[300] = (long)puVar2;
  param_1[0x11e] = (long)puVar2;
  param_1[0x110] = (long)puVar2;
  param_1[0x102] = (long)puVar2;
  param_1[0xf4] = (long)puVar2;
  param_1[0xe6] = (long)puVar2;
  param_1[0xd8] = (long)puVar2;
  param_1[0xca] = (long)puVar2;
  param_1[0xc5] = (long)puVar2;
  param_1[0xb3] = (long)puVar2;
  puVar1 = PTR_DAT_04bc4a28 + 0x10;
  param_1[0x86] = (long)puVar1;
  puVar2 = PTR_DAT_04bc44c0 + 0x10;
  puVar3 = PTR_DAT_04bc4a30 + 0x10;
  param_1[0x7c] = (long)puVar1;
  param_1[0x72] = (long)puVar1;
  param_1[0x5d] = (long)puVar1;
  param_1[0x52] = (long)puVar1;
  param_1[0x87] = (long)puVar2;
  param_1[0x4f] = (long)puVar3;
  param_1[0x7d] = (long)puVar2;
  param_1[0x73] = (long)puVar2;
  param_1[0x5e] = (long)puVar2;
  puVar1 = PTR_DAT_04bb2e88 + 0x10;
  param_1[0x53] = (long)puVar2;
  *param_1 = (long)puVar1;
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar6 = (long)*(int *)((long)param_1 + 0xbc);
    plVar5 = (long *)(param_1[0x16] - lVar6);
    lVar7 = (long)plVar5 + lVar6;
    do {
      plVar4 = (long *)((long)plVar5 + (long)*(int *)((long)param_1 + 0xbc));
      lVar7 = *(long *)(lVar7 + 8);
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar5 + 0x28))();
      plVar5 = (long *)(lVar7 - lVar6);
    } while (plVar5 != (long *)((long)(param_1 + 0x15) - lVar6));
  }
  return;
}

