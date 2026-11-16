
uint FUN_026bb860(byte *param_1,uint *param_2,undefined2 *param_3,undefined2 *param_4,int *param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  char cVar10;
  ushort uVar11;
  uint *puVar12;
  int *piVar13;
  char *pcVar14;
  long lVar15;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  undefined8 local_48;
  
  if (*param_5 == 0) {
    local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_48 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_80 = (undefined *)(lVar6 + -0x15180);
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar7 = local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar7,(undefined6)local_48) & 0xff00ffffffffffff;
    uVar7 = FUN_02692770(param_1,&local_48);
    puVar2 = PTR_DAT_04bb37e0;
    if ((uVar7 & 1) != 0) {
      local_65 = 0;
      *param_3 = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)(param_3 + 1) = puVar2[2];
      *(undefined *)((long)param_3 + 3) = puVar2[3];
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 4);
      *param_4 = *(undefined2 *)puVar2;
      *(undefined *)(param_4 + 1) = puVar2[2];
      *(undefined *)((long)param_4 + 3) = puVar2[3];
      local_80 = PTR_DAT_04bb3768;
      local_70 = 8;
      local_6c[0] = 0;
      local_78 = local_6c;
      *(undefined4 *)(param_4 + 2) = *(undefined4 *)(puVar2 + 4);
      local_80 = local_80 + 0x10;
      FUN_038d1270(&local_80,"-----");
      if ((ulong)*param_1 < 0x23) {
        FUN_038d1270(&local_80,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),param_1[1]);
      }
      uVar9 = *(undefined8 *)PTR_DAT_04bb4138;
      (**(code **)(local_80 + 0x18))(&local_80);
      local_88 = FUN_006bd550(local_78,0);
      puVar8 = (uint *)FUN_0079e770(uVar9,&local_88);
      puVar3 = PTR_DAT_04bb40b8;
      puVar2 = PTR_DAT_04bb40b0;
      if (puVar8 != (uint *)0x0) {
        if (*puVar8 != 0) {
          cVar10 = *PTR_DAT_04bb40b0;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar4 = *(uint *)(puVar3 + 0x50);
              if (-1 < (int)uVar4) {
                if ((ushort *)((ulong)uVar4 + (long)puVar8) != (ushort *)0x0) {
                  uVar11 = *(ushort *)((ulong)uVar4 + (long)puVar8);
                  goto LAB_026bbcb8;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)*puVar8;
            uVar11 = 0xfffe;
            if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_026bbcb8;
            lVar6 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar8 + (lVar6 - (long)puVar12);
            if (lVar6 == 0) break;
            uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
            *(undefined4 *)(puVar3 + 0x50) = 0xfffffffe;
            if (uVar7 == 0) break;
            piVar13 = (int *)(lVar6 + 4);
            while (piVar13[-1] != -0x78f0e1d7) {
              piVar13 = piVar13 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_026bbcb4;
            }
            iVar5 = 0;
            if (*piVar13 != -1) {
              iVar5 = *piVar13;
            }
            *(int *)(puVar3 + 0x50) = iVar5;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_026bbcb4:
        uVar11 = 0xfffe;
LAB_026bbcb8:
        local_88 = (uint)uVar11;
        local_84 = 0;
        FUN_0277d4ac(&local_88);
        *param_2 = local_88;
        param_2[1] = local_84;
      }
      uVar4 = 1;
      goto LAB_026bbcd8;
    }
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "EquipChristmasWear";
    iVar5 = FUN_02749340(param_1 + 0x1267c,&local_80);
    puVar2 = PTR_DAT_04bb43c0;
    if (iVar5 == 0) goto LAB_026bb89c;
    pbVar1 = param_1 + 0x125ec;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(pbVar1);
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_80 = *(undefined **)pbVar1;
        local_78 = (char *)0x0;
        uVar4 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar2 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if (((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
             (pcVar14 = *(char **)PTR_DAT_04bb43a8, pcVar14 != (char *)0x0)) {
            uVar7 = FUN_0277d6c4(pbVar1);
            local_78 = pcVar14 + (uVar7 & 0xffffffff) * 0x23;
            if (0x752 < ((uint)(uVar7 >> 3) & 0x1fffffff)) {
              local_78 = pcVar14;
            }
          }
        }
        local_8c = 0x27;
        local_88 = FUN_007b0ea4(&local_80,&local_8c);
        if (local_88 != 4) {
          uVar9 = 1;
          goto LAB_026bb8b4;
        }
      }
    }
    uVar4 = 1;
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x13214);
    *(byte *)((long)param_2 + 2) = param_1[0x13216];
    *(byte *)((long)param_2 + 3) = param_1[0x13217];
    puVar2 = PTR_DAT_04bb37e0;
    param_2[1] = *(uint *)(param_1 + 0x13218);
    *param_3 = *(undefined2 *)puVar2;
    *(undefined *)(param_3 + 1) = puVar2[2];
    *(undefined *)((long)param_3 + 3) = puVar2[3];
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 4);
    *param_4 = *(undefined2 *)(param_1 + 0x13224);
    *(byte *)(param_4 + 1) = param_1[0x13226];
    *(byte *)((long)param_4 + 3) = param_1[0x13227];
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_1 + 0x13228);
  }
  else {
LAB_026bb89c:
    uVar9 = 0;
LAB_026bb8b4:
    uVar4 = FUN_0269b5c0(param_1,param_2,param_3,param_4,param_5,uVar9);
  }
LAB_026bbcd8:
  return uVar4 & 1;
}

