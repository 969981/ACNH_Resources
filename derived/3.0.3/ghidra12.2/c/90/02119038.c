
void FUN_02119038(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
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
  
  puVar4 = PTR_DAT_04bb27c0;
  if ((*(ushort *)(param_1 + 0x1528) >> 6 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    uVar8 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_021190cc;
LAB_02119138:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_02119154;
    uVar2 = *(uint *)(*(long *)PTR_DAT_04bb4718 + uVar8 * 4 + 0xde8);
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    uVar8 = (ulong)*pbVar9;
    if ((*pbVar9 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar8 = (ulong)bVar3, bVar3 < 8))))
    goto LAB_02119138;
LAB_021190cc:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar10 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar10 + 0x471);
        }
      }
      uVar8 = (ulong)*pbVar9;
      if (*pbVar9 < 8) goto LAB_02119138;
    }
    uVar8 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02119138;
LAB_02119154:
    uVar2 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar2 == 0) {
    return;
  }
  local_70 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_6e = PTR_DAT_04bb37e0[2];
  uStack_6d = PTR_DAT_04bb37e0[3];
  local_38 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar10 = *(long *)PTR_DAT_04bb27c0;
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
  if (lVar10 == 0) goto LAB_0211934c;
  plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar2 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar2)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_021192ac;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_021192ac:
    uVar12 = 0;
  }
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
    if (((uVar12 & uVar6) == 1) && (plVar11 = (long *)plVar11[0xc], plVar11 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3798);
      if ((uVar8 & 1) != 0) {
        FUN_0233e334(plVar11,&local_78,0);
        *(uint *)(param_1 + 0x1624) = uVar2;
        *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 0x80;
      }
    }
  }
LAB_0211934c:
  *(undefined4 *)(param_1 + 0x140) = local_74;
  *(undefined4 *)(param_1 + 0x13c) = local_78;
  *(ulong *)(param_1 + 0x144) = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,local_70)))
  ;
  *(ulong *)(param_1 + 0x14c) = CONCAT44(local_64,CONCAT13(local_65,CONCAT12(local_66,local_68)));
  *(ulong *)(param_1 + 0x16c) = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48)))
  ;
  *(undefined4 *)(param_1 + 0x154) = local_60;
  *(undefined4 *)(param_1 + 0x158) = local_5c;
  *(undefined2 *)(param_1 + 0x15c) = local_58;
  *(undefined1 *)(param_1 + 0x15e) = local_56;
  *(undefined1 *)(param_1 + 0x15f) = local_55;
  *(ulong *)(param_1 + 0x160) = CONCAT17(uStack_4d,CONCAT16(uStack_4e,CONCAT24(uStack_50,local_54)))
  ;
  *(undefined4 *)(param_1 + 0x168) = local_4c;
  *(ulong *)(param_1 + 0x174) = CONCAT44(local_3c,CONCAT13(local_3d,CONCAT12(local_3e,local_40)));
  *(undefined4 *)(param_1 + 0x17c) = local_38;
  *(undefined4 *)(param_1 + 0x180) = local_34;
  return;
}

