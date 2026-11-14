
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0152352c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ushort *puVar13;
  undefined4 uVar14;
  undefined1 auStack_82 [2];
  undefined1 auStack_80 [2];
  undefined1 auStack_7e [2];
  byte local_7c [4];
  uint local_78;
  int local_74;
  undefined1 auStack_6e [2];
  ushort local_6c [2];
  ushort local_68;
  undefined1 auStack_66 [2];
  ushort local_64 [2];
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_1 + 0x10)) {
    return 2;
  }
  FUN_017f3b7c(&local_68);
  puVar13 = (ushort *)PTR_DAT_04bb3170;
  puVar1 = (undefined *)(DAT_05292338 + 0xe9c);
  if (DAT_05292338 == 0) {
    iVar10 = -1;
    puVar1 = PTR_DAT_04bb3170;
  }
  else {
    iVar10 = *(int *)(DAT_05292338 + 0xf90);
  }
  FUN_007ef010(local_6c,puVar1);
  lVar12 = DAT_05292338;
  puVar1 = PTR_DAT_04bb37e0;
  if (DAT_05292338 == 0) {
    bVar7 = false;
    bVar6 = false;
    uVar14 = 2;
    iVar11 = -1;
  }
  else {
    bVar7 = *(char *)(DAT_05292338 + 0xe9e) != '\0';
    iVar11 = *(int *)(DAT_05292338 + 0xf9c);
    uVar14 = *(undefined4 *)(DAT_05292338 + 0xea0);
    bVar6 = *(char *)(DAT_05292338 + 0xedc) < '\0';
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if (DAT_05292338 != 0) {
      FUN_017f2e50(DAT_05292338 + 0xda0,param_1,0,1,1);
    }
    break;
  case 1:
    if (DAT_05292338 != 0) {
      FUN_017f86e0(DAT_05292338 + 0xda0,param_1 + 0x50,0,1,1);
LAB_015236b8:
      lVar12 = DAT_05292338;
      if ((DAT_05292338 != 0) && (*(char *)(DAT_05292338 + 0xee4) != '\0')) {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined1 *)(DAT_05292338 + 0xe9e) = 1;
        *(undefined4 *)(lVar12 + 0xea0) = uVar2;
        goto LAB_01523714;
      }
    }
    break;
  case 2:
    FUN_007ef010(auStack_6e,param_1 + 0x60);
    lVar12 = DAT_05292338;
    if (DAT_05292338 != 0) {
      cVar3 = *(char *)(param_1 + 0x68);
      FUN_007ef010(&local_74,auStack_6e);
      puVar13 = &DAT_04cb6038;
      FUN_017ba3cc(lVar12,&local_74,cVar3 != '\0',1);
      goto LAB_015236b8;
    }
    break;
  case 3:
    if (DAT_05292338 != 0) {
      FUN_017ff874(DAT_05292338 + 0xda0,*(undefined4 *)(param_1 + 100),
                   *(undefined1 *)(param_1 + 0x69),1);
      goto LAB_015236b8;
    }
    break;
  case 4:
    if ((DAT_05292338 != 0) && (*(char *)(DAT_05292338 + 0xee4) != '\0')) {
      *(undefined1 *)(DAT_05292338 + 0xe9e) = 0;
      *(undefined4 *)(lVar12 + 0xf9c) = 0xffffffff;
      uVar2 = *(undefined4 *)puVar1;
      *(undefined4 *)(lVar12 + 0xe98) = *(undefined4 *)(puVar1 + 4);
      uVar4 = *puVar13;
      *(undefined4 *)(lVar12 + 0xe94) = uVar2;
      *(undefined2 *)(lVar12 + 0xe9c) = uVar4;
LAB_01523714:
      lVar12 = lVar12 + 0xda0;
      FUN_017ef108(lVar12,0,0);
      FUN_017eff3c(lVar12,0,0);
      FUN_017f0b3c(lVar12);
    }
    break;
  default:
    goto switchD_01523608_default;
  }
  local_7c[0] = *(byte *)(param_1 + 0x14);
  local_74 = 0;
  if (7 < local_7c[0]) {
    local_7c[0] = 0xff;
  }
  local_78 = FUN_02582fe0(local_7c);
  uVar8 = FUN_01523b50(*(undefined4 *)(param_1 + 0x10),&local_78,&local_74,
                       *(char *)(param_1 + 0x20) == '\0',1,*(undefined4 *)(param_1 + 0x6c),
                       param_1 + 0x28);
  lVar12 = DAT_05292338;
  puVar1 = PTR_DAT_04bb37e0;
  if ((uVar8 & 1) == 0) {
    if (3 < *(int *)(param_1 + 0x48) - 1U) {
      if (*(int *)(param_1 + 0x48) != 0) {
        return 2;
      }
      if (local_68 != *puVar13) {
        FUN_007ef010(auStack_7e,&local_68);
        FUN_0180cdb0(auStack_7e,1);
        return 2;
      }
      if (iVar10 == -1) {
        if (DAT_05292338 == 0) {
          return 2;
        }
        FUN_017f2e50(DAT_05292338 + 0xda0,param_1 + 8,1,1,1);
        return 2;
      }
      if (DAT_05292338 == 0) {
        return 2;
      }
      FUN_017ff790(DAT_05292338 + 0xda0,iVar10,1);
      return 2;
    }
    if (bVar7) {
      if (local_6c[0] == *puVar13) {
        if (iVar11 == -1) {
          if (DAT_05292338 != 0) {
            FUN_017f86e0(DAT_05292338 + 0xda0,param_1 + 0x58,1,1,1);
          }
          FUN_0180ce70(uVar14,1);
          return 2;
        }
        if (DAT_05292338 == 0) {
          return 2;
        }
        FUN_017ff874(DAT_05292338 + 0xda0,iVar11,bVar6,0);
      }
      else {
        FUN_007ef010(auStack_80,local_6c);
        lVar12 = DAT_05292338;
        if (DAT_05292338 == 0) {
          return 2;
        }
        FUN_007ef010(auStack_66,auStack_80);
        FUN_007ef010(local_64,auStack_66);
        if (*(char *)(lVar12 + 0xee4) != '\0') {
          bVar9 = 0x80;
          if (bVar6 == false) {
            bVar9 = 0;
          }
          uVar5 = *puVar13;
          *(ushort *)(lVar12 + 0xe9c) = local_64[0];
          *(byte *)(lVar12 + 0xedc) = bVar9 | *(byte *)(lVar12 + 0xedc) & 0x7f;
          if (local_64[0] != uVar5) {
            *(undefined4 *)(lVar12 + 0xf9c) = 0xffffffff;
            uVar2 = DAT_0558600c;
            *(undefined4 *)(lVar12 + 0xe94) = _DAT_05586008;
            *(undefined4 *)(lVar12 + 0xe98) = uVar2;
          }
        }
      }
      lVar12 = DAT_05292338;
      if (DAT_05292338 == 0) {
        return 2;
      }
      if (*(char *)(DAT_05292338 + 0xee4) == '\0') {
        return 2;
      }
      *(undefined4 *)(DAT_05292338 + 0xea0) = uVar14;
      *(undefined1 *)(lVar12 + 0xe9e) = 1;
    }
    else {
      if (DAT_05292338 == 0) {
        return 2;
      }
      if (*(char *)(DAT_05292338 + 0xee4) == '\0') {
        return 2;
      }
      *(undefined1 *)(DAT_05292338 + 0xe9e) = 0;
      *(undefined4 *)(lVar12 + 0xf9c) = 0xffffffff;
      uVar14 = *(undefined4 *)puVar1;
      *(undefined4 *)(lVar12 + 0xe98) = *(undefined4 *)(puVar1 + 4);
      uVar5 = *puVar13;
      *(undefined4 *)(lVar12 + 0xe94) = uVar14;
      *(ushort *)(lVar12 + 0xe9c) = uVar5;
    }
    lVar12 = lVar12 + 0xda0;
    FUN_017ef108(lVar12,0,0);
    FUN_017eff3c(lVar12,0,0);
    FUN_017f0b3c(lVar12);
switchD_01523608_default:
    return 2;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if (DAT_05292338 != 0) {
      FUN_017ee860(DAT_05292338 + 0xda0,param_1,1,1);
    }
    goto switchD_015237ac_default;
  case 1:
    if (DAT_05292338 == 0) goto switchD_015237ac_default;
    FUN_017eed1c(DAT_05292338 + 0xda0,param_1 + 0x50,0,1);
    break;
  case 2:
    FUN_007ef010(auStack_82,param_1 + 0x60);
    lVar12 = DAT_05292338;
    if (DAT_05292338 == 0) goto switchD_015237ac_default;
    cVar3 = *(char *)(param_1 + 0x68);
    FUN_007ef010(auStack_66,auStack_82);
    FUN_007ef010(local_64,auStack_66);
    if ((*(char *)(lVar12 + 0xee4) != '\0') &&
       (FUN_007ef010(&local_78,local_64), *(char *)(lVar12 + 0xee4) != '\0')) {
      *(undefined2 *)(lVar12 + 0xe9c) = (undefined2)local_78;
      *(byte *)(lVar12 + 0xedc) = *(byte *)(lVar12 + 0xedc) & 0x7f | (cVar3 != '\0') << 7;
      if ((local_78 & 0xffff) != (uint)*puVar13) {
        *(undefined4 *)(lVar12 + 0xf9c) = 0xffffffff;
        uVar14 = DAT_0558600c;
        *(undefined4 *)(lVar12 + 0xe94) = _DAT_05586008;
        *(undefined4 *)(lVar12 + 0xe98) = uVar14;
      }
    }
    break;
  case 3:
    if (DAT_05292338 == 0) goto switchD_015237ac_default;
    FUN_017ff874(DAT_05292338 + 0xda0,*(undefined4 *)(param_1 + 100),*(undefined1 *)(param_1 + 0x69)
                 ,0);
    break;
  case 4:
    if ((DAT_05292338 == 0) || (*(char *)(DAT_05292338 + 0xee4) == '\0'))
    goto switchD_015237ac_default;
    *(undefined1 *)(DAT_05292338 + 0xe9e) = 0;
    *(undefined4 *)(lVar12 + 0xf9c) = 0xffffffff;
    uVar14 = *(undefined4 *)puVar1;
    *(undefined4 *)(lVar12 + 0xe98) = *(undefined4 *)(puVar1 + 4);
    uVar5 = *puVar13;
    *(undefined4 *)(lVar12 + 0xe94) = uVar14;
    *(ushort *)(lVar12 + 0xe9c) = uVar5;
    goto LAB_015239bc;
  default:
    goto switchD_015237ac_default;
  }
  lVar12 = DAT_05292338;
  if ((DAT_05292338 != 0) && (*(char *)(DAT_05292338 + 0xee4) != '\0')) {
    uVar14 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined1 *)(DAT_05292338 + 0xe9e) = 1;
    *(undefined4 *)(lVar12 + 0xea0) = uVar14;
LAB_015239bc:
    lVar12 = lVar12 + 0xda0;
    FUN_017ef108(lVar12,0,0);
    FUN_017eff3c(lVar12,0,0);
    FUN_017f0b3c(lVar12);
  }
switchD_015237ac_default:
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    **(int **)(param_1 + 0x18) = local_74;
  }
  return local_74 != 0;
}

