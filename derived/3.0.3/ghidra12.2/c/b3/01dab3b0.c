
void FUN_01dab3b0(byte *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte local_44 [4];
  byte local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar5 = PTR_DAT_04bb27d0;
  iVar6 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  if (iVar6 != 3) {
    uVar7 = FUN_020d4530(DAT_053e23d0);
    if ((uVar7 & 1) == 0) {
      local_40[0] = *param_1;
      FUN_020d46c0(DAT_053e23d0,local_40);
    }
    else {
      FUN_020d3880();
    }
    puVar2 = (undefined8 *)(DAT_053e23d0 + 8) + (ulong)(uint)(int)(char)*param_1 * 6;
    if (7 < (uint)(int)(char)*param_1) {
      puVar2 = (undefined8 *)(DAT_053e23d0 + 8);
    }
    puVar2[4] = 0xffffffffffffffff;
    puVar2[5] = 0xffffffffffffffff;
    puVar2[2] = 0xffffffffffffffff;
    puVar2[3] = 0xffffffffffffffff;
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
  }
  FUN_00ad7710(DAT_04daa210,(long)(char)*param_1);
  bVar4 = *param_1;
  pbVar8 = PTR_DAT_04bb32e0;
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(**(long **)puVar5 + 0x48);
    pbVar3 = pbVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 & 1) != 0) {
      pbVar8 = pbVar3 + 0x78;
    }
  }
  local_44[0] = *pbVar8;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  FUN_008a40fc(DAT_04ceac30,local_44);
  if ((iVar6 != 3) && (iVar6 = FUN_020f0020(), -1 < iVar6)) {
    local_3c[0] = (undefined1)iVar6;
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (-1 < DAT_053d10a0) {
      FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d10a0,&local_38,local_3c,1,0);
    }
  }
  return;
}

