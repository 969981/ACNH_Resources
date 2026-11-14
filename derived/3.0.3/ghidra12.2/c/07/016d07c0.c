
int FUN_016d07c0(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined **local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [7];
  undefined1 local_6d;
  undefined1 local_68 [4];
  int local_64;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_016d0864:
    iVar9 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_016d0864;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_016d0864;
    if (*(long **)(lVar6 + 0x218238) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x218238);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    puVar3 = PTR_DAT_04bc27f0;
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x218220) + *(long *)(lVar6 + 0x218218));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar8])) {
      uVar11 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar11 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x218238) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x218238) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x218270) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x218270);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(&UNK_00218258 + lVar6) + *(long *)(lVar6 + 0x218250));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar14 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar14 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x218270) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x218270) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x2182a8) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x2182a8);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x218290) + *(long *)(lVar6 + 0x218288));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar15 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar15 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x2182a8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x2182a8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x2182e0) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x2182e0);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x2182c8) + *(long *)(FUN_002182c0 + lVar6));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar16 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar16 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x2182e0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x2182e0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x218318) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x218318);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x218300) + *(long *)(lVar6 + 0x2182f8));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar17 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar17 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x218318) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x218318) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x218350) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x218350);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x218338) + *(long *)(lVar6 + 0x218330));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar18 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar18 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x218350) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x218350) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x218388) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x218388);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x218370) + *(long *)(lVar6 + 0x218368));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar12 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar12 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x218388) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x218388) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (*(long **)(lVar6 + 0x2183c0) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x2183c0);
      uVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar7)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x2183a8) + *(long *)(lVar6 + 0x2183a0));
    uVar8 = (ulong)*pbVar1;
    if ((uVar8 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar3[uVar8])) {
      uVar10 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar10 = 0;
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x2183c0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x2183c0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    iVar9 = uVar14 + uVar11 + uVar15 + uVar16 + uVar17 + uVar18 + uVar12 + uVar10;
  }
  if ((param_1 & 1) != 0) {
    iVar13 = 0;
    if ((param_2 & 1) == 0) {
      do {
        local_68[0] = 1;
        local_64 = iVar13;
        lVar6 = FUN_016c6c00(local_68);
        if (lVar6 != 0) {
          local_78 = 8;
          local_6d = 0;
          local_74[0] = '\0';
          local_88 = &PTR_LAB_04908da0;
          if ((*(long **)(lVar6 + 0x6f0) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x6f0), puVar7 == (undefined8 *)0x0)) {
            local_80 = local_74;
            FUN_02774cf0(*(long *)(lVar6 + 0x6d8) + *(long *)(lVar6 + 0x6d0),&local_88);
          }
          else {
            local_80 = local_74;
            uVar5 = (**(code **)*puVar7)();
            FUN_02774cf0(*(long *)(lVar6 + 0x6d8) + *(long *)(lVar6 + 0x6d0),&local_88);
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x6f0) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x6f0) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          if (((*local_80 != '\0') && (iVar4 = FUN_021d5df0(&local_88), iVar4 != 1)) &&
             (iVar4 = FUN_021d7e50(&local_88), 7 < iVar4)) {
            iVar9 = iVar9 + 1;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    else {
      do {
        local_68[0] = 1;
        local_64 = iVar13;
        lVar6 = FUN_016c6c00(local_68);
        if (lVar6 != 0) {
          local_78 = 8;
          local_6d = 0;
          local_74[0] = '\0';
          local_88 = &PTR_LAB_04908da0;
          if ((*(long **)(lVar6 + 0x6f0) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x6f0), puVar7 == (undefined8 *)0x0)) {
            local_80 = local_74;
            FUN_02774cf0(*(long *)(lVar6 + 0x6d8) + *(long *)(lVar6 + 0x6d0),&local_88);
          }
          else {
            local_80 = local_74;
            uVar5 = (**(code **)*puVar7)();
            FUN_02774cf0(*(long *)(lVar6 + 0x6d8) + *(long *)(lVar6 + 0x6d0),&local_88);
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x6f0) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x6f0) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          if ((*local_80 != '\0') && (iVar4 = FUN_021d7e50(&local_88), 7 < iVar4)) {
            iVar9 = iVar9 + 1;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
  }
  return iVar9;
}

