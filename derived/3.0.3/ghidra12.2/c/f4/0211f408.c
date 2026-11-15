
void FUN_0211f408(long param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  uint *puVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0211f494;
LAB_0211f4f4:
    bVar9 = *pbVar6;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar5 + 0x158);
    }
    if ((*pbVar6 < 8) ||
       (((*(int *)(lVar5 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar6 < 8)))) goto LAB_0211f4f4;
LAB_0211f494:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211f4ec:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_0211f4f4;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar11 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar7 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar7 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar7 & 8) != 0) {
        pbVar6 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar9 = *pbVar6;
    if (7 < bVar9) goto LAB_0211f4ec;
  }
  bVar10 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar9 != bVar10) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xf4) != '\0') {
    return;
  }
  if (lVar5 == 0) {
    uVar8 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0211f58c;
LAB_0211f5f8:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_0211f614;
    puVar7 = (uint *)(*(long *)PTR_DAT_04bb4718 + uVar8 * 4 + 0xde8);
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar5 + 0x158);
    }
    uVar8 = (ulong)*pbVar6;
    if ((*pbVar6 < 8) ||
       (((*(int *)(lVar5 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar9 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar8 = (ulong)bVar9, bVar9 < 8))))
    goto LAB_0211f5f8;
LAB_0211f58c:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar5 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar5 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar7 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar7 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar7 & 8) != 0) {
          pbVar6 = (byte *)(lVar5 + 0x471);
        }
      }
      uVar8 = (ulong)*pbVar6;
      if (*pbVar6 < 8) goto LAB_0211f5f8;
    }
    uVar8 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0211f5f8;
LAB_0211f614:
    puVar7 = (uint *)PTR_DAT_04bb3238;
  }
  local_14 = *puVar7;
  local_70 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_6e = PTR_DAT_04bb37e0[2];
  uStack_6d = PTR_DAT_04bb37e0[3];
  local_38 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  if (((local_14 == 0) ||
      (plVar12 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(local_14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != local_14)))) {
    plVar12 = (long *)0x0;
  }
  uStack_6c = local_74;
  local_68 = local_70;
  local_66 = uStack_6e;
  local_65 = uStack_6d;
  local_64 = local_74;
  local_5c = local_74;
  local_58 = local_70;
  local_56 = uStack_6e;
  local_55 = uStack_6d;
  local_54 = local_74;
  uStack_50 = local_70;
  uStack_4e = uStack_6e;
  uStack_4d = uStack_6d;
  local_4c = local_74;
  local_48 = local_70;
  uStack_46 = uStack_6e;
  uStack_45 = uStack_6d;
  uStack_44 = local_74;
  local_40 = local_70;
  local_3e = uStack_6e;
  local_3d = uStack_6d;
  local_3c = local_74;
  local_34 = local_74;
  if ((*(int *)(lVar5 + 0x288) == 1) || (*(int *)(lVar5 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar13 = 1;
      goto joined_r0x0211f780;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211f780;
    }
  }
  uVar13 = 0;
joined_r0x0211f780:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3770);
    if (((uVar13 & uVar3) == 1) && (plVar12 = (long *)plVar12[0xc], plVar12 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
      if ((uVar8 & 1) != 0) {
        FUN_0233e334(plVar12,&local_78,0);
        iVar2 = FUN_02119c7c(param_1,&local_14);
        if ((iVar2 != -1) && (*(long *)PTR_DAT_04bb47d8 != 0)) {
          FUN_021206a0(param_1,iVar2,&local_78,1);
          FUN_02120fe0(param_1,iVar2,&local_60,1);
        }
        *(undefined4 *)(param_1 + 0x140) = local_74;
        *(undefined4 *)(param_1 + 0x13c) = local_78;
        *(ulong *)(param_1 + 0x144) =
             CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,local_70)));
        *(ulong *)(param_1 + 0x14c) =
             CONCAT44(local_64,CONCAT13(local_65,CONCAT12(local_66,local_68)));
        *(ulong *)(param_1 + 0x16c) =
             CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48)));
        *(undefined4 *)(param_1 + 0x154) = local_60;
        *(undefined4 *)(param_1 + 0x158) = local_5c;
        *(undefined2 *)(param_1 + 0x15c) = local_58;
        *(undefined1 *)(param_1 + 0x15e) = local_56;
        *(undefined1 *)(param_1 + 0x15f) = local_55;
        *(ulong *)(param_1 + 0x160) =
             CONCAT17(uStack_4d,CONCAT16(uStack_4e,CONCAT24(uStack_50,local_54)));
        *(undefined4 *)(param_1 + 0x168) = local_4c;
        *(ulong *)(param_1 + 0x174) =
             CONCAT44(local_3c,CONCAT13(local_3d,CONCAT12(local_3e,local_40)));
        *(undefined4 *)(param_1 + 0x17c) = local_38;
        *(undefined4 *)(param_1 + 0x180) = local_34;
      }
    }
  }
  return;
}

