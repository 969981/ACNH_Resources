
uint FUN_017b4170(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined *local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  char local_d4 [127];
  undefined1 local_55;
  undefined *local_50;
  undefined8 local_48;
  int local_28;
  int iStack_24;
  
  local_d4[0] = '\0';
  local_d8 = 0x80;
  lVar8 = 0;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_48 = 0;
  local_55 = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if (local_d4[lVar8] == '\0') goto LAB_017b4210;
    if (local_d4[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_017b4210;
    }
    if (local_d4[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_017b4210;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_017b4210:
  uVar7 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar3 = 0x10;
  if (0x6f < uVar7) {
    uVar3 = 0x7f - uVar7;
  }
  pcStack_e0 = local_d4;
  if (0 < (int)uVar3) {
    memcpy(local_d4 + uVar7,"IdrMuseumInsect_",(ulong)uVar3);
    local_d4[(ulong)uVar3 + (ulong)uVar7] = '\0';
  }
  FUN_038d13f0(&local_e8,&DAT_040c7be9,param_2);
  uVar7 = FUN_00979580(&local_e8,&local_50,&iStack_24,&local_28);
  if ((uVar7 & 1) != 0) {
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_48;
    iVar2 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_48._4_4_;
    iVar5 = iVar1 + iStack_24 + -1;
    iVar6 = iVar2 + local_28 + -1;
    iVar4 = iVar1;
    if (iVar5 <= iVar1) {
      iVar4 = iVar5;
    }
    if (iVar1 <= iVar5) {
      iVar1 = iVar5;
    }
    iVar5 = iVar2;
    if (iVar6 <= iVar2) {
      iVar5 = iVar6;
    }
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    *(int *)(param_1 + 0x14) = iVar5;
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_017b3420(param_1);
  }
  return uVar7 & 1;
}

