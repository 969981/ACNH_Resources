
void FUN_020f2e70(long param_1,char *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  char local_38 [4];
  undefined1 local_34 [2];
  undefined2 local_32;
  undefined4 local_30;
  undefined1 local_2c;
  char local_28 [8];
  
  iVar3 = FUN_0205c714(*(undefined8 *)PTR_DAT_04bbcee0,param_1,param_2);
  if (iVar3 == 5) {
    local_32 = *(undefined2 *)(param_1 + 2);
    local_2c = *(undefined1 *)(param_1 + 8);
    local_34[0] = 0xb;
    local_38[0] = *param_2;
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pcVar4 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar4 = (char *)(lVar6 + 0x473);
      }
    }
    if (*pcVar4 != local_38[0]) {
      local_28[5] = local_38[0];
      local_28[4] = 4;
      if (DAT_053d16a0 < 0) {
        return;
      }
      lVar6 = **(long **)PTR_DAT_04bb27d0;
      goto LAB_020f3010;
    }
    pcVar4 = local_38;
    goto LAB_020f304c;
  }
  if (iVar3 == 2) {
    local_2c = *(undefined1 *)(param_1 + 8);
    local_32 = *(undefined2 *)(param_1 + 2);
    local_34[0] = 10;
    local_28[4] = '\0';
    local_28[5] = -1;
    if (DAT_053d16a0 < 0) {
      return;
    }
    plVar5 = *(long **)PTR_DAT_04bb27d0;
LAB_020f2ef8:
    lVar6 = *plVar5;
LAB_020f3010:
    local_28[6] = 0;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_30 = 0;
    FUN_01db1df0(lVar6 + 0x480,DAT_053d16a0,local_28,local_34,10,0);
    return;
  }
  if (iVar3 != 0) {
    return;
  }
  local_32 = *(undefined2 *)(param_1 + 2);
  local_2c = *(undefined1 *)(param_1 + 8);
  local_34[0] = 2;
  plVar5 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar5;
  bVar2 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_020f2fe0:
    puVar7 = PTR_DAT_04bc1220;
  }
  else {
    puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 >> 3 & 1) == 0) goto LAB_020f2fe0;
    if (*(byte *)(lVar6 + 0x472) != bVar2) {
      local_28[4] = '\x01';
      local_28[5] = -1;
      if (DAT_053d16a0 < 0) {
        return;
      }
      goto LAB_020f2ef8;
    }
    puVar7 = (undefined1 *)(lVar6 + 0x473);
  }
  pcVar4 = local_28;
  local_28[0] = *puVar7;
LAB_020f304c:
  local_30 = 0;
  FUN_020f28c4(local_34,pcVar4);
  return;
}

