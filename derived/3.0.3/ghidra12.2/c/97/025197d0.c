
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff54 : 0x02519984 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_025197d0(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  local_40[0] = *param_1;
  if (7 < local_40[0]) {
    local_40[0] = 0xff;
  }
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_40,1);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x1aa0);
    if (lVar11 == 0) {
      FUN_02816c30(*(long *)(lVar7 + 0x1a88) + *(long *)(lVar7 + 0x1a80),PTR_DAT_04bb37e0,
                   *(undefined4 *)PTR_DAT_04bb4e20,0);
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar8 = 0;
        plVar9 = *(long **)(lVar11 + 0x20);
joined_r0x02519a3c:
        if (plVar9 != (long *)0x0) {
          local_c0 = *(undefined8 *)(lVar7 + 0x1a80);
          local_b8 = *(undefined8 *)(lVar7 + 0x1a88);
          local_b0 = 0x8b8;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_c0);
        }
      }
      else {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        uVar8 = uVar8 & 0xffffffff;
        if (*(long *)(lVar7 + 0x1aa0) != 0) {
          plVar9 = *(long **)(*(long *)(lVar7 + 0x1aa0) + 0x20);
          goto joined_r0x02519a3c;
        }
      }
      FUN_02816c30(*(long *)(lVar7 + 0x1a88) + *(long *)(lVar7 + 0x1a80),PTR_DAT_04bb37e0,
                   *(undefined4 *)PTR_DAT_04bb4e20,0);
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x1aa0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x1aa0) + 0x18), puVar10 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar10)();
      }
    }
  }
  FUN_02471f38(param_1,PTR_DAT_04bb37e0,0,0xffffffff);
  puVar1 = PTR_DAT_04bc31b0;
  if ((param_2 & 1) == 0) {
    return;
  }
  uVar8 = (ulong)*param_1;
  if (7 < *param_1) {
    return;
  }
  local_3c = 0;
  plVar12 = (long *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 8);
  plVar9 = (long *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x10);
  lVar7 = *(long *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x18);
  local_a8 = CONCAT44(local_a8._4_4_,*(uint *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x20));
  local_38 = 0;
  local_a8._0_4_ = *(uint *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x20) & 0xfffeffff;
  if (((*plVar12 != *plVar12 || *(long *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x10) != *plVar9) ||
      *(long *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x18) != lVar7) ||
      *(uint *)(PTR_DAT_04bc31b0 + uVar8 * 0x30 + 0x20) != (uint)local_a8) {
    *plVar12 = *plVar12;
    *(long *)(puVar1 + uVar8 * 0x30 + 0x10) = *plVar9;
    *(long *)(puVar1 + uVar8 * 0x30 + 0x18) = lVar7;
    *(uint *)(puVar1 + uVar8 * 0x30 + 0x20) = (uint)local_a8;
    uVar8 = (ulong)*param_1;
    lVar7 = DAT_054f5738;
    if (7 < *param_1) goto LAB_02519aec;
  }
  lVar7 = DAT_054f5738 + uVar8 * 0x80;
  uVar4 = *(undefined4 *)(puVar1 + uVar8 * 0x30 + 0x1f);
  uVar2 = *(undefined8 *)(puVar1 + uVar8 * 0x30 + 8);
  uVar3 = *(undefined8 *)(puVar1 + uVar8 * 0x30 + 0x10);
  *(undefined8 *)(lVar7 + 0x2f8) = *(undefined8 *)(puVar1 + uVar8 * 0x30 + 0x18);
  *(undefined8 *)(lVar7 + 0x2f0) = uVar3;
  *(undefined8 *)(lVar7 + 0x2e8) = uVar2;
  *(undefined4 *)(lVar7 + 0x2ff) = uVar4;
  bVar5 = *param_1;
  bVar6 = 7 < bVar5;
  if (bVar6) {
    bVar5 = 0xff;
  }
  puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar5 * 0x70;
  if (bVar6) {
    puVar1 = PTR_DAT_04bc31b8;
  }
  uVar2 = *(undefined8 *)(puVar1 + 8);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(lVar7 + 0x318) = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(lVar7 + 0x310) = uVar3;
  *(undefined8 *)(lVar7 + 0x308) = uVar2;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  uVar13 = *(undefined8 *)(puVar1 + 0x28);
  uVar3 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(lVar7 + 0x338) = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(lVar7 + 0x330) = uVar3;
  *(undefined8 *)(lVar7 + 0x328) = uVar13;
  *(undefined8 *)(lVar7 + 800) = uVar2;
  uVar2 = *(undefined8 *)(puVar1 + 0x40);
  uVar3 = *(undefined8 *)(puVar1 + 0x48);
  uVar13 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(lVar7 + 0x356) = *(undefined8 *)(puVar1 + 0x56);
  *(undefined8 *)(lVar7 + 0x350) = uVar13;
  *(undefined8 *)(lVar7 + 0x348) = uVar3;
  *(undefined8 *)(lVar7 + 0x340) = uVar2;
LAB_02519aec:
  local_60 = *(undefined8 *)(lVar7 + 0x348);
  local_3c = 0;
  local_58 = *(undefined8 *)(lVar7 + 0x350);
  local_50 = *(undefined8 *)(lVar7 + 0x358);
  local_48 = *(undefined8 *)(lVar7 + 0x360);
  local_80 = *(undefined8 *)(lVar7 + 0x328);
  local_78 = *(undefined8 *)(lVar7 + 0x330);
  local_70 = *(undefined8 *)(lVar7 + 0x338);
  local_68 = *(undefined8 *)(lVar7 + 0x340);
  local_a0 = *(undefined8 *)(lVar7 + 0x308);
  local_98 = *(undefined8 *)(lVar7 + 0x310);
  local_90 = *(undefined8 *)(lVar7 + 0x318);
  local_88 = *(undefined8 *)(lVar7 + 800);
  local_c0 = *(undefined8 *)(lVar7 + 0x2e8);
  local_b8 = *(undefined8 *)(lVar7 + 0x2f0);
  local_b0 = *(undefined8 *)(lVar7 + 0x2f8);
  local_a8 = *(ulong *)(lVar7 + 0x300);
  local_38 = 0;
  local_3c = 0;
  local_a8 = *(ulong *)(lVar7 + 0x300) & 0xfffffffffffeffff;
  local_38 = 0x1000001;
  local_34 = 1;
  FUN_02558ce0(param_1,&local_c0,&local_38);
  return;
}

