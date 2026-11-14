
uint FUN_017b3ee8(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  char local_bc [6];
  char acStack_b6 [2];
  char acStack_b4 [6];
  undefined1 local_ae;
  undefined1 local_3d;
  int local_38;
  int iStack_34;
  undefined *local_30;
  undefined8 local_28;
  
  local_3d = 0;
  local_c0 = 0x80;
  pcStack_c8 = local_bc;
  local_ae = 0;
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  local_d0 = &DAT_048fc708;
  local_bc = (char  [6])s_IdrMuseumFish__040ca392._0_6_;
  acStack_b6 = (char  [2])s_IdrMuseumFish__040ca392._6_2_;
  acStack_b4 = (char  [6])s_IdrMuseumFish__040ca392._8_6_;
  FUN_038d13f0(&local_d0,&DAT_040c7be9,param_2);
  uVar6 = FUN_00979580(&local_d0,&local_30,&iStack_34,&local_38);
  if ((uVar6 & 1) != 0) {
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_28;
    iVar2 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_28._4_4_;
    iVar4 = iVar1 + iStack_34 + -1;
    iVar5 = iVar2 + local_38 + -1;
    iVar3 = iVar1;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar4 = iVar2;
    if (iVar5 <= iVar2) {
      iVar4 = iVar5;
    }
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_017b3420(param_1);
  }
  return uVar6 & 1;
}

