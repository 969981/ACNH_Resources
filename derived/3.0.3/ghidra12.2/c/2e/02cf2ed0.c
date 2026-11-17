
bool FUN_02cf2ed0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  uint auStack_148 [51];
  undefined1 local_7c;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  
  FUN_02cde8f4(auStack_150);
  param_1 = param_1 + 0x1f8;
  local_7c = 1;
  FUN_02cdf5c0(auStack_150,param_1,param_2);
  local_158 = 0xfffe;
  FUN_0277d4ac(&local_158);
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  iVar11 = 0;
  uVar10 = 0;
  iVar5 = 0;
  uVar4 = 0xffffffff;
  while( true ) {
    while (uVar7 = uVar4, uVar7 == 0xffffffff) {
      uVar4 = 0;
    }
    if (uVar7 == 10) break;
    local_6c = uVar7;
    puVar8 = (uint *)puVar1;
    if (((int)uVar7 < 10) && (puVar8 = auStack_148 + (ulong)uVar7 * 2, 9 < uVar7)) {
      puVar8 = auStack_148;
    }
    local_74 = *puVar8;
    uStack_70 = puVar8[1];
    lVar9 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4(&local_74);
    if (*(long *)puVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_74 = uVar7;
        puVar8 = (uint *)puVar1;
        if (((int)uVar7 < 10) && (puVar8 = auStack_148 + (ulong)uVar7 * 2, 9 < uVar7)) {
          puVar8 = auStack_148;
        }
        local_158 = *(undefined8 *)puVar8;
        uVar10 = uVar10 + 1;
        uVar6 = FUN_0277e9e0(&local_158);
        if ((uVar6 & 1) == 0) {
          iVar11 = iVar5 + 1;
          iVar5 = iVar5 + 1;
        }
      }
    }
    uVar4 = 10;
    if ((int)uVar7 < 10) {
      uVar4 = uVar7 + 1;
    }
  }
  if (uVar10 == 0) {
    bVar3 = true;
  }
  else {
    uVar4 = FUN_0267c230(param_1);
    iVar5 = FUN_026731d0(param_1);
    bVar3 = (uVar10 <= iVar5 + uVar4 && iVar11 == 0) && uVar10 <= uVar4;
  }
  return bVar3;
}

