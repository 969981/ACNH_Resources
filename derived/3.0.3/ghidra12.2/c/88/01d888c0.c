
void FUN_01d888c0(long param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  CalendarTime *pCVar9;
  uint *puVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  CalendarTime *pCVar19;
  CalendarTime *pCVar20;
  int *piVar21;
  char local_40b0 [2];
  ulong local_40ae;
  char local_40a4 [2];
  ulong local_40a2;
  undefined2 local_4098;
  undefined1 local_4096;
  undefined4 local_4095;
  PosixTime local_4090;
  undefined1 uStack_408f;
  undefined1 uStack_408e;
  byte bStack_408d;
  byte bStack_408c;
  byte bStack_408b;
  byte bStack_408a;
  undefined1 uStack_4089;
  ushort uStack_4088;
  undefined8 local_90;
  
  puVar13 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar13 + 0x38))();
    lVar15 = 0;
    if (lVar5 != 0) {
      lVar15 = lVar5 + 0x70;
    }
  }
  else {
    lVar15 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
  }
  lVar5 = *(long *)(lVar15 + 0x205228);
  if ((lVar5 == 0) || (puVar13 = *(undefined8 **)(lVar5 + 0x10), puVar13 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar13)();
    uVar6 = uVar6 & 0xffffffff;
  }
  local_4098 = *param_2;
  local_40a2 = 0;
  local_40a4[0] = '\0';
  local_40ae = 0;
  local_40b0[0] = '\0';
  local_4096 = *(undefined1 *)(param_2 + 1);
  local_4095 = *(undefined4 *)((long)param_2 + 3);
  iVar3 = nn::time::StandardNetworkSystemClock::GetCurrentTime(&local_4090);
  if (iVar3 == 0) {
    local_40ae = nn::time::ToCalendarTimeInUtc(&local_4090);
    local_40ae = local_40ae & 0xffffffffffffff;
    local_40b0[0] = '\x01';
    cVar16 = *(char *)(param_1 + 0x28);
  }
  else {
    cVar16 = *(char *)(param_1 + 0x28);
  }
  if (cVar16 == '\0') {
    nn::time::GetDeviceLocationName((LocationName *)&local_90);
    iVar3 = nn::time::LoadTimeZoneRule((TimeZoneRule *)&local_4090,(LocationName *)&local_90);
    if (iVar3 != 0) goto LAB_01d88a54;
    memcpy((void *)(param_1 + 0x30),&local_4090,0x4000);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  iVar3 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_90);
  if ((iVar3 == 0) &&
     (iVar3 = nn::time::ToCalendarTime
                        ((CalendarTime *)&local_4090,(CalendarAdditionalInfo *)0x0,
                         (PosixTime *)&local_90,(TimeZoneRule *)(param_1 + 0x30)), iVar3 == 0)) {
    local_40a2 = (ulong)CONCAT12(uStack_408e,CONCAT11(uStack_408f,local_4090)) |
                 (ulong)bStack_408c << 0x20 | (ulong)bStack_408d << 0x18 |
                 (ulong)bStack_408b << 0x28 | (ulong)bStack_408a << 0x30;
    local_40a4[0] = '\x01';
  }
LAB_01d88a54:
  piVar1 = (int *)(param_1 + 0x4030);
  *piVar1 = -1;
  puVar2 = PTR_DAT_04bb32f0;
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar5 = (long)*(int *)(param_1 + 0x24);
    pCVar19 = (CalendarTime *)((ulong)local_40a4 | 2);
    pCVar20 = (CalendarTime *)((ulong)&local_4090 | 2);
    piVar21 = (int *)(*(long *)(param_1 + 0x18) - lVar5);
    do {
      bVar11 = *(byte *)(piVar21 + 0x26);
      if ((bVar11 >> 2 & 1) == 0) {
        local_90 = CONCAT17((char)(local_90 >> 0x38),0x1010000);
        uVar7 = FUN_0087d910(*(undefined8 *)puVar2,&local_90,piVar21 + 2);
        uVar8 = local_90;
        if ((uVar7 & 1) != 0) {
          if (local_40a4[0] != '\0') {
            local_90._0_7_ = (uint7)(uint)local_90;
            uVar7 = local_90;
            local_90._2_1_ = SUB81(uVar8,2);
            local_4090 = (PosixTime)0x1;
            uStack_408e = (undefined1)uVar8;
            bStack_408d = (byte)(uVar8 >> 8);
            bStack_408c = local_90._2_1_;
            bStack_408b = (byte)(uVar8 >> 0x18);
            bStack_408a = 0;
            uStack_4089 = 0;
            uStack_4088 = 0;
            local_90 = uVar7;
            uVar8 = nn::time::operator<(pCVar19,pCVar20);
            if ((uVar8 & 1) == 0) goto LAB_01d88b48;
          }
          goto LAB_01d88ac0;
        }
LAB_01d88b48:
        iVar3 = *piVar1;
        if (*piVar1 <= *piVar21) {
          iVar3 = *piVar21;
        }
        *piVar1 = iVar3;
LAB_01d88b5c:
        bVar11 = *(byte *)(piVar21 + 0x26) | 8;
      }
      else {
        if ((bVar11 & 1) == 0) {
          bStack_408b = *(byte *)(piVar21 + 0x1d);
          bStack_408a = *(byte *)(piVar21 + 0x1e);
          bStack_408c = *(byte *)(piVar21 + 0x1c);
          local_4090 = SUB41(piVar21[0x18],0);
          uStack_408f = (undefined1)((uint)piVar21[0x18] >> 8);
          uStack_408e = (undefined1)piVar21[0x19];
          bStack_408d = (byte)piVar21[0x1a];
          uStack_4089 = 0;
          uVar8 = nn::time::operator<((CalendarTime *)&local_4098,(CalendarTime *)&local_4090);
          if ((uVar8 & 1) == 0) {
            local_90 = (ulong)*(byte *)(piVar21 + 0x24) << 0x28 |
                       (ulong)*(byte *)(piVar21 + 0x25) << 0x30 |
                       (ulong)*(byte *)(piVar21 + 0x23) << 0x20 |
                       (ulong)(uint)(piVar21[0x21] << 0x18) |
                       ((ulong)(uint)piVar21[0x20] & 0xff) << 0x10 |
                       (ulong)*(ushort *)(piVar21 + 0x1f);
            uVar8 = nn::time::operator<((CalendarTime *)&local_90,(CalendarTime *)&local_4098);
            if ((uVar8 & 1) == 0) goto LAB_01d88d4c;
          }
        }
        else if ((bVar11 >> 1 & 1) == 0) {
          if (local_40b0[0] != '\0') {
            uStack_4089 = (undefined1)piVar21[0x1d];
            uStack_4088 = (ushort)*(byte *)(piVar21 + 0x1e);
            bStack_408a = *(byte *)(piVar21 + 0x1c);
            local_4090 = (PosixTime)0x1;
            uStack_408e = (undefined1)piVar21[0x18];
            bStack_408d = (byte)((uint)piVar21[0x18] >> 8);
            bStack_408c = (byte)piVar21[0x19];
            bStack_408b = (byte)piVar21[0x1a];
            uVar8 = nn::time::operator<((CalendarTime *)((ulong)local_40b0 | 2),pCVar20);
            if ((uVar8 & 1) == 0) {
              uStack_4089 = (undefined1)piVar21[0x24];
              uStack_4088 = (ushort)*(byte *)(piVar21 + 0x25);
              bStack_408a = *(byte *)(piVar21 + 0x23);
              local_4090 = (PosixTime)0x1;
              uStack_408e = (undefined1)piVar21[0x1f];
              bStack_408d = (byte)((uint)piVar21[0x1f] >> 8);
              bStack_408c = (byte)piVar21[0x20];
              bStack_408b = (byte)piVar21[0x21];
              if (local_40b0[0] != '\0') {
                pCVar9 = (CalendarTime *)((ulong)local_40b0 | 2);
                goto LAB_01d88d40;
              }
              goto LAB_01d88d4c;
            }
          }
        }
        else if (local_40a4[0] != '\0') {
          uStack_4089 = (undefined1)piVar21[0x1d];
          uStack_4088 = (ushort)*(byte *)(piVar21 + 0x1e);
          bStack_408a = *(byte *)(piVar21 + 0x1c);
          local_4090 = (PosixTime)0x1;
          uStack_408e = (undefined1)piVar21[0x18];
          bStack_408d = (byte)((uint)piVar21[0x18] >> 8);
          bStack_408c = (byte)piVar21[0x19];
          bStack_408b = (byte)piVar21[0x1a];
          uVar8 = nn::time::operator<(pCVar19,pCVar20);
          if ((uVar8 & 1) == 0) {
            uStack_4089 = (undefined1)piVar21[0x24];
            uStack_4088 = (ushort)*(byte *)(piVar21 + 0x25);
            bStack_408a = *(byte *)(piVar21 + 0x23);
            local_4090 = (PosixTime)0x1;
            uStack_408e = (undefined1)piVar21[0x1f];
            bStack_408d = (byte)((uint)piVar21[0x1f] >> 8);
            bStack_408c = (byte)piVar21[0x20];
            bStack_408b = (byte)piVar21[0x21];
            if (local_40a4[0] != '\0') {
              pCVar9 = pCVar19;
LAB_01d88d40:
              local_4090 = (PosixTime)0x1;
              uVar8 = nn::time::operator<=(pCVar9,pCVar20);
              if ((uVar8 & 1) == 0) goto LAB_01d88ac0;
            }
LAB_01d88d4c:
            lVar14 = *(long *)PTR_DAT_04bb2208;
            (**(code **)(*(long *)(piVar21 + 2) + 0x18))(piVar21 + 2);
            uVar4 = FUN_006bd550(*(undefined8 *)(piVar21 + 4),0);
            local_4090 = SUB41(uVar4,0);
            uStack_408f = (undefined1)((uint)uVar4 >> 8);
            uStack_408e = (undefined1)((uint)uVar4 >> 0x10);
            bStack_408d = (byte)((uint)uVar4 >> 0x18);
            puVar10 = (uint *)FUN_008a1920(lVar14 + 0x880,&local_4090);
            if (puVar10 != (uint *)0x0) {
              uVar12 = 0;
              if (*puVar10 != 0) {
                cVar16 = DAT_04cea0d4;
                do {
                  if (cVar16 != '\0') {
                    if (DAT_04cea0e8 < 0) {
                      if (DAT_04cea0e8._4_4_ == 0xffffffff) goto LAB_01d88e2c;
LAB_01d88ec8:
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      if ((undefined2 *)((ulong)DAT_04cea0e8._4_4_ + (long)puVar10) !=
                          (undefined2 *)0x0) {
                        uVar12 = *(undefined2 *)((ulong)DAT_04cea0e8._4_4_ + (long)puVar10);
                      }
                    }
                    goto LAB_01d88edc;
                  }
                  cVar16 = '\x01';
                  *PTR_DAT_04bb5808 = 1;
                  DAT_04cea0d8 = 0xffffffffffffffff;
                  DAT_04cea0e0 = 0xffffffffffffffff;
                  DAT_04cea0e8 = -1;
                  DAT_04cea0f0 = 0xffffffffffffffff;
                  DAT_04cea0f8 = 0xffffffffffffffff;
LAB_01d88e2c:
                  puVar17 = (uint *)(ulong)*puVar10;
                  uVar12 = 0;
                  if ((*puVar10 == 0) || (puVar10 == puVar17)) goto LAB_01d88edc;
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar10 + (10 - (long)puVar17)) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar10 + (lVar14 - (long)puVar17);
                  if (lVar14 == 0) goto LAB_01d88ec8;
                  uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar17));
                  *(undefined4 *)(PTR_DAT_04bb5810 + 0x14) = 0xfffffffe;
                  uVar12 = 0;
                  if (uVar8 == 0) goto LAB_01d88edc;
                  piVar18 = (int *)(lVar14 + 4);
                  while (piVar18[-1] != 0x54706054) {
                    piVar18 = piVar18 + 2;
                    uVar8 = uVar8 - 1;
                    if (uVar8 == 0) {
                      uVar12 = 0;
                      goto LAB_01d88edc;
                    }
                  }
                  iVar3 = 0;
                  if (*piVar18 != -1) {
                    iVar3 = *piVar18;
                  }
                  *(int *)(PTR_DAT_04bb5810 + 0x14) = iVar3;
                } while (*puVar10 != 0);
                uVar12 = 0;
              }
LAB_01d88edc:
              FUN_027401d4(uVar12,1);
            }
            goto LAB_01d88b5c;
          }
        }
LAB_01d88ac0:
        bVar11 = *(byte *)(piVar21 + 0x26) & 0xf7;
      }
      *(byte *)(piVar21 + 0x26) = bVar11;
      piVar21 = (int *)(*(long *)((long)piVar21 + lVar5 + 8) - lVar5);
    } while (piVar21 != (int *)((param_1 + 0x10) - lVar5));
    if (-1 < *piVar1) {
      iVar3 = -1;
      do {
        iVar3 = iVar3 + 1;
        FUN_00884f04(*(undefined8 *)puVar2,iVar3,1);
      } while (iVar3 < *piVar1);
    }
  }
  if ((((uVar6 & 1) != 0) && (lVar15 = *(long *)(lVar15 + 0x205228), lVar15 != 0)) &&
     (puVar13 = *(undefined8 **)(lVar15 + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return;
}

