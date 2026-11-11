
long * FUN_00423080(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [128];
  
  local_d0 = local_c0;
  local_c0[0] = 0;
  local_c8 = -0x7fffff7fffffffff;
  local_f0 = *param_3;
  uStack_e8 = param_3[1];
  local_e0 = param_3[2];
  uStack_d8 = param_3[3];
  FUN_00422e00(&local_d0,param_2,&local_f0);
  puVar3 = local_d0;
  if (local_d0 != (undefined1 *)0x0) {
    iVar5 = (int)local_c8 + -1;
    if (iVar5 < 0) {
      iVar5 = FUN_0043a2d0(local_d0);
    }
    iVar7 = (int)param_1[1];
    lVar8 = (long)iVar7;
    iVar1 = (int)(lVar8 + -1) + iVar5;
    iVar2 = iVar7 + iVar5;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
      lVar6 = FUN_00426720(PTR_DAT_048607c0,iVar2,1,*param_1);
      iVar7 = (int)param_1[1];
      *param_1 = lVar6;
    }
    if ((iVar7 <= iVar1) || (iVar2 < iVar7)) {
      *(int *)(param_1 + 1) = iVar2;
    }
    *(undefined1 *)(*param_1 + (long)iVar1) = 0;
    FUN_0043a4c0(*param_1 + lVar8 + -1,puVar3,iVar5);
  }
  lVar8 = local_c8;
  uVar4 = local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_d0 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_d0,1,uVar4 & 0x3fffffff);
  }
  return param_1;
}

