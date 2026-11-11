
/* WARNING: Removing unreachable block (ram,0x004698f0) */
/* WARNING: Removing unreachable block (ram,0x00469d00) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004697d0(long *param_1,long *param_2,undefined8 param_3,long *param_4,int *param_5)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  char *pcVar13;
  char cVar14;
  undefined8 *puVar15;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 local_178 [256];
  byte *local_78;
  byte *pbStack_70;
  
  lVar9 = *(long *)*param_2;
  puVar15 = (undefined8 *)(lVar9 + (long)(int)param_2[1] * 0x18);
  if (*(int *)(puVar15 + 1) == 0) {
    if (*param_1 == param_1[1]) {
      FUN_00423010(param_3,"Found empty value");
      FUN_00423010(param_3," in value for field \'%s\'",*puVar15);
      FUN_00423880(param_3," (value: \'",0xffffffff);
      FUN_00423880(param_3,*param_1,(int)param_1[1] - (int)*param_1);
      FUN_00423880(param_3,&DAT_0407f992,0xffffffff);
      return 0x80040200;
    }
    *(int *)(lVar9 + (long)(int)param_2[1] * 0x18 + 0x10) = (int)((long *)*param_2)[0x1b];
    *(int *)(*(long *)*param_2 + (long)(int)param_2[1] * 0x18 + 0x14) =
         (int)((long *)*param_2)[0x1b];
    lVar9 = *param_2;
    uVar7 = *(uint *)(lVar9 + 0xd8);
    if (uVar7 == (*(uint *)(lVar9 + 0xdc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,lVar9 + 0xd0,0x10);
      uVar7 = *(uint *)(lVar9 + 0xd8);
    }
    lVar3 = param_1[1];
    plVar1 = (long *)(*(long *)(lVar9 + 0xd0) + (long)(int)uVar7 * 0x10);
    *plVar1 = *param_1;
    plVar1[1] = lVar3;
    *(uint *)(lVar9 + 0xd8) = uVar7 + 1;
    return 0;
  }
  pbVar8 = (byte *)*param_1;
  if (*pbVar8 == 0x7b) {
    pbStack_70 = (byte *)param_1[1];
    local_78 = pbVar8 + 1;
    local_188 = (undefined1 *)0x0;
    pbVar11 = local_78;
    if ((local_78 != pbStack_70) && (bVar12 = *local_78, bVar12 != 0x7d)) {
      pbVar2 = pbVar8 + 2;
      do {
        pbVar11 = pbVar2;
        if (bVar12 < 0x3e) {
          if (bVar12 == 0x22) {
LAB_00469974:
            uVar6 = 4;
LAB_00469978:
            pcVar13 = (char *)((ulong)&local_188 | uVar6);
            cVar14 = *pcVar13 + '\x01';
            goto LAB_00469904;
          }
          if (bVar12 == 0x29) {
            pcVar13 = (char *)((ulong)&local_188 | 1);
            cVar14 = *pcVar13;
            goto joined_r0x004698cc;
          }
code_r0x00469930:
          if (0x3b < bVar12) {
            if (bVar12 == 0x3c) {
              uVar6 = 5;
            }
            else if (bVar12 == 0x5b) {
              uVar6 = 3;
            }
            else {
              if (bVar12 != 0x7b) goto LAB_00469908;
              uVar6 = 2;
            }
            goto LAB_00469978;
          }
          if (bVar12 == 0x22) goto LAB_00469974;
          if (bVar12 == 0x28) {
            uVar6 = 1;
            goto LAB_00469978;
          }
        }
        else {
          if (bVar12 == 0x3e) {
            pcVar13 = (char *)((ulong)&local_188 | 5);
            cVar14 = *pcVar13;
          }
          else if (bVar12 == 0x5d) {
            pcVar13 = (char *)((ulong)&local_188 | 3);
            cVar14 = *pcVar13;
          }
          else {
            if (bVar12 != 0x7d) goto code_r0x00469930;
            pcVar13 = (char *)((ulong)&local_188 | 2);
            cVar14 = *pcVar13;
          }
joined_r0x004698cc:
          if (cVar14 != '\0') {
            cVar14 = cVar14 + -1;
LAB_00469904:
            *pcVar13 = cVar14;
          }
        }
LAB_00469908:
        if (pbStack_70 == pbVar11) goto LAB_00469b08;
        bVar12 = *pbVar11;
        pbVar2 = pbVar11 + 1;
      } while (bVar12 != 0x7d);
    }
    if (pbVar11 == pbStack_70) {
LAB_00469b08:
      local_78 = (byte *)0x0;
      pbStack_70 = (byte *)0x0;
      goto LAB_00469b0c;
    }
    if (pbVar11 == pbStack_70 + -1) {
      pbStack_70 = local_78 +
                   ((long)(((ulong)(uint)((int)pbStack_70 - (int)pbVar8) << 0x20) + -0x200000000) >>
                   0x20);
      uVar6 = FUN_00429cb0(&local_78,param_1);
      puVar4 = PTR_DAT_048607b8;
      pbVar8 = pbStack_70;
      goto joined_r0x00469b84;
    }
  }
  else {
    pbStack_70 = (byte *)param_1[1];
  }
  local_78 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    uVar6 = FUN_00429cb0(&local_78,param_1);
    puVar4 = PTR_DAT_048607b8;
    pbVar8 = pbStack_70;
joined_r0x00469b84:
    PTR_DAT_048607b8 = puVar4;
    pbStack_70 = pbVar8;
    if ((uVar6 & 1) != 0) {
      local_180 = param_4[1];
      local_188 = (undefined1 *)(*param_4 + (long)*param_5 * 0x10);
      iVar5 = FUN_00469480(param_2,&local_188,param_3);
      if (iVar5 < 0) {
        FUN_00423010(param_3," when assigning positional arguments to field \'%s\'",*puVar15);
        return 0x80040200;
      }
      *param_5 = (int)((ulong)(param_4[1] - *param_4) >> 4);
      return 0;
    }
    local_188 = local_178;
    local_180._0_4_ = 0;
    local_180._4_4_ = 0x80000010;
    if (local_78 == pbVar8) {
      lVar9 = 0;
    }
    else {
      pbVar11 = local_78;
      do {
        local_198 = (undefined1 *)0x0;
        pbVar2 = pbVar8;
        if (pbVar11 != pbVar8) {
          bVar12 = *pbVar11;
          pbVar2 = pbVar11;
          while (bVar12 != 0x2c) {
            pbVar10 = pbVar2 + 1;
            if (bVar12 < 0x3e) {
              if (bVar12 == 0x22) {
LAB_00469c50:
                uVar6 = 4;
LAB_00469c54:
                pcVar13 = (char *)((ulong)&local_198 | uVar6);
                cVar14 = *pcVar13 + '\x01';
                goto LAB_00469d14;
              }
              if (bVar12 == 0x29) {
                pcVar13 = (char *)((ulong)&local_198 | 1);
                cVar14 = *pcVar13;
                goto joined_r0x00469cdc;
              }
code_r0x00469c0c:
              if (0x3b < bVar12) {
                if (bVar12 == 0x3c) {
                  uVar6 = 5;
                }
                else if (bVar12 == 0x5b) {
                  uVar6 = 3;
                }
                else {
                  if (bVar12 != 0x7b) goto LAB_00469d18;
                  uVar6 = 2;
                }
                goto LAB_00469c54;
              }
              if (bVar12 == 0x22) goto LAB_00469c50;
              if (bVar12 == 0x28) {
                uVar6 = 1;
                goto LAB_00469c54;
              }
            }
            else {
              if (bVar12 == 0x3e) {
                pcVar13 = (char *)((ulong)&local_198 | 5);
                cVar14 = *pcVar13;
              }
              else if (bVar12 == 0x5d) {
                pcVar13 = (char *)((ulong)&local_198 | 3);
                cVar14 = *pcVar13;
              }
              else {
                if (bVar12 != 0x7d) goto code_r0x00469c0c;
                pcVar13 = (char *)((ulong)&local_198 | 2);
                cVar14 = *pcVar13;
              }
joined_r0x00469cdc:
              if (cVar14 != '\0') {
                cVar14 = cVar14 + -1;
LAB_00469d14:
                *pcVar13 = cVar14;
              }
            }
LAB_00469d18:
            pbVar2 = pbVar8;
            if (pbVar8 == pbVar10) break;
            pbVar2 = pbVar10;
            bVar12 = *pbVar10;
          }
        }
        if ((uint)local_180 == (local_180._4_4_ & 0x3fffffff)) {
          FUN_00426990(puVar4,&local_188,0x10);
        }
        uVar7 = (uint)local_180 + 1;
        *(byte **)(local_188 + (long)(int)(uint)local_180 * 0x10) = pbVar11;
        *(byte **)((long)(local_188 + (long)(int)(uint)local_180 * 0x10) + 8) = pbVar2;
        if (pbVar2 != pbVar8) {
          pbVar2 = pbVar2 + 1;
        }
        pbVar11 = pbVar2;
        local_180._0_4_ = uVar7;
      } while (pbVar2 != pbVar8);
      lVar9 = (long)(int)uVar7;
    }
    puStack_190 = local_188 + lVar9 * 0x10;
    local_198 = local_188;
    iVar5 = FUN_00469480(param_2,&local_198,param_3);
    uVar7 = local_180._4_4_;
    if (iVar5 < 0) {
      FUN_00423010(param_3," when assigning positional argument %d to field \'%s\'",*param_5,
                   *puVar15);
      uVar7 = local_180._4_4_;
    }
    if ((-1 < (int)uVar7) && (local_180 = (ulong)uVar7 << 0x20, local_188 != (undefined1 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_188,0x10,uVar7 & 0x3fffffff);
    }
    if (iVar5 >= 0) {
      return 0;
    }
    return 0x80040200;
  }
LAB_00469b0c:
  FUN_00423010(param_3,"Cannot find matching braces in positional argument %d",*param_5);
  FUN_00423880(param_3," (value: \'",0xffffffff);
  FUN_00423880(param_3,*param_1,(int)param_1[1] - (int)*param_1);
  FUN_00423880(param_3,&DAT_0407f992,0xffffffff);
  return 0x80040200;
}

