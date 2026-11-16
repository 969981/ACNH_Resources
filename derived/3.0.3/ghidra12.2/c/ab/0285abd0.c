
void FUN_0285abd0(long param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined *local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar5 = PTR_DAT_04bb43c0;
  sVar4 = *param_3;
  uVar2 = (undefined1)param_3[1];
  uVar3 = *(undefined1 *)((long)param_3 + 3);
  uVar1 = *(undefined4 *)(param_3 + 2);
  local_48 = sVar4;
  local_46 = uVar2;
  local_45 = uVar3;
  local_44 = uVar1;
  if (sVar4 == -2) {
    *(undefined2 *)(param_1 + 8) = 0xfffe;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_48);
    lVar7 = *(long *)puVar5;
    if (lVar7 == 0) goto LAB_0285ad68;
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0285ad68;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_68 = 0;
    local_70 = sVar4;
    local_6e = uVar2;
    local_6d = uVar3;
    local_6c = uVar1;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_48);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
          local_68 = lVar7;
        }
      }
    }
    uVar6 = FUN_01b01f10(&local_78);
    lVar7 = *(long *)PTR_DAT_04bb46d0;
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x400);
    if ((*(uint *)(lVar7 + 0x3e0) <= uVar6) ||
       (*(long *)(*(long *)(lVar7 + 1000) + (long)(int)uVar6 * 8) == 0)) goto LAB_0285ad68;
    *(short *)(param_1 + 8) = sVar4;
  }
  *(undefined1 *)(param_1 + 10) = uVar2;
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
LAB_0285ad68:
  sVar4 = *param_2;
  uVar2 = (undefined1)param_2[1];
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  if (sVar4 == -2) {
    *(undefined2 *)(param_1 + 0x10) = 0xfffe;
  }
  else {
    lVar8 = *(long *)puVar5;
    local_80 = sVar4;
    local_7e = uVar2;
    local_7d = uVar3;
    local_7c = uVar1;
    uVar6 = FUN_0277d6c4(&local_80);
    lVar7 = *(long *)puVar5;
    if (lVar7 == 0) {
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar6) {
      return;
    }
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
      return;
    }
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_68 = 0;
    local_70 = sVar4;
    local_6e = uVar2;
    local_6d = uVar3;
    local_6c = uVar1;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_80);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
          local_68 = lVar7;
        }
      }
    }
    uVar6 = FUN_01b020f0(&local_78);
    lVar7 = *(long *)PTR_DAT_04bb46d0;
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x200);
    if (*(uint *)(lVar7 + 0x1e0) <= uVar6) {
      return;
    }
    if (*(long *)(*(long *)(lVar7 + 0x1e8) + (long)(int)uVar6 * 8) == 0) {
      return;
    }
    *(short *)(param_1 + 0x10) = sVar4;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  *(undefined1 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

