
/* WARNING: Removing unreachable block (ram,0x01834040) */
/* WARNING: Removing unreachable block (ram,0x01834050) */
/* WARNING: Removing unreachable block (ram,0x0183405c) */

undefined8 FUN_0183400c(float param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined7 uStack_37;
  
  uVar5 = (undefined4)((ulong)local_48 >> 0x20);
  local_48 = (undefined **)((ulong)local_48 & 0xffffffff00000000);
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar9 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_2 + 8);
  if (iVar6 < *(int *)(lVar9 + 0x20) || *(int *)(lVar9 + 0x30) < iVar6) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 < *(int *)(lVar9 + 0x24)) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x34) < iVar3) {
    return 0;
  }
  if ((param_3 & 1) == 0) goto LAB_01834170;
  if (DAT_04c487d4 == -1) {
LAB_01834138:
    lVar9 = 0;
  }
  else {
    local_48 = (undefined **)CONCAT44(uVar5,0x1a);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x1a & 1) == 0) ||
       (local_48 = (undefined **)CONCAT44(uVar5,1), (*puVar2 >> 1 & 1) == 0)) goto LAB_01834138;
    lVar9 = 0;
    if (DAT_05abff60 != 0) {
      lVar9 = DAT_05abff60 + 0x18;
    }
  }
  if (iVar6 < *(int *)(lVar9 + 0x10)) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x20) < iVar6) {
    return 0;
  }
  if (iVar3 < *(int *)(lVar9 + 0x14)) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x24) < iVar3) {
    return 0;
  }
LAB_01834170:
  fVar12 = (float)iVar6 * 5.0 + 2.5;
  fVar11 = (float)iVar3 * 5.0 + 2.5;
  uVar7 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  if ((((DAT_05233970 <= (int)(uVar7 & 0xfffffffe) && (int)(uVar7 & 0xfffffffe) <= DAT_05233980) &&
       (uVar4 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0), uVar1 = uVar4 & 0xfffffffe,
       DAT_05233974 <= (int)uVar1 && (int)uVar1 <= DAT_05233984)) &&
      (uVar1 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar7 >> 1), uVar1 >> 0xf == 0)) &&
     (((*(uint *)(PTR_DAT_04bbbb80 + (ulong)(uVar1 >> 5) * 4 + 8) >> (ulong)(uVar7 >> 1 & 0x1f) & 1)
       != 0 && (fVar11 = (float)FUN_01a1c140(param_2), fVar11 <= param_1)))) {
    local_50 = 0xfffe;
    FUN_0277d4ac(&local_50);
    local_40 = 0;
    local_48 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar10 + 7);
    local_38 = FUN_017baf44();
    local_38 = local_38 & 1;
    puVar10 = (undefined8 *)FUN_01a5190c(&local_48,0,param_2,0);
    lVar9 = DAT_05150358;
    local_50 = *puVar10;
    if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         (((*(long *)(DAT_05150358 + 0x488) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
          (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
      uVar7 = FUN_0277d6c4(&local_50);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        FUN_0124c030(&local_48,&local_50);
        iVar6 = FUN_0123db50(&local_40,CONCAT71(uStack_37,local_38));
        if ((iVar6 - 0x23U < 9) &&
           (((CONCAT71(uStack_37,local_38) == 0 ||
             (pbVar8 = (byte *)FUN_01246470(CONCAT71(uStack_37,local_38),0x16,0x623dc307,
                                            *(undefined8 *)PTR_DAT_04bbbc98), pbVar8 == (byte *)0x0)
             ) || ((*pbVar8 & 1) == 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

