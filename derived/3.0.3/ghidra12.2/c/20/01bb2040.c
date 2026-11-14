
void FUN_01bb2040(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 local_11c;
  undefined *local_118;
  undefined2 *puStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined2 local_38 [4];
  
  if (param_2 - 1U < 2) {
    local_104 = 0;
    local_100 = 0xffffffff;
    uStack_f8 = 0xffffffff00000000;
    local_108 = 1;
    puStack_110 = local_38;
    local_f0 = 0xffffffff;
    puStack_e0 = local_d4;
    local_d8 = 0x40;
    local_95 = 0;
    local_e8 = PTR_DAT_04bb2bc0 + 0x10;
    local_d4[0] = 0;
    local_80 = 0x40;
    local_3d = 0;
    local_7c[0] = 0;
    local_38[0] = 0;
    puStack_88 = local_7c;
    local_118 = &DAT_04a3acd0;
    local_90 = local_e8;
    piVar2 = (int *)FUN_006f5eb0(&local_118);
    *piVar2 = param_2;
    if (((DAT_0533a3c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0533a3c0), iVar1 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar3 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x32) goto LAB_01bb212c;
        uVar3 = uVar3 + 1;
      } while (DAT_0533a3b0 != uVar3);
    }
    uVar3 = 0;
LAB_01bb212c:
    local_11c = (undefined4)uVar3;
    FUN_01bae480(param_1,&local_118,0,&local_11c,0x1e);
  }
  return;
}

