
uint FUN_011c0ee0(long param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  int iStack_44;
  undefined *local_40;
  uint local_38;
  int iStack_34;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar2 = 0;
    puVar9 = DAT_055c1b60;
    do {
      if (*(int *)(puVar9 + -1) == 0x6622bd46) goto LAB_011c0f44;
      puVar9 = (undefined8 *)puVar9[1];
      uVar2 = uVar2 + 1;
    } while (puVar9 != &DAT_055c1b58);
  }
  uVar2 = 0xffff;
LAB_011c0f44:
  if ((uVar2 & 0xffff) == (param_2 & 0xffff)) {
    uVar7 = 0;
  }
  else {
    uVar5 = FUN_0122a4e0(param_2);
    uVar7 = 1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 2;
    }
  }
  uVar2 = FUN_0122a7f0(param_1,uVar7);
  if ((uint)*(ushort *)PTR_DAT_04bb6298 == (param_2 & 0xffff)) {
    local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar3 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    local_50 = (undefined *)CONCAT44(*(undefined4 *)(puVar9 + 7),(undefined4)local_50);
    uVar1 = FUN_017baf44();
    local_48 = CONCAT31(local_48._1_3_,uVar1) & 0xffffff01;
    local_58 = PTR_DAT_04bb6268 + 0x10;
    puVar6 = (undefined2 *)FUN_01a5190c(&local_58,0,param_1,0);
    local_18 = *puVar6;
    local_16 = *(undefined1 *)(puVar6 + 1);
    local_15 = *(undefined1 *)((long)puVar6 + 3);
    local_14 = *(undefined4 *)(puVar6 + 2);
    lVar8 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar8 + 0x488) != 0 && (*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar8 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(&local_18);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_70,&local_18);
        iVar3 = FUN_0123db50(auStack_68,local_60);
        if (iVar3 == 0x2d) goto LAB_011c118c;
      }
    }
    if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
      local_58 = PTR_DAT_04bbc5d8 + 0x10;
      local_50 = PTR_DAT_04bb2018 + 0x10;
      fVar10 = (float)*(int *)(param_1 + 8) * 0.5;
      fVar11 = (float)*(int *)(param_1 + 0xc) * 0.5;
      local_48 = 0;
      if (fVar10 != (float)(int)fVar10) {
        local_48 = (uint)(fVar10 < 0.0);
      }
      local_48 = (int)fVar10 - local_48;
      uVar4 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar4 = (uint)(fVar11 < 0.0);
      }
      iStack_44 = (int)fVar11 - uVar4;
      local_40 = local_50;
      local_38 = local_48;
      iStack_34 = iStack_44;
      FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_58);
    }
    FUN_011dbc54(param_1,0);
  }
LAB_011c118c:
  return uVar2 & 1;
}

