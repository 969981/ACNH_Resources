
void FUN_02690a70(byte *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  ushort uVar13;
  uint *puVar14;
  int *piVar15;
  undefined8 uVar16;
  uint local_78;
  undefined4 local_74;
  undefined *local_70;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  int local_34;
  
  local_34 = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "EquipChristmasWear";
  iVar9 = FUN_02749340(param_1 + 0x1267c,&local_70);
  if (iVar9 != 0) {
    local_34 = 0x18;
  }
  local_3c = 0xfffe;
  FUN_0277d4ac(&local_3c);
  local_44 = 0xfffe;
  FUN_0277d4ac(&local_44);
  local_4c = 0xfffe;
  FUN_0277d4ac(&local_4c);
  if (((local_34 == 0x18) || (uVar10 = FUN_02692770(param_1,param_2), (uVar10 & 1) == 0)) &&
     (uVar10 = FUN_0269b5c0(param_1,&local_3c,&local_44,&local_4c,&local_34,1), (uVar10 & 1) != 0))
  {
    *(uint *)(param_1 + 0x13214) = (uint)local_3c;
    *(undefined4 *)(param_1 + 0x13218) = local_3c._4_4_;
    *(undefined4 *)(param_1 + 0x1321c) = (undefined4)local_44;
    *(undefined4 *)(param_1 + 0x13220) = local_44._4_4_;
    *(undefined4 *)(param_1 + 0x13224) = (undefined4)local_4c;
    *(undefined4 *)(param_1 + 0x13228) = local_4c._4_4_;
  }
  else {
    puVar7 = PTR_DAT_04bb37e0;
    local_60 = 8;
    uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined2 *)(param_1 + 0x1321c) = uVar6;
    bVar4 = puVar7[2];
    param_1[0x1321e] = bVar4;
    bVar5 = puVar7[3];
    param_1[0x1321f] = bVar5;
    uVar2 = *(undefined4 *)(puVar7 + 4);
    *(undefined2 *)(param_1 + 0x13224) = uVar6;
    param_1[0x13226] = bVar4;
    local_70 = PTR_DAT_04bb3768;
    local_68 = local_5c;
    local_55 = 0;
    local_5c[0] = 0;
    param_1[0x13227] = bVar5;
    *(undefined4 *)(param_1 + 0x13220) = uVar2;
    *(undefined4 *)(param_1 + 0x13228) = uVar2;
    local_70 = local_70 + 0x10;
    FUN_038d1270(&local_70,"-----");
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_70,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    uVar16 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_70 + 0x18))(&local_70);
    local_78 = FUN_006bd550(local_68,0);
    puVar11 = (uint *)FUN_0079e770(uVar16,&local_78);
    puVar8 = PTR_DAT_04bb40b8;
    puVar7 = PTR_DAT_04bb40b0;
    if (puVar11 != (uint *)0x0) {
      if (*puVar11 != 0) {
        cVar12 = *PTR_DAT_04bb40b0;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined4 *)(puVar8 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar8 + 0x50);
            if (-1 < (int)uVar3) {
              if ((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) {
                uVar13 = *(ushort *)((ulong)uVar3 + (long)puVar11);
                goto LAB_02690d30;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar11;
          uVar13 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_02690d30;
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + (lVar1 - (long)puVar14);
          if (lVar1 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
          *(undefined4 *)(puVar8 + 0x50) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar15 = (int *)(lVar1 + 4);
          while (piVar15[-1] != -0x78f0e1d7) {
            piVar15 = piVar15 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_02690d2c;
          }
          iVar9 = 0;
          if (*piVar15 != -1) {
            iVar9 = *piVar15;
          }
          *(int *)(puVar8 + 0x50) = iVar9;
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_02690d2c:
      uVar13 = 0xfffe;
LAB_02690d30:
      local_78 = (uint)uVar13;
      local_74 = 0;
      FUN_0277d4ac(&local_78);
      *(uint *)(param_1 + 0x13214) = local_78;
      *(undefined4 *)(param_1 + 0x13218) = local_74;
    }
  }
  return;
}

