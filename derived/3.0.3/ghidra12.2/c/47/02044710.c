
void FUN_02044710(long *param_1,undefined4 param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong extraout_x10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined1 *__src;
  ulong local_740;
  float local_738;
  undefined4 uStack_734;
  float local_730;
  float fStack_72c;
  undefined4 local_728;
  undefined8 local_724;
  undefined8 local_71c;
  undefined1 *local_710;
  undefined1 *puStack_708;
  int local_700;
  undefined1 local_6fc [127];
  undefined1 local_67d;
  undefined4 local_678;
  undefined2 local_674;
  undefined8 local_670;
  undefined1 auStack_664 [4];
  float afStack_660 [384];
  
  uVar9 = FUN_0291e130(afStack_660,auStack_664,param_2);
  if ((uVar9 & 1) != 0) {
    if ((int)param_3 < 1) {
      lVar10 = 0;
    }
    else {
      uVar2 = param_3 & 3;
      if (param_3 < 4) {
        uVar9 = 0;
        uVar1 = extraout_x10;
      }
      else {
        uVar9 = 0;
        param_3 = param_3 & 0xfffffffc;
        do {
          param_3 = param_3 - 4;
          uVar1 = (ulong)((int)uVar9 + 3) + 1;
          uVar9 = uVar1 & 0xffffffff;
        } while (param_3 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar1 = uVar9 + 1;
        uVar9 = uVar1 & 0xffffffff;
      }
      lVar10 = uVar1 << 0x20;
    }
    lVar5 = (long)(int)((ulong)lVar10 >> 0x20);
    iVar6 = (int)((float)(int)afStack_660[lVar5 * 3] / 5.0) - (uint)(afStack_660[lVar5 * 3] < 0.0);
    lVar10 = (long)(int)((ulong)(lVar10 + 0x100000000) >> 0x20);
    iVar7 = (int)((float)(int)afStack_660[lVar5 * 3 + 2] / 5.0) -
            (uint)(afStack_660[lVar5 * 3 + 2] < 0.0);
    iVar12 = -2;
    if (0.0 <= afStack_660[lVar10 * 3]) {
      iVar12 = -1;
    }
    iVar13 = -2;
    if (0.0 <= afStack_660[lVar10 * 3 + 2]) {
      iVar13 = -1;
    }
    iVar12 = iVar12 + (int)((float)(int)afStack_660[lVar10 * 3] / 5.0);
    iVar3 = iVar6;
    if (iVar12 <= iVar6) {
      iVar3 = iVar12;
    }
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    iVar13 = iVar13 + (int)((float)(int)afStack_660[lVar10 * 3 + 2] / 5.0);
    iVar12 = iVar7;
    if (iVar13 <= iVar7) {
      iVar12 = iVar13;
    }
    if (iVar7 <= iVar13) {
      iVar7 = iVar13;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    uStack_734 = 0x41600000;
    if ((char *)param_1[1] != "Mannequin0") {
      uVar9 = 0;
      bVar8 = true;
      do {
        cVar4 = ((char *)param_1[1])[uVar9];
        if (cVar4 != "Mannequin0"[uVar9]) break;
        if (cVar4 == '\0') {
          if (bVar8) goto LAB_020449ac;
          break;
        }
        bVar8 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar11 = (char *)param_1[1];
      if (pcVar11 != "Mannequin1") {
        if (*pcVar11 == 'M') {
          lVar10 = 0;
          do {
            if ((lVar10 == 0x80000) ||
               (lVar5 = lVar10 + 1, pcVar11[lVar5] != "Mannequin1"[lVar10 + 1])) goto LAB_020449a8;
            lVar10 = lVar10 + 1;
          } while (pcVar11[lVar5] != '\0');
        }
        else {
LAB_020449a8:
          uStack_734 = 0;
        }
      }
    }
LAB_020449ac:
    local_728 = 0;
    local_740 = 0x9300000000;
    local_67d = 0;
    local_700 = 0x80;
    local_6fc[0] = 0;
    local_670 = 0;
    local_674 = 0;
    local_724 = 0;
    local_71c = 0;
    local_710 = &DAT_048fc708;
    local_678 = 7;
    fStack_72c = (float)((iVar6 - iVar3) + 1) * 5.0;
    local_738 = ((float)iVar3 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
    local_730 = ((float)iVar12 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
    puStack_708 = local_6fc;
    (**(code **)(*param_1 + 0x18))(param_1);
    __src = (undefined1 *)param_1[1];
    if (local_6fc != __src) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar10 = 0;
      do {
        if (*(char *)(param_1[1] + lVar10) == '\0') goto LAB_02044a80;
        lVar5 = param_1[1] + lVar10;
        if (*(char *)(lVar5 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02044a80;
        }
        if (*(char *)(lVar5 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02044a80;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02044a80:
      iVar12 = (int)lVar10;
      if (local_700 <= (int)lVar10) {
        iVar12 = local_700 + -1;
      }
      memcpy(local_6fc,__src,(long)iVar12);
      local_6fc[iVar12] = 0;
    }
    FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_740,local_740 & 0xffffffff,0);
  }
  return;
}

