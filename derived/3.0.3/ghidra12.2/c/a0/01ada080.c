
void FUN_01ada080(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ushort uVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 uStack_74;
  uint local_70 [2];
  undefined4 local_68;
  uint local_64;
  uint *local_60;
  undefined **local_58;
  uint local_50;
  uint uStack_4c;
  uint *local_48;
  undefined4 local_28;
  uint uStack_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar15 = *(long *)puVar2;
  if (lVar15 == 0) goto switchD_01ada450_caseD_480;
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if ((*(uint *)(lVar17 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
  goto switchD_01ada450_caseD_480;
  local_48 = (uint *)0x0;
  local_58 = &PTR_FUN_04a36b50;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uVar5 = FUN_0277d6c4(&local_50);
  lVar17 = DAT_0532a768;
  if (*(long *)puVar2 == 0) {
LAB_01ada20c:
    local_70[0] = 0xbc;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01ada20c;
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar5) ||
       (puVar11 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar11 == (uint *)0x0)) goto LAB_01ada20c;
    uVar5 = *puVar11;
    local_70[0] = 0;
    local_48 = puVar11;
    if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
      local_70[0] = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar15 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_70[0] = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               local_70[0] < 0xbd)) goto LAB_01ada210;
          }
        }
        local_70[0] = 0;
      }
    }
  }
LAB_01ada210:
  puVar2 = PTR_DAT_04bb37e0;
  if ((((local_70[0] == 0x4c) || (local_70[0] == 0x4e)) || (local_70[0] == 0x50)) ||
     (local_70[0] == 0x55)) {
    local_28 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_24 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    uVar8 = FUN_0124f260(param_2,&local_28,1,0);
    if ((uVar8 & 1) != 0) {
      FUN_0124c030(local_70,&local_28);
      puVar4 = PTR_DAT_04bbbc78;
      puVar3 = PTR_DAT_04bbbc70;
      if ((local_60 != (uint *)0x0) && (uVar5 = *local_60, uVar5 != 0)) {
        cVar13 = *PTR_DAT_04bbbc70;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            uVar5 = *local_60;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x4c);
            if (-1 < (int)uVar1) {
              if ((byte *)((ulong)uVar1 + (long)local_60) == (byte *)0x0) break;
              bVar16 = *(byte *)((ulong)uVar1 + (long)local_60);
              goto LAB_01ada380;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar5;
          bVar16 = 0;
          if ((puVar11 == (uint *)0x0) || (local_60 == puVar11)) goto LAB_01ada380;
          lVar15 = 0xc;
          if (*(char *)((long)local_60 + (10 - (long)puVar11)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)local_60 + (lVar15 - (long)puVar11);
          if (lVar15 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)local_60 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar14 = (int *)(lVar15 + 4);
          while (piVar14[-1] != -0xa58ccc9) {
            piVar14 = piVar14 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01ada37c;
          }
          bVar16 = 0;
          iVar6 = 0;
          if (*piVar14 != -1) {
            iVar6 = *piVar14;
          }
          *(int *)(puVar4 + 0x4c) = iVar6;
          uVar5 = *local_60;
          if (uVar5 == 0) goto LAB_01ada380;
        } while( true );
      }
LAB_01ada37c:
      bVar16 = 0;
LAB_01ada380:
      iVar6 = FUN_0123db50(&local_68);
      if ((iVar6 - 0xbU < 7) && (1 < bVar16)) {
        FUN_0124d940(local_70,4,0,0);
        local_28 = local_68;
        uStack_24 = local_64;
      }
      local_78 = *(uint *)puVar2;
      uStack_74 = *(undefined4 *)(puVar2 + 4);
      uVar8 = FUN_0123feb0(&local_28,&local_78);
      if ((uVar8 & 1) != 0) {
        iVar6 = FUN_0123db50(&local_68,local_60);
        param_2 = &local_78;
        if ((iVar6 - 0x12U < 6) && (bVar16 == 3)) {
          iVar6 = FUN_0123db50(&local_68,local_60);
          param_2 = &local_78;
          if ((0xfffffff9 < iVar6 - 0x18U) && (uVar5 = local_64 >> 5 & 7, uVar5 != 0)) {
            param_2 = &local_78;
            uVar7 = FUN_0277d6c4(&local_78);
            switch(uVar7) {
            case 0x47f:
              uVar9 = 0x3262;
              uVar10 = 0x480;
              break;
            default:
              goto switchD_01ada450_caseD_480;
            case 0x482:
              uVar9 = 0x3263;
              uVar10 = 0x483;
              break;
            case 0x484:
              uVar9 = 0x3264;
              uVar10 = 0x486;
              break;
            case 0x487:
              uVar9 = 0x3266;
              uVar10 = 0x488;
              break;
            case 0x48a:
              uVar9 = 0x3269;
              uVar10 = 0x48b;
              break;
            case 0x48e:
              uVar9 = 0x11b4;
              uVar10 = 0x48f;
              break;
            case 0x490:
              uVar9 = 0x11b8;
              uVar10 = 0x491;
              break;
            case 0x495:
              uVar9 = 0x11bc;
              uVar10 = 0x496;
              break;
            case 0x497:
              uVar9 = 0x11c0;
              uVar10 = 0x498;
            }
            if (uVar5 != 1) {
              uVar10 = uVar9;
            }
            local_80 = (uint)uVar10;
            local_7c = 0;
            FUN_0277d4ac(&local_80);
            param_2 = &local_78;
            local_78 = local_80;
            uStack_74 = local_7c;
          }
        }
      }
    }
  }
switchD_01ada450_caseD_480:
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  return;
}

