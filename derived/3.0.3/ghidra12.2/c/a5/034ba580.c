
void FUN_034ba580(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [63];
  undefined1 local_4d;
  short local_44 [2];
  
  (**(code **)(*param_2 + 0x68))(param_2,local_44);
  local_98 = local_8c;
  local_4d = 0;
  local_8c[0] = '\0';
  local_90 = 0x40;
  local_a0 = PTR_DAT_04bb2bc0 + 0x10;
  if (((local_44[0] != -1) && (lVar12 = *(long *)(param_1 + 0x1ce60), lVar12 != 0)) &&
     (uVar2 = *(uint *)(lVar12 + 0xf8), 0 < (int)uVar2)) {
    uVar11 = 0;
    do {
      psVar4 = (short *)(**(code **)(**(long **)(*(long *)(lVar12 + 0x100) + uVar11 * 8) + 0xf0))();
      if (*psVar4 == local_44[0]) {
        FUN_038d1270(&local_a0,&DAT_040d486c,uVar11 & 0xffffffff);
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uVar2 = DAT_04c4a540;
  if ((*local_98 == '\0') && (*(short *)PTR_DAT_04bb37e0 == -2)) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar5 = 0;
    do {
      if ((*(int *)(param_1 + 0x2a8 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
         (lVar12 = param_1 + 0x2a8 + (long)iVar5 * 0x1a8, (*(byte *)(lVar12 + 0x18) >> 1 & 1) == 0))
      {
        FUN_03412d40(lVar12,&local_a0,PTR_DAT_04bb37e0,0x24);
        goto LAB_034ba6e8;
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar5 != 0x10e);
    iVar10 = -1;
  }
LAB_034ba6e8:
  if (*(uint *)(param_1 + 0x248) <= param_3) {
    param_3 = 0;
  }
  if (-1 < (int)uVar2) {
    lVar12 = *(long *)(param_1 + 0x250);
    uVar3 = *(uint *)(lVar12 + (long)(int)param_3 * 0x38 + 0x20);
    if (0 < (int)uVar3) {
      uVar11 = 0;
      do {
        if (*(uint *)(*(long *)(lVar12 + (long)(int)param_3 * 0x38 + 0x28) + uVar11 * 4) == uVar2) {
          lVar8 = *(long *)(lVar12 + (long)(int)param_3 * 0x38 + 8);
          if (*(uint *)(lVar8 + 0x2c8) <= uVar2) {
            uVar2 = 0;
          }
          if (*(long *)(*(long *)(lVar8 + 0x2d0) + (ulong)uVar2 * 8) == 0) {
            return;
          }
          lVar12 = lVar12 + (long)(int)param_3 * 0x38;
          puVar6 = (uint *)(lVar12 + 0x10);
          plVar7 = (long *)(lVar12 + 0x18);
          uVar1 = uVar11;
          if (*puVar6 <= (uint)uVar11) {
            uVar1 = 0;
          }
          piVar9 = (int *)(*plVar7 + uVar1 * 0x30 + 0x28);
          if (*piVar9 == iVar10) {
            return;
          }
          *piVar9 = iVar10;
          if (iVar10 == -1) {
            return;
          }
          if (*puVar6 <= (uint)uVar11) {
            uVar11 = 0;
          }
          *(undefined4 *)(*plVar7 + uVar11 * 0x30 + 0x2c) = 1;
          return;
        }
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
  }
  return;
}

