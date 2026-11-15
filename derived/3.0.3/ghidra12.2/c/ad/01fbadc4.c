
void FUN_01fbadc4(long *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_1e8 [4];
  long *local_1d8;
  undefined4 local_184;
  undefined2 local_180;
  undefined1 local_17e;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_f8;
  undefined4 local_44;
  
  uVar3 = (**(code **)(*param_1 + 0x5c0))();
  if ((uVar3 & 1) == 0) {
    if ((*(int *)(param_1[1] + 0x750) == 3) || (uVar3 = FUN_01fbaf50(param_1), (uVar3 & 1) == 0)) {
      *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffffbf;
      FUN_01e63f1c(local_1e8);
      local_f8 = 1;
      local_1e8[0] = 10;
      local_44 = 0;
      local_184 = 1;
      iVar2 = (**(code **)(*param_1 + 0x610))(param_1);
      local_1d8 = param_1 + 0x243b;
      puVar1 = (undefined4 *)((long)param_1 + 0xae84);
      if (iVar2 != 1) {
        puVar1 = (undefined4 *)PTR_DAT_04bb37e0;
      }
      local_10c = *puVar1;
      uStack_108 = puVar1[1];
      param_1[0x243c] = (long)param_1;
      param_1[0x243d] = (long)&LAB_01fbf3a4;
      param_1[0x243e] = 0;
      if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(param_1 + 0x1619,local_1e8);
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0xaf8c) = 0;
    FUN_01e63f1c(local_1e8);
    local_180 = 0x101;
    local_17e = 1;
    local_1e8[0] = 1;
    local_184 = 1;
    if (*(int *)(param_1[1] + 0x750) == 3) {
      FUN_0212eca8(param_1 + 0x154a,1,0);
      *(ushort *)(param_1 + 0x15a5) = *(ushort *)(param_1 + 0x15a5) & 0xffdf;
    }
    FUN_01fb1020(param_1,local_1e8,0);
  }
  return;
}

