
void FUN_00471d50(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  
  iVar2 = (int)param_2[1];
  *param_2 = param_1;
  if (0 < iVar2) {
    lVar4 = 0;
    puVar6 = param_2 + 2;
    do {
      if (*puVar6 == 0x200) {
        iVar3 = (int)lVar4;
        if (-1 < iVar3) goto LAB_00471da0;
        break;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 3;
    } while (lVar4 < iVar2);
  }
  *(int *)(param_2 + 1) = iVar2 + 1;
  iVar3 = iVar2;
LAB_00471da0:
  param_2[(long)iVar3 * 3 + 2] = 0x200;
  param_2[(long)iVar3 * 3 + 3] = 0x80;
  param_2[(long)iVar3 * 3 + 4] = param_1;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    puVar6 = param_2 + 2;
    do {
      if (*puVar6 == 0x100) {
        iVar3 = (int)lVar4;
        if (-1 < iVar3) goto LAB_00471e04;
        break;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 3;
    } while (lVar4 < iVar2);
  }
  *(int *)(param_2 + 1) = iVar2 + 1;
  iVar3 = iVar2;
LAB_00471e04:
  param_2[(long)iVar3 * 3 + 2] = 0x100;
  param_2[(long)iVar3 * 3 + 3] = 0x20;
  param_2[(long)iVar3 * 3 + 4] = param_1;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    puVar6 = param_2 + 2;
    do {
      if (*puVar6 == 0) {
        iVar3 = (int)lVar4;
        if (-1 < iVar3) goto LAB_00471e64;
        break;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 3;
    } while (lVar4 < iVar2);
  }
  *(int *)(param_2 + 1) = iVar2 + 1;
  iVar3 = iVar2;
LAB_00471e64:
  param_2[(long)iVar3 * 3 + 2] = 0;
  param_2[(long)iVar3 * 3 + 3] = 8;
  param_2[(long)iVar3 * 3 + 4] = param_1;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    puVar6 = param_2 + 2;
    do {
      if (*puVar6 == 0x280) {
        iVar3 = (int)lVar4;
        if (-1 < iVar3) goto LAB_00471ec4;
        break;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 3;
    } while (lVar4 < iVar2);
  }
  *(int *)(param_2 + 1) = iVar2 + 1;
  iVar3 = iVar2;
LAB_00471ec4:
  puVar6 = param_2 + 2;
  puVar8 = puVar6 + (long)iVar3 * 3;
  puVar8[2] = param_1;
  *puVar8 = 0x280;
  puVar8[1] = 0x80;
  uVar5 = 0x200;
  do {
    uVar7 = uVar5 & 0xffffffffffffffe0;
    if (uVar5 < 0x81) {
      uVar7 = uVar5;
    }
    if (0xff < uVar5) {
      uVar7 = uVar5 & 0xffffffffffffffc0;
    }
    uVar1 = 0x20;
    if (uVar7 < 0x40) {
      uVar1 = 0x10;
    }
    uVar7 = (uVar7 + uVar1) - 1 & -uVar1;
    iVar2 = (int)param_2[1];
    if (0 < iVar2) {
      lVar4 = 0;
      puVar8 = puVar6;
      do {
        if (*puVar8 == uVar7) {
          if (-1 < (int)lVar4) goto joined_r0x00471f5c;
          break;
        }
        lVar4 = lVar4 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar4 < iVar2);
      lVar4 = 0;
      puVar8 = puVar6;
      do {
        if (*puVar8 == uVar7) {
          iVar3 = (int)lVar4;
          if (-1 < iVar3) goto LAB_00471fa0;
          break;
        }
        lVar4 = lVar4 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar4 < iVar2);
    }
    *(int *)(param_2 + 1) = iVar2 + 1;
    iVar3 = iVar2;
LAB_00471fa0:
    param_2[(long)iVar3 * 3 + 2] = uVar7;
    param_2[(long)iVar3 * 3 + 3] = uVar1;
    param_2[(long)iVar3 * 3 + 4] = param_1;
joined_r0x00471f5c:
    uVar5 = uVar5 - 0x10;
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}

