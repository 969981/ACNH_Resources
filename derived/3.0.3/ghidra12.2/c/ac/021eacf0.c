
undefined8 FUN_021eacf0(undefined4 param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ulong uVar12;
  char cVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  undefined *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  undefined8 local_40;
  undefined4 local_34;
  
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  uVar7 = FUN_02b67a30(&local_60,param_1);
  if (((uVar7 & 1) == 0) || (uVar7 = FUN_02664300((ulong)local_60 & 0xffffffff), (uVar7 & 1) == 0))
  {
    puVar3 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if (param_2 != (ulong *)0x0) {
      puVar3 = param_2;
    }
    local_40 = *puVar3;
    if ((param_3 & 1) != 0) {
      if ((char)(local_40 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_60 = (undefined *)(lVar8 + -0x15180);
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      }
      uVar7 = local_40 >> 0x30;
      local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
      local_40 = CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff;
    }
    lVar8 = *(long *)PTR_DAT_04bb4138;
    if (lVar8 != 0) {
      local_45 = 0;
      local_50 = 8;
      local_58 = local_4c;
      local_4c[0] = 0;
      local_60 = PTR_DAT_04bb3768 + 0x10;
      lVar9 = FUN_0265c2a0(param_1);
      if (lVar9 != 0) {
        if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)*puVar10)();
          uVar7 = uVar7 & 0xffffffff;
        }
        pbVar1 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        FUN_038d1270(&local_60,"-----");
        uVar12 = (ulong)*pbVar1;
        if (uVar12 < 0x23) {
          FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                       pbVar1[1]);
        }
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
        (**(code **)(local_60 + 0x18))(&local_60);
        local_34 = FUN_006bd550(local_58,0);
        puVar11 = (uint *)FUN_0079e770(lVar8,&local_34);
        puVar6 = PTR_DAT_04bb40b8;
        puVar5 = PTR_DAT_04bb40b0;
        if (puVar11 != (uint *)0x0) {
          if (*puVar11 == 0) {
LAB_021eaf9c:
            cVar14 = '\0';
          }
          else {
            cVar13 = *PTR_DAT_04bb40b0;
            do {
              if (cVar13 == '\0') {
                cVar13 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar4 = *(uint *)(puVar6 + 100);
                if (-1 < (int)uVar4) {
                  if ((char *)((ulong)uVar4 + (long)puVar11) == (char *)0x0) goto LAB_021eaf9c;
                  cVar14 = *(char *)((ulong)uVar4 + (long)puVar11);
                  goto LAB_021eafa0;
                }
                if (uVar4 != 0xffffffff) goto LAB_021eaf9c;
              }
              puVar15 = (uint *)(ulong)*puVar11;
              cVar14 = '\0';
              if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_021eafa0;
              lVar8 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar11 + (lVar8 - (long)puVar15);
              if (lVar8 == 0) goto LAB_021eaf9c;
              uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
              *(undefined4 *)(puVar6 + 100) = 0xfffffffe;
              cVar14 = '\0';
              if (uVar7 == 0) goto LAB_021eafa0;
              piVar16 = (int *)(lVar8 + 4);
              while (piVar16[-1] != -0x6ba9495d) {
                piVar16 = piVar16 + 2;
                uVar7 = uVar7 - 1;
                if (uVar7 == 0) {
                  cVar14 = '\0';
                  goto LAB_021eafa0;
                }
              }
              iVar2 = 0;
              if (*piVar16 != -1) {
                iVar2 = *piVar16;
              }
              *(int *)(puVar6 + 100) = iVar2;
            } while (*puVar11 != 0);
            cVar14 = '\0';
          }
LAB_021eafa0:
          puVar6 = PTR_DAT_04bb40b8;
          puVar5 = PTR_DAT_04bb40b0;
          if (cVar14 == local_40._2_1_) {
            if (*puVar11 == 0) {
LAB_021eb0b8:
              cVar14 = '\0';
            }
            else {
              cVar13 = *PTR_DAT_04bb40b0;
              do {
                if (cVar13 == '\0') {
                  cVar13 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
                }
                else {
                  uVar4 = *(uint *)(puVar6 + 0x60);
                  if (-1 < (int)uVar4) {
                    if ((char *)((ulong)uVar4 + (long)puVar11) == (char *)0x0) goto LAB_021eb0b8;
                    cVar14 = *(char *)((ulong)uVar4 + (long)puVar11);
                    goto LAB_021eb0bc;
                  }
                  if (uVar4 != 0xffffffff) goto LAB_021eb0b8;
                }
                puVar15 = (uint *)(ulong)*puVar11;
                cVar14 = '\0';
                if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_021eb0bc;
                lVar8 = 0xc;
                if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar11 + (lVar8 - (long)puVar15);
                if (lVar8 == 0) goto LAB_021eb0b8;
                uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
                *(undefined4 *)(puVar6 + 0x60) = 0xfffffffe;
                cVar14 = '\0';
                if (uVar7 == 0) goto LAB_021eb0bc;
                piVar16 = (int *)(lVar8 + 4);
                while (piVar16[-1] != -0x6e615ad6) {
                  piVar16 = piVar16 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) {
                    cVar14 = '\0';
                    goto LAB_021eb0bc;
                  }
                }
                iVar2 = 0;
                if (*piVar16 != -1) {
                  iVar2 = *piVar16;
                }
                *(int *)(puVar6 + 0x60) = iVar2;
              } while (*puVar11 != 0);
              cVar14 = '\0';
            }
LAB_021eb0bc:
            if (cVar14 == local_40._3_1_) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

