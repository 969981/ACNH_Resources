
undefined8 FUN_02628760(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  byte local_80 [4];
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined2 *)param_2 = DAT_05586008;
    *(undefined1 *)((long)param_2 + 2) = DAT_0558600a;
    *(undefined1 *)((long)param_2 + 3) = DAT_0558600b;
    param_2[1] = DAT_0558600c;
  }
  if (*(char *)(param_3 + 0x25) == '\0') {
    return 0;
  }
  uVar9 = FUN_02672fb0(param_4);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar9 & 1) != 0) {
    return 1;
  }
  lVar11 = param_3 + 8;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(lVar11);
  puVar4 = PTR_DAT_04bc0510;
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) goto LAB_02628a4c;
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02628a4c;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = 0;
  local_70 = *(undefined4 *)(param_3 + 8);
  uStack_6c = *(undefined4 *)(param_3 + 0xc);
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(lVar11);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (uVar5 < *(uint *)(lVar12 + 0x1d8)) {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar12 != 0) {
          local_68 = lVar12;
        }
      }
    }
  }
  uVar9 = FUN_01af0020(&local_78);
  if ((uVar9 & 1) == 0) goto LAB_02628a4c;
  uVar5 = FUN_01af2610(&local_78);
  local_7c = 0;
  local_80[0] = 0;
  FUN_0262c3a0(&local_7c,local_80,param_4,lVar11);
  uVar8 = local_7c;
  if (local_7c == 0) goto LAB_02628a4c;
  uVar5 = uVar5 & 0xff;
  lVar12 = *(long *)puVar3;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = local_7c / uVar5;
  }
  if (local_7c != uVar1 * uVar5) {
    uVar1 = uVar1 + 1;
  }
  if (local_7c == uVar5) {
    uVar1 = 1;
  }
  uVar6 = FUN_0277d6c4(lVar11);
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
LAB_02628a28:
    iVar10 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar6) goto LAB_02628a28;
    iVar10 = 0;
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
      local_78 = puVar4 + 0x10;
      local_68 = 0;
      local_70 = *(undefined4 *)(param_3 + 8);
      uStack_6c = *(undefined4 *)(param_3 + 0xc);
      uVar6 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 != 0) {
        lVar12 = *(long *)(lVar14 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(lVar11);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
            lVar11 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
            if (lVar11 != 0) {
              local_68 = lVar11;
            }
          }
        }
      }
      uVar9 = FUN_01af0020(&local_78);
      if ((uVar9 & 1) == 0) {
        iVar10 = 1;
      }
      else {
        iVar7 = FUN_01ad9fd0(&local_78);
        iVar10 = 10;
        if (iVar7 != 3 && iVar7 != 0x78) {
          iVar10 = 1;
        }
      }
    }
  }
  if ((uVar1 < local_80[0]) || (iVar10 + uVar8 <= uVar1 * uVar5)) {
    if (param_2 != (undefined4 *)0x0) {
      *(undefined2 *)param_2 = *(undefined2 *)(param_3 + 8);
      *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(param_3 + 10);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_3 + 0xb);
      param_2[1] = *(undefined4 *)(param_3 + 0xc);
    }
    return 1;
  }
LAB_02628a4c:
  lVar11 = 0;
  do {
    lVar12 = param_3 + lVar11;
    lVar14 = *(long *)puVar3;
    local_88 = *(undefined4 *)(lVar12 + 0x2c);
    uStack_84 = *(undefined4 *)(lVar12 + 0x30);
    uVar5 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_7c = 0;
        local_80[0] = 0;
        FUN_0262c3a0(&local_7c,local_80,param_4,&local_88);
        uVar5 = local_7c;
        if (local_7c != 0) {
          lVar13 = *(long *)puVar3;
          uVar8 = FUN_0277d6c4(&local_88);
          lVar14 = *(long *)puVar3;
          if (lVar14 == 0) {
            return 1;
          }
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar8) {
            return 1;
          }
          if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
            return 1;
          }
          local_68 = 0;
          local_70 = local_88;
          uStack_6c = uStack_84;
          local_78 = puVar4 + 0x10;
          uVar8 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar8 = FUN_0277d6c4(&local_88);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if (uVar8 < *(uint *)(lVar14 + 0x1d8)) {
                lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8);
                if (lVar14 != 0) {
                  local_68 = lVar14;
                }
              }
            }
          }
          uVar9 = FUN_01af0020(&local_78);
          if ((uVar9 & 1) == 0) {
            return 1;
          }
          uVar8 = FUN_01af2610(&local_78);
          uVar8 = uVar8 & 0xff;
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          if (uVar5 != uVar1 * uVar8) {
            uVar1 = uVar1 + 1;
          }
          if (uVar5 == uVar8) {
            uVar1 = 1;
          }
          if (uVar1 < local_80[0]) {
            if (param_2 == (undefined4 *)0x0) {
              return 1;
            }
LAB_02628c4c:
            *param_2 = local_88;
            param_2[1] = uStack_84;
            return 1;
          }
          uVar6 = (uint)*(ushort *)(lVar12 + 0x34);
          uVar1 = uVar5 - uVar6;
          if (uVar5 < uVar6) {
            return 1;
          }
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar1 / uVar8;
          }
          if (uVar1 != uVar2 * uVar8) {
            uVar2 = uVar2 + 1;
          }
          if (uVar1 == uVar8) {
            uVar2 = 1;
          }
          uVar8 = 0;
          if (uVar5 != uVar6) {
            uVar8 = uVar2;
          }
          if (uVar8 < local_80[0]) {
            if (param_2 == (undefined4 *)0x0) {
              return 1;
            }
            if (uVar8 == 0) {
              return 1;
            }
            goto LAB_02628c4c;
          }
        }
      }
    }
    lVar11 = lVar11 + 0x18;
    if (lVar11 == 0x90) {
      return 0;
    }
  } while( true );
}

