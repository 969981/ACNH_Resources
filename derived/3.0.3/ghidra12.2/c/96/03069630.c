
void FUN_03069630(undefined4 *param_1,short *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  undefined *local_58;
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    sVar2 = param_2[1];
    *(undefined2 *)param_1 = 0xfffe;
    *(short *)((long)param_1 + 2) = sVar2;
    param_1[1] = *(undefined4 *)(param_2 + 2);
    return;
  }
  local_48 = (uint *)0x0;
  uVar8 = *(uint *)(param_2 + 2);
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = CONCAT22(param_2[1],*param_2);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_4c = uVar8;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_03069828:
    uVar5 = FUN_01ae8b58(&local_58);
    if ((0xdb < param_3) || ((uVar5 & 1) == 0)) goto LAB_03069868;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_03069828;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       ((puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0
        || (uVar4 = *puVar6, local_48 = puVar6, uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4))))
    goto LAB_03069828;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    if (*puVar7 == 0) goto LAB_03069828;
    uVar4 = puVar7[1];
    if ((uVar4 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_030697b0:
      if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0xaf))
          goto LAB_0306981c;
        }
      }
      goto LAB_03069828;
    }
    lVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar9 == 0) goto LAB_030697b0;
    uVar1 = 0;
    if ((ulong)uVar4 != 0) {
      uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
    }
    if (*puVar7 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 0xad))
    goto LAB_030697b0;
LAB_0306981c:
    if (0xdb < param_3) goto LAB_03069868;
  }
  uVar5 = FUN_01377be0(&local_58);
  if ((uVar5 & 1) == 0) {
    uVar8 = local_4c;
  }
  else {
    uVar5 = FUN_01377be0(&local_58);
    uVar8 = local_4c;
    if ((uVar5 & 1) != 0) {
      uVar8 = local_4c & 0xffff0000 | param_3;
    }
  }
LAB_03069868:
  *param_1 = local_50;
  param_1[1] = uVar8;
  return;
}

