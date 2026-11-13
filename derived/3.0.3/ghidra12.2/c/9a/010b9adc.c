
/* WARNING: Removing unreachable block (ram,0x010b9cb8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_010b9adc(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  bVar3 = false;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_s_cItemSelect_04bbb488;
  pcVar8 = (char *)param_2[1];
  if (pcVar8 == PTR_s_cItemSelect_04bbb488) {
    bVar2 = false;
  }
  else if (((((*pcVar8 != 'c') || (pcVar8[1] != 'I')) || (pcVar8[2] != 't')) ||
           (((pcVar8[3] != 'e' || (pcVar8[4] != 'm')) ||
            ((pcVar8[5] != 'S' || ((pcVar8[6] != 'e' || (pcVar8[7] != 'l')))))))) ||
          ((pcVar8[8] != 'e' ||
           (((pcVar8[9] != 'c' || (pcVar8[10] != 't')) || (bVar2 = false, pcVar8[0xb] != '\0'))))))
  {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if ((pcVar8 == puVar4 + 0xe) ||
       ((((bVar2 = bVar3, *pcVar8 == 'c' && (pcVar8[1] == 'P')) &&
         ((pcVar8[2] == 'r' && ((pcVar8[3] == 'e' && (pcVar8[4] == 's')))))) &&
        ((pcVar8[5] == 'e' &&
         (((((pcVar8[6] == 't' && (pcVar8[7] == 'I')) && (pcVar8[8] == 't')) &&
           ((pcVar8[9] == 'e' && (pcVar8[10] == 'm')))) && (pcVar8[0xb] == '\0')))))))) {
      bVar2 = true;
    }
  }
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x010b9cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1,*(long *)PTR_DAT_04bb3240 + 0xde08);
    return uVar7;
  }
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar11 = 0;
    iVar6 = _DAT_00002140;
  }
  else {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    iVar6 = *(int *)(&DAT_00002140 + lVar11);
  }
  if (iVar6 == 1) {
    if (*(char *)(lVar11 + 0x28) == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))((long *)(lVar11 + 0x20));
      *(undefined1 *)(lVar11 + 0x28) = 0;
    }
    *(byte *)(lVar11 + 0x29) = bVar5 & 1;
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1,lVar11 + 0x2c);
    if (0 < (int)uVar7) {
      return uVar7;
    }
  }
  else {
    if (*(char *)(lVar11 + 0xd78) == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar11 + 0xd70) + 0x18))(lVar11 + 0xd70);
      *(undefined1 *)(lVar11 + 0xd78) = 0;
    }
    uVar9 = *(ulong *)(lVar11 + 0xd90);
    uVar1 = (uint)(uVar9 >> 0x20);
    uVar12 = (int)uVar9 - ((uint)(uVar9 >> 1) & 0x55555555);
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    *(byte *)(lVar11 + 0xd79) = bVar5 & 1;
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) + (uVar12 + (uVar12 >> 0x10) & 0x3f) != 0) {
      lVar10 = param_1[1];
      uVar9 = 0;
      do {
        if ((*(ulong *)(lVar11 + 0xd90) >> (uVar9 & 0x3f) & 1) != 0) {
          iVar6 = FUN_02672e00(lVar10 + 0x2a8);
          uVar12 = (uint)uVar9;
          if (iVar6 <= (int)uVar12 || 0x7fffffff < uVar12) {
            uVar12 = 0xffffffff;
          }
          if (uVar12 < 0x28) {
            uVar7 = FUN_02677ea0(lVar10 + 0x2a8);
            uVar7 = (**(code **)(*param_1 + 0x38))(param_1,uVar7);
            if (0 < (int)uVar7) {
              return uVar7;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x40);
    }
  }
  return 0;
}

