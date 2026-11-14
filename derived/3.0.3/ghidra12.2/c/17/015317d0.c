
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015317d0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  long lVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_c0;
  undefined2 local_b8;
  byte local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_b0 = 0;
  local_b8 = *(undefined2 *)(param_4 + 0x129c);
  bVar4 = *(byte *)(param_4 + 0x129e);
  local_c0 = PTR_DAT_04bc0510 + 0x10;
  local_b5 = *(undefined1 *)(param_4 + 0x129f);
  local_b4 = *(undefined4 *)(param_4 + 0x12a0);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_b6 = bVar4;
  uVar8 = FUN_0277d6c4(&local_b8);
  lVar10 = DAT_0532a768;
  if (*(long *)puVar6 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      uVar8 = FUN_0277d6c4(param_4 + 0x129c);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
        local_b0 = lVar10;
      }
    }
  }
  if ((bVar4 >> 3 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)(param_4 + 0x1150);
  if (lVar10 == 0) {
    return;
  }
  uVar26 = _DAT_04102200;
  lVar12 = _UNK_04102208;
  uVar29 = _DAT_04102570;
  lVar30 = _UNK_04102578;
  uVar32 = _DAT_041023d0;
  uVar33 = _UNK_041023d8;
  if ((((*(uint **)(param_4 + 0x12b8) != (uint *)0x0) && (*(long *)(param_4 + 0x12a8) != 0)) &&
      (uVar8 = **(uint **)(param_4 + 0x12b8), uVar8 < 0xffff0000)) &&
     (((uVar8 ^ 0xffffffff) & 0xffff) != 0)) {
    local_a0 = 0;
    local_a8 = 0;
    local_148 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_140 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_138 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_130 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_158 = *(long *)PTR_DAT_04bb2f80;
    local_150 = *(long *)(PTR_DAT_04bb2f80 + 8);
    plVar9 = (long *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + (long)(short)uVar8 * 8);
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_158,&local_a8,(int)uVar8 >> 0x10);
    param_3 = 0.0;
    uVar32 = 0;
    uVar29 = 0x3f80000080000000;
    uVar26 = 0x3f800000;
    uVar33 = CONCAT44(local_150._4_4_ + 0.0,0x3f800000);
    lVar12 = (ulong)(uint)(uStack_140._4_4_ + 0.0) << 0x20;
    lVar30 = (ulong)(uint)(uStack_130._4_4_ + 0.0) << 0x20;
    param_2 = uStack_140._4_4_;
  }
  fVar16 = (float)FUN_01adb220(&local_c0);
  fVar24 = param_2;
  fVar25 = param_3;
  fVar17 = (float)FUN_01adadf0(&local_c0);
  fVar18 = sinf(fVar16 * 0.017453292);
  fVar19 = sinf(param_2 * 0.017453292);
  fVar20 = sinf(param_3 * 0.017453292);
  fVar16 = cosf(fVar16 * 0.017453292);
  fVar21 = cosf(param_2 * 0.017453292);
  fVar22 = cosf(param_3 * 0.017453292);
  fVar28 = fVar21 * fVar22;
  fVar31 = fVar20 * fVar21;
  fVar34 = fVar18 * fVar19 * fVar22 - fVar20 * fVar16;
  fVar23 = -(fVar18 * fVar22) + fVar19 * fVar20 * fVar16;
  fVar35 = fVar18 * fVar20 + fVar19 * fVar16 * fVar22;
  fVar20 = fVar16 * fVar22 + fVar20 * fVar18 * fVar19;
  fVar19 = -fVar19;
  fVar18 = fVar18 * fVar21;
  fVar22 = (float)uVar32;
  fVar27 = (float)((ulong)uVar32 >> 0x20);
  fVar16 = fVar16 * fVar21;
  fVar21 = (float)uVar33;
  fVar40 = (float)uVar26;
  fVar41 = (float)((ulong)uVar26 >> 0x20);
  fVar42 = (float)lVar12;
  fVar39 = (float)((ulong)lVar30 >> 0x20);
  fVar36 = (float)uVar29;
  fVar37 = (float)((ulong)uVar29 >> 0x20);
  fVar38 = (float)lVar30;
  if ((*(byte *)(param_4 + 0x1299) >> 2 & 1) == 0) {
    if (*(int *)(lVar10 + 0x30) != 0) {
      puVar15 = *(undefined8 **)(lVar10 + 0x38);
      iVar14 = 0;
      puVar1 = puVar15 + *(int *)(lVar10 + 0x30);
      do {
        (**(code **)(**(long **)*puVar15 + 0x28))(&local_158);
        (**(code **)(DAT_0520f1d8 + 0x18))(&DAT_0520f1d8);
        (**(code **)(DAT_0520f1d8 + 0x18))(&DAT_0520f1d8);
        lVar30 = DAT_0520f1e0;
        (**(code **)(local_158 + 0x18))(&local_158);
        if (lVar30 == local_150) {
LAB_01531c60:
          iVar13 = iVar14;
          break;
        }
        uVar11 = 0;
        bVar7 = true;
        do {
          lVar30 = DAT_0520f1e0 + 1 + uVar11;
          lVar2 = local_150 + 1 + uVar11;
          cVar5 = *(char *)(lVar30 + -1);
          if (cVar5 != *(char *)(lVar2 + -1)) break;
          if (cVar5 == '\0') {
            if (bVar7) goto LAB_01531c60;
            break;
          }
          cVar5 = *(char *)(DAT_0520f1e0 + 1 + uVar11);
          if (cVar5 != *(char *)(local_150 + 1 + uVar11)) break;
          if (cVar5 == '\0') goto LAB_01531c60;
          cVar5 = *(char *)(lVar30 + 1);
          if (cVar5 != *(char *)(lVar2 + 1)) break;
          if (cVar5 == '\0') goto LAB_01531c60;
          bVar7 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        puVar15 = puVar15 + 1;
        iVar14 = iVar14 + 1;
        iVar13 = -1;
      } while (puVar15 != puVar1);
      goto LAB_01531c64;
    }
  }
  else {
    FUN_01532cb0(&local_158,CONCAT44(fVar18,fVar19),CONCAT44(fVar39,fVar39),param_4);
    if (*(int *)(lVar10 + 0x30) != 0) {
      puVar15 = *(undefined8 **)(lVar10 + 0x38);
      iVar13 = 0;
      puVar1 = puVar15 + *(int *)(lVar10 + 0x30);
      do {
        (**(code **)(**(long **)*puVar15 + 0x28))(&local_a8);
        (**(code **)(local_158 + 0x18))(&local_158);
        (**(code **)(local_158 + 0x18))(&local_158);
        lVar30 = local_150;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (lVar30 == CONCAT44(uStack_9c,local_a0)) goto LAB_01531c64;
        uVar11 = 0;
        lVar30 = CONCAT44(uStack_9c,local_a0) + 1;
        bVar7 = true;
        do {
          lVar2 = local_150 + 1 + uVar11;
          lVar3 = lVar30 + uVar11;
          cVar5 = *(char *)(lVar2 + -1);
          if (cVar5 != *(char *)(lVar3 + -1)) break;
          if (cVar5 == '\0') {
            if (bVar7) goto LAB_01531c64;
            break;
          }
          cVar5 = *(char *)(local_150 + 1 + uVar11);
          if (cVar5 != *(char *)(lVar30 + uVar11)) break;
          if (cVar5 == '\0') goto LAB_01531c64;
          cVar5 = *(char *)(lVar2 + 1);
          if (cVar5 != *(char *)(lVar3 + 1)) break;
          if (cVar5 == '\0') goto LAB_01531c64;
          bVar7 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        puVar15 = puVar15 + 1;
        iVar13 = iVar13 + 1;
      } while (puVar15 != puVar1);
      iVar13 = -1;
      goto LAB_01531c64;
    }
  }
  iVar13 = -1;
LAB_01531c64:
  *(int *)(param_4 + 0x13c8) = iVar13;
  FUN_01adf970(&local_a8,&local_c0);
  if (*(int *)(lVar10 + 0x30) == 0) {
    iVar13 = -1;
  }
  else {
    puVar15 = *(undefined8 **)(lVar10 + 0x38);
    iVar13 = 0;
    puVar1 = puVar15 + *(int *)(lVar10 + 0x30);
    do {
      (**(code **)(**(long **)*puVar15 + 0x28))(&local_158);
      (**(code **)(local_a8 + 0x18))(&local_a8);
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar10 = CONCAT44(uStack_9c,local_a0);
      (**(code **)(local_158 + 0x18))(&local_158);
      if (lVar10 == local_150) goto LAB_01531cc4;
      uVar11 = 0;
      bVar7 = true;
      lVar10 = CONCAT44(uStack_9c,local_a0) + 1;
      do {
        lVar30 = lVar10 + uVar11;
        lVar2 = local_150 + 1 + uVar11;
        cVar5 = *(char *)(lVar30 + -1);
        if (cVar5 != *(char *)(lVar2 + -1)) break;
        if (cVar5 == '\0') {
          if (bVar7) goto LAB_01531cc4;
          break;
        }
        cVar5 = *(char *)(lVar10 + uVar11);
        if (cVar5 != *(char *)(local_150 + 1 + uVar11)) break;
        if (cVar5 == '\0') goto LAB_01531cc4;
        cVar5 = *(char *)(lVar30 + 1);
        if (cVar5 != *(char *)(lVar2 + 1)) break;
        if (cVar5 == '\0') goto LAB_01531cc4;
        bVar7 = uVar11 < 0x7fffe;
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      puVar15 = puVar15 + 1;
      iVar13 = iVar13 + 1;
    } while (puVar15 != puVar1);
    iVar13 = -1;
  }
LAB_01531cc4:
  *(int *)(param_4 + 0x13cc) = iVar13;
  *(uint *)(param_4 + 0x1298) = *(uint *)(param_4 + 0x1298) | 0x80;
  *(ulong *)(param_4 + 0x13d8) =
       CONCAT44((float)((ulong)uVar33 >> 0x20) + fVar17 * fVar22 + fVar24 * fVar27 + fVar25 * fVar21
                ,fVar35 * fVar22 + fVar23 * fVar27 + fVar16 * fVar21 + 0.0);
  *(ulong *)(param_4 + 0x13d0) =
       CONCAT44(fVar34 * fVar22 + fVar20 * fVar27 + fVar18 * fVar21 + 0.0,
                fVar28 * fVar22 + fVar31 * fVar27 + fVar19 * fVar21 + 0.0);
  *(ulong *)(param_4 + 0x13e8) =
       CONCAT44((float)((ulong)lVar12 >> 0x20) + fVar17 * fVar40 + fVar24 * fVar41 + fVar25 * fVar42
                ,fVar35 * fVar40 + fVar23 * fVar41 + fVar16 * fVar42 + 0.0);
  *(ulong *)(param_4 + 0x13e0) =
       CONCAT44(fVar34 * fVar40 + fVar20 * fVar41 + fVar18 * fVar42 + 0.0,
                fVar28 * fVar40 + fVar31 * fVar41 + fVar19 * fVar42 + 0.0);
  *(ulong *)(param_4 + 0x13f8) =
       CONCAT44(fVar39 + fVar17 * fVar36 + fVar24 * fVar37 + fVar25 * fVar38,
                fVar35 * fVar36 + fVar23 * fVar37 + fVar16 * fVar38 + 0.0);
  *(ulong *)(param_4 + 0x13f0) =
       CONCAT44(fVar34 * fVar36 + fVar20 * fVar37 + fVar18 * fVar38 + 0.0,
                fVar28 * fVar36 + fVar31 * fVar37 + fVar19 * fVar38 + 0.0);
  return;
}

