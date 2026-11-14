
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01515c00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined *local_a0;
  float local_98;
  int local_94;
  byte local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar9 + 7));
  puVar3 = PTR_DAT_04bb27c8;
  iVar4 = *(int *)(param_1 + 0x24) + 1;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0x14);
  iVar8 = iVar2;
  if (iVar4 != iVar10) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar11 = iVar2;
    do {
      local_a0 = puVar1;
      local_98 = (float)iVar11;
      local_94 = iVar10;
      uVar6 = FUN_009765e0(&local_a0);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      local_68 = 0;
      local_64 = 8;
      local_70 = 0;
      local_70 = 0x100;
      local_64 = 8;
      local_68 = 0;
      lVar7 = *(long *)puVar3;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) &&
         (uVar6 = FUN_00949ac8(lVar7 + 0x28,&local_a0,&local_70), (uVar6 & 1) != 0)) {
        return 1;
      }
      uVar6 = FUN_01512308(&local_a0);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      iVar8 = *(int *)(param_1 + 0x10);
      if (iVar11 < *(int *)(param_1 + 0x20)) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        iVar11 = iVar8;
      }
    } while ((iVar2 != iVar11) || (iVar4 != iVar10));
  }
  lVar7 = *(long *)puVar3;
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 != 0)) {
    uVar6 = FUN_009721a0(lVar7,param_1,0);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    iVar8 = *(int *)(param_1 + 0x10);
  }
  local_80 = 0x101;
  local_7e = 1;
  local_94 = 0x40200000;
  local_90 = *PTR_DAT_04bb32e0;
  local_8c = DAT_04c9a0c8;
  if (7 < local_90) {
    local_90 = 0xff;
  }
  local_88 = 0xbf80000000000004;
  local_7c = 0x1000040a00000;
  local_a0 = (undefined *)
             (ulong)(uint)(((float)iVar8 * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0) * 0.5)
  ;
  local_98 = ((float)*(int *)(param_1 + 0x14) * 5.0 + (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0) *
             0.5;
  uVar5 = FUN_0251fad0(&local_a0,0);
  return uVar5 & 1;
}

