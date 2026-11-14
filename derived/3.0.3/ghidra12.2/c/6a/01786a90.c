
/* WARNING: Removing unreachable block (ram,0x01786ba8) */

void FUN_01786a90(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ushort uVar10;
  uint *puVar11;
  ulong *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
         (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8), lVar15 != 0)) {
        local_68 = lVar15;
      }
    }
  }
  uVar4 = FUN_01b020f0(&local_78);
  if (uVar4 == 0xffff) {
    return;
  }
  lVar15 = param_1[0x22a];
  if (lVar15 == 0) {
    return;
  }
  local_48 = (ulong)local_48._4_4_ << 0x20;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = s_mOutside_049c33d0;
  plVar8 = param_1 + 0x22c;
  if ((param_1[0x232] != 0) && (lVar9 = *plVar8, lVar9 != 0)) {
    if (*(int *)(lVar9 + 0x30) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      lVar17 = *(long *)(lVar9 + 0x38);
      lVar16 = 0;
      lVar9 = (long)*(int *)(lVar9 + 0x30) << 3;
      uVar5 = 0xffffffff;
      do {
        plVar7 = (long *)**(undefined8 **)(lVar17 + lVar16 * 8);
        iVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7,&local_88);
        if (iVar6 != -1) {
          uVar5 = (uint)lVar16 & 0xffff | iVar6 << 0x10;
          break;
        }
        lVar16 = lVar16 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    *(uint *)param_1[0x232] = uVar5;
  }
  if (*(int *)(lVar15 + 0x30) != 0) {
    lVar17 = *(long *)(lVar15 + 0x38);
    lVar9 = 0;
    lVar16 = (long)*(int *)(lVar15 + 0x30) << 3;
    do {
      plVar7 = (long *)**(undefined8 **)(lVar17 + lVar9 * 8);
      uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7,&DAT_0528ccf0);
      if (uVar5 != 0xffffffff) {
        if (((((uint)lVar9 ^ 0xffffffff) & 0xffff) != 0) && ((uVar5 & 0xffff) != 0xffff)) {
          FUN_016102c0(plVar8,1,&DAT_0528ccf0,&DAT_0528cd60);
          FUN_016102c0(plVar8,0,&DAT_0528ccf0,&DAT_0528cd50);
        }
        break;
      }
      lVar9 = lVar9 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
  }
  local_98 = 0x3e0000003e000000;
  local_90 = 0;
  local_88 = &DAT_3f8000003f800000;
  local_48 = 0x3faaaaab3faaaaab;
  lVar9 = *(long *)PTR_DAT_04bb46d0;
  uVar5 = (uint)uVar4 - (uint)*(ushort *)(lVar9 + 0x200);
  if (uVar5 < *(uint *)(lVar9 + 0x1e0)) {
    puVar11 = *(uint **)(*(long *)(lVar9 + 0x1e8) + (long)(int)uVar5 * 8);
    uVar10 = 0;
    if (puVar11 == (uint *)0x0) goto LAB_01786dac;
    uVar5 = *puVar11;
    if (uVar5 != 0 && puVar11 != (uint *)(ulong)uVar5) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
      if (((*puVar13 != 0) && (uVar5 = puVar13[1], uVar5 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar13 + lVar9 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar5);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bbe4e0) &&
             (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bbe4e0 + 8) + (long)(int)uVar2 * 2),
             uVar10 < 2)) goto LAB_01786dac;
        }
      }
    }
  }
  uVar10 = 0;
LAB_01786dac:
  if (uVar10 != 0) {
    local_88 = (undefined1 *)0x3faaaaab3faaaaab;
    local_90 = 0x3e0000003e000000;
  }
  puVar12 = (ulong *)param_1[0x230];
  lVar9 = param_1[0x22c];
  if (puVar12 != (ulong *)0x0 && lVar9 != 0) {
    uVar14 = puVar12[1 < *(uint *)(param_1 + 0x22f)];
  }
  else {
    uVar14 = 0xffffffffffff;
  }
  if (((((uVar14 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) && ((uVar14 & 0xffff) != 0xffff)) &&
     ((uVar14 & 0xffff0000) != 0xffff0000)) {
    if (puVar12 != (ulong *)0x0 && lVar9 != 0) {
      uVar14 = puVar12[1 < *(uint *)(param_1 + 0x22f)];
    }
    else {
      uVar14 = 0xffffffffffff;
    }
    plVar7 = (long *)**(undefined8 **)
                       (*(long *)(lVar15 + 0x38) +
                       (-(uVar14 >> 0xf & 1) & 0xfffffffffff80000 | (uVar14 & 0xffff) << 3));
    (**(code **)(*plVar7 + 0x178))
              (0,plVar7,(int)uVar14 >> 0x10,(int)(uVar14 >> 0x10) >> 0x10,&local_48,&local_98);
    puVar12 = (ulong *)param_1[0x230];
    lVar9 = param_1[0x22c];
  }
  if (puVar12 != (ulong *)0x0 && lVar9 != 0) {
    uVar14 = *puVar12;
  }
  else {
    uVar14 = 0xffffffffffff;
  }
  if (((((~(uint)uVar14 & 0xffff) != 0) && ((uVar14 & 0xffff0000) != 0xffff0000)) && (uVar10 != 0))
     && ((uVar14 & 0xffff00000000) != 0xffff00000000)) {
    if (puVar12 != (ulong *)0x0 && lVar9 != 0) {
      uVar14 = *puVar12;
    }
    else {
      uVar14 = 0xffffffffffff;
    }
    plVar7 = (long *)**(undefined8 **)
                       (*(long *)(lVar15 + 0x38) +
                       (-(uVar14 >> 0xf & 1) & 0xfffffffffff80000 | (uVar14 & 0xffff) << 3));
    (**(code **)(*plVar7 + 0x178))
              (0,plVar7,(int)uVar14 >> 0x10,(int)(uVar14 >> 0x10) >> 0x10,&local_88,&local_90);
    lVar9 = *plVar8;
  }
  if ((lVar9 != 0) && ((uint *)param_1[0x232] != (uint *)0x0)) {
    uVar5 = *(uint *)param_1[0x232];
    if ((uVar5 < 0xffff0000) && ((uVar5 & 0xffff) != 0xffff)) {
      plVar8 = (long *)**(undefined8 **)
                         (*(long *)(lVar9 + 0x38) +
                         (-((ulong)(uVar5 >> 0xf) & 1) & 0xfffffffffff80000 |
                         ((ulong)uVar5 & 0xffff) << 3));
      (**(code **)(*plVar8 + 0x1c8))(plVar8,(int)uVar5 >> 0x10,0);
    }
  }
  uVar14 = FUN_018017d0(param_1);
  if (((uVar14 & 1) != 0) && ((char)param_1[0x252] == '\0')) {
    puVar1 = &DAT_0528c8a0;
    if (uVar4 != 0xb5) {
      puVar1 = &DAT_0528c860;
    }
    if (param_1[0x227] != 0) {
      FUN_038501b0(0x41200000,param_1[0x227],0);
      lVar15 = param_1[0x227];
      if (*(char *)(lVar15 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar15 + 0x2c0) = 0;
        FUN_03855b20(lVar15 + 0xc0,0);
      }
      FUN_0384f8c0(lVar15,puVar1,0,0);
      (**(code **)(*param_1 + 0x120))(param_1,puVar1,10,0);
    }
  }
  return;
}

