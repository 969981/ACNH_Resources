
undefined8 FUN_01f78720(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined *local_90;
  char *pcStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  float local_64 [2];
  float local_5c;
  int local_58;
  byte local_54 [4];
  
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_01f787a0:
    if (7 < *pbVar8) {
LAB_01f787ac:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_54[0] = *pbVar8;
        if (local_54[0] < 8) goto LAB_01f7882c;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f787a0;
      }
      goto LAB_01f787ac;
    }
  }
  local_54[0] = *pbVar8;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
LAB_01f7882c:
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "SeoNotGetPearlFlag";
  iVar6 = FUN_0274bce0(local_54,&local_90);
  if (iVar6 == 0) {
    lVar9 = FUN_0251b3b0(local_54,0);
    if (lVar9 == 0) {
      return 0;
    }
    local_58 = 0;
    uVar7 = FUN_01f789c0(lVar9,lVar9,&local_58,local_64,0);
    puVar5 = PTR_DAT_04bbc1a0;
    puVar4 = PTR_DAT_04bb2010;
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    local_90 = PTR_DAT_04bbc1a0 + 0x10;
    pcStack_88 = PTR_DAT_04bb2010 + 0x10;
    local_70 = *(int *)(*(long *)PTR_DAT_04bc22f8 + 0x10) + 4;
    iVar6 = *(int *)(*(long *)PTR_DAT_04bc22f8 + 0x20) + -4;
    iVar3 = (int)((float)(int)local_5c / 5.0) - (uint)(local_5c < 0.0);
    local_80 = local_70;
    if (iVar6 <= local_70) {
      local_80 = iVar6;
    }
    if (local_70 <= iVar6) {
      local_70 = iVar6;
    }
    iVar6 = iVar3 + 1;
    iStack_7c = iVar3;
    local_78 = pcStack_88;
    iStack_6c = iVar6;
    uVar7 = FUN_01f78ba0(0,&local_90);
    if (((uVar7 & 1) != 0) || (*(char *)(param_1 + 0xafd8) == '\0')) {
      local_70 = (int)((float)(int)local_64[0] / 5.0) - (uint)(local_64[0] < 0.0);
      if (local_58 == 1) {
        local_90 = puVar5 + 0x10;
        pcStack_88 = puVar4 + 0x10;
        local_80 = local_70;
        iStack_7c = iVar3;
        local_78 = pcStack_88;
        local_70 = local_70 + 8;
        iStack_6c = iVar6;
        uVar7 = FUN_01f78ba0(uVar7,&local_90);
      }
      else {
        local_80 = local_70 + -8;
        local_90 = puVar5 + 0x10;
        pcStack_88 = puVar4 + 0x10;
        iStack_7c = iVar3;
        local_78 = pcStack_88;
        iStack_6c = iVar6;
        uVar7 = FUN_01f78ba0(uVar7,&local_90);
      }
      if ((uVar7 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

