
/* WARNING: Removing unreachable block (ram,0x03f17ed4) */

void FUN_03f17d2c(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((param_2 == 0) ||
     (*(uint *)(param_2 + 0x38) < 8 && (1 << (ulong)(*(uint *)(param_2 + 0x38) & 0x1f) & 0xecU) != 0
     )) {
    *(undefined1 *)(param_1 + 0x9d) = 1;
  }
  else {
    *(long *)(param_1 + 0x80) = param_2;
    local_40 = param_3;
    local_38 = param_4;
    if (*(int *)(*(long *)(param_1 + 8) + 0x48) != 4 && *(char *)(param_1 + 0x9c) == '\0') {
      fVar4 = *(float *)(param_2 + 0x40);
      fVar6 = (float)((ulong)param_3 >> 0x20);
      if (fVar6 < 0.0) {
        fVar7 = -*(float *)(param_2 + 0x48);
        if (0.0 <= *(float *)(param_2 + 0x48)) {
          fVar7 = 0.0;
        }
        fVar5 = -fVar6;
        if (0.0 <= fVar6) {
          fVar5 = fVar6;
        }
        if (fVar7 <= fVar5) {
          if (fVar7 < fVar5) {
            fVar6 = fVar5 - (fVar5 - fVar7);
            if (0.0 <= fVar6) {
              fVar6 = -fVar6;
            }
            local_40 = CONCAT44(fVar6,(fVar5 - fVar7) + (float)param_3);
          }
        }
        else {
          fVar4 = fVar4 + (fVar7 - fVar5);
        }
      }
      FUN_03f17fa0(fVar4,param_1,&local_40,param_5);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x20);
      *(int *)(param_1 + 0x150) = (int)*(undefined8 *)(param_1 + 0x28);
    }
    puVar2 = PTR_DAT_04bd1e70;
    puVar1 = PTR_DAT_04bb29d0;
    lVar3 = *(long *)(param_1 + 0x90);
    if (*(char *)(lVar3 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar3 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)PTR_DAT_04bb29d0 *
                     (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                     (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 +
              *(long *)(lVar3 + 0x18);
    }
    *(long *)(param_1 + 0x88) = lVar3;
    *(undefined1 *)(param_1 + 0x9d) = 0;
    *(float *)(param_1 + 0x98) = (float)local_40;
    if (local_40._4_4_ < 0.0) {
      *(float *)(param_1 + 0x98) = (float)local_40 + -local_40._4_4_;
      fVar6 = -local_40._4_4_;
    }
    else {
      fVar6 = local_40._4_4_;
    }
    fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c);
    if (fVar6 < fVar4) {
      local_40._0_4_ = (float)local_40 + fVar4 * -1.5;
      if ((float)local_40 <= 0.0) {
        local_40._0_4_ = 0.0;
      }
    }
    FUN_03f23104(param_1 + 0x30,&local_40);
    *(undefined4 *)(param_1 + 0x164) = 0xbf800000;
    lVar3 = *(long *)(param_1 + 0x170);
    if (*(char *)(lVar3 + 0x15) == '\0') {
      lVar3 = *(long *)(lVar3 + 0x18);
    }
    else {
      lVar3 = (long)(*(long *)puVar1 *
                     (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
              1000 + *(long *)(lVar3 + 0x18);
    }
    *(long *)(param_1 + 0x168) = lVar3;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}

