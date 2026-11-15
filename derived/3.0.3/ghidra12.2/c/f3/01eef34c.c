
void FUN_01eef34c(long *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined4 local_3c;
  byte local_38 [4];
  undefined4 local_34;
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_01eef3c4:
    if (7 < *pbVar6) {
LAB_01eef3d0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_38[0] = *pbVar6;
        if (local_38[0] < 8) goto LAB_01eef450;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01eef3c4;
      }
      goto LAB_01eef3d0;
    }
  }
  local_38[0] = *pbVar6;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
LAB_01eef450:
  pfVar4 = (float *)FUN_0251b3b0(local_38,0);
  if (pfVar4 == (float *)0x0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x789c) == '\0') {
    pcVar9 = *(char **)(param_1[1] + 1000);
    if ((((*pcVar9 == 'k') && (pcVar9[1] == 'p')) && (pcVar9[2] == 'p')) &&
       ((*(int *)(param_1[1] + 0x750) == 2 && (lVar8 = param_1[2], *(int *)(lVar8 + 0x56c) == 0x32))
       )) {
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      *(undefined4 *)((long)param_1 + 0xae74) = 3;
      local_34 = 0;
      FUN_01e5a930(0x40000000,lVar8,0xd,PTR_DAT_04bb2150,&local_50,&local_34,PTR_DAT_04bc1600,6);
      pcVar9 = *(char **)(lVar8 + 0x3b8);
      if (pcVar9 != "KppPosturalChangeLieToSit") {
        iVar3 = 0x19;
        if (*(int *)(lVar8 + 0x3c0) < 0x1a) {
          iVar3 = *(int *)(lVar8 + 0x3c0) + -1;
        }
        memcpy(pcVar9,"KppPosturalChangeLieToSit",(long)iVar3);
        pcVar9[iVar3] = '\0';
      }
      *(undefined4 *)(lVar8 + 0x3a0) = 0;
      *(undefined1 *)(lVar8 + 0x410) = 0;
      return;
    }
    if (((ulong)local_38[0] < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)local_38[0] * 4 + 0xde8);
    }
    else {
      puVar7 = (undefined4 *)PTR_DAT_04bb3238;
    }
    local_3c = *puVar7;
    uVar5 = FUN_02087ce0(param_1[3],&local_3c,0);
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xae74) = 0;
      lVar8 = param_1[2];
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      local_34 = 0;
      FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,&local_50,&local_34,PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar8 + 0x3ac) = 0xf;
      return;
    }
    if ((*(int *)(param_1[1] + 0x750) == 0) &&
       (uVar5 = (**(code **)(*param_1 + 0x80))(param_1), (uVar5 & 1) == 0)) {
      *(undefined4 *)((long)param_1 + 0xae74) = 1;
      local_34 = FUN_006f0400(*pfVar4 - *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
                              pfVar4[2] - *(float *)(*(long *)(param_1[1] + 0x68) + 0x280));
      local_50 = PTR_DAT_04bb2020 + 0x10;
      puStack_48 = &DAT_0407ebb1;
      FUN_01e5ab70(param_1[2],&local_34,PTR_DAT_04bb65b0,&local_50,6);
    }
    else {
      lVar8 = param_1[2];
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      *(undefined4 *)((long)param_1 + 0xae74) = 2;
      local_34 = 0;
      FUN_01e5a930(0x40000000,lVar8,0xd,PTR_DAT_04bb2150,&local_50,&local_34,PTR_DAT_04bc1600,6);
      pcVar9 = *(char **)(lVar8 + 0x3b8);
      if (pcVar9 != "NpcGreeting") {
        iVar3 = 0xb;
        if (*(int *)(lVar8 + 0x3c0) < 0xc) {
          iVar3 = *(int *)(lVar8 + 0x3c0) + -1;
        }
        memcpy(pcVar9,"NpcGreeting",(long)iVar3);
        pcVar9[iVar3] = '\0';
      }
      *(undefined4 *)(lVar8 + 0x3a0) = 0;
      *(undefined1 *)(lVar8 + 0x410) = 0;
    }
  }
  else {
    local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
    *(undefined4 *)((long)param_1 + 0xae74) = 2;
    local_34 = 0;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_50,&local_34,PTR_DAT_04bc1600,6);
  }
  puVar10 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  FUN_01730d30(puVar10 + 600);
  return;
}

