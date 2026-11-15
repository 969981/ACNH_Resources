
void FUN_0242f164(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  byte bVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong local_148;
  undefined4 local_140;
  float local_13c;
  float fStack_138;
  float local_134;
  undefined1 auStack_88 [24];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar9 = FUN_0231eddc(param_1,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x1910);
  iVar14 = *(int *)(param_1 + 0x190a);
  sVar6 = *(short *)(param_1 + 0x190e);
  cVar5 = *(char *)(param_1 + 0x1909);
  uVar4 = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0xb2c) = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0xb28) = uVar4;
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  local_68 = *(undefined8 *)(param_1 + 0x1900);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
LAB_0242f23c:
    if (DAT_05739190 == 0) {
      lVar12 = 0;
      if (DAT_00000028 == '\0') goto LAB_0242f280;
LAB_0242f258:
      bVar7 = (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))((long *)(lVar12 + 0x20));
      *(undefined1 *)(lVar12 + 0x28) = 0;
    }
    else {
      lVar12 = *(long *)(DAT_05739190 + 0x28);
      if (*(char *)(lVar12 + 0x28) != '\0') goto LAB_0242f258;
LAB_0242f280:
      bVar7 = 1;
    }
    *(byte *)(lVar12 + 0x29) = bVar7 & 1;
    puVar10 = (undefined4 *)(lVar12 + 0x2c);
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar11 = *pbVar1;
    bVar7 = *pbVar2;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar7 == bVar11) goto LAB_0242f23c;
    puVar10 = (undefined4 *)&DAT_05586008;
  }
  local_70 = *puVar10;
  uStack_6c = puVar10[1];
  if (0xfffffff4 < *(byte *)(param_1 + 0x1908) - 0xd) {
    return;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffbfffff;
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      if (cVar5 == '\x01') {
        if (DAT_05739190 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(DAT_05739190 + 0x28);
        }
        if (*(char *)(lVar12 + 0x28) == '\0') {
          bVar7 = 1;
        }
        else {
          bVar7 = (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))((long *)(lVar12 + 0x20));
          *(undefined1 *)(lVar12 + 0x28) = 0;
        }
        *(byte *)(lVar12 + 0x29) = bVar7 & 1;
      }
      local_148 = 0xfffe;
      FUN_0277d4ac(&local_148);
      FUN_016e49e4(&local_148,&local_68,cVar5 == '\x01');
      lVar12 = *(long *)puVar3;
      uVar8 = FUN_0277d6c4(&local_148);
      if (*(long *)puVar3 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_148,1,0);
        }
      }
      if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
         (*(int *)(DAT_0537d558 + 0x80) != 1)) {
        if (DAT_04c487d4 != -1) {
          local_148 = CONCAT44(local_148._4_4_,0x20);
          puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar3 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_0242f3a4;
        }
        uVar9 = FUN_0277d9a8(&local_68);
        if ((uVar9 & 1) != 0) {
          FUN_01ad5d04(auStack_88,&local_68);
          uVar9 = FUN_01b0e0ec(auStack_88);
          if (((uVar9 & 1) == 0) || (uVar9 = FUN_01b09bec(auStack_88), (uVar9 & 1) == 0)) {
            uVar8 = FUN_0243bb28(param_1);
            uVar9 = FUN_016dd4c4(pbVar1,&local_68,uVar8 & 1);
            if ((uVar9 & 1) != 0) {
              FUN_02448ae4(param_1);
              return;
            }
          }
          else {
            FUN_024f4060(&local_148,pbVar1,&local_68);
            uVar9 = FUN_024f43cc(&local_148);
            if ((uVar9 & 1) != 0) {
              FUN_025583ec(&local_68,pbVar1);
              FUN_024487e0(param_1,&local_68);
              return;
            }
          }
        }
      }
      goto LAB_0242f3a4;
    }
  }
  if (cVar5 == '\x01') {
    local_148 = CONCAT44((undefined4)local_68,(int)local_148) & 0xffffffffffffff00;
    local_140 = local_68._4_4_;
    local_13c = (float)iVar14 * 0.001;
    fStack_138 = (float)(int)sVar6 * 0.25;
    local_134 = (float)iVar13 * 0.001;
    FUN_024bc7f8(param_1,&local_148);
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
  if (7 < *pbVar1) {
    lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  FUN_022bbc50(lVar12 + 0xb0,lVar12 + 0xc4);
LAB_0242f3a4:
  uVar9 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
  if ((uVar9 & 1) == 0) {
    local_140 = 0;
    local_148 = CONCAT35(local_148._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_148);
  }
  return;
}

