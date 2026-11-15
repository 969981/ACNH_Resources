
void FUN_022827e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x161] = (long)puVar1;
  param_1[0x7e] = (long)(PTR_DAT_04bc4568 + 0x10);
  puVar2 = PTR_DAT_04bc4788;
  param_1[0x158] = (long)puVar1;
  param_1[0x95] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bbc5d8;
  param_1[0x14a] = (long)puVar1;
  param_1[0x13c] = (long)puVar1;
  param_1[0x12e] = (long)puVar1;
  param_1[0x120] = (long)puVar1;
  param_1[0x112] = (long)puVar1;
  param_1[0x104] = (long)puVar1;
  param_1[0xf6] = (long)puVar1;
  param_1[0xe8] = (long)puVar1;
  param_1[0xda] = (long)puVar1;
  param_1[0xcc] = (long)puVar1;
  param_1[0xbe] = (long)puVar1;
  param_1[0xb0] = (long)puVar1;
  param_1[0xa2] = (long)puVar1;
  param_1[0x90] = (long)puVar1;
  param_1[0x8b] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x153] = (long)puVar2;
  param_1[0x145] = (long)puVar2;
  param_1[0x137] = (long)puVar2;
  param_1[0x129] = (long)puVar2;
  param_1[0x11b] = (long)puVar2;
  param_1[0x10d] = (long)puVar2;
  param_1[0xff] = (long)puVar2;
  param_1[0xf1] = (long)puVar2;
  param_1[0xe3] = (long)puVar2;
  param_1[0xd5] = (long)puVar2;
  param_1[199] = (long)puVar2;
  param_1[0xb9] = (long)puVar2;
  param_1[0xab] = (long)puVar2;
  param_1[0x9d] = (long)puVar2;
  param_1[0x98] = (long)puVar2;
  param_1[0x86] = (long)puVar2;
  puVar2 = PTR_DAT_04bb2e88 + 0x10;
  param_1[0x81] = (long)puVar1;
  *param_1 = (long)puVar2;
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar5 = (long)*(int *)((long)param_1 + 0xbc);
    plVar4 = (long *)(param_1[0x16] - lVar5);
    lVar6 = (long)plVar4 + lVar5;
    do {
      plVar3 = (long *)((long)plVar4 + (long)*(int *)((long)param_1 + 0xbc));
      lVar6 = *(long *)(lVar6 + 8);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar4 + 0x28))();
      plVar4 = (long *)(lVar6 - lVar5);
    } while (plVar4 != (long *)((long)(param_1 + 0x15) - lVar5));
  }
  return;
}

