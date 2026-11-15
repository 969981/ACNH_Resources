
uint FUN_021c01e8(undefined8 param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *local_78;
  undefined1 *local_70;
  uint local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar5 == 0) {
LAB_021c033c:
    local_64 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_021c033c;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8), puVar9 == (uint *)0x0
       )) goto LAB_021c033c;
    uVar7 = *puVar9;
    local_50 = puVar9;
    if (uVar7 == 0 || puVar9 == (uint *)(ulong)uVar7) {
LAB_021c0334:
      local_64 = 0;
    }
    else {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
      if (((*puVar10 == 0) || (uVar7 = puVar10[1], uVar7 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
      goto LAB_021c0334;
      lVar12 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar12 == 0) goto LAB_021c0334;
      uVar1 = 0;
      if ((ulong)uVar7 != 0) {
        uVar1 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar7);
      }
      if (*puVar10 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
         (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
         local_64 = (uint)uVar3, 0xbc < uVar3)) goto LAB_021c0334;
    }
  }
  uVar7 = 1;
  switch(local_64) {
  case 0:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0xe);
    iVar8 = FUN_01ae7550(&local_60);
    uVar7 = (uint)(iVar8 != (int)local_78);
    break;
  case 1:
  case 2:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x32:
  case 0x49:
  case 0x56:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x72:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
    break;
  case 0x70:
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 == -1) {
      uVar7 = 1;
    }
    else {
      puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar9 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar7 = *puVar9 >> 7 & 1 ^ 1;
    }
    break;
  case 0x74:
  case 0x75:
    if (param_3 != 0) {
      lVar12 = param_3 + 0x3e0;
      if (local_64 == 0x75) {
        iVar8 = FUN_02209b90(lVar12);
        if (iVar8 == 1) {
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          if (*(undefined1 **)(param_3 + 1000) == &DAT_040c5b37) {
LAB_021c051c:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32e9) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = (*(undefined1 **)(param_3 + 1000))[uVar11];
              if (cVar2 != (&DAT_040c5b37)[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c051c;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          if (*(undefined1 **)(param_3 + 1000) == &DAT_040974f0) {
LAB_021c059c:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32ea) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = (*(undefined1 **)(param_3 + 1000))[uVar11];
              if (cVar2 != (&DAT_040974f0)[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c059c;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          if (*(undefined1 **)(param_3 + 1000) == &DAT_0407ce26) {
LAB_021c061c:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32eb) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = (*(undefined1 **)(param_3 + 1000))[uVar11];
              if (cVar2 != (&DAT_0407ce26)[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c061c;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          if (*(undefined1 **)(param_3 + 1000) == &DAT_0408d1ee) {
LAB_021c069c:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32ec) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = (*(undefined1 **)(param_3 + 1000))[uVar11];
              if (cVar2 != (&DAT_0408d1ee)[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c069c;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          puVar5 = PTR_DAT_04bb2020;
          local_78 = PTR_DAT_04bb2020 + 0x10;
          local_70 = &DAT_040cabdc;
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          puVar13 = *(undefined1 **)(param_3 + 1000);
          FUN_006bd3a4(&local_78);
          if (puVar13 == local_70) {
LAB_021c073c:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32ed) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = *(char *)(*(long *)(param_3 + 1000) + uVar11);
              if (cVar2 != local_70[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c073c;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          local_78 = puVar5 + 0x10;
          local_70 = &DAT_040c5b3d;
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          (**(code **)(*(long *)(param_3 + 0x3e0) + 0x18))(lVar12);
          puVar13 = *(undefined1 **)(param_3 + 1000);
          (**(code **)(local_78 + 0x18))(&local_78);
          if (puVar13 == local_70) {
LAB_021c07dc:
            iVar8 = FUN_0277d6c4(param_2);
            if (iVar8 == 0x32ee) {
              return 1;
            }
          }
          else {
            uVar11 = 0;
            bVar6 = true;
            do {
              cVar2 = *(char *)(*(long *)(param_3 + 1000) + uVar11);
              if (cVar2 != local_70[uVar11]) break;
              if (cVar2 == '\0') {
                if (bVar6) goto LAB_021c07dc;
                break;
              }
              bVar6 = uVar11 < 0x80000;
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x80001);
          }
          goto switchD_021c0368_caseD_3;
        }
        FUN_021f6050(&local_78,lVar12);
      }
      else {
        FUN_021f5aa0(&local_78,lVar12);
      }
      lVar12 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
           (uVar11 = FUN_0277d7b4(&local_78,param_2), (uVar11 & 1) != 0)) {
          return 1;
        }
      }
    }
  default:
switchD_021c0368_caseD_3:
    uVar7 = 0;
  }
  return uVar7;
}

