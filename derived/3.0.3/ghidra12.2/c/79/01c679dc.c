
void FUN_01c679dc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined *puVar19;
  bool bVar20;
  int iVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined *local_68;
  undefined local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined *local_50;
  undefined *local_48;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 != 0xffffffff) {
    if (uVar3 == 6) {
      uVar22 = *param_2;
      goto LAB_01c67a40;
    }
    (*(code *)(&PTR_FUN_04a427b8)[uVar3])(&local_68,param_2);
  }
  uVar22 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 8) = 6;
LAB_01c67a40:
  *(undefined8 *)(param_1 + 0x9c) = uVar22;
  uVar22 = 0;
  if (*(undefined8 **)(DAT_05351250 + 0x50) != (undefined8 *)0x0) {
    uVar22 = **(undefined8 **)(DAT_05351250 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x4b8) = uVar22;
  if (((DAT_053505d8 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_053505d8), iVar21 != 0)) {
    FUN_006d8678(&DAT_053505a0,&DAT_040bdb36,0x5c08d749);
    __cxa_guard_release(&DAT_053505d8);
  }
  (**(code **)(DAT_053505a0 + 0x18))(&DAT_053505a0);
  puVar19 = PTR_DAT_04bc0ec8;
  local_60 = 0;
  local_48 = (undefined *)0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_68 = puVar1;
  local_50 = &local_60;
  FUN_0018b070(&local_68,DAT_053505a8,0xffffffffffffffff);
  ppuVar2 = *(undefined ***)(param_1 + 0x50);
  if (ppuVar2 < *(undefined ***)(param_1 + 0x58)) {
    *ppuVar2 = puVar1;
    ppuVar23 = ppuVar2 + 1;
    *(undefined1 *)ppuVar23 = 0;
    ppuVar2[3] = (undefined *)ppuVar23;
    ppuVar2[4] = (undefined *)0x10;
    if (ppuVar2 != &local_68) {
      *(undefined1 *)(ppuVar2 + 1) = local_60;
      uVar4 = *(undefined1 *)((long)ppuVar2 + 9);
      uVar5 = *(undefined1 *)((long)ppuVar2 + 10);
      uVar6 = *(undefined1 *)((long)ppuVar2 + 0xb);
      bVar20 = local_50 == &local_60;
      local_60 = 0;
      uVar7 = *(undefined1 *)((long)ppuVar2 + 0xc);
      uVar8 = *(undefined1 *)((long)ppuVar2 + 0xd);
      uVar9 = *(undefined1 *)((long)ppuVar2 + 0xe);
      uVar10 = *(undefined1 *)((long)ppuVar2 + 0xf);
      uVar11 = *(undefined1 *)(ppuVar2 + 2);
      uVar12 = *(undefined1 *)((long)ppuVar2 + 0x11);
      uVar13 = *(undefined1 *)((long)ppuVar2 + 0x12);
      *(undefined1 *)((long)ppuVar2 + 9) = local_5f;
      uVar14 = *(undefined1 *)((long)ppuVar2 + 0x13);
      uVar15 = *(undefined1 *)((long)ppuVar2 + 0x14);
      uVar16 = *(undefined1 *)((long)ppuVar2 + 0x15);
      uVar17 = *(undefined1 *)((long)ppuVar2 + 0x16);
      uVar18 = *(undefined1 *)((long)ppuVar2 + 0x17);
      *(undefined1 *)((long)ppuVar2 + 10) = local_5e;
      *(undefined1 *)((long)ppuVar2 + 0xb) = local_5d;
      *(undefined1 *)((long)ppuVar2 + 0xc) = local_5c;
      *(undefined1 *)((long)ppuVar2 + 0xd) = local_5b;
      *(undefined1 *)((long)ppuVar2 + 0xe) = local_5a;
      *(undefined1 *)((long)ppuVar2 + 0xf) = local_59;
      *(undefined1 *)(ppuVar2 + 2) = local_58;
      *(undefined1 *)((long)ppuVar2 + 0x11) = local_57;
      *(undefined1 *)((long)ppuVar2 + 0x12) = local_56;
      *(undefined1 *)((long)ppuVar2 + 0x13) = local_55;
      *(undefined1 *)((long)ppuVar2 + 0x14) = local_54;
      *(undefined1 *)((long)ppuVar2 + 0x15) = local_53;
      *(undefined1 *)((long)ppuVar2 + 0x16) = local_52;
      *(undefined1 *)((long)ppuVar2 + 0x17) = local_51;
      ppuVar2[3] = local_50;
      ppuVar2[4] = local_48;
      local_48 = (undefined *)0x10;
      local_5f = uVar4;
      local_5e = uVar5;
      local_5d = uVar6;
      local_5c = uVar7;
      local_5b = uVar8;
      local_5a = uVar9;
      local_59 = uVar10;
      local_58 = uVar11;
      local_57 = uVar12;
      local_56 = uVar13;
      local_55 = uVar14;
      local_54 = uVar15;
      local_53 = uVar16;
      local_52 = uVar17;
      local_51 = uVar18;
      local_50 = &local_60;
      if (bVar20) {
        ppuVar2[3] = (undefined *)ppuVar23;
      }
    }
    *(undefined ***)(param_1 + 0x50) = ppuVar2 + 5;
  }
  else {
    FUN_01c67120(param_1 + 0x48,&local_68);
  }
  local_68 = puVar19 + 0x10;
  FUN_0018b1a0(&local_68);
  return;
}

