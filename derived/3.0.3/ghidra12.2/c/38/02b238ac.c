
/* WARNING: Removing unreachable block (ram,0x02b23a0c) */
/* WARNING: Removing unreachable block (ram,0x02b23a04) */
/* WARNING: Removing unreachable block (ram,0x02b23b04) */

void FUN_02b238ac(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 local_48;
  float local_40;
  int local_34;
  
  puVar7 = PTR_DAT_04bb6298;
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar5 == 0xffffffffffffffff) {
LAB_02b23958:
    if (param_2 == 0) {
      return;
    }
    if (*(char *)(param_3 + 0x1d) != '\0') {
      if (uVar5 != 0xffff) {
LAB_02b2396c:
        local_48 = (undefined *)CONCAT44(local_48._4_4_,0x20);
        puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8;
        if (0xff < uVar5) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_02b23a34;
      }
      local_40 = 0.0;
      local_34 = 0;
      local_48 = PTR_DAT_04bc43f8 + 0x10;
      uVar10 = FUN_02b674f0(&local_34,*(undefined4 *)(param_3 + 0x3c));
      if ((uVar10 & 1) != 0) {
        local_40 = (float)local_34;
      }
      local_34 = 1;
      puVar3 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      uVar10 = FUN_02a59140(puVar3,&local_48);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(param_2 + 8) != 0) {
          return;
        }
        uVar9 = 0x16;
        goto LAB_02b23bb8;
      }
    }
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x20);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < (uint)(int)(short)uVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar4[1] & 1) == 0) goto LAB_02b23958;
    local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
    if (param_2 == 0) {
      return;
    }
    if ((*puVar4 & 1) != 0) {
      return;
    }
    if (*(char *)(param_3 + 0x1d) != '\0') goto LAB_02b2396c;
  }
LAB_02b23a34:
  iVar8 = FUN_01317b90(param_3 + 0xc,0);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar8);
  if (DAT_05628fe8 < iVar8) {
    uVar9 = 0x16;
    goto LAB_02b23ba0;
  }
  sVar6 = *(short *)puVar7;
  if (sVar6 == -1) {
LAB_02b23acc:
    lVar1 = param_1 + 0x10;
    uVar10 = FUN_02b1e960(param_1,lVar1);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_02b1ede0(param_1,lVar1);
      if ((uVar10 & 1) == 0) {
        iVar8 = FUN_02b1d200(param_1,lVar1,0);
        if (iVar8 == 0) {
          local_34 = 0;
          uVar9 = FUN_035a3310();
          uVar10 = FUN_02b1dc50(param_1,&local_34,lVar1,uVar9 & 1);
          if ((uVar10 & 1) == 0) {
            iVar8 = FUN_02b1e490(param_1,lVar1,param_3 + 0x28);
            if (iVar8 == 2) {
              uVar9 = 0xb;
            }
            else {
              if (iVar8 != 1) {
                uVar10 = FUN_02b1eb30(param_1,lVar1);
                if ((uVar10 & 1) != 0) {
                  *(undefined1 *)(param_2 + 0xc) = 1;
                }
                local_48 = (undefined *)
                           (ulong)(uint)((float)(int)((int)((float)(int)*(float *)(param_3 + 0xc) /
                                                           10.0) -
                                                     (uint)(*(float *)(param_3 + 0xc) < 0.0)) * 10.0
                                        + 5.0);
                local_40 = (float)(int)((int)((float)(int)*(float *)(param_3 + 0x14) / 10.0) -
                                       (uint)(*(float *)(param_3 + 0x14) < 0.0)) * 10.0 + 5.0;
                uVar11 = FUN_0097a900(&local_48,0);
                *(undefined4 *)(param_2 + 0x18) = uVar11;
                *(undefined4 *)(param_2 + 0x20) = 0x80000000;
                *(undefined4 *)(param_2 + 0x14) = (undefined4)local_48;
                *(float *)(param_2 + 0x1c) = local_40;
                return;
              }
              uVar9 = 10;
            }
          }
          else {
            if (5 < local_34 - 1U) {
              return;
            }
            uVar9 = *(uint *)(&DAT_0417f9c0 + (long)(int)(local_34 - 1U) * 4);
          }
        }
        else {
          if (5 < iVar8 - 1U) {
            return;
          }
          uVar9 = *(uint *)(&DAT_0417f9a8 + (long)(int)(iVar8 - 1U) * 4);
        }
      }
      else {
        uVar9 = 0x17;
      }
    }
    else {
      uVar9 = 0xc;
    }
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,3);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 3 & 1) == 0) goto LAB_02b23acc;
    iVar8 = FUN_02b1e180(param_1,param_1 + 0x10);
    if (iVar8 == 2) {
      uVar9 = 9;
    }
    else {
      if (iVar8 != 1) goto LAB_02b23acc;
      uVar9 = 5;
    }
  }
LAB_02b23ba0:
  if (*(int *)(param_2 + 8) != 0) {
    return;
  }
  if (0x17 < uVar9) {
    return;
  }
LAB_02b23bb8:
  *(int *)(param_2 + 8) = 1 << (ulong)(uVar9 & 0x1f);
  return;
}

