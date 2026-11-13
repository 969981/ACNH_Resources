
/* WARNING: Removing unreachable block (ram,0x0125ffec) */
/* WARNING: Removing unreachable block (ram,0x0125ffdc) */
/* WARNING: Removing unreachable block (ram,0x0126003c) */

undefined8 FUN_0125ff70(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined *local_e8;
  undefined1 local_e0;
  int local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined *local_c0;
  int local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined **local_78;
  undefined4 local_68 [10];
  
  if (*(char *)(DAT_0519d040 + 0x4b30) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(DAT_0519d040 + 0x4b34);
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_a0 = 0;
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  lVar8 = *(long *)(DAT_0519d040 + 0x1f8);
  local_68[0] = 0xf;
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = PTR_DAT_04bc43f8 + 0x10;
  local_e8 = PTR_DAT_04bc4608 + 0x10;
  local_b8 = DAT_05636e94;
  local_e0 = DAT_0560ab60;
  local_d0 = (undefined4)DAT_0560ab70;
  uStack_cc = DAT_0560ab70._4_4_;
  local_dc = DAT_0560ab64;
  local_c8 = DAT_0560ab78;
  local_c4 = DAT_0560ab7c;
  local_98 = puStack_a8;
  if (DAT_05636e94 != 0) {
    lVar4 = *(long *)(lVar8 + 0x150);
    ppuStack_80 = &local_c0;
    local_88 = &PTR_FUN_04a9b150;
    local_78 = &local_e8;
    if (lVar4 != 0) {
      plVar5 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x10))();
      iVar3 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar3) {
        iVar7 = 0;
        do {
          FUN_01360490(local_68,*(undefined8 *)(lVar8 + 0x150),iVar7);
          uVar6 = (*(code *)*local_88)(&local_88,local_68);
          if ((uVar6 & 1) != 0) break;
          bVar2 = iVar3 + -1 != iVar7;
          iVar7 = iVar7 + 1;
        } while (bVar2);
      }
    }
  }
  if (local_dc != 0) {
    FUN_02a8f7b0(&local_e8,&local_b0);
    fVar9 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
    fVar10 = ((float)(int)local_a0 * 5.0 + (float)(int)local_90 * 5.0 + 5.0) * 0.5;
    if ((uVar1 & 0xfffffffe) == 2) {
      if (fVar9 <= fVar10) {
        return 1;
      }
    }
    else if (fVar10 <= fVar9) {
      return 1;
    }
  }
  return 0;
}

