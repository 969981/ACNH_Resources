
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_018d57b0(undefined8 param_1,short *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  ulong local_80;
  float local_78;
  undefined4 local_74;
  
  puVar7 = PTR_DAT_04bb46c8;
  puVar6 = PTR_DAT_04bb27c8;
  if (*param_2 == -2) {
    fVar16 = (float)*(int *)(param_3 + 0xc) * 0.5;
    fVar15 = (float)*(int *)(param_3 + 8) * 0.5;
    uVar10 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar10 = (uint)(fVar15 < 0.0);
    }
    iVar14 = (int)fVar15 - uVar10;
    uVar10 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar10 = (uint)(fVar16 < 0.0);
    }
    iVar2 = (int)fVar16 - uVar10;
    if (((*(long *)(PTR_DAT_04bbec40 + 8) != 0) &&
        (uVar10 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
        *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 && iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20)))
       && (uVar5 = iVar2 - *(int *)(PTR_DAT_04bbec38 + 0x14),
          *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar2 && iVar2 <= *(int *)(PTR_DAT_04bbec38 + 0x24)))
    {
      lVar11 = (long)(int)(uVar10 + *(uint *)PTR_DAT_04bbec40 * uVar5);
      if (*(uint *)(PTR_DAT_04bbec40 + 4) <= uVar5 || *(uint *)PTR_DAT_04bbec40 <= uVar10) {
        lVar11 = 0;
      }
      if ((*(byte *)(*(long *)(PTR_DAT_04bbec40 + 8) + lVar11) >> 2 & 1) != 0) goto LAB_018d58a8;
    }
    uVar12 = 1;
    fVar17 = (float)iVar14 * 10.0 + 2.5;
    fVar18 = (float)iVar2 * 10.0 + 2.5;
    fVar15 = (float)iVar14 * 10.0 + 10.0 + -2.5;
    fVar16 = (float)iVar2 * 10.0 + 10.0 + -2.5;
    iVar3 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar14 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    iVar4 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar2 = iVar3;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar13 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar4 = iVar14;
    if (iVar14 <= iVar13) {
      iVar4 = iVar13;
    }
    if (iVar13 <= iVar14) {
      iVar14 = iVar13;
    }
    if (iVar4 + 1 != iVar14) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      iVar13 = iVar2;
      do {
        local_78 = 0.0;
        local_80 = 0;
        local_74 = 8;
        local_80 = 0x100;
        local_74 = 8;
        local_78 = 0.0;
        lVar11 = *(long *)puVar6;
        local_90 = puVar1;
        local_88 = iVar13;
        iStack_84 = iVar14;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0xa8) != 0)) {
          uVar8 = FUN_00949798(lVar11 + 0x28,&local_90,&local_80);
          if ((uVar8 & 1) != 0) goto LAB_018d58a8;
          lVar11 = *(long *)puVar6;
        }
        local_94 = 0;
        local_78 = (float)iStack_84 * 5.0 + 2.5;
        local_80 = (ulong)(uint)((float)local_88 * 5.0 + 2.5);
        if (((lVar11 != 0) && (*(long *)(lVar11 + 0xa8) != 0)) &&
           (*(char *)(lVar11 + 0x11c8) == '\0')) {
          FUN_0093a950(lVar11 + 0x28,&local_80,&local_94);
        }
        local_74 = local_94;
        lVar11 = FUN_009807cc(*(long *)puVar7 + 8,local_94);
        if (((lVar11 != 0) &&
            (pcVar9 = (char *)FUN_009823a0(lVar11,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
            pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) goto LAB_018d58a8;
        if (iVar13 < iVar3) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar14 = iVar14 + 1;
          iVar13 = iVar2;
        }
      } while ((iVar2 != iVar13) || (iVar4 + 1 != iVar14));
      uVar12 = 1;
    }
  }
  else {
LAB_018d58a8:
    uVar12 = 0;
  }
  return uVar12;
}

