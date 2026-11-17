
void FUN_031d4fa4(long param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  uint local_5c [5];
  undefined8 local_48;
  undefined4 local_40;
  
  local_5c[4] = param_2;
  local_5c[2] = 1;
  local_5c[3] = 0;
  local_5c[0] = 1;
  local_5c[1] = 0;
  if ((local_5c[(long)(int)param_2 + 2] < 2) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)local_5c[(long)(int)param_2 + 2] * 8 +
                       0x6f0), lVar9 != 0)) {
    uVar8 = local_5c[(int)param_2];
    if (*(uint *)(lVar9 + 0x218) <= uVar8) {
      uVar8 = 0;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x220) + (long)(int)uVar8 * 8);
    if (lVar9 != 0) {
      plVar12 = *(long **)(lVar9 + 0x48);
      local_48 = PTR_DAT_04bc0cb8 + 0x10;
      local_40 = 0x29;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_48);
      (**(code **)(plVar12[3] + 0x2b0))(&local_48,plVar12[1]);
      lVar9 = DAT_05739190;
      uVar4 = (undefined4)local_48;
      uVar5 = local_48._4_4_;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar7 == 0) {
        iVar6 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar6 = (int)lVar7 + -1;
      }
      uVar8 = 1;
      if (iVar6 != 1) {
        uVar8 = 2;
      }
      uVar2 = 0;
      if (iVar6 != 0) {
        uVar2 = uVar8;
      }
      pbVar1 = (byte *)(lVar9 + 0x288);
      pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
      if (2 < uVar2) {
        pbVar3 = pbVar1;
      }
      *(undefined4 *)(pbVar3 + 0x20) = uVar4;
      *(undefined4 *)(pbVar3 + 0x24) = uVar5;
      pbVar3[4] = pbVar3[4] | 4;
      pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
      if (2 < uVar2) {
        pbVar3 = pbVar1;
      }
      *pbVar3 = *pbVar3 | 4;
    }
  }
  plVar12 = (long *)(param_1 + 0x220);
  plVar11 = plVar12 + local_5c[4];
  if (1 < local_5c[4]) {
    plVar11 = plVar12;
  }
  if (*plVar11 != 0) {
    uVar10 = (ulong)local_5c[4];
    if (1 < local_5c[4]) {
      uVar10 = 0;
    }
    lVar9 = plVar12[uVar10];
    if (*(long *)(lVar9 + 0x18) == 0 && *(long *)(lVar9 + 0x10) == 0) {
      lVar7 = *(long *)(lVar9 + 0x38);
      plVar12 = (long *)(*(int *)(lVar7 + 0x54) + lVar9);
      plVar11 = (long *)(lVar7 + 0x40);
      lVar9 = *plVar11;
      *plVar11 = (long)plVar12;
      *plVar12 = lVar9;
      plVar12[1] = (long)plVar11;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar12;
      }
      *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + 1;
    }
  }
  return;
}

