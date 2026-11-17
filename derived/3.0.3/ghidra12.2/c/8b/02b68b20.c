
undefined8 FUN_02b68b20(uint *param_1,short param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  short sVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  undefined1 auStack_94 [31];
  undefined1 local_75;
  uint local_64;
  
  if (param_1 != (uint *)0x0) {
    uVar12 = 0;
    do {
      local_64 = uVar12;
      if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
        plVar11 = &DAT_055c04a0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        plVar11 = &DAT_055cdaf8;
        if (iVar3 != 0x758f7eaf) {
          plVar11 = &DAT_055c04a0;
        }
      }
      local_75 = 0;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      if (auStack_94 != (undefined1 *)plVar11[1]) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      uVar5 = 0x26;
      if ((int)plVar11[7] != -0x24a26848) {
        if (7 < local_64) {
          local_64 = 0;
        }
        uVar5 = (&DAT_05636e10)[(int)local_64];
      }
      if (uVar5 != 0) {
        if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
          if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
               (puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar6 != (uint *)0x0)) &&
              ((*(uint *)(DAT_05635578 + 0xe8) <= uVar5 ||
               (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar5) != '\0')))) &&
             (((uVar5 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
            iVar3 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              iVar3 = 0x1c;
            }
            puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar3) +
                             (long)puVar6);
            goto joined_r0x02b68e08;
          }
        }
        else if (uVar5 < *(uint *)(DAT_05635578 + 0x1e0)) {
          if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar5) {
            uVar5 = 0;
          }
          puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar5 * 8);
joined_r0x02b68e08:
          if ((puVar6 != (uint *)0x0) && (uVar5 = *puVar6, uVar5 != 0)) {
            cVar7 = DAT_0560baa8;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *PTR_DAT_04bc4690 = 1;
                DAT_0560baac = 0xffffffffffffffff;
                DAT_0560bab4 = 0xffffffffffffffff;
                DAT_0560babc = -1;
                DAT_0560bac4 = 0xffffffff;
                uVar5 = *puVar6;
              }
              else {
                if (-1 < DAT_0560babc) {
                  if ((short *)((ulong)DAT_0560babc._4_4_ + (long)puVar6) != (short *)0x0) {
                    sVar9 = *(short *)((ulong)DAT_0560babc._4_4_ + (long)puVar6);
                    goto joined_r0x02b68e44;
                  }
                  break;
                }
                if (DAT_0560babc._4_4_ != 0xffffffff) break;
              }
              puVar2 = (uint *)(ulong)uVar5;
              if ((puVar2 == (uint *)0x0) || (puVar6 == puVar2)) break;
              lVar1 = 0xc;
              if (*(char *)((long)puVar6 + (10 - (long)puVar2)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar6 + (lVar1 - (long)puVar2);
              if (lVar1 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar2));
              *(undefined4 *)(PTR_DAT_04bc4698 + 0x14) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar10 = (int *)(lVar1 + 4);
              while (piVar10[-1] != 0xd664b5c) {
                piVar10 = piVar10 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_02b68e14;
              }
              iVar3 = 0;
              if (*piVar10 != -1) {
                iVar3 = *piVar10;
              }
              *(int *)(PTR_DAT_04bc4698 + 0x14) = iVar3;
              uVar5 = *puVar6;
              if (uVar5 == 0) break;
            } while( true );
          }
        }
      }
LAB_02b68e14:
      sVar9 = 0;
joined_r0x02b68e44:
      if (sVar9 == param_2) {
        *param_1 = uVar12;
        return 1;
      }
      uVar5 = 8;
      if ((int)uVar12 < 8) {
        uVar5 = uVar12 + 1;
      }
      uVar12 = uVar5;
    } while (uVar5 != 8);
  }
  return 0;
}

