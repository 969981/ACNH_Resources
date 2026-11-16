
void FUN_027dd9a8(long param_1,uint *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_44;
  
  pcVar1 = (char *)(param_1 + 0x1e335d);
  local_70._0_4_ = 1;
  FUN_021dafb0(param_2,&local_70,0,0,1,1);
  FUN_026618f0(*param_2);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
  lVar2 = param_1 + (ulong)*param_2 * 0x13230;
  if (9 < *param_2) {
    lVar2 = param_1;
  }
  *(undefined1 *)(lVar2 + 0x1267a) = 2;
  FUN_026907e0(lVar2);
  puVar6 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "ForceMoveOut";
  FUN_02749650(lVar2 + 0x1267c,*param_2,&local_70,1,1);
  uVar3 = *param_2;
  if ((uVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
    FUN_0214ed5c(&DAT_053febf8 + (ulong)uVar3 * 0xba0,(ulong)uVar3,1);
    FUN_0219d7e0(&DAT_053fe348,*param_2,0,0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,(&DAT_053fedf4)[(ulong)uVar3 * 0x2e8]);
    if (((&DAT_053fedf4)[(ulong)uVar3 * 0x2e8] & 0xfffffffe) == 0xe) {
      FUN_021a7250(&DAT_053fe348);
    }
    if ((ulong)*(byte *)(param_1 + 0x1e3366) < 3) {
      bVar4 = *(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0x1e3366) + 0x1e3363);
      uVar9 = (uint)bVar4;
      if (9 < bVar4) {
        uVar9 = 0xffffffff;
      }
      if (*param_2 != uVar9) goto LAB_027ddb40;
    }
    else if (*param_2 != 0xffffffff) goto LAB_027ddb40;
    FUN_027ddea0(param_1,1);
    FUN_0214d570(&DAT_053febf8 + (ulong)uVar3 * 0xba0,*param_2);
  }
LAB_027ddb40:
  FUN_01e2ef20(*(long *)PTR_DAT_04bb3968 + 0xda0,param_2);
  cVar5 = *pcVar1;
  if (cVar5 != -1) {
    if ((*(char *)(param_1 + 0x1e3360) == '\0') && (*(char *)(param_1 + 0x1e3362) != cVar5)) {
      *pcVar1 = -1;
    }
    else if (*param_2 == (int)cVar5) {
      *(undefined1 *)(param_1 + 0x1e3360) = 0;
      *pcVar1 = -1;
      *(undefined1 *)(param_1 + 0x1e3362) = 0xff;
    }
  }
  FUN_0284f58c(param_1 + 0x1cb510,param_2);
  if (*param_2 != (int)cVar5) {
    FUN_02690450(lVar2);
  }
  FUN_026907e0(lVar2);
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x3c,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x62c,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x5f4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x5f4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0xc1c,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0xbe4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0xbe4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x120c,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x11d4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x11d4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x17fc,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x17c4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x17c4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x1dec,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x1db4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x1db4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x23dc,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x23a4);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x23a4);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
  local_70 = puVar6 + 0x10;
  iVar7 = FUN_02746e10(lVar2 + 0x29cc,&local_70);
  if (iVar7 != 0) {
    uVar8 = FUN_026692d0(lVar2 + 0x2994);
    if ((uVar8 & 1) != 0) {
      local_44 = FUN_026698a0(lVar2 + 0x2994);
      local_70 = puVar6 + 0x10;
      pcStack_68 = "EasterCannotGetNnpcRecipeFlag";
      FUN_0274d104(&local_44,&local_70,0);
    }
  }
  local_70 = puVar6 + 0x10;
  pcStack_68 = "WantIngredients";
  FUN_02749650(lVar2 + 0x1267c,*param_2,&local_70,0,1);
  return;
}

