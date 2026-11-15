
void FUN_023c69dc(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  bool bVar12;
  long lVar13;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = *(undefined8 *)(param_1 + 0x1908);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_68);
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) goto LAB_023c6db0;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_023c6db0;
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uVar4 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 == 0) {
    uVar6 = FUN_01ad673c(&local_80);
    if ((uVar6 & 1) == 0) goto LAB_023c6db0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_68);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (*(uint *)(lVar10 + 0x1d8) <= uVar4) goto LAB_023c6b88;
      puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar11 == (uint *)0x0) goto LAB_023c6b8c;
      uVar4 = *puVar11;
      bVar12 = false;
      local_70 = puVar11;
      if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        if ((*puVar9 != 0) && ((uVar4 = puVar9[1], uVar4 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 1))
            goto LAB_023c6c2c;
          }
        }
        bVar12 = false;
      }
    }
    else {
LAB_023c6b88:
      puVar11 = (uint *)0x0;
LAB_023c6b8c:
      bVar12 = true;
    }
    uVar6 = FUN_01ad673c(&local_80);
    if ((uVar6 & 1) == 0) {
      if (bVar12) goto LAB_023c6db0;
      puVar9 = (uint *)((long)puVar11 - (ulong)*puVar11);
      if ((((*puVar11 == 0) || (puVar9 == (uint *)0x0)) || (*puVar9 == 0)) ||
         ((uVar4 = puVar9[1], uVar4 == 0 || ((ulong)(ushort)puVar9[2] == 0)))) goto LAB_023c6db0;
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar10 == 0) goto LAB_023c6db0;
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar4);
      }
      if (*puVar9 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 2))
      goto LAB_023c6db0;
    }
  }
LAB_023c6c2c:
  FUN_02472404(*(undefined4 *)(param_1 + 0x1914),param_1);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar7 = &DAT_05240280;
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_60 = CONCAT35(local_60._5_3_,0x100000000);
  local_50 = 1;
  local_58 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_56 = PTR_DAT_04bb37e0[2];
  local_42 = 0;
  local_55 = PTR_DAT_04bb37e0[3];
  local_54 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_44 = 0x101;
  local_4c = local_58;
  local_4a = local_56;
  local_49 = local_55;
  local_48 = local_54;
  FUN_0170f380(puVar7,&local_60);
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_3 + 0x14);
    if ((*(byte *)(param_1 + 0x18f4) & 1) == 0) {
      bVar8 = *pbVar1 & 0xfe;
    }
    else {
      bVar8 = *pbVar1 | 1;
    }
    *pbVar1 = bVar8;
  }
LAB_023c6db0:
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_60 = *(undefined8 *)(param_1 + 0x1908);
  FUN_0231de88(param_1,&local_60);
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  return;
}

