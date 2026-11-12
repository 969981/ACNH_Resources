
bool FUN_007dabc0(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint *puVar7;
  code *pcVar8;
  char cVar9;
  ulong uVar10;
  uint *puVar11;
  undefined *puVar12;
  
  if (param_2 == 0) {
    return false;
  }
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return false;
  }
  if (param_4 == 2) {
    if (*puVar7 == 0) {
      return false;
    }
    cVar9 = DAT_04cb2538;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_04cb253c = -1;
        DAT_04cb2544 = 0xffffffffffffffff;
        DAT_04cb2538 = '\x01';
        DAT_04cb257c = 0xffffffffffffffff;
        DAT_04cb2584 = 0xffffffff;
        DAT_04cb254c = 0xffffffffffffffff;
        DAT_04cb2554 = 0xffffffffffffffff;
        DAT_04cb255c = 0xffffffffffffffff;
        DAT_04cb2564 = 0xffffffffffffffff;
        DAT_04cb256c = 0xffffffffffffffff;
        DAT_04cb2574 = 0xffffffffffffffff;
      }
      else {
        uVar10 = DAT_04cb256c & 0xffffffff;
        if (-1 < (int)DAT_04cb256c) goto LAB_007daebc;
        if ((int)DAT_04cb256c != -1) {
          return false;
        }
      }
      puVar11 = (uint *)(ulong)*puVar7;
      if (*puVar7 == 0) {
        return false;
      }
      if (puVar7 == puVar11) {
        return false;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) {
        return false;
      }
      uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      DAT_04cb256c = CONCAT44(DAT_04cb256c._4_4_,0xfffffffe);
      if (uVar10 == 0) {
        return false;
      }
      piVar5 = (int *)(lVar2 + 4);
      while (piVar5[-1] != -0x38f416b1) {
        piVar5 = piVar5 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return false;
        }
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      DAT_04cb256c = CONCAT44(DAT_04cb256c._4_4_,iVar1);
      if (*puVar7 == 0) {
        return false;
      }
    } while( true );
  }
  if (param_4 == 1) {
    if (*puVar7 == 0) {
      return false;
    }
    cVar9 = DAT_04cb2538;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_04cb253c = -1;
        DAT_04cb2544 = 0xffffffffffffffff;
        DAT_04cb2538 = '\x01';
        DAT_04cb257c = 0xffffffffffffffff;
        DAT_04cb2584 = 0xffffffff;
        DAT_04cb254c = 0xffffffffffffffff;
        DAT_04cb2554 = 0xffffffffffffffff;
        DAT_04cb255c = 0xffffffffffffffff;
        DAT_04cb2564 = 0xffffffffffffffff;
        DAT_04cb256c = 0xffffffffffffffff;
        DAT_04cb2574 = 0xffffffffffffffff;
      }
      else {
        uVar10 = DAT_04cb2574 & 0xffffffff;
        if (-1 < (int)DAT_04cb2574) goto LAB_007daebc;
        if ((int)DAT_04cb2574 != -1) {
          return false;
        }
      }
      puVar11 = (uint *)(ulong)*puVar7;
      if (*puVar7 == 0) {
        return false;
      }
      if (puVar7 == puVar11) {
        return false;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) {
        return false;
      }
      uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      DAT_04cb2574 = CONCAT44(DAT_04cb2574._4_4_,0xfffffffe);
      if (uVar10 == 0) {
        return false;
      }
      piVar5 = (int *)(lVar2 + 4);
      while (piVar5[-1] != 0x86f5f3a) {
        piVar5 = piVar5 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return false;
        }
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      DAT_04cb2574 = CONCAT44(DAT_04cb2574._4_4_,iVar1);
      if (*puVar7 == 0) {
        return false;
      }
    } while( true );
  }
  if (param_4 != 0) {
    return false;
  }
  if (*puVar7 == 0) {
    return false;
  }
  cVar9 = DAT_04cb2538;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      DAT_04cb253c = -1;
      DAT_04cb2544 = 0xffffffffffffffff;
      DAT_04cb2538 = '\x01';
      DAT_04cb257c = 0xffffffffffffffff;
      DAT_04cb2584 = 0xffffffff;
      DAT_04cb254c = 0xffffffffffffffff;
      DAT_04cb2554 = 0xffffffffffffffff;
      DAT_04cb255c = 0xffffffffffffffff;
      DAT_04cb2564 = 0xffffffffffffffff;
      DAT_04cb256c = 0xffffffffffffffff;
      DAT_04cb2574 = 0xffffffffffffffff;
    }
    else {
      uVar10 = (ulong)DAT_04cb256c._4_4_;
      if (-1 < (long)DAT_04cb256c) break;
      if (DAT_04cb256c._4_4_ != 0xffffffff) {
        return false;
      }
    }
    puVar11 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return false;
    }
    if (puVar7 == puVar11) {
      return false;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return false;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
    DAT_04cb256c = CONCAT44(0xfffffffe,(int)DAT_04cb256c);
    if (uVar10 == 0) {
      return false;
    }
    piVar5 = (int *)(lVar2 + 4);
    while (piVar5[-1] != -0x600f8377) {
      piVar5 = piVar5 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar5 != -1) {
      iVar1 = *piVar5;
    }
    DAT_04cb256c = CONCAT44(iVar1,(int)DAT_04cb256c);
    if (*puVar7 == 0) {
      return false;
    }
  } while( true );
LAB_007daebc:
  if (((char *)(uVar10 + (long)puVar7) != (char *)0x0) && (*(char *)(uVar10 + (long)puVar7) != '\0')
     ) {
    if (0xf < param_3) {
      param_3 = 0;
    }
    pcVar8 = *(code **)((long)&PTR_FUN_04916870 +
                       (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4));
    if (pcVar8 != (code *)0x0) {
      bVar4 = (*pcVar8)(*(undefined8 *)(param_1 + 8));
      puVar7 = *(uint **)(param_1 + 8);
      if (*puVar7 != 0) {
        cVar9 = DAT_04cb2538;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_04cb253c = -1;
            DAT_04cb2544 = 0xffffffffffffffff;
            DAT_04cb2538 = '\x01';
            DAT_04cb257c = 0xffffffffffffffff;
            DAT_04cb2584 = 0xffffffff;
            DAT_04cb254c = 0xffffffffffffffff;
            DAT_04cb2554 = 0xffffffffffffffff;
            DAT_04cb255c = 0xffffffffffffffff;
            DAT_04cb2564 = 0xffffffffffffffff;
            DAT_04cb256c = 0xffffffffffffffff;
            DAT_04cb2574 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_04cb253c) {
              puVar12 = (undefined *)((ulong)DAT_04cb253c._4_4_ + (long)puVar7);
              goto LAB_007dafe0;
            }
            if (DAT_04cb253c._4_4_ != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar7;
          puVar12 = (undefined *)0x0;
          if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_007dafe0;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
          if (lVar2 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          DAT_04cb253c = CONCAT44(0xfffffffe,(undefined4)DAT_04cb253c);
          puVar12 = (undefined *)0x0;
          if (uVar10 == 0) goto LAB_007dafe0;
          piVar5 = (int *)(lVar2 + 4);
          while (piVar5[-1] != 0x50edd045) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              puVar12 = (undefined *)0x0;
              goto LAB_007dafe0;
            }
          }
          iVar1 = 0;
          if (*piVar5 != -1) {
            iVar1 = *piVar5;
          }
          DAT_04cb253c = CONCAT44(iVar1,(undefined4)DAT_04cb253c);
        } while (*puVar7 != 0);
      }
      puVar12 = (undefined *)0x0;
LAB_007dafe0:
      puVar3 = PTR_DAT_04c47c70;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      if (bVar4 < 0x10) {
        puVar6 = (undefined8 *)(&PTR_DAT_04912310)[bVar4];
      }
      else {
        puVar6 = &DAT_0407ebb1;
      }
      FUN_038d1270(param_2,"%s_%s",puVar3,puVar6);
      return pcVar8 != (code *)0x0;
    }
  }
  return false;
}

