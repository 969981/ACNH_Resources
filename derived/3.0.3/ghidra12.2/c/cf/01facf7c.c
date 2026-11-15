
void FUN_01facf7c(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  long lVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  uint *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar4 = PTR_DAT_04bb2010;
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar14 = *(float *)(lVar8 + 0x278);
  fVar15 = *(float *)(lVar8 + 0x280);
  local_70 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_58 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iStack_54 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  local_60 = puVar1;
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar12 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  puStack_78 = PTR_DAT_04bb3140 + 0x10;
  local_80 = 0;
  local_88 = puVar1;
  puVar7 = (undefined2 *)FUN_01a5190c(&puStack_78,0,&local_60,&local_88);
  puVar1 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_a0 = &PTR_FUN_04a36b50;
  local_98 = *puVar7;
  local_96 = *(undefined1 *)(puVar7 + 1);
  local_95 = *(undefined1 *)((long)puVar7 + 3);
  local_94 = *(undefined4 *)(puVar7 + 2);
  local_90 = (uint *)0x0;
  uVar6 = FUN_0277d6c4(&local_98);
  puVar9 = (uint *)0x0;
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
      puVar9 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar7);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
          puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar9 != (uint *)0x0) {
            local_90 = puVar9;
          }
        }
        else {
          puVar9 = (uint *)0x0;
        }
      }
    }
    else {
      puVar9 = (uint *)0x0;
    }
  }
  if ((param_2 & 1) != 0) {
    uVar10 = 0;
    if (((puVar9 != (uint *)0x0) && (uVar6 = *puVar9, uVar6 != 0)) &&
       (puVar9 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar11 + lVar8 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar8 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326d48) &&
               (uVar10 = *(ushort *)(DAT_05326d50 + (long)(int)uVar2 * 2), uVar10 < 0x52))
            goto LAB_01fad254;
          }
        }
        uVar10 = 0;
      }
    }
LAB_01fad254:
    if ((uVar10 & 0xfffe) != 10) {
      return;
    }
    goto LAB_01fad318;
  }
  uVar6 = 0;
  if (((puVar9 != (uint *)0x0) && (uVar2 = *puVar9, uVar2 != 0)) && (puVar9 != (uint *)(ulong)uVar2)
     ) {
    puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
    uVar6 = 0;
    if (*puVar11 != 0) {
      uVar6 = puVar11[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar11 + lVar8 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar8 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326d48) &&
             (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar2 * 2), uVar6 < 0x52))
          goto LAB_01fad304;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01fad304:
  if (uVar6 - 1 < 9) {
    return;
  }
LAB_01fad318:
  puStack_c0 = puVar4 + 0x10;
  local_b8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = 0;
  local_b0 = puStack_c0;
  FUN_01afb480(&local_a0,&local_c8);
  *(undefined2 *)(param_1 + 0x11fc8) = *puVar7;
  *(undefined1 *)(param_1 + 0x11fca) = *(undefined1 *)(puVar7 + 1);
  *(undefined1 *)(param_1 + 0x11fcb) = *(undefined1 *)((long)puVar7 + 3);
  uVar3 = *(undefined4 *)(puVar7 + 2);
  *(int *)(param_1 + 0x11fe0) = (int)local_b8 + (int)local_80;
  *(int *)(param_1 + 0x11fe4) = local_b8._4_4_ + local_80._4_4_;
  *(int *)(param_1 + 0x11ff0) = (int)local_a8 + (int)local_80;
  *(int *)(param_1 + 0x11ff4) = local_a8._4_4_ + local_80._4_4_;
  *(undefined4 *)(param_1 + 0x11ff8) = 0;
  *(undefined4 *)(param_1 + 0x12000) = 0;
  *(undefined4 *)(param_1 + 0x11fcc) = uVar3;
  *(float *)(param_1 + 0x11ffc) =
       ((float)((int)local_b8 + (int)local_80) * 5.0 +
       (float)((int)local_a8 + (int)local_80) * 5.0 + 5.0) * 0.5;
  *(float *)(param_1 + 0x12004) =
       ((float)(local_b8._4_4_ + local_80._4_4_) * 5.0 +
       (float)(local_a8._4_4_ + local_80._4_4_) * 5.0 + 5.0) * 0.5;
  return;
}

