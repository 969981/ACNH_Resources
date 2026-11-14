
void FUN_01b37320(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  long lVar27;
  char *pcVar28;
  ulong uVar29;
  byte bVar30;
  uint local_94;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  byte local_80 [4];
  uint local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x2a) == '\0' && *(char *)(param_1 + 0x2b) == '\0') {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar8 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar8 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar8 + 0x276db8);
  if (lVar15 == 0) {
    local_94 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar8 + 0x276db8);
      if (lVar15 == 0) goto LAB_01b373ec;
    }
    plVar12 = *(long **)(lVar15 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = *(long *)(lVar8 + 0x276d98);
      local_70 = *(undefined8 *)(lVar8 + 0x276da0);
      local_68 = 0x15ae0;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
LAB_01b373ec:
  uVar29 = 0;
  bVar30 = 0;
  pcVar1 = (char *)(*(long *)(lVar8 + 0x276da0) + *(long *)(lVar8 + 0x276d98));
  do {
    uVar6 = *(uint *)(pcVar1 + uVar29 * 4 + 0x15950);
    pcVar2 = pcVar1 + (ulong)uVar6 * 0x374;
    if (99 < uVar6) {
      pcVar2 = pcVar1;
    }
    if (*pcVar2 != '\0') {
      if (uVar29 != bVar30) {
        if (bVar30 < 100) {
          lVar15 = (ulong)bVar30 * 4;
          uVar18 = *(uint *)(pcVar1 + lVar15 + 0x15950);
          *(uint *)(pcVar1 + lVar15 + 0x15950) = uVar6;
          *(uint *)(pcVar1 + uVar29 * 4 + 0x15950) = uVar18;
        }
        else {
          uVar18 = uVar6;
        }
        pcVar2 = pcVar1 + (ulong)uVar18 * 0x374;
        if (99 < uVar18) {
          pcVar2 = pcVar1;
        }
        memset(pcVar2,0,0x374);
        pcVar28 = pcVar2 + 0xc0;
        pcVar28[0] = -2;
        pcVar28[1] = -1;
        FUN_0277d4ac(pcVar28);
        pcVar2[200] = '\0';
        pcVar2[0xcc] = '\0';
        memset(pcVar2 + 0xce,0,0x2a2);
        pcVar2[0x370] = -2;
        pcVar2[0x371] = -1;
      }
      bVar30 = bVar30 + 1;
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != 100);
  lVar15 = 0;
  do {
    pcVar2 = pcVar1 + (ulong)*(uint *)(pcVar1 + lVar15 + 0x15950) * 0x374;
    if (99 < *(uint *)(pcVar1 + lVar15 + 0x15950)) {
      pcVar2 = pcVar1;
    }
    if (*pcVar2 == '\0') break;
    if ((pcVar2[0x5c] == '\0') && (pcVar2[0xb8] == '\x01')) {
      uVar5 = FUN_021d7d60(pcVar2 + 0x60);
      lVar9 = FUN_0265c3e0();
      if (lVar9 != 0) {
        if ((*(long *)(lVar9 + 0x28) == 0) ||
           (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x10), puVar10 == (undefined8 *)0x0
           )) {
          local_90 = 0;
        }
        else {
          local_90 = (**(code **)*puVar10)();
        }
        lVar11 = FUN_0265c2a0(uVar5);
        if (lVar11 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar10 == (undefined8 *)0x0)) {
            uVar6 = 1;
          }
          else {
            uVar6 = (**(code **)*puVar10)();
            uVar6 = uVar6 ^ 1;
          }
          uVar7 = FUN_026b318c(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),pcVar2 + 0x20);
          if ((((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
        }
        if ((*(long *)(lVar9 + 0x28) != 0) &&
           (plVar12 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
          local_78 = *(long *)(lVar9 + 8);
          local_70 = *(undefined8 *)(lVar9 + 0x10);
          local_68 = 0x13230;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
        }
        lVar11 = FUN_026917f4(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),pcVar2 + 0x20);
        if (lVar11 != 0) {
          local_7c = 0;
          local_8c = 0xfffe;
          FUN_0277d4ac(&local_8c);
          if ((*(long *)(lVar9 + 0x28) != 0) &&
             (plVar12 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
            local_78 = *(long *)(lVar9 + 8);
            local_70 = *(undefined8 *)(lVar9 + 0x10);
            local_68 = 0x13230;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
          }
          uVar6 = DAT_0532dde8;
          DAT_0532dde8 = DAT_0532ddec;
          uVar6 = uVar6 ^ uVar6 << 0xb;
          DAT_0532ddec = DAT_0532ddf0;
          DAT_0532ddf0 = DAT_0532ddf4;
          DAT_0532ddf4 = uVar6 >> 8 ^ DAT_0532ddf4 >> 0x13 ^ uVar6 ^ DAT_0532ddf4;
          FUN_01b27570(&local_7c,local_80,&local_84,&local_8c,pcVar2,
                       *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),param_1);
          FUN_021d7650(uVar5,uVar7,local_84,1);
          puVar4 = PTR_DAT_04bb43c0;
          lVar27 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(&local_8c);
          if (*(long *)puVar4 != 0) {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar27 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              if ((*(long *)(lVar9 + 0x28) != 0) &&
                 (plVar12 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
                local_78 = *(long *)(lVar9 + 8);
                local_70 = *(undefined8 *)(lVar9 + 0x10);
                local_68 = 0x13230;
                (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
              }
              pcVar28 = pcVar2 + 4;
              if (pcVar2[0x5c] != '\0') {
                pcVar28 = (char *)0x0;
              }
              FUN_0268f390(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),&local_8c,pcVar28 + 0x1c,6
                           ,0,1,0);
            }
          }
          if (local_7c != 0) {
            local_78 = CONCAT44(local_78._4_4_,local_7c);
            uVar5 = *(undefined4 *)(pcVar2 + 0x36e);
            bVar30 = *(byte *)(lVar11 + 0x571);
            if (local_80[0] < bVar30) {
              uVar25 = 0;
              uVar13 = uVar5;
              uVar6 = local_7c;
              uVar21 = (undefined2)local_8c;
              uVar16 = local_8c._2_1_;
              uVar19 = local_8c._3_1_;
              uVar7 = local_8c._4_4_;
              bVar30 = local_80[0];
            }
            else {
              bVar3 = *(byte *)(lVar11 + 0x570);
              *(char *)(lVar11 + 0x570) = (char)local_7c;
              *(byte *)(lVar11 + 0x571) = local_80[0];
              uVar16 = *(undefined1 *)(lVar11 + 0x576);
              uVar7 = *(undefined4 *)(lVar11 + 0x578);
              *(undefined1 *)(lVar11 + 0x576) = local_8c._2_1_;
              *(undefined4 *)(lVar11 + 0x578) = local_8c._4_4_;
              uVar13 = *(undefined4 *)(lVar11 + 0x57c);
              uVar19 = *(undefined1 *)(lVar11 + 0x577);
              *(undefined4 *)(lVar11 + 0x57c) = uVar5;
              *(undefined1 *)(lVar11 + 0x577) = local_8c._3_1_;
              uVar21 = *(undefined2 *)(lVar11 + 0x574);
              uVar25 = *(undefined1 *)(lVar11 + 0x572);
              *(undefined2 *)(lVar11 + 0x574) = (undefined2)local_8c;
              *(undefined1 *)(lVar11 + 0x572) = 0;
              uVar6 = (uint)bVar3;
            }
            bVar3 = *(byte *)(lVar11 + 0x581);
            uVar14 = uVar13;
            uVar22 = uVar21;
            uVar17 = uVar16;
            uVar20 = uVar19;
            uVar5 = uVar7;
            uVar26 = uVar25;
            uVar23 = (char)uVar6;
            if (bVar3 <= bVar30) {
              uVar22 = *(undefined2 *)(lVar11 + 0x584);
              *(byte *)(lVar11 + 0x581) = bVar30;
              *(undefined2 *)(lVar11 + 0x584) = uVar21;
              uVar17 = *(undefined1 *)(lVar11 + 0x586);
              uVar5 = *(undefined4 *)(lVar11 + 0x588);
              *(undefined4 *)(lVar11 + 0x588) = uVar7;
              *(undefined1 *)(lVar11 + 0x586) = uVar16;
              uVar20 = *(undefined1 *)(lVar11 + 0x587);
              *(undefined1 *)(lVar11 + 0x587) = uVar19;
              uVar14 = *(undefined4 *)(lVar11 + 0x58c);
              uVar26 = *(undefined1 *)(lVar11 + 0x582);
              *(undefined4 *)(lVar11 + 0x58c) = uVar13;
              *(undefined1 *)(lVar11 + 0x582) = uVar25;
              uVar23 = *(undefined1 *)(lVar11 + 0x580);
              *(char *)(lVar11 + 0x580) = (char)uVar6;
              bVar30 = bVar3;
            }
            bVar3 = *(byte *)(lVar11 + 0x591);
            uVar13 = uVar14;
            uVar21 = uVar22;
            uVar16 = uVar17;
            uVar19 = uVar20;
            uVar7 = uVar5;
            uVar25 = uVar26;
            uVar24 = uVar23;
            if (bVar3 <= bVar30) {
              uVar21 = *(undefined2 *)(lVar11 + 0x594);
              *(byte *)(lVar11 + 0x591) = bVar30;
              *(undefined2 *)(lVar11 + 0x594) = uVar22;
              uVar16 = *(undefined1 *)(lVar11 + 0x596);
              uVar7 = *(undefined4 *)(lVar11 + 0x598);
              *(undefined4 *)(lVar11 + 0x598) = uVar5;
              *(undefined1 *)(lVar11 + 0x596) = uVar17;
              uVar19 = *(undefined1 *)(lVar11 + 0x597);
              *(undefined1 *)(lVar11 + 0x597) = uVar20;
              uVar13 = *(undefined4 *)(lVar11 + 0x59c);
              uVar25 = *(undefined1 *)(lVar11 + 0x592);
              *(undefined4 *)(lVar11 + 0x59c) = uVar14;
              *(undefined1 *)(lVar11 + 0x592) = uVar26;
              uVar24 = *(undefined1 *)(lVar11 + 0x590);
              *(undefined1 *)(lVar11 + 0x590) = uVar23;
              bVar30 = bVar3;
            }
            if (*(byte *)(lVar11 + 0x5a1) <= bVar30) {
              *(undefined1 *)(lVar11 + 0x5a0) = uVar24;
              *(byte *)(lVar11 + 0x5a1) = bVar30;
              *(undefined1 *)(lVar11 + 0x5a2) = uVar25;
              *(undefined2 *)(lVar11 + 0x5a4) = uVar21;
              *(undefined1 *)(lVar11 + 0x5a6) = uVar16;
              *(undefined1 *)(lVar11 + 0x5a7) = uVar19;
              *(undefined4 *)(lVar11 + 0x5a8) = uVar7;
              *(undefined4 *)(lVar11 + 0x5ac) = uVar13;
            }
          }
        }
        if ((((local_90 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar10)();
        }
      }
      memset(pcVar2,0,0x374);
      pcVar28 = pcVar2 + 0xc0;
      pcVar28[0] = -2;
      pcVar28[1] = -1;
      pcVar2[0xc3] = '\0';
      FUN_0277d4ac(pcVar28);
      pcVar2[200] = '\0';
      pcVar2[0xcc] = '\0';
      memset(pcVar2 + 0xce,0,0x2a2);
      pcVar2[0x370] = -2;
      pcVar2[0x371] = -1;
    }
    lVar15 = lVar15 + 4;
  } while (lVar15 != 400);
  if ((((local_94 & 1) != 0) && (*(long *)(lVar8 + 0x276db8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x276db8) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  return;
}

