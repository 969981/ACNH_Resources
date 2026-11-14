
void FUN_0178bc94(long param_1,long param_2)

{
  char cVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x1150) != 0) {
    cVar1 = *(char *)(param_1 + 0x488);
    local_68 = &DAT_3f8000003f800000;
    local_48 = 0;
    uVar13 = 0;
    if (*(char *)(param_1 + 0x351) != '\0' && (*(char *)(param_1 + 0x298) != '\0' || cVar1 != '\0'))
    {
      uVar13 = 0x3fc90fdb;
    }
    if (*(char *)(param_1 + 0x298) != '\0' || cVar1 != '\0') {
      if (cVar1 == '\0') {
        fVar14 = 1.0;
      }
      else {
        fVar14 = 1.0 / *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd34);
      }
      fVar3 = fVar14 * 4.0;
      fVar4 = fVar14 + fVar14;
      if (*(char *)(param_1 + 0x351) != '\0') {
        fVar3 = fVar14 + fVar14;
        fVar4 = fVar14 * 4.0;
      }
      local_68 = (undefined1 *)CONCAT44(fVar3,fVar4);
    }
    puVar11 = *(ulong **)(param_2 + 0x1180);
    bVar6 = *(long *)(param_2 + 0x1160) != 0;
    if (puVar11 != (ulong *)0x0 && bVar6) {
      uVar12 = *puVar11;
    }
    else {
      uVar12 = 0xffffffffffff;
    }
    if (((((uVar12 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) && ((uVar12 & 0xffff) != 0xffff))
       && ((uVar12 & 0xffff0000) != 0xffff0000)) {
      if (puVar11 != (ulong *)0x0 && bVar6) {
        uVar12 = *puVar11;
      }
      else {
        uVar12 = 0xffffffffffff;
      }
      plVar8 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(param_2 + 0x1150) + 0x38) +
                         (-(uVar12 >> 0xf & 1) & 0xfffffffffff80000 | (uVar12 & 0xffff) << 3));
      (**(code **)(*plVar8 + 0x178))
                (uVar13,plVar8,(int)uVar12 >> 0x10,(int)(uVar12 >> 0x10) >> 0x10,&local_68,&local_48
                );
    }
  }
  local_48 = CONCAT44(local_48._4_4_,0xe);
  local_58 = 0;
  local_50 = (long *)0x0;
  local_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  if ((*(long *)(param_2 + 0x1138) != 0) &&
     (uVar12 = FUN_03850a90(*(long *)(param_2 + 0x1138),0xe,&local_68,0), (uVar12 & 1) != 0)) {
    if ((local_50 == (long *)0x0) || (lVar10 = *local_50, lVar10 == 0)) {
      uVar9 = 1;
      lVar10 = *(long *)(param_2 + 0x1138);
    }
    else {
      fVar14 = *(float *)(lVar10 + 0x18);
      if (fVar14 < 0.0) {
        fVar14 = *(float *)(local_50[1] + 0xc);
      }
      uVar9 = (uint)(fVar14 - *(float *)(lVar10 + 0x14));
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      lVar10 = *(long *)(param_2 + 0x1138);
    }
    if (lVar10 != 0) {
      uVar2 = *(undefined2 *)(param_1 + 0x290);
      uVar7 = FUN_03850368(lVar10,0);
      puVar5 = PTR_DAT_04bb5ce0;
      fVar14 = 0.0;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        FUN_017f9c4c(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar9,uVar2,uVar7 & 1);
        if (*(long *)puVar5 != 0) {
          uVar9 = FUN_017f9da0(*(long *)puVar5 + 0xda0,*(undefined2 *)(param_1 + 0x290));
          fVar14 = (float)uVar9;
        }
      }
      FUN_0384ff0c(fVar14,lVar10,0);
    }
  }
  return;
}

