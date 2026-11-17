
void FUN_02f4d820(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_a4 [63];
  undefined1 local_65;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  param_3 = param_3 & 0xffffffff;
  FUN_02f46668(&local_48);
  puVar2 = PTR_DAT_04bb43c0;
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = local_48;
  uStack_54 = uStack_44;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0277d6c4(&local_48);
    }
  }
  local_65 = 0;
  local_a8 = 0x40;
  local_b0 = local_a4;
  local_a4[0] = '\0';
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  iVar4 = *(int *)(param_1 + 0x382bc);
  if (iVar4 == 1) {
    uVar8 = *(undefined8 *)PTR_DAT_04bb3d80;
    uVar5 = FUN_0277d6c4(&local_48);
    FUN_013ee8f0(uVar8,&local_b8,uVar5);
    uVar8 = 0xc;
  }
  else if (iVar4 == 0) {
    uVar8 = *(undefined8 *)PTR_DAT_04bb4008;
    iVar4 = FUN_0277d6c4(&local_48);
    if (iVar4 != 0xfffe) {
      FUN_01a11820(uVar8,&local_b8,iVar4,0);
    }
    uVar8 = 0xd;
  }
  else {
    FUN_029535f0(*(undefined8 *)PTR_DAT_04bb4208,&local_b8,&local_48);
    uVar8 = 0xe;
  }
  if ((*local_b0 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
    iVar9 = 0;
    iVar4 = 0;
    lVar7 = param_1 + 0x1c200;
    do {
      if ((*(int *)(lVar7 + (long)iVar4 * 0x1a8 + 0x1a0) == 0) &&
         (lVar6 = lVar7 + (long)iVar4 * 0x1a8, (*(byte *)(lVar6 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar6,&local_b8,PTR_DAT_04bb37e0,uVar8);
        if (iVar9 == 1) {
          return;
        }
        *(int *)(param_1 + param_3 * 4 + 0x382e4) = param_2;
        uVar3 = *(uint *)(param_1 + 0x38334 + param_3 * 4);
        if ((uVar3 < 0x10e) && (lVar6 = lVar7 + (ulong)uVar3 * 0x1a8, *(int *)(lVar6 + 0x1a0) != 0))
        {
          lVar7 = lVar7 + (ulong)uVar3 * 0x1a8;
          **(undefined1 **)(lVar7 + 0x60) = 0;
          *(undefined1 *)(lVar7 + 0xf0) = 0;
          if ((*(int *)(lVar7 + 0x100) != 1) &&
             (((*(byte *)(lVar7 + 0x18) >> 1 & 1) != 0 && (*(int *)(lVar7 + 0x140) == -1)))) {
            *(undefined4 *)(lVar7 + 0x140) = 1;
          }
          *(undefined4 *)(lVar6 + 0x1a0) = 0;
        }
        *(int *)(param_1 + 0x38334 + param_3 * 4) = -iVar9;
        *(undefined1 *)(param_1 + param_3 + 0x38384) = 0;
        iVar9 = *(int *)(param_1 + 0x382bc);
        iVar4 = 0x50;
        if (iVar9 != 1) {
          iVar4 = 0;
        }
        iVar1 = 0xa0;
        if (iVar9 != 2) {
          iVar1 = iVar4;
        }
        if (199 < (uint)(iVar1 + param_2)) {
          return;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)(uint)(iVar1 + param_2) * 8 + 0x580);
        if (lVar7 == 0) {
          return;
        }
        FUN_03464520(*(undefined8 *)(lVar7 + 0x250),0);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar4 != 0x10e);
  }
  return;
}

