
bool FUN_0087a8f0(long param_1,long *param_2,undefined4 param_3,char param_4,char param_5)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  long lVar5;
  undefined *__s;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  char *pcVar16;
  char cVar17;
  long local_98;
  undefined8 local_90;
  undefined2 local_84;
  char local_82;
  char local_81;
  undefined2 local_80;
  undefined1 local_7e;
  byte local_7c [4];
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  local_80 = 5;
  local_7e = 0;
  local_84 = (short)param_3;
  local_82 = param_4;
  local_81 = param_5;
  FUN_0087a0f0(&local_98,param_1,param_2,&local_84);
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x28) == 0)) || (*(int *)(lVar12 + 0x80) != 1)) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return false;
      }
    }
    lVar12 = param_1 + 8;
    (**(code **)(local_98 + 0x18))(&local_98);
    uVar7 = FUN_006bd550(local_90,0);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
    puVar9 = (uint *)FUN_0088c0d0(lVar12,&local_78);
    __s = PTR_DAT_04bb3250;
    puVar1 = PTR_DAT_04bb3248;
    if (puVar9 == (uint *)0x0) {
      FUN_00879870(&local_78,param_1,&local_98);
      uVar10 = FUN_00879630(param_1,&local_78,0);
      if ((uVar10 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        cVar17 = *PTR_DAT_04bb3248;
        do {
          if (cVar17 == '\0') {
            *puVar1 = 1;
            memset(__s,0xff,0x288);
            uVar2 = *puVar9;
            cVar17 = '\x01';
          }
          else {
            uVar11 = *(uint *)(__s + 4);
            if (-1 < (int)uVar11) {
              if ((((int *)((ulong)uVar11 + (long)puVar9) != (int *)0x0) &&
                  (-1 < *(int *)((ulong)uVar11 + (long)puVar9))) &&
                 (uVar10 = FUN_0273f2dc(), (uVar10 & 1) == 0)) {
                return false;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)uVar2;
          if ((puVar13 == (uint *)0x0) || (puVar9 == puVar13)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar9 + (lVar14 - (long)puVar13);
          if (lVar14 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(__s + 4) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar15 = (int *)(lVar14 + 4);
          while (piVar15[-1] != -0x58a97601) {
            piVar15 = piVar15 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0087ab50;
          }
          iVar8 = 0;
          if (*piVar15 != -1) {
            iVar8 = *piVar15;
          }
          *(int *)(__s + 4) = iVar8;
          uVar2 = *puVar9;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_0087ab50:
      local_78 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "CalendarEventStop";
      iVar8 = FUN_02743000(&local_78);
      if (iVar8 != 0) {
        return false;
      }
    }
    uVar10 = FUN_0087af00(param_1,&local_98);
    if ((uVar10 & 1) == 0) {
      return false;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)param_2[1] != "Carnival") {
      uVar10 = 0;
      bVar6 = true;
      do {
        cVar17 = ((char *)param_2[1])[uVar10];
        if (cVar17 != "Carnival"[uVar10]) break;
        if (cVar17 == '\0') {
          if (bVar6) goto LAB_0087ac74;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar16 = (char *)param_2[1];
      if (pcVar16 != "CarnivalReady") {
        if (*pcVar16 != 'C') {
LAB_0087acf4:
          (**(code **)(local_98 + 0x18))(&local_98);
          uVar7 = FUN_006bd550(local_90,0);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
          puVar9 = (uint *)FUN_0088c0d0(lVar12,&local_78);
          puVar1 = PTR_DAT_04bb3250;
          if (puVar9 == (uint *)0x0) {
            return true;
          }
          uVar2 = *puVar9;
          if (uVar2 == 0) {
            return false;
          }
          cVar17 = *PTR_DAT_04bb3248;
          do {
            uVar10 = local_68;
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *PTR_DAT_04bb3248 = 1;
              memset(puVar1,0xff,0x288);
              uVar2 = *puVar9;
            }
            else {
              uVar11 = *(uint *)(puVar1 + 0x26c);
              if (-1 < (int)uVar11) {
                if ((byte *)((ulong)uVar11 + (long)puVar9) == (byte *)0x0) {
                  return false;
                }
                bVar3 = *(byte *)((ulong)uVar11 + (long)puVar9);
                if (bVar3 == 0) {
                  return false;
                }
                local_68._7_1_ = SUB81(uVar10,7);
                local_68._0_7_ =
                     (uint7)CONCAT24(5,CONCAT13(param_5,CONCAT12(param_4,(short)param_3)));
                lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
                local_78 = (undefined *)(lVar12 + 0x15180);
                local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
                uVar10 = FUN_00875530(param_1,puVar9,local_68,local_68 >> 0x10,local_68 >> 0x18);
                if ((uVar10 & 1) != 0) {
                  return true;
                }
                uVar2 = 1;
                goto LAB_0087aea8;
              }
              if (uVar11 != 0xffffffff) {
                return false;
              }
            }
            puVar13 = (uint *)(ulong)uVar2;
            if (puVar13 == (uint *)0x0) {
              return false;
            }
            if (puVar9 == puVar13) {
              return false;
            }
            lVar12 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar9 + (lVar12 - (long)puVar13);
            if (lVar12 == 0) {
              return false;
            }
            uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
            *(undefined4 *)(puVar1 + 0x26c) = 0xfffffffe;
            if (uVar10 == 0) {
              return false;
            }
            piVar15 = (int *)(lVar12 + 4);
            while (piVar15[-1] != -0x45ff81b1) {
              piVar15 = piVar15 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                return false;
              }
            }
            iVar8 = 0;
            if (*piVar15 != -1) {
              iVar8 = *piVar15;
            }
            *(int *)(puVar1 + 0x26c) = iVar8;
            uVar2 = *puVar9;
            if (uVar2 == 0) {
              return false;
            }
          } while( true );
        }
        lVar14 = 0;
        do {
          if ((lVar14 == 0x80000) ||
             (lVar5 = lVar14 + 1, pcVar16[lVar5] != "CarnivalReady"[lVar14 + 1])) goto LAB_0087acf4;
          lVar14 = lVar14 + 1;
        } while (pcVar16[lVar5] != '\0');
      }
    }
LAB_0087ac74:
    if (param_4 == '\x01') {
      return false;
    }
    if ('\x03' < param_4) {
      return false;
    }
    local_68 = local_68 & 0xffffffffffffff00;
    local_7c[0] = 0;
    uVar7 = FUN_006bd550("Carnival",0);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
    lVar12 = FUN_0088c0d0(lVar12,&local_78);
    if (lVar12 == 0) {
      return false;
    }
    uVar10 = FUN_00874dd0(lVar12,lVar12,&local_68,local_7c,param_3);
    if ((uVar10 & 1) != 0) {
      if ((int)param_4 < (int)(uint)(byte)local_68._0_1_) {
        return true;
      }
      if ((int)param_4 <= (int)(uint)(byte)local_68._0_1_) {
        return (int)param_5 < (int)(uint)local_7c[0];
      }
    }
  }
  return false;
  while( true ) {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_78 = (undefined *)(lVar12 + 0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    uVar10 = FUN_00875530(param_1,puVar9,local_68,local_68 >> 0x10,local_68 >> 0x18);
    uVar2 = uVar11 + 1;
    if ((uVar10 & 1) != 0) break;
LAB_0087aea8:
    uVar11 = uVar2;
    if (bVar3 == uVar11) break;
  }
  return uVar11 < bVar3;
}

