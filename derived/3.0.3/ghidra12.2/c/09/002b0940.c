
void FUN_002b0940(undefined8 param_1,long *param_2,undefined8 *param_3,void *param_4,int *param_5,
                 uint param_6)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ushort *puVar16;
  short sVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int local_98;
  ErrorResultVariant aEStack_94 [28];
  int local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined4 local_68 [2];
  
  if ((param_4 == (void *)0x0) || (param_5 == (int *)0x0)) {
    local_98 = 0x10c07;
  }
  else {
    if (param_2[0xcb] != 0) {
      iVar15 = 0;
      iVar19 = 0;
      iVar20 = 0x1f;
      uVar18 = *(undefined8 *)PTR_DAT_04bc1510;
      do {
        while( true ) {
          lVar6 = *param_2;
          aEStack_94[(long)iVar19 + -4] = (ErrorResultVariant)0xfd;
          aEStack_94[(long)iVar20 + -4] = (ErrorResultVariant)0xfd;
          lVar6 = (**(code **)(lVar6 + 0x40))(param_2,iVar15);
          if ((lVar6 != 0) &&
             (lVar6 = (**(code **)(*param_2 + 0x40))(param_2,iVar15), *(short *)(lVar6 + 0x1a) != 0)
             ) break;
LAB_002b09b4:
          iVar19 = iVar19 + 1;
          iVar15 = iVar15 + 1;
          if (iVar15 == 0x20) goto LAB_002b0a38;
        }
        FUN_002ba324(&local_78,uVar18,local_68,iVar15);
        if (local_78 != 0) {
          aEStack_94[(long)iVar19 + -4] = SUB41(iVar15,0);
          goto LAB_002b09b4;
        }
        aEStack_94[(long)iVar20 + -4] = SUB41(iVar15,0);
        iVar20 = iVar20 + -1;
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0x20);
LAB_002b0a38:
      lVar6 = 0;
      do {
        if (aEStack_94[lVar6 + -4] != (ErrorResultVariant)0xfd) {
          lVar3 = (**(code **)(*param_2 + 0x40))(param_2);
          if (*(ushort *)(lVar3 + 0x1a) != 0) {
            lVar7 = *(long *)(lVar3 + 8);
            uVar10 = 0;
            do {
              uVar5 = *(int *)(lVar3 + 0x14) + uVar10;
              uVar1 = 0;
              if (*(uint *)(lVar3 + 0x10) <= uVar5) {
                uVar1 = *(uint *)(lVar3 + 0x10);
              }
              uVar5 = uVar5 - uVar1;
              if (*(char *)(lVar7 + (ulong)uVar5 * 0x5b0) == '\0') break;
              if (*(char *)(lVar7 + (ulong)uVar5 * 0x5b0 + 1) != '\0') {
                uVar10 = uVar10 + 1;
                if (param_3 != (undefined8 *)0x0) {
                  *param_3 = 0;
                }
                iVar19 = 0;
                uVar14 = 0;
                *param_5 = 0;
                uVar5 = 0;
                if (*(uint *)(lVar3 + 0x10) <= *(uint *)(lVar3 + 0x14)) {
                  uVar5 = *(uint *)(lVar3 + 0x10);
                }
                uVar5 = *(uint *)(lVar3 + 0x14) - uVar5;
                goto joined_r0x002b0b0c;
              }
              uVar10 = uVar10 + 1;
            } while (*(ushort *)(lVar3 + 0x1a) != uVar10);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x20);
      local_78 = 0x2c09;
LAB_002b0cb0:
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)local_68);
      piVar4 = &local_78;
      goto LAB_002b0bb4;
    }
    local_98 = 0x10c08;
  }
  local_78 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_78);
  piVar4 = &local_98;
  goto LAB_002b0bb4;
joined_r0x002b0b0c:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar7 + (ulong)uVar5 * 0x5b0 + 0x5a8);
  }
  puVar16 = (ushort *)(lVar7 + (ulong)uVar5 * 0x5b0 + 4);
  uVar2 = *puVar16;
  if (param_6 < iVar19 + (uint)uVar2) {
    local_78 = 0x10c04;
    goto LAB_002b0cb0;
  }
  lVar7 = lVar7 + (ulong)uVar5 * 0x5b0;
  memcpy(param_4,(void *)(lVar7 + 6),(ulong)uVar2);
  uVar2 = *puVar16;
  iVar19 = *param_5 + (uint)uVar2;
  *param_5 = iVar19;
  if (*(char *)(lVar7 + 1) != '\0') goto LAB_002b0be4;
  param_4 = (void *)((long)param_4 + (ulong)uVar2);
  lVar7 = *(long *)(lVar3 + 8);
  if (uVar14 < *(ushort *)(lVar3 + 0x1a)) {
    uVar14 = uVar14 + 1;
  }
  uVar5 = *(int *)(lVar3 + 0x14) + (uint)uVar14;
  uVar1 = 0;
  if (*(uint *)(lVar3 + 0x10) <= uVar5) {
    uVar1 = *(uint *)(lVar3 + 0x10);
  }
  uVar5 = uVar5 - uVar1;
  goto joined_r0x002b0b0c;
LAB_002b0d38:
  *(uint *)(lVar3 + 0x14) = uVar5;
  *(undefined2 *)(lVar3 + 0x1c) = 0;
  *(short *)(lVar3 + 0x18) = (sVar17 - sVar8) + *(short *)(lVar3 + 0x18);
  iVar19 = *(int *)(lVar3 + 0x20);
  goto joined_r0x002b0d54;
LAB_002b0be4:
  uVar1 = *(uint *)(lVar3 + 0x10);
  uVar5 = *(uint *)(lVar3 + 0x14);
  uVar11 = (uint)*(ushort *)(lVar3 + 0x1a);
  uVar9 = (uint)*(ushort *)(lVar3 + 0x1c);
  if (*(long *)(lVar3 + 8) == 0) {
    do {
      sVar8 = (short)uVar9;
      sVar17 = (short)uVar10;
      uVar5 = uVar1 + uVar5 + (uVar10 & 0xffff);
      do {
        uVar5 = uVar5 - uVar1;
      } while (uVar1 <= uVar5);
      if ((uVar11 & 0xffff) == 0) {
        uVar11 = 0;
        if ((uVar9 & 0xffff) < (uVar10 & 0xffff)) goto LAB_002b0d38;
      }
      else {
        uVar11 = uVar11 - uVar10;
        *(short *)(lVar3 + 0x1a) = (short)uVar11;
        if ((uVar9 & 0xffff) < (uVar10 & 0xffff)) goto LAB_002b0d38;
      }
      uVar12 = uVar9 & 0xffff;
      uVar9 = uVar9 - uVar10;
      uVar13 = uVar10 & 0xffff;
      uVar10 = 1;
      *(short *)(lVar3 + 0x1c) = (short)uVar9;
    } while (uVar12 != uVar13);
  }
  else {
    do {
      sVar8 = (short)uVar9;
      sVar17 = (short)uVar10;
      uVar5 = uVar1 + uVar5 + (uVar10 & 0xffff);
      do {
        uVar5 = uVar5 - uVar1;
      } while (uVar1 <= uVar5);
      if ((uVar11 & 0xffff) == 0) {
        uVar11 = 0;
        if ((uVar9 & 0xffff) < (uVar10 & 0xffff)) goto LAB_002b0d38;
      }
      else {
        uVar11 = uVar11 - uVar10;
        *(short *)(lVar3 + 0x1a) = (short)uVar11;
        if ((uVar9 & 0xffff) < (uVar10 & 0xffff)) goto LAB_002b0d38;
      }
      uVar13 = uVar9 & 0xffff;
      uVar9 = uVar9 - uVar10;
      *(short *)(lVar3 + 0x1c) = (short)uVar9;
    } while ((uVar13 != (uVar10 & 0xffff)) &&
            ((uVar10 = 1, (uVar11 & 0xffff) == 0 ||
             (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x5b0) == '\0'))));
  }
  *(uint *)(lVar3 + 0x14) = uVar5;
  iVar19 = *(int *)(lVar3 + 0x20);
joined_r0x002b0d54:
  if (-1 < iVar19) {
    FUN_002af630(lVar3);
  }
  local_78 = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)local_68);
  piVar4 = &local_78;
LAB_002b0bb4:
  FUN_002296c4(param_1,piVar4);
  return;
}

