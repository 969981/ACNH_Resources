
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0254ff74(byte *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  short local_48;
  undefined4 local_46;
  
  puVar3 = PTR_DAT_04bb27c0;
  puVar9 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar11 = *puVar9;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x02550070;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02550070;
    }
  }
  uVar11 = 0;
joined_r0x02550070:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
    if ((int)lVar7 != 1) {
      return 0;
    }
    if ((uVar5 & uVar11) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    local_7c = 0x9d;
    uVar11 = 0;
    if (plVar10[0xe] != 0) {
      uVar1 = *(uint *)(plVar10[0xe] + 0x280);
      uVar11 = 0;
      if (uVar1 < 0x149) {
        uVar11 = uVar1;
      }
    }
    if (uVar11 == 0x9d) {
      local_6c = 0;
      *(undefined1 *)((long)plVar10 + 0xadc) = 1;
      local_4c = 0x3f800000;
      local_64 = 0;
      local_5c = 0;
      local_48 = 0x100;
      local_46 = 0;
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      uVar8 = *(undefined8 *)((long)plVar10 + 0x1902);
      local_68 = 3;
      local_7c = (undefined4)uVar8;
      local_78 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack_74 = 2;
      uVar14 = 0x3a83126f;
      local_58 = (float)*(int *)((long)plVar10 + 0x1914) * 0.001;
      fVar13 = (float)(int)(short)plVar10[0x323] * 0.25;
      local_70 = 0;
      local_50 = (float)*(int *)((long)plVar10 + 0x191a) * 0.001;
      fStack_54 = fVar13;
      uVar8 = FUN_0251e98c(1);
      uVar12 = FUN_02366a5c(uVar8,&local_7c);
      local_64 = CONCAT44(fVar13,uVar12);
      local_6c = 0;
      uVar11 = (uint)local_46 >> 0x18;
      uVar2 = (ushort)local_46;
      local_46._0_3_ = CONCAT12(1,uVar2 & 0xff00);
      local_46 = CONCAT13((char)uVar11,(undefined3)local_46);
      local_48 = (ushort)(*(char *)((long)plVar10 + 0x1925) != '\0') << 8;
      local_5c = uVar14;
      FUN_0236b830(plVar10,&local_7c);
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      local_88 = *(undefined8 *)((long)plVar10 + 0x1902);
      local_8c = 3;
      FUN_02326c70(param_1,&local_88,&local_8c);
      if ((*(byte *)((long)plVar10 + 0x17cd) >> 4 & 1) != 0) {
        FUN_0236b9d0(plVar10,(long)plVar10 + 0x1ee9);
      }
      return 1;
    }
  }
  return 0;
}

