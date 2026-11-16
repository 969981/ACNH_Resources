
undefined8 FUN_026aa560(int *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  
  local_56 = 0;
  local_54 = 0;
  iVar6 = *param_2 + 0x169e;
  if (2 < *param_2) {
    iVar6 = 0xfffe;
  }
  local_58 = (undefined2)iVar6;
  FUN_0277d4ac(&local_58);
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_4);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_60 = (uint *)0x0;
  local_68 = *param_4;
  uStack_64 = param_4[1];
  local_70 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_4);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar8 != (uint *)0x0)) {
        local_60 = puVar8;
      }
    }
  }
  uVar7 = FUN_01ae7a70(&local_70);
  if ((uVar7 & 1) != 0) {
    FUN_01afca60(&local_70,0);
  }
  if (((local_60 != (uint *)0x0) && (uVar4 = *local_60, uVar4 != 0)) &&
     (local_60 != (uint *)(ulong)uVar4)) {
    puVar8 = (uint *)((long)local_60 - (long)(ulong)uVar4);
    if (*puVar8 != 0) {
      uVar4 = puVar8[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)local_60 - lVar9) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326d48) && (*(short *)(DAT_05326d50 + (long)(int)uVar1 * 2) == 0x1d)) {
            return 0;
          }
        }
      }
      if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)local_60 - lVar9) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc0130) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0130 + 8) + (long)(int)uVar1 * 2) == 0x14)) {
            return 0;
          }
        }
      }
    }
  }
  uVar4 = FUN_01aee3b4(&local_70);
  if (uVar4 != *param_2) {
    return 0;
  }
  iVar5 = FUN_0277d6c4(param_4);
  if (iVar5 == iVar6) {
    return 1;
  }
  if (local_60 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar1 = *local_60;
    uVar4 = 0;
    if ((uVar1 != 0) && (local_60 != (uint *)(ulong)uVar1)) {
      puVar8 = (uint *)((long)local_60 - (long)(ulong)uVar1);
      uVar4 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)local_60 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 = (uint)uVar2,
               uVar2 < 0xbd)) goto LAB_026aa87c;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_026aa87c:
  switch(*param_3) {
  case 9:
  case 10:
    if (uVar4 - 9 < 2) {
      return 1;
    }
    break;
  default:
    iVar6 = FUN_0277d6c4(param_4);
    if ((((iVar6 != 0x1693) && (iVar6 = FUN_0277d6c4(param_4), iVar6 != 0x1694)) &&
        (uVar7 = FUN_0268a850(param_3), (uVar7 & 1) == 0)) &&
       (iVar6 = FUN_01ae0e28(&local_70), iVar6 == *param_1)) {
      return 1;
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 0x69:
    if (uVar4 == 0x69) {
      return 1;
    }
    iVar6 = FUN_0277d6c4(param_4);
    if (iVar6 == 0x1693) {
      return 1;
    }
    break;
  case 0x6a:
  case 0x6b:
    if ((uVar4 & 0xfffe) == 0x6a) {
      return 1;
    }
    iVar6 = FUN_0277d6c4(param_4);
    if (iVar6 == 0x1694) {
      return 1;
    }
  }
  return 0;
}

