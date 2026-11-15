
uint FUN_0230277c(long param_1,undefined1 *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  undefined2 local_b0 [4];
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined2 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_36;
  undefined4 local_34;
  
  local_36 = 0;
  local_44 = 0xffffffff;
  local_40 = 0xffff;
  local_5f = *param_2;
  local_34 = 0;
  local_60 = param_2[1];
  pfVar4 = (float *)FUN_0252d9bc(0);
  uVar3 = 0;
  if ((pfVar4 != (float *)0x0) && (lVar5 = FUN_0252dec4(0), uVar3 = 0, lVar5 != 0)) {
    iVar6 = (int)(*pfVar4 * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    local_4c = (undefined2)iVar6;
    iVar6 = (int)(pfVar4[1] * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    local_4a = (undefined2)iVar6;
    iVar6 = (int)(pfVar4[2] * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    local_48 = (undefined2)iVar6;
    local_46 = *(undefined2 *)(lVar5 + 6);
    local_7a = 0;
    local_70 = 0;
    local_6c = 0x41200000;
    local_a8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_a0 = PTR_DAT_04bb2010 + 0x10;
    local_80 = 0xff00;
    local_64 = 0xff00;
    bVar2 = param_2[1];
    local_78 = 0xffffffffffffffff;
    if (bVar2 == 5) {
      lVar5 = *(long *)PTR_DAT_04bb5008;
      if (*(char *)(lVar5 + 0x26848) != '\0') {
        local_5e = (undefined2)*(undefined4 *)(lVar5 + 0x26818);
        local_5c = (undefined2)*(undefined4 *)(lVar5 + 0x2681c);
        local_5a = (undefined2)*(undefined4 *)(lVar5 + 0x26828);
        local_58 = (undefined2)*(undefined4 *)(lVar5 + 0x2682c);
        local_56 = *(undefined2 *)(lVar5 + 0x26832);
        local_54 = param_2[2];
        local_50 = (undefined2)*(undefined4 *)(lVar5 + 0x26840);
        local_4e = (undefined2)*(undefined4 *)(lVar5 + 0x26844);
      }
    }
    else if (bVar2 == 3) {
      lVar5 = *(long *)PTR_DAT_04bb5008;
      if (*(char *)(lVar5 + 0x26800) != '\0') {
        local_5e = (undefined2)*(undefined4 *)(lVar5 + 0x267d8);
        local_5c = (undefined2)*(undefined4 *)(lVar5 + 0x267dc);
        local_5a = (undefined2)*(undefined4 *)(lVar5 + 0x267e8);
        local_58 = (undefined2)*(undefined4 *)(lVar5 + 0x267ec);
        local_56 = *(undefined2 *)(lVar5 + 0x267f2);
        local_54 = param_2[2];
        local_53 = *(undefined1 *)(lVar5 + 0x267f8);
        local_52 = (undefined1)*(undefined4 *)(lVar5 + 0x267f4);
      }
    }
    else if (bVar2 == 0) {
      local_80 = 0x1b00;
      local_64 = 0x1c00;
    }
    iVar6 = *(int *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x2c);
    local_7e = CONCAT22((short)(1 << (ulong)(bVar2 & 0x1f)),0x100);
    local_b0[0] = *(undefined2 *)PTR_DAT_04bb6298;
    local_88 = *(int *)(param_2 + 0x18) + -2;
    if (iVar6 <= *(int *)(param_2 + 0x18) + -2) {
      local_88 = iVar6;
    }
    iVar6 = iVar6 + 2;
    iStack_84 = *(int *)(param_2 + 0x1c) + -2;
    if (iVar1 <= *(int *)(param_2 + 0x1c) + -2) {
      iStack_84 = iVar1;
    }
    iVar1 = iVar1 + 2;
    local_98 = local_88;
    if (iVar6 <= local_88) {
      local_98 = iVar6;
    }
    if (local_88 <= iVar6) {
      local_88 = iVar6;
    }
    iStack_94 = iStack_84;
    if (iVar1 <= iStack_84) {
      iStack_94 = iVar1;
    }
    if (iStack_84 <= iVar1) {
      iStack_84 = iVar1;
    }
    local_90 = puStack_a0;
    uVar3 = FUN_02302e80(param_1,local_b0,&local_60);
    if ((uVar3 & 1) != 0) {
      *(int *)(param_1 + 0x30) = local_98;
      *(int *)(param_1 + 0x34) = iStack_94;
      *(int *)(param_1 + 0x40) = local_88;
      *(int *)(param_1 + 0x44) = iStack_84;
      *(float *)(param_1 + 0x14) = ((float)local_98 * 5.0 + (float)local_88 * 5.0 + 5.0) * 0.5;
      *(float *)(param_1 + 0x1c) = ((float)iStack_94 * 5.0 + (float)iStack_84 * 5.0 + 5.0) * 0.5;
      *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) =
           *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) & 0xffcf | 8;
    }
  }
  return uVar3 & 1;
}

