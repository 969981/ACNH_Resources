
undefined2 * FUN_0218a840(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined **local_78;
  undefined1 *local_70;
  int local_68;
  undefined1 local_64 [15];
  undefined1 local_55;
  
  local_68 = 0x10;
  local_55 = 0;
  local_78 = &PTR_LAB_04904ac8;
  local_70 = local_64;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar8 = (undefined1 *)param_2[1];
  if (local_64 != puVar8) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0218a900;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0218a900;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0218a900;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0218a900:
    iVar2 = (int)lVar5;
    if (local_68 <= (int)lVar5) {
      iVar2 = local_68 + -1;
    }
    memcpy(local_64,puVar8,(long)iVar2);
    local_64[iVar2] = 0;
  }
  uVar9 = 0;
  param_1 = param_1 + 8;
  local_78 = (undefined **)(PTR_DAT_04bb2ab0 + 0x10);
  iVar2 = 3;
  if (local_68 < 4) {
    iVar2 = local_68 + -1;
  }
  local_70[iVar2] = 0;
  do {
    plVar7 = (long *)(param_1 + uVar9 * 0x38);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar8 = (undefined1 *)plVar7[1];
    (*(code *)local_78[3])(&local_78);
    if (puVar8 == local_70) {
LAB_0218aa30:
      if ((int)(uint)uVar9 < 0) {
        return &DAT_053fbdb0;
      }
      lVar5 = param_1 + (uVar9 & 0xffffffff) * 0x38;
      if (0x7f < (uint)uVar9) {
        lVar5 = param_1;
      }
      return (undefined2 *)(lVar5 + 0x30);
    }
    uVar6 = 0;
    bVar4 = true;
    do {
      lVar5 = plVar7[1] + 2 + uVar6;
      cVar3 = *(char *)(lVar5 + -2);
      if (cVar3 != local_70[uVar6]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_0218aa30;
        break;
      }
      cVar3 = *(char *)(lVar5 + -1);
      if (cVar3 != local_70[uVar6 + 1]) break;
      if (cVar3 == '\0') goto LAB_0218aa30;
      cVar3 = *(char *)(plVar7[1] + 2 + uVar6);
      if (cVar3 != local_70[uVar6 + 2]) break;
      if (cVar3 == '\0') goto LAB_0218aa30;
      bVar4 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x80) {
      return &DAT_053fbdb0;
    }
  } while( true );
}

