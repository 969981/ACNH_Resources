
void FUN_01a2d634(long param_1,short *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  uVar4 = *(undefined4 *)param_2;
  local_68 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 2);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_64 = uVar2;
  uVar6 = FUN_0277d6c4(&local_68);
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_70 = (uint *)0x0;
  local_78 = uVar4;
  local_74 = uVar2;
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar5 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_68);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (((puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar8 != (uint *)0x0 && (uVar6 = *puVar8, local_70 = puVar8, uVar6 != 0)) &&
          (puVar8 != (uint *)(ulong)uVar6)))) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xb1))
            {
              FUN_02621c70(*(undefined8 *)PTR_DAT_04bb46f0,&local_68,&local_68);
              goto LAB_01a2d8e4;
            }
          }
        }
      }
    }
  }
  uVar7 = FUN_01ae7a70(&local_80);
  if ((uVar7 & 1) == 0) goto LAB_01a2d8e4;
  FUN_01afca60(&local_80,0);
  if (local_70 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar6 = *local_70;
    uVar9 = 0;
    if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
      puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar6);
      uVar9 = 0;
      if (*puVar8 != 0) {
        uVar6 = puVar8[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)local_70 - lVar11) / (ulong)uVar6);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar9 < 0xbd))
            goto LAB_01a2d8bc;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01a2d8bc:
  if ((uVar9 & 0xfffd) == 0xa4) {
    FUN_01afca60(&local_80,1);
  }
  local_68 = local_78;
  local_64 = local_74;
LAB_01a2d8e4:
  if (*(int *)(param_1 + 0x174) == 4) {
    *(short *)(param_1 + 0x3a0) = *param_2;
    *(char *)(param_1 + 0x3a2) = (char)param_2[1];
    *(undefined1 *)(param_1 + 0x3a3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x10);
    *(short *)(param_1 + 0x3c4) = param_2[0x12];
    *(undefined2 *)(param_1 + 0x3a0) = (undefined2)local_68;
    *(undefined1 *)(param_1 + 0x3a2) = local_68._2_1_;
    *(undefined1 *)(param_1 + 0x3a3) = local_68._3_1_;
    *(undefined4 *)(param_1 + 0x3a4) = local_64;
    if (*(int *)(param_1 + 0x39c) != 0) {
      return;
    }
    sVar3 = *param_2;
  }
  else {
    sVar3 = *param_2;
  }
  if (sVar3 != -2) {
    FUN_007ef010(&local_80,param_2 + 0x12);
    uVar7 = FUN_0277d7b4(param_1 + 0x360,param_2);
    if (((((uVar7 & 1) == 0) || (*(char *)(param_1 + 0x363) != *(char *)((long)param_2 + 3))) ||
        (*(int *)(param_1 + 0x364) != *(int *)(param_2 + 2))) ||
       ((short)local_80 != *(short *)(param_1 + 0x390))) {
      *(uint *)(param_1 + 0x36c) = (uint)(ushort)param_2[0x12];
      *(undefined4 *)(param_1 + 0x360) = local_68;
      *(undefined4 *)(param_1 + 0x364) = local_64;
      *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x10);
      *(short *)(param_1 + 0x390) = param_2[0x12];
      *(undefined4 *)(param_1 + 0x39c) = 1;
    }
  }
  return;
}

