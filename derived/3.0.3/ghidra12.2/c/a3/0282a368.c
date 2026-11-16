
undefined1 FUN_0282a368(char *param_1,int *param_2)

{
  short *psVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  if (*param_1 == '\0') {
    return 0;
  }
  bVar4 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_1 + 0xc),(uint)(byte)param_1[0xe],
                     (uint)(byte)param_1[0xf]);
  puVar2 = PTR_DAT_04bb43c0;
  psVar1 = (short *)(param_1 + 4);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(psVar1);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
LAB_0282a4ac:
    bVar5 = 0;
    if (param_1[1] == '\0') goto LAB_0282a4a4;
LAB_0282a4b8:
    uVar6 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if (uVar6 < *(uint *)(DAT_05336138 + 0x1d8)) {
      bVar3 = *(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar6 * 8) != 0;
      bVar9 = bVar3;
      if ((bVar5 & 1) == 0) goto LAB_0282a4f0;
LAB_0282a508:
      bVar5 = 1;
    }
    else {
      bVar9 = false;
      bVar3 = false;
      if ((bVar5 & 1) != 0) goto LAB_0282a508;
LAB_0282a4f0:
      bVar5 = *psVar1 == -2;
      bVar9 = bVar3;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0282a4ac;
    local_58 = 0;
    local_60 = *(undefined4 *)(param_1 + 4);
    uStack_5c = *(undefined4 *)(param_1 + 8);
    local_68 = &PTR_FUN_04a36b50;
    uVar6 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(psVar1);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar6 < *(uint *)(lVar11 + 0x1d8)) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar11 != 0) {
            local_58 = lVar11;
          }
        }
      }
    }
    bVar5 = FUN_01b032d0(&local_68);
    if (param_1[1] != '\0') goto LAB_0282a4b8;
LAB_0282a4a4:
    bVar9 = true;
  }
  if ((bVar4 & bVar9) != 1) {
    return 0;
  }
  if ((bVar5 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2d0) != *param_2) {
    return 0;
  }
  uVar10 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar10 >> 0x20 | uVar10 << 0x20;
  uVar10 = (*(ulong *)(param_1 + 0x2d4) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(param_1 + 0x2d4) & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
  if (uVar8 == uVar10) {
    uVar10 = (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar10 = (*(ulong *)(param_1 + 0x2dc) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(param_1 + 0x2dc) & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    if (uVar8 == uVar10) {
      uVar6 = (param_2[5] & 0xff00ff00U) >> 8 | (param_2[5] & 0xff00ffU) << 8;
      uVar8 = (ulong)(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (*(uint *)(param_1 + 0x2e4) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x2e4) & 0xff00ff) << 8;
      uVar10 = (ulong)(uVar6 >> 0x10 | uVar6 << 0x10);
      if (uVar8 == uVar10) {
        iVar7 = 0;
        goto LAB_0282a590;
      }
    }
  }
  iVar7 = 1;
  if (uVar8 < uVar10) {
    iVar7 = -1;
  }
LAB_0282a590:
  if (iVar7 == 0) {
    return 1;
  }
  return 0;
}

