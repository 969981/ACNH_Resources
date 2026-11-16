
void FUN_0268b680(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined8 local_38;
  
  local_38 = 0x59a;
  FUN_0277d4ac(&local_38);
  local_3d = 0;
  local_48 = 8;
  local_50 = local_44;
  local_44[0] = 0;
  local_58 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_58,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_58,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  uVar14 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_58 + 0x18))(&local_58);
  uVar4 = FUN_006bd550(local_50,0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar4);
  puVar7 = (uint *)FUN_0079e770(uVar14,&local_70);
  puVar3 = PTR_DAT_04bb40b8;
  puVar2 = PTR_DAT_04bb40b0;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 == 0) {
LAB_0268b864:
      bVar10 = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bb40b0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar3 + 0x68);
          if (-1 < (int)uVar5) {
            if (((byte *)((ulong)uVar5 + (long)puVar7) == (byte *)0x0) ||
               (bVar10 = *(byte *)((ulong)uVar5 + (long)puVar7), 0xe < bVar10)) goto LAB_0268b864;
            goto LAB_0268b868;
          }
          if (uVar5 != 0xffffffff) goto LAB_0268b864;
        }
        puVar12 = (uint *)(ulong)*puVar7;
        bVar10 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_0268b868;
        lVar15 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar7 + (lVar15 - (long)puVar12);
        if (lVar15 == 0) goto LAB_0268b864;
        uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
        *(undefined4 *)(puVar3 + 0x68) = 0xfffffffe;
        bVar10 = 0;
        if (uVar11 == 0) goto LAB_0268b868;
        piVar13 = (int *)(lVar15 + 4);
        while (piVar13[-1] != 0x34eb5dc3) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            bVar10 = 0;
            goto LAB_0268b868;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar3 + 0x68) = iVar1;
      } while (*puVar7 != 0);
      bVar10 = 0;
    }
LAB_0268b868:
    puVar2 = PTR_DAT_04bb43c0;
    if (bVar10 < 0xf) {
      local_60 = 0;
      local_70 = PTR_DAT_04bc0510 + 0x10;
      local_68 = (undefined4)local_38;
      uStack_64 = local_38._4_4_;
      lVar15 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_38);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (uVar5 < *(uint *)(lVar15 + 0x1d8)) {
            lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar15 != 0) {
              local_60 = lVar15;
            }
          }
        }
      }
      puVar3 = PTR_DAT_04bb40b8;
      puVar2 = PTR_DAT_04bb40b0;
      if (*puVar7 == 0) {
LAB_0268ba34:
        uVar5 = 0;
      }
      else {
        cVar9 = *PTR_DAT_04bb40b0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x68);
            if (-1 < (int)uVar5) {
              if (((byte *)((ulong)uVar5 + (long)puVar7) == (byte *)0x0) ||
                 (bVar10 = *(byte *)((ulong)uVar5 + (long)puVar7), uVar5 = (uint)bVar10,
                 0xe < bVar10)) goto LAB_0268ba34;
              goto LAB_0268ba38;
            }
            if (uVar5 != 0xffffffff) goto LAB_0268ba34;
          }
          puVar12 = (uint *)(ulong)*puVar7;
          uVar5 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_0268ba38;
          lVar15 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar7 + (lVar15 - (long)puVar12);
          if (lVar15 == 0) goto LAB_0268ba34;
          uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
          *(undefined4 *)(puVar3 + 0x68) = 0xfffffffe;
          uVar5 = 0;
          if (uVar11 == 0) goto LAB_0268ba38;
          piVar13 = (int *)(lVar15 + 4);
          while (piVar13[-1] != 0x34eb5dc3) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              uVar5 = 0;
              goto LAB_0268ba38;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar3 + 0x68) = iVar1;
        } while (*puVar7 != 0);
        uVar5 = 0;
      }
LAB_0268ba38:
      iVar1 = *(int *)(&DAT_0417b380 + (long)(int)uVar5 * 4);
      iVar6 = FUN_01ad7260(&local_70);
      if ((iVar6 != 0) &&
         ((((uVar5 & 0xfffffff7) == 6 || (iVar6 = FUN_01ad7260(&local_70), iVar1 < iVar6)) &&
          (puVar8 = (ushort *)FUN_01afd600(&local_70), puVar8 != (ushort *)0x0)))) {
        *puVar8 = *puVar8 & 0xfff8 | (ushort)iVar1 & 7;
      }
      local_38._0_4_ = local_68;
      local_38._4_4_ = uStack_64;
    }
  }
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  return;
}

