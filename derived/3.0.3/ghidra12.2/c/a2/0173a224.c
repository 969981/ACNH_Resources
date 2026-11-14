
uint FUN_0173a224(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar7 = *(undefined4 **)(param_1 + 0x228);
  if (puVar7 == (undefined4 *)0x0) {
    uVar3 = 0;
    goto LAB_0173a3b4;
  }
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *puVar7;
  uStack_3c = puVar7[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_0173a37c:
    uVar4 = 0xbc;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0173a37c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(puVar7);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0173a37c;
    uVar3 = *puVar5;
    local_38 = puVar5;
    if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_0173a374:
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if (((*puVar6 == 0) || (uVar3 = puVar6[1], uVar3 == 0)) || ((ulong)(ushort)puVar6[2] == 0))
      goto LAB_0173a374;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar8 == 0) goto LAB_0173a374;
      uVar1 = 0;
      if ((ulong)uVar3 != 0) {
        uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
      }
      if (*puVar6 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar1) ||
         (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), 0xbc < uVar4))
      goto LAB_0173a374;
    }
  }
  if (uVar4 == 0xac) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_01ae89e0(&local_48);
  }
LAB_0173a3b4:
  return uVar3 & 1;
}

