
/* WARNING: Type propagation algorithm not settling */

uint FUN_02828f30(char *param_1)

{
  short *psVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  if (*param_1 == '\0') {
    return 0;
  }
  bVar5 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_1 + 0xc),(uint)(byte)param_1[0xe],
                     (uint)(byte)param_1[0xf]);
  puVar3 = PTR_DAT_04bb43c0;
  psVar1 = (short *)(param_1 + 4);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(psVar1);
  lVar9 = *(long *)puVar3;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(undefined4 *)(param_1 + 4);
      uStack_4c = *(undefined4 *)(param_1 + 8);
      local_58 = &PTR_FUN_04a36b50;
      uVar7 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(psVar1);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
            local_48 = lVar9;
          }
        }
      }
      bVar6 = FUN_01b032d0(&local_58);
      cVar2 = param_1[1];
      goto joined_r0x02829074;
    }
  }
  bVar6 = 0;
  cVar2 = param_1[1];
joined_r0x02829074:
  if (cVar2 == '\0') {
    bVar4 = true;
  }
  else {
    uVar7 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if (uVar7 < *(uint *)(DAT_05336138 + 0x1d8)) {
      bVar4 = *(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar7 * 8) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar6 & 1) == 0) {
      bVar6 = *psVar1 == -2;
    }
    else {
      bVar6 = 1;
    }
  }
  if ((bVar5 & bVar4) != 1) {
    return 0;
  }
  if ((bVar6 & 1) == 0) {
    return 0;
  }
  if ((byte)(param_1[0x2b4] | 2U) == 3) {
    if (param_1[0x2b5] == '\x01') {
      return (uint)(param_1[0x2b9] != '\0');
    }
    if (((param_1[0x2b5] == '\0') && (uVar8 = (ulong)(byte)param_1[0x2b6], uVar8 < 0x23)) &&
       ((byte)param_1[0x2b7] <= (byte)PTR_DAT_04bc27f0[uVar8])) {
      return (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)((byte)param_1[0x2b7] & 0x1f) & 1;
    }
  }
  return 0;
}

