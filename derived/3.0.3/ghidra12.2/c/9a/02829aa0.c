
bool FUN_02829aa0(char *param_1)

{
  short *psVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  if (*param_1 == '\0') {
    return false;
  }
  bVar6 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_1 + 0xc),(uint)(byte)param_1[0xe],
                     (uint)(byte)param_1[0xf]);
  puVar3 = PTR_DAT_04bb43c0;
  psVar1 = (short *)(param_1 + 4);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(psVar1);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(undefined4 *)(param_1 + 4);
      uStack_4c = *(undefined4 *)(param_1 + 8);
      local_58 = &PTR_FUN_04a36b50;
      uVar8 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(psVar1);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_48 = lVar10;
          }
        }
      }
      bVar7 = FUN_01b032d0(&local_58);
      cVar2 = param_1[1];
      goto joined_r0x02829be4;
    }
  }
  bVar7 = 0;
  cVar2 = param_1[1];
joined_r0x02829be4:
  if (cVar2 == '\0') {
    bVar4 = true;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if (uVar8 < *(uint *)(DAT_05336138 + 0x1d8)) {
      bVar4 = *(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar8 * 8) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar7 & 1) == 0) {
      bVar7 = *psVar1 == -2;
    }
    else {
      bVar7 = 1;
    }
  }
  bVar5 = false;
  if (((bVar6 & bVar4) == 1) && ((bVar7 & 1) != 0)) {
    iVar9 = FUN_026698a0(param_1 + 0x2b4);
    bVar5 = iVar9 != -1;
  }
  return bVar5;
}

