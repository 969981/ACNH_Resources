
void FUN_01b0b2ec(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar4 == 0) {
LAB_01b0b438:
    local_38 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01b0b438;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((*(uint *)(lVar1 + 0x1d8) <= uVar6) ||
       (puVar7 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_01b0b438;
    uVar6 = *puVar7;
    if (uVar6 == 0 || puVar7 == (uint *)(ulong)uVar6) {
LAB_01b0b430:
      local_38 = 0;
    }
    else {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar8 == 0) || (uVar6 = puVar8[1], uVar6 == 0)) || ((ulong)(ushort)puVar8[2] == 0))
      goto LAB_01b0b430;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 == 0) goto LAB_01b0b430;
      uVar2 = 0;
      if ((ulong)uVar6 != 0) {
        uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
      }
      if (*puVar8 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar2) ||
         (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_38 = (uint)uVar3,
         0xbc < uVar3)) goto LAB_01b0b430;
    }
  }
  if (local_38 != 0x70) {
    return;
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    local_34 = 0xbc;
  }
  else {
    uVar6 = *puVar7;
    local_34 = 0;
    if ((uVar6 != 0) && (puVar7 != (uint *)(ulong)uVar6)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      local_34 = 0;
      if (*puVar8 != 0) {
        uVar6 = puVar8[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_34 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_34 < 0xbd))
            goto LAB_01b0b4fc;
          }
        }
        local_34 = 0;
      }
    }
  }
LAB_01b0b4fc:
  if (local_34 == 0x71) {
    uVar5 = FUN_0277d6c4(param_2);
    *(undefined2 *)(param_1 + 0xc) = uVar5;
  }
  return;
}

