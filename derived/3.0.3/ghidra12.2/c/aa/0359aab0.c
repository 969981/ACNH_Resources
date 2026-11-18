
void FUN_0359aab0(long *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int local_64;
  undefined *local_60;
  int local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  uint local_46;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  uint local_18;
  int local_14;
  
  local_14 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x218))();
  if (lVar4 == 0) {
    return;
  }
  local_48 = 0;
  local_58 = (int)param_1[0x45];
  local_40 = 0xc00000000;
  local_46 = 0;
  local_54 = 0;
  local_60 = PTR_DAT_04bc9c78 + 0x10;
  local_4c = 0x10000;
  if (local_14 == 2) {
    if (*(uint *)(lVar4 + 0x298) < 2) goto LAB_0359acc4;
    iVar2 = *(int *)(lVar4 + 0x2e8) * *(int *)(lVar4 + 0x430);
    local_54._4_4_ = *(int *)((long)param_1 + 0x22c);
    iVar9 = local_54._4_4_;
    if (local_54._4_4_ < iVar2 + *(int *)(lVar4 + 0x2f4) && iVar2 <= local_54._4_4_) {
      iVar9 = -1;
    }
  }
  else {
    if (local_14 != 1) {
      if (local_14 == 0) {
        uVar10 = *(uint *)(param_1 + 0x4d);
        uVar6 = 0xffffffff;
        local_18 = 0;
        local_64 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < (int)param_1[0x4a])) {
          plVar7 = param_1 + 0x48;
          uVar11 = uVar10 + 1 & 3;
          if (2 < uVar10) {
            uVar10 = uVar10 + 1 & 0xfffffffc;
            do {
              uVar10 = uVar10 - 4;
              plVar7 = *(long **)(*(long *)(*(long *)(plVar7[1] + 8) + 8) + 8);
            } while (uVar10 != 0);
          }
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            plVar7 = (long *)plVar7[1];
          }
          uVar6 = 0xffffffff;
          if ((plVar7 != (long *)0x0) &&
             (lVar8 = (long)plVar7 - (long)*(int *)((long)param_1 + 0x254), lVar8 != 0)) {
            uVar6 = *(undefined4 *)(lVar8 + 0x270);
          }
        }
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_18,&local_64,uVar6);
        if ((int)local_18 < 0) {
          local_54 = 0;
        }
        else {
          uVar10 = local_18;
          if (-1 < local_64) {
            iVar9 = *(int *)(lVar4 + 0x2e8);
            iVar2 = 0;
            if (iVar9 != 0) {
              iVar2 = (int)local_18 / iVar9;
            }
            uVar10 = iVar2 * iVar9 - iVar9 * local_64;
            uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          }
          local_54 = CONCAT44(local_18,uVar10);
        }
      }
      goto LAB_0359acc4;
    }
    if (local_58 < 1) goto LAB_0359acc4;
    iVar2 = *(int *)(lVar4 + 0x2e8);
    uVar10 = 0;
    if (iVar2 != 0) {
      uVar10 = *(int *)(lVar4 + 0x2f4) / iVar2;
    }
    local_54._4_4_ = *(int *)((long)param_1 + 0x22c);
    iVar9 = local_54._4_4_;
    if (uVar10 != 1) {
      iVar9 = 0;
      if (iVar2 != 0) {
        iVar9 = local_54._4_4_ / iVar2;
      }
      fVar12 = (float)(int)uVar10 * 0.5;
      uVar11 = 0;
      if (fVar12 != (float)(int)fVar12) {
        uVar11 = (uint)(0.0 <= fVar12);
      }
      iVar3 = uVar11 + (int)fVar12;
      if ((uVar10 & 1) != 0) {
        iVar3 = uVar10 - (uVar11 + (int)fVar12);
      }
      iVar3 = iVar9 - iVar3;
      iVar1 = iVar3;
      if (local_58 <= iVar3 * iVar2) {
        iVar1 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar3) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 * iVar2;
    }
  }
  local_54 = CONCAT44(local_54._4_4_,iVar9);
LAB_0359acc4:
  local_46 = CONCAT31(local_46._1_3_,param_3) & 0xffffff01;
  local_47 = 1;
  local_34 = *(byte *)(param_1 + 0x3f);
  if (7 < local_34) {
    local_34 = 0xff;
  }
  local_38 = 4;
  FUN_03864290(lVar4,&local_60);
  lVar4 = param_1[0x45];
  if ((((int)lVar4 == 0) && ((long *)param_1[0x6a] != (long *)0x0)) &&
     (uVar5 = (**(code **)(*(long *)param_1[0x6a] + 0xf8))(), (uVar5 & 1) != 0)) {
    (**(code **)(*(long *)param_1[0x6a] + 0xb0))();
  }
  (**(code **)(*param_1 + 0x280))(param_1,(int)lVar4 != 0);
  return;
}

