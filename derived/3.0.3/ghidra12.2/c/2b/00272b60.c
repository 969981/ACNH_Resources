
bool FUN_00272b60(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                 uint param_6)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  ulong uVar18;
  uint local_84;
  int local_70 [4];
  
  puVar2 = PTR_DAT_04bc1510;
  lVar8 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar8 = *(long *)(lVar8 + 0x98);
  if (((lVar8 == 0) || (uVar5 = FUN_0026bfe0(DAT_04c603c8), 0x1f < (uVar5 & 0xff))) ||
     ((uint)*(byte *)(lVar8 + 0x38) != (uVar5 & 0xff))) {
LAB_00272dd8:
    bVar3 = false;
  }
  else {
    plVar9 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
    lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,param_2);
    if (lVar10 == 0) {
      return false;
    }
    uVar4 = FUN_0026be6c(DAT_04c603c8);
    lVar10 = *(long *)(param_1 + 0x90);
    iVar16 = (param_2 & 0xff) - (uint)((uVar5 & 0xff) <= (param_2 & 0xff));
    uVar11 = FUN_002aed20();
    if ((uVar11 & 1) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      return false;
    }
    puVar17 = *(undefined1 **)(param_1 + 0xa0);
    *puVar17 = 0x80;
    puVar17[1] = uVar4;
    puVar17[2] = (char)uVar5;
    FUN_00228480(puVar17 + 4,param_3);
    FUN_00228480(puVar17 + 8,param_4);
    lVar12 = DAT_04c603c8;
    *(undefined4 *)(puVar17 + 0xc) = 0;
    if (*(short *)(lVar12 + 0x98) == 0) {
      lVar8 = 0x10;
      puVar17[3] = 0;
    }
    else {
      cVar1 = '\0';
      local_84 = 0;
      bVar3 = false;
      uVar11 = 0;
      do {
        uVar18 = uVar11;
        plVar9 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
        lVar12 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar18 & 0xffffffff);
        if ((lVar12 == 0 || lVar12 == lVar8) || (*(int *)(lVar12 + 0x4c) != 5)) {
LAB_00272ca0:
          uVar15 = 0;
        }
        else {
          uVar6 = FUN_002b3eec(lVar12);
          iVar7 = FUN_002b3f80(lVar12);
          if (uVar6 == 0xffffffff || iVar7 < 5) {
            uVar11 = FUN_00273cb4(lVar12);
            if (((uVar11 & 1) != 0) ||
               ((lVar13 = FUN_0026c88c(DAT_04c603c8), lVar13 != 0 &&
                (uVar11 = FUN_00283230(lVar13,*(undefined1 *)(lVar12 + 0x38),uVar5),
                (uVar11 & 1) != 0)))) goto LAB_00272ca0;
            bVar3 = true;
            uVar15 = 0;
            local_84 = 1 << (ulong)((uint)uVar18 & 0x1f) | local_84;
          }
          else {
            uVar11 = FUN_00273ccc(lVar12);
            if ((uVar11 & 1) == 0) {
              uVar15 = 0;
            }
            else {
              cVar1 = cVar1 + '\x01';
              uVar15 = 4;
              if ((uVar6 & 0xfffc) != 0) {
                uVar15 = uVar6;
              }
            }
          }
        }
        uVar6 = uVar15 >> 2 & 0x3fff;
        if (0xfe < uVar6) {
          uVar6 = 0xff;
        }
        puVar17[uVar18 + 0x10] = (char)uVar6;
        uVar11 = uVar18 + 1;
      } while ((uint)(uVar18 + 1) < (uint)*(ushort *)(DAT_04c603c8 + 0x98));
      puVar17[3] = cVar1;
      if (bVar3) {
        *param_5 = local_84;
        if (((param_6 & 1) != 0) && (*(short *)(DAT_04c603c8 + 0x98) != 0)) {
          uVar6 = 0;
          do {
            plVar9 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
            lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar6);
            if ((lVar10 != 0 && lVar10 != lVar8) && (*(int *)(lVar10 + 0x4c) == 5)) {
              iVar16 = FUN_002b3eec(lVar10);
              iVar7 = FUN_002b3f80(lVar10);
              if (iVar16 == -1 || iVar7 < 5) {
                uVar11 = FUN_00273cb4(lVar10);
                if (((uVar11 & 1) == 0) && (lVar12 = FUN_0026c88c(DAT_04c603c8), lVar12 != 0)) {
                  FUN_00283230(lVar12,*(undefined1 *)(lVar10 + 0x38),uVar5);
                }
              }
              else {
                FUN_00273ccc(lVar10);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(DAT_04c603c8 + 0x98));
          return false;
        }
        goto LAB_00272dd8;
      }
      lVar8 = uVar18 + 0x11;
    }
    FUN_002b0d5c(local_70,lVar10 + (long)iVar16 * 0x6b0,*(undefined8 *)(param_1 + 0xa0),lVar8,0);
    if (local_70[0] == 0) {
      if (DAT_04c60320 == 0) {
        local_70[0] = 0;
      }
      else {
        uVar14 = FUN_002290b0(DAT_04c60320,9);
        FUN_0022910c(uVar14,*(undefined2 *)(lVar10 + (long)iVar16 * 0x6b0 + 0x32));
      }
    }
    bVar3 = local_70[0] == 0;
  }
  return bVar3;
}

