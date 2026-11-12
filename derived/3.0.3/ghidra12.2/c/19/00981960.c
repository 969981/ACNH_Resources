
void FUN_00981960(long param_1,uint *param_2,uint param_3)

{
  ushort *puVar1;
  undefined *puVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  
  if ((int)*(uint *)(param_1 + 0x5c8) < 1) {
    if (*(long *)(param_1 + 0x4b8) == 0) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x4b8) + 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if (*puVar8 <= param_3) {
      return;
    }
    if (*(long *)(param_1 + 0x4b8) == 0) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x4b8) + 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if ((param_3 < *(uint *)(param_1 + 0x4d0)) &&
       (*(char *)(*(long *)(param_1 + 0x4d8) + (long)(int)param_3) == '\0')) {
      return;
    }
    if (*puVar8 <= param_3) {
      return;
    }
    if (puVar8[1] == 0) {
      return;
    }
    if ((ushort)puVar8[2] == 0) {
      return;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * param_3 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(param_1 + 0x5c8) <= param_3) {
      return;
    }
    if (*(uint *)(param_1 + 0x5b8) <= param_3) {
      param_3 = 0;
    }
    puVar8 = *(uint **)(*(long *)(param_1 + 0x5c0) + (ulong)param_3 * 8);
  }
  if (puVar8 != (uint *)0x0) {
    uVar5 = *puVar8;
    if (uVar5 != 0) {
      cVar10 = DAT_04cfabc8;
      do {
        if (cVar10 == '\0') {
          DAT_04cfabcc = 0xffffffffffffffff;
          cVar10 = '\x01';
          uVar5 = *puVar8;
          DAT_04cfabc8 = '\x01';
        }
        else {
          if (-1 < (long)DAT_04cfabcc) {
            puVar6 = (undefined *)((ulong)DAT_04cfabcc._4_4_ + (long)puVar8);
            goto LAB_00981a68;
          }
          if (DAT_04cfabcc._4_4_ != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar5;
        puVar6 = (undefined *)0x0;
        if ((puVar4 == (uint *)0x0) || (puVar6 = (undefined *)0x0, puVar8 == puVar4))
        goto LAB_00981a68;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar4);
        puVar6 = (undefined *)0x0;
        if (lVar3 == 0) goto LAB_00981a68;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
        DAT_04cfabcc = CONCAT44(0xfffffffe,(int)DAT_04cfabcc);
        if (uVar11 == 0) break;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != -0x68852032) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_00981a64;
        }
        iVar9 = 0;
        if (*piVar7 != -1) {
          iVar9 = *piVar7;
        }
        DAT_04cfabcc = CONCAT44(iVar9,(int)DAT_04cfabcc);
        uVar5 = *puVar8;
        if (uVar5 == 0) break;
      } while( true );
    }
LAB_00981a64:
    puVar6 = (undefined *)0x0;
LAB_00981a68:
    puVar2 = PTR_DAT_04c47db8;
    if (puVar6 != (undefined *)0x0) {
      puVar2 = puVar6;
    }
    if (puVar2 != (undefined *)0x0) {
      *(undefined **)(param_2 + 4) = puVar2;
    }
    uVar5 = *puVar8;
    if (uVar5 != 0) {
      cVar10 = DAT_04cfabc8;
      do {
        if (cVar10 == '\0') {
          DAT_04cfabcc = 0xffffffffffffffff;
          cVar10 = '\x01';
          uVar5 = *puVar8;
          DAT_04cfabc8 = '\x01';
        }
        else {
          if (-1 < (int)DAT_04cfabcc) {
            puVar1 = (ushort *)((DAT_04cfabcc & 0xffffffff) + (long)puVar8);
            if (puVar1 != (ushort *)0x0) {
              uVar5 = (uint)*puVar1;
              goto LAB_00981bf0;
            }
            break;
          }
          if ((int)DAT_04cfabcc != -1) break;
        }
        puVar4 = (uint *)(ulong)uVar5;
        uVar5 = 0;
        if ((puVar4 == (uint *)0x0) || (uVar5 = 0, puVar8 == puVar4)) goto LAB_00981bf0;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar4);
        uVar5 = 0;
        if (lVar3 == 0) goto LAB_00981bf0;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
        DAT_04cfabcc._4_4_ = (uint)(DAT_04cfabcc >> 0x20);
        DAT_04cfabcc = CONCAT44(DAT_04cfabcc._4_4_,0xfffffffe);
        if (uVar11 == 0) break;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_00981bec;
        }
        iVar9 = 0;
        if (*piVar7 != -1) {
          iVar9 = *piVar7;
        }
        DAT_04cfabcc = CONCAT44(DAT_04cfabcc._4_4_,iVar9);
        uVar5 = *puVar8;
        if (uVar5 == 0) break;
      } while( true );
    }
LAB_00981bec:
    uVar5 = 0;
LAB_00981bf0:
    *param_2 = uVar5;
  }
  return;
}

