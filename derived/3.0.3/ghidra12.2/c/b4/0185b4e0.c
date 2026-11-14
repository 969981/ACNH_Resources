
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0185b4e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0)) ||
     (((*(long *)(lVar10 + 0x488) == 0 || (*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0)) ||
      ((*(long *)(lVar10 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0)))))) {
LAB_0185b574:
    iVar8 = FUN_0277d6c4(param_1);
    puVar6 = PTR_DAT_04bb27c8;
    if (iVar8 != 0xea79) {
      fVar13 = (float)*(int *)(param_2 + 0xc) * 10.0;
      fVar12 = (float)*(int *)(param_2 + 8) * 10.0;
      fVar15 = fVar12 + 2.5;
      fVar14 = fVar13 + 2.5;
      fVar12 = fVar12 + 10.0 + -2.5;
      fVar13 = fVar13 + 10.0 + -2.5;
      iVar4 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar3 = iVar4;
      if (iVar5 <= iVar4) {
        iVar3 = iVar5;
      }
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      iVar11 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
      iVar5 = iVar8;
      if (iVar8 <= iVar11) {
        iVar5 = iVar11;
      }
      if (iVar11 <= iVar8) {
        iVar8 = iVar11;
      }
      if (iVar5 + 1 != iVar8) {
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        iVar11 = iVar3;
        do {
          if (((*(long *)puVar6 == 0) || (lVar10 = *(long *)(*(long *)puVar6 + 0xa8), lVar10 == 0))
             || (local_88 = puVar1, local_80 = puVar2, local_78 = iVar11, iStack_74 = iVar8,
                local_70 = puVar2, local_68 = iVar11, iStack_64 = iVar8,
                uVar9 = FUN_00971f80(lVar10,&local_88,0), (uVar9 & 1) == 0)) goto LAB_0185b588;
          if (iVar11 < iVar4) {
            iVar11 = iVar11 + 1;
          }
          else {
            iVar8 = iVar8 + 1;
            iVar11 = iVar3;
          }
        } while ((iVar3 != iVar11) || (iVar5 + 1 != iVar8));
      }
      local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
      local_88 = (undefined *)0x0;
      local_88 = (undefined *)0x20000000000;
      uVar7 = FUN_0097a540(param_2,&local_88);
      goto LAB_0185b6b4;
    }
  }
  else {
    uVar7 = FUN_0277d6c4(param_1);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0185b574;
  }
LAB_0185b588:
  uVar7 = 0;
LAB_0185b6b4:
  return uVar7 & 1;
}

