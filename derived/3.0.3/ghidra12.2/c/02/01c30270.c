
void FUN_01c30270(long param_1,long param_2,long param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_DAT_04bb2020;
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  switch(*param_5) {
  case 0:
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = s_MuseumFishStampRackLotID1_04a40e68;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c303e8;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c303e8;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c303e8;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c303e8;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c303e8:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_2,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumFishStampRackLotID2_04a40e84;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c3051c;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c3051c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c3051c;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c3051c;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c3051c:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_3,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumFishStampRackLotID3_04a40ea0;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if (*(uint *)(param_1 + 0x9e8) <= uVar5) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if (*puVar8 != 0) {
      cVar9 = DAT_0534bc48;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = 0xffffffffffffffff;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = -1;
        }
        else {
          uVar11 = (ulong)DAT_0534bc74._4_4_;
          if (-1 < DAT_0534bc74) goto LAB_01c31140;
          if (DAT_0534bc74._4_4_ != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar8;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c31108;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
        if (lVar3 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
        DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
        puVar10 = (undefined8 *)0x0;
        if (uVar11 == 0) goto LAB_01c31108;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != -0x6927fece) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c31108;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
      } while (*puVar8 != 0);
    }
    break;
  case 1:
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = s_MuseumInsectStampRackLotID1_04a40ebc;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c30778;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c30778;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c30778;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c30778;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c30778:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_2,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumInsectStampRackLotID2_04a40eda;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c308ac;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c308ac;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c308ac;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c308ac;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c308ac:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_3,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumInsectStampRackLotID3_04a40ef8;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if (*(uint *)(param_1 + 0x9e8) <= uVar5) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if (*puVar8 != 0) {
      cVar9 = DAT_0534bc48;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = 0xffffffffffffffff;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = -1;
        }
        else {
          uVar11 = (ulong)DAT_0534bc74._4_4_;
          if (-1 < DAT_0534bc74) goto LAB_01c31140;
          if (DAT_0534bc74._4_4_ != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar8;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c31108;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
        if (lVar3 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
        DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
        puVar10 = (undefined8 *)0x0;
        if (uVar11 == 0) goto LAB_01c31108;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != -0x6927fece) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c31108;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
      } while (*puVar8 != 0);
    }
    break;
  case 2:
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = s_MuseumFossilStampRackLotID1_04a40f16;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c30b08;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c30b08;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c30b08;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c30b08;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c30b08:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_2,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumFossilStampRackLotID2_04a40f34;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c30c3c;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c30c3c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c30c3c;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c30c3c;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c30c3c:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_3,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumFossilStampRackLotID3_04a40f52;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if (*(uint *)(param_1 + 0x9e8) <= uVar5) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if (*puVar8 != 0) {
      cVar9 = DAT_0534bc48;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = 0xffffffffffffffff;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = -1;
        }
        else {
          uVar11 = (ulong)DAT_0534bc74._4_4_;
          if (-1 < DAT_0534bc74) goto LAB_01c31140;
          if (DAT_0534bc74._4_4_ != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar8;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c31108;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
        if (lVar3 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
        DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
        puVar10 = (undefined8 *)0x0;
        if (uVar11 == 0) goto LAB_01c31108;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != -0x6927fece) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c31108;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
      } while (*puVar8 != 0);
    }
    break;
  case 3:
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = s_MuseumArtStampRackLotID1_04a40f70;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c30e98;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c30e98;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c30e98;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c30e98;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c30e98:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_2,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumArtStampRackLotID2_04a40f8b;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if ((uVar5 < *(uint *)(param_1 + 0x9e8)) &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8),
       puVar8 != (uint *)0x0)) {
      if (*puVar8 != 0) {
        cVar9 = DAT_0534bc48;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = 0xffffffffffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = -1;
          }
          else {
            if (-1 < DAT_0534bc74) {
              puVar10 = (undefined8 *)((ulong)DAT_0534bc74._4_4_ + (long)puVar8);
              goto LAB_01c30fcc;
            }
            if (DAT_0534bc74._4_4_ != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)*puVar8;
          puVar10 = (undefined8 *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c30fcc;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
          DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
          puVar10 = (undefined8 *)0x0;
          if (uVar11 == 0) goto LAB_01c30fcc;
          piVar7 = (int *)(lVar3 + 4);
          while (piVar7[-1] != -0x6927fece) {
            piVar7 = piVar7 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_01c30fcc;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
        } while (*puVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_01c30fcc:
      puVar2 = &DAT_0407ebb1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = puVar10;
      }
      FUN_038d1270(param_3,&DAT_0409e973,puVar2);
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = s_MuseumArtStampRackLotID3_04a40fa6;
    uVar5 = FUN_0273ea30(&local_50);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_1 + 0xa08);
    if (*(uint *)(param_1 + 0x9e8) <= uVar5) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x9f0) + (long)(int)uVar5 * 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if (*puVar8 != 0) {
      cVar9 = DAT_0534bc48;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_0534bc4c = 0xffffffffffffffff;
          DAT_0534bc54 = 0xffffffffffffffff;
          DAT_0534bc48 = '\x01';
          DAT_0534bc7c = 0xffffffff;
          DAT_0534bc5c = 0xffffffffffffffff;
          DAT_0534bc64 = 0xffffffffffffffff;
          DAT_0534bc6c = 0xffffffffffffffff;
          DAT_0534bc74 = -1;
        }
        else {
          uVar11 = (ulong)DAT_0534bc74._4_4_;
          if (-1 < DAT_0534bc74) goto LAB_01c31140;
          if (DAT_0534bc74._4_4_ != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar8;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01c31108;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar6);
        if (lVar3 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
        DAT_0534bc74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc74);
        puVar10 = (undefined8 *)0x0;
        if (uVar11 == 0) goto LAB_01c31108;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != -0x6927fece) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c31108;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        DAT_0534bc74 = CONCAT44(iVar1,(undefined4)DAT_0534bc74);
      } while (*puVar8 != 0);
    }
    break;
  default:
    goto switchD_01c302c4_default;
  }
  puVar10 = (undefined8 *)0x0;
LAB_01c31108:
  puVar2 = &DAT_0407ebb1;
  if (puVar10 != (undefined8 *)0x0) {
    puVar2 = puVar10;
  }
  FUN_038d1270(param_4,&DAT_0409e973,puVar2);
switchD_01c302c4_default:
  return;
LAB_01c31140:
  puVar10 = (undefined8 *)(uVar11 + (long)puVar8);
  goto LAB_01c31108;
}

