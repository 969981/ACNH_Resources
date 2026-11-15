
/* WARNING: Removing unreachable block (ram,0x022ef6e4) */
/* WARNING: Removing unreachable block (ram,0x022ef6f4) */
/* WARNING: Removing unreachable block (ram,0x022ef700) */

uint FUN_022ef6b0(long param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float local_54 [3];
  float fStack_48;
  undefined4 local_44;
  float local_40;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined1 local_36;
  int local_34;
  
  local_54[0] = 0.0;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xc0);
    uVar1 = 0;
    if (lVar2 == 0) goto LAB_022ef8ac;
    if ((uint)(*(int *)(param_1 + 8) - *(int *)(lVar2 + 0x40)) < *(uint *)(lVar2 + 0x30) &&
        (uint)(*(int *)(param_1 + 0xc) - *(int *)(lVar2 + 0x44)) < *(uint *)(lVar2 + 0x34)) {
      FUN_01320eac(local_54,lVar2,param_1);
      if (local_54[0]._0_2_ == DAT_04cb6038) {
        uVar3 = FUN_013852c0(param_1,0);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) goto LAB_022ef8ac;
        local_54[1] = 0.0;
        local_54[2] = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
        local_54[0] = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
        local_34 = FUN_01317b90(local_54,0);
        if (local_34 != DAT_054844e8) {
          if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
             (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
            fVar4 = -500.0;
          }
          else {
            fVar4 = (float)FUN_0093b024(DAT_04cfae30 + 0x28,local_54,0);
          }
          if ((-5.0 <= fVar4 - param_2[1]) && (fVar4 - param_2[1] <= 5.0)) {
            local_36 = 0;
            local_54[1] = 0.0;
            local_44 = 0;
            fStack_48 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
            local_3a = 0x10100;
            local_3c = 1;
            local_54[0] = (float)(int)((int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0))
                          * 10.0 + 5.0;
            local_54[2] = (float)(int)((int)((float)(int)param_2[2] / 10.0) -
                                      (uint)(param_2[2] < 0.0)) * 10.0 + 5.0;
            local_40 = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
            uVar1 = FUN_016f0c64(local_54,0);
            goto LAB_022ef8ac;
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_022ef8ac:
  return uVar1 & 1;
}

