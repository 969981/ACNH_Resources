
uint FUN_012edae8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  long local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bbc220;
  puVar1 = PTR_DAT_04bb27a8;
  local_38 = 6;
  local_48 = PTR_DAT_04bbc220 + 0x10;
  lVar8 = *(long *)PTR_DAT_04bb27a8;
  local_6c._0_4_ = 6;
  if ((int)*(uint *)(lVar8 + 0x5d0) < 1) {
    if ((((*(long *)(lVar8 + 0x4c0) == 0) ||
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x4c0) + 8), puVar6 == (uint *)0x0)) ||
        ((6 < *(uint *)(lVar8 + 0x4d8) && (*(char *)(*(long *)(lVar8 + 0x4e0) + 6) == '\0')))) ||
       (((*puVar6 < 7 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_012edbc4;
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    local_40 = (ulong)(puVar6[1] * 6 + (uint)(ushort)puVar6[2] * 8 + iVar7) + (long)puVar6;
  }
  else if (*(uint *)(lVar8 + 0x5d0) < 7) {
LAB_012edbc4:
    local_40 = 0;
  }
  else {
    if (*(uint *)(lVar8 + 0x5c0) < 7) {
      local_6c._0_4_ = 0;
    }
    local_40 = *(long *)(*(long *)(lVar8 + 0x5c8) + (ulong)(uint)local_6c * 8);
  }
  local_50 = 0;
  local_4c = 0;
  local_6c = 0x500000000;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  uVar4 = FUN_012efe10(&local_48,&local_6c);
  uVar5 = FUN_012ed95c(uVar4,*(undefined8 *)(param_2 + 0x18),&local_6c,param_2);
  uVar3 = 0;
  if ((uVar5 & 1) == 0) goto LAB_012edd00;
  lVar8 = *(long *)puVar1;
  local_48 = puVar2 + 0x10;
  local_38 = 0xb;
  local_6c._0_4_ = 0xb;
  if ((int)*(uint *)(lVar8 + 0x5d0) < 1) {
    if ((((*(long *)(lVar8 + 0x4c0) == 0) ||
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x4c0) + 8), puVar6 == (uint *)0x0)) ||
        ((0xb < *(uint *)(lVar8 + 0x4d8) && (*(char *)(*(long *)(lVar8 + 0x4e0) + 0xb) == '\0'))))
       || (((*puVar6 < 0xc || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_012edcc4;
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    local_40 = (ulong)(puVar6[1] * 0xb + (uint)(ushort)puVar6[2] * 8 + iVar7) + (long)puVar6;
  }
  else if (*(uint *)(lVar8 + 0x5d0) < 0xc) {
LAB_012edcc4:
    local_40 = 0;
  }
  else {
    if (*(uint *)(lVar8 + 0x5c0) < 0xc) {
      local_6c._0_4_ = 0;
    }
    local_40 = *(long *)(*(long *)(lVar8 + 0x5c8) + (ulong)(uint)local_6c * 8);
  }
  local_50 = 0;
  local_4c = 0;
  local_6c = 0x500000000;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  uVar4 = FUN_012efe10(&local_48,&local_6c);
  uVar3 = FUN_012ed95c(uVar4,*(undefined8 *)(param_2 + 0x18),&local_6c,param_2);
LAB_012edd00:
  return uVar3 & 1;
}

