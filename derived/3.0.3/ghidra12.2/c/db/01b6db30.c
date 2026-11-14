
uint FUN_01b6db30(undefined4 *param_1,int *param_2,long param_3,uint param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined *local_50;
  uint local_48;
  undefined4 uStack_44;
  long local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bc0e90;
  puVar4 = PTR_DAT_04bc0e88;
  uVar15 = 0x3ff;
  if (param_4 != 0xffffffff) {
    uVar15 = param_4;
  }
  switch(*param_1) {
  case 0:
  case 1:
    goto switchD_01b6db70_caseD_0;
  case 2:
    if (param_2 != (int *)0x0) {
      iVar7 = *param_2;
      if (iVar7 == 8) {
        iVar7 = 1;
      }
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
      if (iVar7 == 2) {
        lVar8 = 0;
      }
      else {
        iVar7 = param_2[1];
        if (iVar7 == 8) {
          iVar7 = 1;
        }
        local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
        if (iVar7 == 2) {
          lVar8 = 1;
        }
        else {
          iVar7 = param_2[2];
          if (iVar7 == 8) {
            iVar7 = 1;
          }
          local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
          lVar8 = 2;
          if (iVar7 != 2) {
            iVar7 = param_2[3];
            if (iVar7 == 8) {
              iVar7 = 1;
            }
            local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
            if (iVar7 != 2) break;
            lVar8 = 3;
          }
        }
      }
      local_34 = 0;
      local_38 = (uint)*(ushort *)(param_3 + lVar8 * 2 + 2);
      FUN_0277d4ac(&local_38);
      puVar4 = PTR_DAT_04bb43c0;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_38);
      lVar8 = *(long *)puVar4;
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_40 = 0;
          local_50 = PTR_DAT_04bc0510 + 0x10;
          local_48 = local_38;
          uStack_44 = local_34;
          uVar6 = FUN_0277d6c4(&local_48);
          if (*(long *)puVar4 != 0) {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar8 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(&local_38);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
                 (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
                local_40 = lVar8;
              }
            }
          }
          iVar7 = FUN_01aed730(&local_50);
          return uVar15 | iVar7 << 10;
        }
      }
    }
    break;
  case 3:
    if (param_5 != 0) {
      lVar8 = 0;
      lVar10 = *(long *)(*(long *)(param_5 + 0x18) + 8);
      plVar1 = (long *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      while( true ) {
        uVar6 = *(uint *)((long)plVar1 + lVar8 + 0xaf00);
        plVar2 = plVar1 + (ulong)uVar6 * 0xe;
        if (399 < uVar6) {
          plVar2 = plVar1;
        }
        if ((*plVar2 != 0) &&
           ((*(int *)((long)plVar2 + 0x2c) != 0 && (int)plVar2[2] != 0) &&
            *plVar2 == *(long *)(param_3 + 2))) break;
        lVar8 = lVar8 + 4;
        if (lVar8 == 0x640) {
          return uVar15;
        }
      }
      uVar6 = 0x800;
      if (((*(byte *)((long)plVar2 + 0x6e) ^ 0xff) & 6) != 0) {
        uVar6 = 0x400;
      }
      return uVar6 | uVar15;
    }
    break;
  case 4:
    if (param_2 != (int *)0x0) {
      iVar7 = *param_2;
      if (iVar7 == 8) {
        iVar7 = 1;
      }
      if (iVar7 == 7) {
        lVar8 = 0;
      }
      else {
        iVar7 = param_2[1];
        if (iVar7 == 8) {
          iVar7 = 1;
        }
        if (iVar7 == 7) {
          lVar8 = 1;
        }
        else {
          iVar7 = param_2[2];
          if (iVar7 == 8) {
            iVar7 = 1;
          }
          if (iVar7 == 7) {
            lVar8 = 2;
          }
          else {
            iVar7 = param_2[3];
            if (iVar7 == 8) {
              iVar7 = 1;
            }
            if (iVar7 != 7) break;
            lVar8 = 3;
          }
        }
      }
      uVar6 = (uint)*(ushort *)(param_3 + lVar8 * 2 + 2) - (uint)DAT_0534f428;
      if ((uVar6 < DAT_0534f408) &&
         (puVar9 = *(uint **)(DAT_0534f410 + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0)) {
        uVar6 = *puVar9;
        if (uVar6 == 0) {
LAB_01b6dfd0:
          return uVar15 | 0x3fc00;
        }
        cVar11 = *PTR_DAT_04bc0e88;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            uVar6 = *puVar9;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x38);
            if (-1 < (int)uVar3) {
              if ((byte *)((ulong)uVar3 + (long)puVar9) != (byte *)0x0) {
                uVar6 = (*(byte *)((ulong)uVar3 + (long)puVar9) ^ 0xff) << 10;
                goto LAB_01b6dfc8;
              }
              goto LAB_01b6dfd0;
            }
            if (uVar3 != 0xffffffff) goto LAB_01b6dfd0;
          }
          puVar12 = (uint *)(ulong)uVar6;
          uVar6 = 0x3fc00;
          if ((puVar12 == (uint *)0x0) || (puVar9 == puVar12)) {
LAB_01b6dfc8:
            return uVar6 | uVar15;
          }
          lVar8 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar9 + (lVar8 - (long)puVar12);
          if (lVar8 == 0) goto LAB_01b6dfd0;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
          if (uVar13 == 0) goto LAB_01b6dfd0;
          piVar14 = (int *)(lVar8 + 4);
          while (piVar14[-1] != -0x2765f250) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_01b6dfd0;
          }
          iVar7 = 0;
          if (*piVar14 != -1) {
            iVar7 = *piVar14;
          }
          *(int *)(puVar5 + 0x38) = iVar7;
          uVar6 = *puVar9;
          if (uVar6 == 0) goto LAB_01b6dfd0;
        } while( true );
      }
    }
  }
  uVar15 = 0xffffffff;
switchD_01b6db70_caseD_0:
  return uVar15;
}

