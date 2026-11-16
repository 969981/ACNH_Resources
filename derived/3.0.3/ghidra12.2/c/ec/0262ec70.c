
void FUN_0262ec70(long param_1,ulong param_2,long param_3,uint param_4,long param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ushort uVar16;
  uint *puVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  byte local_7c [4];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    return;
  }
  lVar11 = param_3 + 0x194b0;
  plVar22 = (long *)(param_3 + 0x194b8);
  lVar13 = lVar11;
  if (*plVar22 == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
  }
  if (*(long **)(lVar13 + 0x86b0) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar13 + 0x86b0);
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar7)();
    }
  }
  uVar20 = (uint)param_2;
  uVar1 = uVar20 & 0xffff;
  if (uVar1 < 0x800) {
    bVar19 = *(byte *)(*(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690) + (ulong)(uVar1 >> 3)
                      ) >> (ulong)(uVar20 & 7) & 1;
  }
  else {
    bVar19 = 0;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x86b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x86b0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (bVar19 != 0) {
    return;
  }
  lVar13 = lVar11;
  if (*plVar22 == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar14 = *(long *)(lVar13 + 0x86b0);
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar14 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar13 + 0x86b0) == 0) goto LAB_0262ee00;
      plVar9 = *(long **)(*(long *)(lVar13 + 0x86b0) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_78 = *(long *)(lVar13 + 0x8690);
      local_70 = *(undefined8 *)(lVar13 + 0x8698);
      uStack_68 = 0x1400;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_0262ee00:
  if ((uVar20 & 0xffff) < 0x800) {
    lVar14 = *(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690);
    *(byte *)(lVar14 + (ulong)(uVar1 >> 3)) =
         *(byte *)(lVar14 + (ulong)(uVar1 >> 3)) | (byte)(1 << (param_2 & 7));
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x86b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x86b0) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  uVar8 = 0;
  iVar21 = 0;
  do {
    uVar18 = uVar8 >> 3 & 0x1fffffff;
    uVar2 = (uint)uVar8 & 7;
    if ((((*(byte *)(param_5 + uVar18) >> uVar2 & 1) != 0) &&
        ((uint)uVar8 - (uint)*(ushort *)(param_1 + 0xea6e0) < *(uint *)(param_1 + 0xea6c0))) &&
       (puVar15 = *(uint **)(*(long *)(param_1 + 0xea6c8) +
                             (ulong)*(ushort *)(param_1 + 0xea6e0) * -8 + uVar8 * 8),
       puVar15 != (uint *)0x0)) {
      uVar12 = *puVar15;
      if (uVar12 == 0 || puVar15 == (uint *)(ulong)uVar12) {
LAB_0262ef58:
        uVar12 = 0;
      }
      else {
        puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar12);
        if (((*puVar17 == 0) || (uVar12 = puVar17[1], uVar12 == 0)) ||
           ((ulong)(ushort)puVar17[2] == 0)) goto LAB_0262ef58;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + lVar13 + (ulong)(ushort)puVar17[2] * 8;
        if (lVar13 == 0) goto LAB_0262ef58;
        uVar3 = 0;
        if ((ulong)uVar12 != 0) {
          uVar3 = (uint)((ulong)((long)puVar15 - lVar13) / (ulong)uVar12);
        }
        if (*puVar17 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((DAT_055577b0 <= uVar3) ||
           (uVar16 = *(ushort *)(DAT_055577b8 + (long)(int)uVar3 * 2), uVar12 = (uint)uVar16,
           0x52 < uVar16)) goto LAB_0262ef58;
      }
      local_78 = CONCAT44(local_78._4_4_,uVar12);
      if (uVar12 != 3) {
        lVar13 = lVar11;
        if (*plVar22 == 0) {
          lVar13 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar13 + 0x86b0) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar13 + 0x86b0), puVar7 == (undefined8 *)0x0)) {
          bVar19 = *(byte *)(*(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690) + uVar18);
        }
        else {
          uVar10 = (**(code **)*puVar7)();
          bVar19 = *(byte *)(*(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690) + uVar18);
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x86b0) != 0)) &&
             (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x86b0) + 8), puVar7 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar7)();
          }
        }
        iVar21 = iVar21 + (bVar19 >> uVar2 & 1);
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 != 0x800);
  FUN_02669cc0(local_7c,param_3);
  FUN_02799370(local_7c,param_6,iVar21);
  if (((param_4 & 1) != 0) && (*(undefined1 *)(param_1 + 0xea4e0) = 1, (uVar20 & 0xffff) < 0x800)) {
    bVar19 = local_7c[0];
    if (7 < local_7c[0]) {
      bVar19 = 0xff;
    }
    lVar11 = param_1 + 0xe9ce0 + ((long)(char)bVar19 & 0xffffffffU) * 0x100;
    if (7 < local_7c[0]) {
      lVar11 = param_1 + 0xe9ce0;
    }
    *(byte *)(lVar11 + (ulong)(uVar1 >> 3)) =
         *(byte *)(lVar11 + (ulong)(uVar1 >> 3)) | (byte)(1 << (param_2 & 7));
  }
  puVar6 = PTR_DAT_04bb4f78;
  bVar19 = local_7c[0];
  if (7 < local_7c[0]) {
    bVar19 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar19);
  lVar11 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  if (lVar11 != 0) {
    lVar13 = lVar11 + 0x194b0;
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    lVar11 = *(long *)(lVar13 + 0x86b0);
    if (lVar11 == 0) {
      uVar8 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar8 = 0;
        plVar22 = *(long **)(lVar11 + 0x20);
      }
      else {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        uVar8 = uVar8 & 0xffffffff;
        if (*(long *)(lVar13 + 0x86b0) == 0) goto LAB_0262f140;
        plVar22 = *(long **)(*(long *)(lVar13 + 0x86b0) + 0x20);
      }
      if (plVar22 != (long *)0x0) {
        local_78 = *(long *)(lVar13 + 0x8690);
        local_70 = *(undefined8 *)(lVar13 + 0x8698);
        uStack_68 = 0x1400;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
      }
    }
LAB_0262f140:
    if ((uVar20 & 0xffff) < 0x800) {
      uVar16 = 0;
      uVar18 = 0;
      lVar11 = *(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690) + 0x400;
      do {
        uVar10 = uVar18 << 1;
        uVar5 = uVar18 >> 0x1f;
        uVar1 = (int)uVar18 + 1;
        uVar18 = (ulong)uVar1;
        uVar4 = *(ushort *)(lVar11 + (-uVar5 & 0xfffffffe00000000 | uVar10));
        if (uVar16 <= uVar4) {
          uVar16 = uVar4;
        }
      } while (uVar1 != 0x800);
      if (uVar16 != 0x7ff) {
        uVar16 = uVar16 + 1;
      }
      *(ushort *)(lVar11 + (param_2 & 0xffff) * 2) = uVar16;
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x86b0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x86b0) + 0x18), puVar7 != (undefined8 *)0x0))
    {
      (**(code **)*puVar7)();
    }
  }
  if (7 < local_7c[0]) {
    local_7c[0] = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,local_7c[0]);
  lVar11 = FUN_02583354(*(undefined8 *)puVar6,&local_78,1);
  if (lVar11 == 0) {
    return;
  }
  lVar13 = lVar11 + 0x194b0;
  if (*(long *)(lVar11 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar11 = *(long *)(lVar13 + 0x86b0);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar22 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar13 + 0x86b0) == 0) goto LAB_0262f270;
      plVar22 = *(long **)(*(long *)(lVar13 + 0x86b0) + 0x20);
    }
    if (plVar22 != (long *)0x0) {
      local_78 = *(long *)(lVar13 + 0x8690);
      local_70 = *(undefined8 *)(lVar13 + 0x8698);
      uStack_68 = 0x1400;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
    }
  }
LAB_0262f270:
  if ((uVar20 & 0xffff) < 0x800) {
    lVar11 = *(long *)(lVar13 + 0x8698) + *(long *)(lVar13 + 0x8690) + ((param_2 & 0xfff8) >> 3);
    *(byte *)(lVar11 + 0x200) = *(byte *)(lVar11 + 0x200) | (byte)(1 << (param_2 & 7));
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x86b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x86b0) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

