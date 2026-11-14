
undefined8 FUN_018684b0(undefined8 param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined **local_40;
  int local_38;
  int iStack_34;
  undefined8 local_18;
  
  lVar7 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))) {
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      return 0;
    }
  }
  iVar5 = FUN_0277d6c4(param_1);
  if ((iVar5 != 0xea79) && (uVar6 = FUN_009765e0(param_2), lVar7 = DAT_05635578, (uVar6 & 1) == 0))
  {
    local_40 = &PTR_FUN_048f9730;
    fVar9 = (float)*(int *)(param_2 + 0xc) * 0.5;
    fVar8 = (float)*(int *)(param_2 + 8) * 0.5;
    uVar4 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar4 = (uint)(fVar8 < 0.0);
    }
    local_38 = (int)fVar8 - uVar4;
    uVar4 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar4 = (uint)(fVar9 < 0.0);
    }
    iStack_34 = (int)fVar9 - uVar4;
    plVar2 = (long *)(DAT_05635578 + 0x22c0);
    if (*plVar2 != 0) {
      uVar4 = local_38 + *(int *)(DAT_05635578 + 0x22b8) * iStack_34;
      puVar1 = (uint *)(DAT_05635578 + 0x22c8);
      if (uVar4 < *puVar1) {
        iVar5 = *(int *)(DAT_05635578 + 0x22cc);
        *(int *)(DAT_05635578 + 0x22cc) = iVar5 + 1;
        if (((int)uVar4 < 0) || ((int)*puVar1 <= (int)uVar4)) {
          *(int *)(lVar7 + 0x22cc) = iVar5;
        }
        else {
          uVar3 = *(uint *)(*plVar2 + (ulong)(uVar4 >> 5) * 4);
          *(int *)(lVar7 + 0x22cc) = iVar5;
          if ((uVar3 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
            local_18 = 0x700000007;
            uVar6 = FUN_0189fe80(&local_40,&local_18,0x12,1);
            if ((uVar6 & 1) == 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

