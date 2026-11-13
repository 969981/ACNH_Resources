
void FUN_0126c550(undefined8 param_1,undefined8 *param_2,int param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined **local_68;
  uint *puStack_60;
  uint local_48;
  int local_44;
  
  local_48 = param_4;
  if (param_3 == 2) {
    lVar12 = 0;
    puStack_60 = &local_48;
    local_68 = &PTR_FUN_04989758;
    iVar10 = 6;
    uVar11 = 0x10;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    local_44 = 2;
    do {
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -6);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x14);
      if (0x47 < uVar11 - 6) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -5);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x16);
      if (0x47 < uVar11 - 5) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -4);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x18);
      if (0x47 < uVar11 - 4) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -3);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x1a);
      if (0x47 < uVar11 - 3) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -2);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x1c);
      if (0x47 < uVar11 - 2) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10 + -1);
      puVar4 = (undefined8 *)((long)param_2 + lVar12 + 0x1e);
      if (0x47 < uVar11 - 1) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      uVar7 = (*(code *)*local_68)(&local_68,iVar10);
      lVar1 = lVar12 + 0x20;
      lVar12 = lVar12 + 0x12;
      puVar4 = (undefined8 *)((long)param_2 + lVar1);
      if (0x47 < uVar11) {
        puVar4 = param_2;
      }
      *(undefined2 *)puVar4 = uVar7;
      iVar10 = iVar10 + 7;
      uVar11 = uVar11 + 9;
    } while (lVar12 != 0x6c);
    FUN_01266d80(param_2,9,8,0);
    return;
  }
  if (param_3 == 1) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    uVar8 = 6;
    uVar9 = 6;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    lVar12 = DAT_0515c720;
    bVar5 = DAT_0515c710;
    iVar10 = 0x10;
    if (DAT_0515c710 == 0) {
      iVar10 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x14) =
         *(undefined2 *)(DAT_0515c720 + (long)(int)(iVar10 * param_4) * 2);
    uVar11 = 4;
    if (DAT_0515c718 == '\0') {
      uVar11 = 0;
    }
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    uVar2 = (uint)(bVar5 & lVar1 != 0);
    if (uVar2 == 0) {
      lVar1 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)(lVar1 + (ulong)uVar2 * 2);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 4;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 6;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 8;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x26) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 10;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0xc;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x2a) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0xe;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x2c) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x10;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 7) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x12;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x3a) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x14;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x3c) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x16;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x3e) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x18;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x4a) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x1a;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x4c) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0x1c;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x4e) = *(undefined2 *)(lVar1 + lVar3);
    lVar12 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar12 = 0;
    }
    bVar6 = (bVar5 & lVar12 != 0) == 0;
    if (bVar6) {
      lVar12 = 0;
    }
    lVar1 = 0x1e;
    if (bVar6) {
      lVar1 = 0;
    }
    *(undefined2 *)(param_2 + 10) = *(undefined2 *)(lVar12 + lVar1);
  }
  else {
    if (param_3 != 0) {
      return;
    }
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    uVar8 = 5;
    uVar9 = 5;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    lVar12 = DAT_0515c708;
    bVar5 = DAT_0515c6f8;
    iVar10 = 9;
    if (DAT_0515c6f8 == 0) {
      iVar10 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x14) =
         *(undefined2 *)(DAT_0515c708 + (long)(int)(iVar10 * param_4) * 2);
    uVar11 = 4;
    if (DAT_0515c700 == '\0') {
      uVar11 = 0;
    }
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    uVar2 = (uint)(bVar5 & lVar1 != 0);
    if (uVar2 == 0) {
      lVar1 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)(lVar1 + (ulong)uVar2 * 2);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 4;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 6;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x26) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 8;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 10;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x2a) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0xc;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)(param_2 + 7) = *(undefined2 *)(lVar1 + lVar3);
    lVar1 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar1 = 0;
    }
    bVar6 = (bVar5 & lVar1 != 0) == 0;
    if (bVar6) {
      lVar1 = 0;
    }
    lVar3 = 0xe;
    if (bVar6) {
      lVar3 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x3a) = *(undefined2 *)(lVar1 + lVar3);
    lVar12 = lVar12 + (long)(int)(param_4 * iVar10) * 2;
    if ((bVar5 & param_4 < uVar11) == 0) {
      lVar12 = 0;
    }
    bVar6 = (bVar5 & lVar12 != 0) == 0;
    if (bVar6) {
      lVar12 = 0;
    }
    lVar1 = 0x10;
    if (bVar6) {
      lVar1 = 0;
    }
    *(undefined2 *)((long)param_2 + 0x3c) = *(undefined2 *)(lVar12 + lVar1);
  }
  local_44 = param_3;
  FUN_01266d80(param_2,uVar8,uVar9,0);
  return;
}

