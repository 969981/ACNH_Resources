
undefined1  [16] FUN_008f918c(ulong param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong extraout_d0;
  ulong extraout_d0_00;
  undefined1 auVar10 [16];
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb6298;
  puVar2 = PTR_DAT_04bb59d8;
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar7 == 0xffff) {
LAB_008f930c:
    uVar6 = FUN_0180c600();
    puVar2 = PTR_DAT_04bb2720;
    param_1 = extraout_d0_00;
    if ((uVar6 & 1) == 0) {
      lVar8 = *(long *)PTR_DAT_04bb2720;
      iVar4 = 0;
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 0x330) == 0) {
          iVar4 = 0;
        }
        else {
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar5 = FUN_006bd550(*puVar9,0);
          iVar4 = 0;
          if (iVar5 == 0x758f7eaf) {
            iVar4 = 0;
            if (*(long *)puVar2 != 0) {
              lVar8 = *(long *)(*(long *)puVar2 + 0x330);
              iVar4 = 0;
              if (lVar8 != 0) {
                iVar4 = *(int *)(lVar8 + 0x244);
              }
            }
          }
        }
      }
      param_1 = 0;
      if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar4) goto LAB_008f9414;
    }
LAB_008f93a0:
    local_48 = 0;
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_50 = PTR_DAT_04bb2010 + 0x10;
    local_38 = 0;
    local_40 = puStack_50;
    FUN_01811430(param_1,&local_58);
  }
  else {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < uVar7) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 1 & 1) == 0) ||
        (local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1a), (*puVar1 >> 0x1a & 1) == 0)) ||
       (*(long *)PTR_DAT_04bb59d8 == 0)) {
LAB_008f92d0:
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1a);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
      if (0xff < uVar7) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_008f930c;
      goto LAB_008f93a0;
    }
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar4 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
        param_1 = extraout_d0;
      }
    }
    if (*(int *)(puVar9 + 7) != -0x17df00c3) {
      uVar7 = *(ushort *)puVar3;
      if (uVar7 == 0xffff) goto LAB_008f930c;
      goto LAB_008f92d0;
    }
    local_48._0_4_ = *(int *)(*(long *)puVar2 + 0x50);
    local_38._0_4_ = *(int *)(*(long *)puVar2 + 0x60);
  }
  param_1 = (ulong)(uint)(((float)(int)local_48 * 5.0 + (float)(int)local_38 * 5.0 + 5.0) * 0.5);
LAB_008f9414:
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  return auVar10;
}

