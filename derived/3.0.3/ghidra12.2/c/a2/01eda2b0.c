
void FUN_01eda2b0(long param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  
  uVar10 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar10 & 1) == 0) {
    return;
  }
  puVar4 = (ulong *)(param_1 + 0xad58);
  if ((*(byte *)puVar4 >> 4 & 1) != 0) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_01eda348:
    if (*pbVar14 < 8) goto LAB_01eda3b4;
LAB_01eda354:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01eda3ac:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_01eda3b4;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar13 = *(byte *)(lVar16 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar13 != 0xffffffffffffffff) {
      puVar6 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
      if (7 < bVar13) {
        puVar6 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar6 & 8) != 0) {
        pbVar14 = (byte *)(lVar16 + 0x471);
      }
    }
    bVar13 = *pbVar14;
    if (7 < bVar13) goto LAB_01eda3ac;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01eda348;
      }
      goto LAB_01eda354;
    }
LAB_01eda3b4:
    bVar13 = *pbVar14;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
  }
  bVar15 = *(byte *)(param_1 + 0xae78);
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  if (bVar13 != bVar15) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,1,PTR_DAT_04bb32e0);
    return;
  }
  uVar9 = FUN_006bd550("SpeakTypeBed",0);
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar7 == 0) {
LAB_01eda4bc:
    bVar1 = false;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x28);
    if ((int)uVar7 < 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      iVar18 = uVar7 - 1;
      do {
        uVar3 = iVar18 + uVar17;
        if ((int)uVar3 < 0 != SCARRY4(iVar18,uVar17)) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = (int)uVar3 >> 1;
        uVar3 = *(uint *)(lVar16 + ((long)((ulong)uVar3 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar3 == uVar9) goto joined_r0x01eda4b8;
        if (uVar3 < uVar9) {
          uVar17 = uVar5 + 1;
        }
        else {
          iVar18 = uVar5 - 1;
        }
      } while ((int)uVar17 < iVar18);
    }
    uVar5 = uVar17;
    if (*(uint *)(lVar16 + (long)(int)uVar17 * 0x20 + 0x18) != uVar9) goto LAB_01eda4bc;
joined_r0x01eda4b8:
    if ((int)uVar5 < 0) goto LAB_01eda4bc;
    if (uVar7 <= uVar5) {
      uVar5 = 0;
    }
    bVar1 = 0 < *(int *)(lVar16 + (ulong)uVar5 * 0x20);
  }
  uVar9 = FUN_006bd550("SpeakTypeChair",0);
  uVar7 = *(uint *)(param_1 + 0x20);
  bVar2 = false;
  if (uVar7 != 0) {
    lVar16 = *(long *)(param_1 + 0x28);
    if ((int)uVar7 < 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      iVar18 = uVar7 - 1;
      do {
        uVar3 = iVar18 + uVar17;
        if ((int)uVar3 < 0 != SCARRY4(iVar18,uVar17)) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = (int)uVar3 >> 1;
        uVar3 = *(uint *)(lVar16 + ((long)((ulong)uVar3 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar3 == uVar9) goto joined_r0x01eda568;
        if (uVar3 < uVar9) {
          uVar17 = uVar5 + 1;
        }
        else {
          iVar18 = uVar5 - 1;
        }
      } while ((int)uVar17 < iVar18);
    }
    uVar5 = uVar17;
    if (*(uint *)(lVar16 + (long)(int)uVar17 * 0x20 + 0x18) == uVar9) {
joined_r0x01eda568:
      if (-1 < (int)uVar5) {
        if (uVar7 <= uVar5) {
          uVar5 = 0;
        }
        bVar2 = 0 < *(int *)(lVar16 + (ulong)uVar5 * 0x20);
        goto LAB_01eda570;
      }
    }
    bVar2 = false;
  }
LAB_01eda570:
  uVar8 = *(ushort *)(*(long *)(param_1 + 8) + 0x284);
  uVar10 = (ulong)(short)uVar8;
  if (bVar1) {
    if (uVar8 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar8) ||
         (*(int *)(PTR_DAT_04bb6258 + (uVar10 & 0xffffffff) * 0x10) == 0)) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(undefined8 *)(PTR_DAT_04bb6258 + uVar10 * 0x10 + 8);
      }
      uVar12 = 2;
      goto LAB_01eda664;
    }
  }
  else if (bVar2) {
    if (uVar8 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar8) ||
         (*(int *)(PTR_DAT_04bb6258 + (uVar10 & 0xffffffff) * 0x10) == 0)) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(undefined8 *)(PTR_DAT_04bb6258 + uVar10 * 0x10 + 8);
      }
      uVar12 = 1;
      goto LAB_01eda664;
    }
  }
  else if (uVar8 < 1000) {
    if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar8) ||
       (*(int *)(PTR_DAT_04bb6258 + (uVar10 & 0xffffffff) * 0x10) == 0)) {
      uVar11 = 0xffffffffffffffff;
    }
    else {
      uVar11 = *(undefined8 *)(PTR_DAT_04bb6258 + uVar10 * 0x10 + 8);
    }
    uVar12 = 0;
LAB_01eda664:
    uVar10 = FUN_00a77550(param_1 + 0xae78,uVar11,1,uVar12);
    if ((uVar10 & 1) != 0) {
      uVar10 = *puVar4 | 0x10;
      goto LAB_01eda680;
    }
  }
  uVar10 = *puVar4 & 0xffffffffffffffef;
LAB_01eda680:
  *puVar4 = uVar10;
  return;
}

