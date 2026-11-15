
void FUN_01fa81ec(long param_1,undefined4 *param_2,long param_3,float *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  uint local_68;
  uint local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
  local_60 = PTR_DAT_04bc0510;
  local_50 = (uint *)0x0;
  *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x200;
  puVar3 = PTR_DAT_04bb43c0;
  local_60 = local_60 + 0x10;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  local_44 = 0;
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         ((puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar6 != (uint *)0x0 &&
          (uVar4 = *puVar6, local_50 = puVar6, uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4)))) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0))))
        {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar2 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), local_44 = (uint)uVar2,
               uVar2 < 0x52)) goto LAB_01fa8354;
          }
        }
      }
    }
    local_44 = 0;
  }
LAB_01fa8354:
  if (local_44 - 1 < 9) {
    iVar5 = FUN_01ae98d0(&local_60);
    local_68 = (uint)(long)((float)iVar5 * 90.0 * 11930465.0);
    local_64 = local_68;
    local_44 = FUN_01fb70c4(param_1,param_4,&local_64,1);
    if (local_44 != 0) {
      if (local_44 - 2 < 4) {
        piVar7 = (int *)(&PTR_DAT_04a69d58)[(int)(local_44 - 2)];
      }
      else {
        piVar7 = &DAT_0414dbd4;
      }
      local_68 = *piVar7 + local_68;
    }
  }
  else if (param_2[7] - 2 < 4) {
    if (param_2[7] - 2 < 4) {
      local_68 = (param_2[7] - 2) * 0x40000000 ^ 0x80000000;
    }
    else {
      local_68 = 0;
    }
  }
  else {
    iVar5 = FUN_006f0400(((float)*(int *)(param_3 + 0x10) * 5.0 +
                         (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) * 0.5 - *param_4,
                         ((float)*(int *)(param_3 + 0x14) * 5.0 +
                         (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0) * 0.5 - param_4[2]);
    local_68 = (uint)(long)((float)(iVar5 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
  }
  FUN_01e39778(*(undefined8 *)(param_1 + 8),param_4,&local_68,0);
  FUN_01facbc0(param_1,param_2);
  return;
}

