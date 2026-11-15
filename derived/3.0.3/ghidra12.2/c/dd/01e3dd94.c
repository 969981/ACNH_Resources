
void FUN_01e3dd94(long param_1,undefined8 *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  byte local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x500) != 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x508);
  if (iVar6 == -1) {
    return;
  }
  lVar7 = FUN_0265c3e0(iVar6);
  if (lVar7 == 0) {
    return;
  }
  local_6c[0] = *param_3;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar8 = FUN_025830c0(DAT_055021a0,local_6c,1);
  if ((*(long *)(lVar7 + 0x28) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x10), puVar9 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar9)();
    uVar10 = uVar10 & 0xffffffff;
  }
  lVar16 = 0;
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x17f68) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x17f68), puVar9 == (undefined8 *)0x0)) {
      lVar16 = *(long *)(lVar8 + 0x17f50) + *(long *)(lVar8 + 0x17f48);
    }
    else {
      uVar12 = (**(code **)*puVar9)();
      lVar16 = *(long *)(lVar8 + 0x17f50) + *(long *)(lVar8 + 0x17f48);
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar8 + 0x17f68) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x17f68) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  if (1 < *(uint *)(DAT_0537d558 + 0x10)) {
    lVar8 = *(long *)(param_1 + 0x690);
    if (lVar8 != 0) {
      lVar14 = *DAT_0537d558;
      bVar13 = *(byte *)(lVar14 + 0x473);
      uVar12 = (ulong)(char)bVar13;
      pbVar15 = PTR_DAT_04bc1220;
      if (uVar12 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar14 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
        if (7 < bVar13) {
          puVar1 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x473);
        }
      }
      bVar2 = *(byte *)(lVar8 + 7) >> 4 & 3;
      if (bVar2 == 1) goto LAB_01e3dff4;
      if (bVar2 != 2) {
        if (bVar2 == 3) goto LAB_01e3dff4;
        uVar3 = *(ushort *)(lVar8 + 5) >> 2;
        if ((ushort)*pbVar15 != (uVar3 & 0xff)) {
          if ((bVar13 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar3 & 0xff))) {
            if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar3 & 0xff)) goto LAB_01e3dff4;
          }
          else {
            pbVar15 = (byte *)(lVar14 + 0x48) + (uVar12 & 0xffffffff) * 0x80;
            if (7 < bVar13) {
              pbVar15 = (byte *)(lVar14 + 0x48);
            }
            if ((*pbVar15 >> 3 & 1) != 0) {
              lVar8 = DAT_0537d558[2] + 0x108 + (uVar12 & 0xffffffff) * 0xc;
              if (0xb < bVar13) {
                lVar8 = DAT_0537d558[2] + 0x108;
              }
              if (*(char *)(lVar8 + 10) == '\0') goto LAB_01e3dff4;
            }
          }
        }
      }
    }
    bVar13 = *param_3;
    local_68 = *param_2;
    uVar12 = local_60 >> 0x18;
    local_88 = (undefined *)((ulong)local_88._7_1_ << 0x38);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_88 = (undefined *)CONCAT26(local_88._6_2_,0xff0000000000);
    local_60._0_3_ = CONCAT12(bVar13,(short)iVar6);
    local_60 = CONCAT53((int5)uVar12,(undefined3)local_60) & 0xffffffff00ffffff;
    if (-1 < DAT_053d08f0) {
      FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_053d08f0,&local_88,&local_68,0xc,0);
    }
  }
LAB_01e3dff4:
  puVar4 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = *(undefined4 *)param_2;
  uStack_7c = *(undefined4 *)((long)param_2 + 4);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar8 != 0) {
          local_78 = lVar8;
        }
      }
    }
  }
  iVar6 = FUN_01ae1100(&local_88);
  local_68 = CONCAT44(local_68._4_4_,iVar6);
  if (iVar6 == 1) {
    if ((*(long *)(lVar7 + 0x28) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
      local_68 = *(undefined8 *)(lVar7 + 8);
      local_60 = *(ulong *)(lVar7 + 0x10);
      local_58 = 0x13230;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
    }
    FUN_026934e8(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),param_2,lVar16,0,0,0,1,1);
  }
  else if (iVar6 == 2) {
    if ((*(long *)(lVar7 + 0x28) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
      local_68 = *(undefined8 *)(lVar7 + 8);
      local_60 = *(ulong *)(lVar7 + 0x10);
      local_58 = 0x13230;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
    }
    FUN_0269296c(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),param_2,lVar16,0,0,0,1,1);
  }
  else if (iVar6 == 5) {
    if ((*(long *)(lVar7 + 0x28) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
      local_68 = *(undefined8 *)(lVar7 + 8);
      local_60 = *(ulong *)(lVar7 + 0x10);
      local_58 = 0x13230;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
    }
    FUN_0268e6d0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),param_2,lVar16,0,0,0,1,1);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

