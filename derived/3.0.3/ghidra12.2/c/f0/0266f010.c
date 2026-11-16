
/* WARNING: Removing unreachable block (ram,0x0266fa58) */
/* WARNING: Removing unreachable block (ram,0x0266fa30) */
/* WARNING: Removing unreachable block (ram,0x0266f9e8) */
/* WARNING: Removing unreachable block (ram,0x0266f9bc) */
/* WARNING: Removing unreachable block (ram,0x0266f974) */
/* WARNING: Removing unreachable block (ram,0x0266f94c) */
/* WARNING: Removing unreachable block (ram,0x0266f908) */
/* WARNING: Removing unreachable block (ram,0x0266f8e0) */
/* WARNING: Removing unreachable block (ram,0x0266f894) */
/* WARNING: Removing unreachable block (ram,0x0266f86c) */
/* WARNING: Removing unreachable block (ram,0x0266f824) */
/* WARNING: Removing unreachable block (ram,0x0266f7f8) */
/* WARNING: Removing unreachable block (ram,0x0266f7ac) */
/* WARNING: Removing unreachable block (ram,0x0266f784) */
/* WARNING: Removing unreachable block (ram,0x0266f73c) */
/* WARNING: Removing unreachable block (ram,0x0266f710) */
/* WARNING: Removing unreachable block (ram,0x0266f6c4) */
/* WARNING: Removing unreachable block (ram,0x0266f69c) */
/* WARNING: Removing unreachable block (ram,0x0266f654) */
/* WARNING: Removing unreachable block (ram,0x0266f628) */
/* WARNING: Removing unreachable block (ram,0x0266f5e0) */
/* WARNING: Removing unreachable block (ram,0x0266f5b8) */
/* WARNING: Removing unreachable block (ram,0x0266f570) */
/* WARNING: Removing unreachable block (ram,0x0266f548) */
/* WARNING: Removing unreachable block (ram,0x0266f51c) */
/* WARNING: Removing unreachable block (ram,0x0266faa4) */
/* WARNING: Removing unreachable block (ram,0x0266fa00) */
/* WARNING: Removing unreachable block (ram,0x0266f920) */
/* WARNING: Removing unreachable block (ram,0x0266f83c) */
/* WARNING: Removing unreachable block (ram,0x0266f754) */
/* WARNING: Removing unreachable block (ram,0x0266f66c) */
/* WARNING: Removing unreachable block (ram,0x0266f588) */
/* WARNING: Removing unreachable block (ram,0x0266f4ac) */
/* WARNING: Removing unreachable block (ram,0x0266f494) */
/* WARNING: Removing unreachable block (ram,0x0266f4d8) */
/* WARNING: Removing unreachable block (ram,0x0266f500) */
/* WARNING: Removing unreachable block (ram,0x0266f5fc) */
/* WARNING: Removing unreachable block (ram,0x0266f6e4) */
/* WARNING: Removing unreachable block (ram,0x0266f7cc) */
/* WARNING: Removing unreachable block (ram,0x0266f8b4) */
/* WARNING: Removing unreachable block (ram,0x0266f990) */
/* WARNING: Removing unreachable block (ram,0x0266fa78) */

void FUN_0266f010(long param_1,short *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined2 uVar19;
  long *plVar20;
  uint *puVar21;
  int *piVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  uint local_16c;
  undefined1 local_138 [7];
  undefined1 uStack_131;
  undefined *local_130;
  char *local_128;
  undefined4 local_120;
  char local_11c [127];
  undefined1 local_9d;
  uint local_98 [10];
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 != 0) {
    puVar17 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar17 + 0x38))();
      lVar16 = 0;
      if (lVar11 != 0) {
        lVar16 = lVar11 + 0x70;
      }
      goto LAB_0266f098;
    }
    if ((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) {
      lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      goto LAB_0266f098;
    }
  }
  lVar16 = 0;
LAB_0266f098:
  plVar1 = (long *)(lVar16 + 0x1b6e90);
  if ((*(long **)(lVar16 + 0xd0) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xd0), puVar17 == (undefined8 *)0x0)) {
    local_16c = 0;
  }
  else {
    local_16c = (**(code **)*puVar17)();
  }
  *(undefined8 *)(param_1 + 0x448) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x440) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x450) = 0xffffffff;
  FUN_0265eba0(local_98);
  puVar8 = PTR_DAT_04bc27f0;
  puVar7 = PTR_DAT_04bb40b8;
  uVar26 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bb2d88 + 0x10;
  uVar13 = 0;
  do {
    uVar23 = *(uint *)((long)local_98 + (-(uVar26 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
    uVar24 = uVar13;
    if (uVar23 != 0xffffffff) {
      pbVar4 = (byte *)(*(long *)(lVar16 + 0xb8) + *(long *)(lVar16 + 0xb0));
      pbVar5 = pbVar4 + (ulong)uVar23 * 0x13230;
      if (9 < uVar23) {
        pbVar5 = pbVar4;
      }
      uVar18 = (ulong)*pbVar5;
      if (((uVar18 < 0x23) && (pbVar5[1] <= (byte)puVar8[uVar18])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) >> (ulong)(pbVar5[1] & 0x1f) & 1) != 0)) {
        local_128 = "MoveInCompletion";
        local_130 = puVar2;
        iVar9 = FUN_02749340(pbVar5 + 0x1267c,&local_130);
        if (iVar9 != 0) {
          local_120 = 0x80;
          local_9d = 0;
          local_11c[0] = '\0';
          local_130 = puVar3;
          local_128 = local_11c;
          FUN_038d1270(&local_130,"-----");
          if ((ulong)*pbVar5 < 0x23) {
            FUN_038d1270(&local_130,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar5 * 8 + 0xb0),pbVar5[1]);
          }
          uVar25 = *(undefined8 *)PTR_DAT_04bb4138;
          (**(code **)(local_130 + 0x18))(&local_130);
          uVar10 = FUN_006bd550(local_128,0);
          _local_70 = CONCAT44(uStack_6c,uVar10);
          puVar12 = (uint *)FUN_0079e770(uVar25,local_70);
          if (puVar12 != (uint *)0x0) {
            if (*puVar12 == 0) {
LAB_0266f14c:
              uVar19 = 0;
            }
            else {
              cVar15 = *PTR_DAT_04bb40b0;
              do {
                puVar6 = PTR_DAT_04bb40b0;
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
                  *puVar6 = 1;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
                }
                else {
                  uVar23 = *(uint *)(puVar7 + 0x58);
                  if (-1 < (int)uVar23) {
                    if ((undefined2 *)((ulong)uVar23 + (long)puVar12) == (undefined2 *)0x0)
                    goto LAB_0266f14c;
                    uVar19 = *(undefined2 *)((ulong)uVar23 + (long)puVar12);
                    goto LAB_0266f150;
                  }
                  if (uVar23 != 0xffffffff) goto LAB_0266f14c;
                }
                puVar21 = (uint *)(ulong)*puVar12;
                uVar19 = 0;
                if ((*puVar12 == 0) || (puVar12 == puVar21)) goto LAB_0266f150;
                lVar11 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar21)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar12 + (lVar11 - (long)puVar21);
                if (lVar11 == 0) goto LAB_0266f14c;
                uVar24 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar21));
                *(undefined4 *)(puVar7 + 0x58) = 0xfffffffe;
                uVar19 = 0;
                if (uVar24 == 0) goto LAB_0266f150;
                piVar22 = (int *)(lVar11 + 4);
                while (piVar22[-1] != 0x54706054) {
                  piVar22 = piVar22 + 2;
                  uVar24 = uVar24 - 1;
                  if (uVar24 == 0) {
                    uVar19 = 0;
                    goto LAB_0266f150;
                  }
                }
                iVar9 = 0;
                if (*piVar22 != -1) {
                  iVar9 = *piVar22;
                }
                *(int *)(puVar7 + 0x58) = iVar9;
              } while (*puVar12 != 0);
              uVar19 = 0;
            }
LAB_0266f150:
            uVar23 = (uint)uVar13;
            if (9 < uVar23) {
              uVar13 = 0;
            }
            uVar24 = (ulong)(uVar23 + 1);
            *(undefined2 *)(param_1 + 0x440 + uVar13 * 2) = uVar19;
          }
        }
      }
    }
    uVar23 = (int)uVar26 + 1;
    uVar26 = (ulong)uVar23;
    uVar13 = uVar24;
    if (uVar23 == 10) {
      if ((*param_2 != 0) &&
         (uVar13 = nn::time::IsValidDate
                             ((int)*param_2,(int)(char)param_2[1],(int)*(char *)((long)param_2 + 3))
         , (uVar13 & 1) != 0)) {
        uStack_131 = (undefined1)((ulong)*(undefined8 *)param_2 >> 0x38);
        local_138 = (undefined1  [7])CONCAT16(0,CONCAT24(5,(int)*(undefined8 *)param_2));
        FUN_00a80fac(local_138);
        plVar20 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)plVar20 == 0) {
          _local_70 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)((ulong)_local_70 >> 0x20) < '\x05') {
            lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_70);
            local_130 = (undefined *)(lVar11 + -0x15180);
            _local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_130);
          }
          lVar11 = _local_70;
          plVar20 = (long *)local_70;
          uStack_6c._3_1_ = SUB81(lVar11,7);
          _local_70 = (uint7)CONCAT24(5,local_70);
        }
        local_130 = (undefined *)*plVar20;
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_138);
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_130);
        if (lVar11 <= lVar14) {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_130);
          if (*(long **)(&LAB_001b6eb0 + lVar16) == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(&LAB_001b6eb0 + lVar16);
            uVar13 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar13 = (**(code **)*puVar17)();
            }
          }
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 4)
          ;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 8)
          ;
          *(undefined4 *)(param_1 + 0xc) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0xc);
          *(undefined4 *)(param_1 + 0x10) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x10);
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x14);
          *(undefined4 *)(param_1 + 0x18) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x18);
          *(undefined4 *)(param_1 + 0x1c) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x1c);
          *(undefined4 *)(param_1 + 0x20) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x20);
          *(undefined4 *)(param_1 + 0x24) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x24);
          *(undefined4 *)(param_1 + 0x28) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x28);
          *(undefined4 *)(param_1 + 0x2c) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x2c);
          *(undefined4 *)(param_1 + 0x30) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x30);
          *(undefined4 *)(param_1 + 0x34) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x34);
          _local_70 = CONCAT44((int)((ulong)_local_70 >> 0x20),6);
          *(undefined4 *)(param_1 + 0x38) =
               *(undefined4 *)(*(long *)(lVar16 + 0x1b6e98) + *plVar1 + 0x38);
          if ((((uVar13 & 1) != 0) && (*(long *)(&LAB_001b6eb0 + lVar16) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(&LAB_001b6eb0 + lVar16) + 8),
             puVar17 != (undefined8 *)0x0)) {
            (**(code **)*puVar17)();
          }
        }
      }
      if ((((local_16c & 1) != 0) && (*(long *)(lVar16 + 0xd0) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xd0) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      FUN_0266eca0(param_1);
      return;
    }
  } while( true );
}

