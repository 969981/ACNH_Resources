
void FUN_0215db20(undefined8 *param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  undefined2 uVar6;
  ushort uVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  uint local_48;
  undefined4 local_44;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x1c0);
    if ((int)uVar2 < 1) {
      if (((((*(long *)(lVar4 + 0xb0) == 0) ||
            (puVar11 = *(uint **)(*(long *)(lVar4 + 0xb0) + 8), puVar11 == (uint *)0x0)) ||
           (*puVar11 <= param_3)) ||
          ((param_3 < *(uint *)(lVar4 + 200) &&
           (*(char *)(*(long *)(lVar4 + 0xd0) + (long)(int)param_3) == '\0')))) ||
         ((*puVar11 <= param_3 || ((puVar11[1] == 0 || ((ushort)puVar11[2] == 0))))))
      goto LAB_0215dd30;
      iVar5 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * param_3 + (uint)(ushort)puVar11[2] * 8 + iVar5) +
                        (long)puVar11);
    }
    else {
      if ((uVar2 <= param_3) || (uVar2 <= param_3)) goto LAB_0215dd30;
      if (*(uint *)(lVar4 + 0x1b0) <= param_3) {
        param_3 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar4 + 0x1b8) + (ulong)param_3 * 8);
    }
    if (puVar11 != (uint *)0x0) {
      *(undefined8 *)((long)param_1 + 4) = 0xfffe;
      *(undefined2 *)param_1 = 0xffff;
      FUN_0277d4ac();
      *(undefined8 *)((long)param_1 + 0xc) = 0xfffe;
      FUN_0277d4ac();
      *(undefined8 *)((long)param_1 + 0x14) = 0xfffe;
      FUN_0277d4ac();
      *(undefined8 *)((long)param_1 + 0x1c) = 0xfffe;
      FUN_0277d4ac();
      *(undefined8 *)((long)param_1 + 0x24) = 0xfffe;
      FUN_0277d4ac();
      *(undefined8 *)((long)param_1 + 0x2c) = 0xfffe;
      FUN_0277d4ac();
      if (*puVar11 == 0) {
LAB_0215ddbc:
        uVar6 = 0;
      }
      else {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_053f642c) {
              if ((undefined2 *)((ulong)DAT_053f642c._4_4_ + (long)puVar11) == (undefined2 *)0x0)
              goto LAB_0215ddbc;
              uVar6 = *(undefined2 *)((ulong)DAT_053f642c._4_4_ + (long)puVar11);
              goto LAB_0215ddc0;
            }
            if (DAT_053f642c._4_4_ != 0xffffffff) goto LAB_0215ddbc;
          }
          puVar9 = (uint *)(ulong)*puVar11;
          uVar6 = 0;
          if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215ddc0;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) goto LAB_0215ddbc;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f642c = CONCAT44(0xfffffffe,(int)DAT_053f642c);
          uVar6 = 0;
          if (uVar8 == 0) goto LAB_0215ddc0;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != 0x54706054) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              uVar6 = 0;
              goto LAB_0215ddc0;
            }
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f642c = CONCAT44(iVar5,(int)DAT_053f642c);
        } while (*puVar11 != 0);
        uVar6 = 0;
      }
LAB_0215ddc0:
      *(undefined2 *)param_1 = uVar6;
      if (*puVar11 != 0) {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_053f641c) {
              puVar1 = (ushort *)((DAT_053f641c & 0xffffffff) + (long)puVar11);
              if (puVar1 != (ushort *)0x0) {
                uVar7 = *puVar1;
                goto LAB_0215de9c;
              }
              break;
            }
            if ((int)DAT_053f641c != -1) break;
          }
          puVar9 = (uint *)(ulong)*puVar11;
          uVar7 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215de9c;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f641c = CONCAT44(DAT_053f641c._4_4_,0xfffffffe);
          if (uVar8 == 0) break;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != 0x291a1b04) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0215de98;
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f641c = CONCAT44(DAT_053f641c._4_4_,iVar5);
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0215de98:
      uVar7 = 0xfffe;
LAB_0215de9c:
      local_48 = (uint)uVar7;
      local_44 = 0;
      FUN_0277d4ac(&local_48);
      *(uint *)((long)param_1 + 4) = local_48;
      *(undefined4 *)(param_1 + 1) = local_44;
      uVar2 = *puVar11;
      if (uVar2 != 0) {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            cVar3 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
            uVar2 = *puVar11;
          }
          else {
            if (-1 < (int)DAT_053f6414) {
              puVar1 = (ushort *)((DAT_053f6414 & 0xffffffff) + (long)puVar11);
              if (puVar1 != (ushort *)0x0) {
                uVar7 = *puVar1;
                goto LAB_0215df9c;
              }
              break;
            }
            if ((int)DAT_053f6414 != -1) break;
          }
          puVar9 = (uint *)(ulong)uVar2;
          uVar7 = 0xfffe;
          if ((puVar9 == (uint *)0x0) || (uVar7 = 0xfffe, puVar11 == puVar9)) goto LAB_0215df9c;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f6414._4_4_ = (uint)(DAT_053f6414 >> 0x20);
          DAT_053f6414 = CONCAT44(DAT_053f6414._4_4_,0xfffffffe);
          if (uVar8 == 0) break;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != 0x2b57b24a) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0215df98;
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f6414 = CONCAT44(DAT_053f6414._4_4_,iVar5);
          uVar2 = *puVar11;
          if (uVar2 == 0) break;
        } while( true );
      }
LAB_0215df98:
      uVar7 = 0xfffe;
LAB_0215df9c:
      local_48 = (uint)uVar7;
      local_44 = 0;
      FUN_0277d4ac(&local_48);
      *(uint *)((long)param_1 + 0xc) = local_48;
      *(undefined4 *)(param_1 + 2) = local_44;
      if (*puVar11 != 0) {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_053f642c) {
              puVar1 = (ushort *)((DAT_053f642c & 0xffffffff) + (long)puVar11);
              if (puVar1 != (ushort *)0x0) {
                uVar7 = *puVar1;
                goto LAB_0215e090;
              }
              break;
            }
            if ((int)DAT_053f642c != -1) break;
          }
          puVar9 = (uint *)(ulong)*puVar11;
          uVar7 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215e090;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f642c = CONCAT44(DAT_053f642c._4_4_,0xfffffffe);
          if (uVar8 == 0) break;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != -0x78f0e1d7) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0215e08c;
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f642c = CONCAT44(DAT_053f642c._4_4_,iVar5);
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0215e08c:
      uVar7 = 0xfffe;
LAB_0215e090:
      local_48 = (uint)uVar7;
      local_44 = 0;
      FUN_0277d4ac(&local_48);
      *(uint *)((long)param_1 + 0x14) = local_48;
      *(undefined4 *)(param_1 + 3) = local_44;
      if (*puVar11 != 0) {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_053f6414) {
              if ((ushort *)((ulong)DAT_053f6414._4_4_ + (long)puVar11) != (ushort *)0x0) {
                uVar7 = *(ushort *)((ulong)DAT_053f6414._4_4_ + (long)puVar11);
                goto LAB_0215e18c;
              }
              break;
            }
            if (DAT_053f6414._4_4_ != 0xffffffff) break;
          }
          puVar9 = (uint *)(ulong)*puVar11;
          uVar7 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215e18c;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f6414 = CONCAT44(0xfffffffe,(int)DAT_053f6414);
          if (uVar8 == 0) break;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != -0x33ec914b) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0215e188;
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f6414 = CONCAT44(iVar5,(int)DAT_053f6414);
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0215e188:
      uVar7 = 0xfffe;
LAB_0215e18c:
      local_48 = (uint)uVar7;
      local_44 = 0;
      FUN_0277d4ac(&local_48);
      *(uint *)((long)param_1 + 0x1c) = local_48;
      *(undefined4 *)(param_1 + 4) = local_44;
      if (*puVar11 != 0) {
        cVar3 = DAT_053f6410;
        do {
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            DAT_053f6414 = 0xffffffffffffffff;
            DAT_053f641c = 0xffffffffffffffff;
            DAT_053f6410 = '\x01';
            DAT_053f6434 = 0xffffffffffffffff;
            DAT_053f6424 = -1;
            DAT_053f642c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_053f641c) {
              if ((ushort *)((ulong)DAT_053f641c._4_4_ + (long)puVar11) != (ushort *)0x0) {
                uVar7 = *(ushort *)((ulong)DAT_053f641c._4_4_ + (long)puVar11);
                goto LAB_0215e280;
              }
              break;
            }
            if (DAT_053f641c._4_4_ != 0xffffffff) break;
          }
          puVar9 = (uint *)(ulong)*puVar11;
          uVar7 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215e280;
          lVar4 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
          if (lVar4 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
          DAT_053f641c = CONCAT44(0xfffffffe,(int)DAT_053f641c);
          if (uVar8 == 0) break;
          piVar10 = (int *)(lVar4 + 4);
          while (piVar10[-1] != -0x317d82b9) {
            piVar10 = piVar10 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0215e27c;
          }
          iVar5 = 0;
          if (*piVar10 != -1) {
            iVar5 = *piVar10;
          }
          DAT_053f641c = CONCAT44(iVar5,(int)DAT_053f641c);
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0215e27c:
      uVar7 = 0xfffe;
LAB_0215e280:
      local_48 = (uint)uVar7;
      local_44 = 0;
      FUN_0277d4ac(&local_48);
      *(uint *)((long)param_1 + 0x24) = local_48;
      *(undefined4 *)(param_1 + 5) = local_44;
      if (*puVar11 == 0) {
LAB_0215e378:
        uVar7 = 0xfffe;
LAB_0215e37c:
        local_48 = (uint)uVar7;
        local_44 = 0;
        FUN_0277d4ac(&local_48);
        *(uint *)((long)param_1 + 0x2c) = local_48;
        *(undefined4 *)(param_1 + 6) = local_44;
        return;
      }
      cVar3 = DAT_053f6410;
      do {
        if (cVar3 == '\0') {
          cVar3 = '\x01';
          DAT_053f6414 = 0xffffffffffffffff;
          DAT_053f641c = 0xffffffffffffffff;
          DAT_053f6410 = '\x01';
          DAT_053f6434 = 0xffffffffffffffff;
          DAT_053f6424 = -1;
          DAT_053f642c = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_053f6424) {
            if ((ushort *)((ulong)DAT_053f6424._4_4_ + (long)puVar11) != (ushort *)0x0) {
              uVar7 = *(ushort *)((ulong)DAT_053f6424._4_4_ + (long)puVar11);
              goto LAB_0215e37c;
            }
            goto LAB_0215e378;
          }
          if (DAT_053f6424._4_4_ != 0xffffffff) goto LAB_0215e378;
        }
        puVar9 = (uint *)(ulong)*puVar11;
        uVar7 = 0xfffe;
        if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_0215e37c;
        lVar4 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar11 + (lVar4 - (long)puVar9);
        if (lVar4 == 0) goto LAB_0215e378;
        uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
        DAT_053f6424 = CONCAT44(0xfffffffe,(undefined4)DAT_053f6424);
        if (uVar8 == 0) goto LAB_0215e378;
        piVar10 = (int *)(lVar4 + 4);
        while (piVar10[-1] != -0x68c051cc) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0215e378;
        }
        iVar5 = 0;
        if (*piVar10 != -1) {
          iVar5 = *piVar10;
        }
        DAT_053f6424 = CONCAT44(iVar5,(undefined4)DAT_053f6424);
        if (*puVar11 == 0) goto LAB_0215e378;
      } while( true );
    }
  }
LAB_0215dd30:
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)param_1 = 0xffff;
  *(undefined2 *)((long)param_1 + 4) = 0xfffe;
  *(undefined1 *)((long)param_1 + 7) = 0;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0xc) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x14) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x1c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x24) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x2c) = 0xfffe;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x2c));
  return;
}

