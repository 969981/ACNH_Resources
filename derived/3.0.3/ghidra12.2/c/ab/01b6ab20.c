
uint FUN_01b6ab20(undefined4 *param_1,int *param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  undefined *local_50;
  uint local_48;
  undefined4 uStack_44;
  long local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bc0e90;
  puVar2 = PTR_DAT_04bc0e88;
  uVar12 = 0x3ff;
  if (param_4 != 0xffffffff) {
    uVar12 = param_4;
  }
  switch(*param_1) {
  case 0:
  case 1:
    goto switchD_01b6ab60_caseD_0;
  case 2:
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      if (iVar5 == 8) {
        iVar5 = 1;
      }
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5);
      if (iVar5 == 2) {
        lVar6 = 0;
      }
      else {
        iVar5 = param_2[1];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5);
        if (iVar5 == 2) {
          lVar6 = 1;
        }
        else {
          iVar5 = param_2[2];
          if (iVar5 == 8) {
            iVar5 = 1;
          }
          local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5);
          lVar6 = 2;
          if (iVar5 != 2) {
            iVar5 = param_2[3];
            if (iVar5 == 8) {
              iVar5 = 1;
            }
            local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5);
            if (iVar5 != 2) break;
            lVar6 = 3;
          }
        }
      }
      local_34 = 0;
      local_38 = (uint)*(ushort *)(param_3 + lVar6 * 2 + 2);
      FUN_0277d4ac(&local_38);
      puVar2 = PTR_DAT_04bb43c0;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_38);
      lVar6 = *(long *)puVar2;
      if (lVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_40 = 0;
          local_50 = PTR_DAT_04bc0510 + 0x10;
          local_48 = local_38;
          uStack_44 = local_34;
          uVar4 = FUN_0277d6c4(&local_48);
          if (*(long *)puVar2 != 0) {
            lVar6 = *(long *)(lVar6 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(&local_38);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
                 (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
                local_40 = lVar6;
              }
            }
          }
          iVar5 = FUN_01aed730(&local_50);
          return uVar12 | iVar5 << 10;
        }
      }
    }
    break;
  case 4:
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      if (iVar5 == 8) {
        iVar5 = 1;
      }
      if (iVar5 == 7) {
        lVar6 = 0;
      }
      else {
        iVar5 = param_2[1];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 7) {
          lVar6 = 1;
        }
        else {
          iVar5 = param_2[2];
          if (iVar5 == 8) {
            iVar5 = 1;
          }
          if (iVar5 == 7) {
            lVar6 = 2;
          }
          else {
            iVar5 = param_2[3];
            if (iVar5 == 8) {
              iVar5 = 1;
            }
            if (iVar5 != 7) break;
            lVar6 = 3;
          }
        }
      }
      uVar4 = (uint)*(ushort *)(param_3 + lVar6 * 2 + 2) - (uint)DAT_0534f428;
      if ((uVar4 < DAT_0534f408) &&
         (puVar7 = *(uint **)(DAT_0534f410 + (long)(int)uVar4 * 8), puVar7 != (uint *)0x0)) {
        uVar4 = *puVar7;
        if (uVar4 == 0) {
LAB_01b6af24:
          return uVar12 | 0x3fc00;
        }
        cVar8 = *PTR_DAT_04bc0e88;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            uVar4 = *puVar7;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x38);
            if (-1 < (int)uVar1) {
              if ((byte *)((ulong)uVar1 + (long)puVar7) != (byte *)0x0) {
                uVar4 = (*(byte *)((ulong)uVar1 + (long)puVar7) ^ 0xff) << 10;
                goto LAB_01b6af1c;
              }
              goto LAB_01b6af24;
            }
            if (uVar1 != 0xffffffff) goto LAB_01b6af24;
          }
          puVar9 = (uint *)(ulong)uVar4;
          uVar4 = 0x3fc00;
          if ((puVar9 == (uint *)0x0) || (puVar7 == puVar9)) {
LAB_01b6af1c:
            return uVar4 | uVar12;
          }
          lVar6 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar7 + (lVar6 - (long)puVar9);
          if (lVar6 == 0) goto LAB_01b6af24;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
          *(undefined4 *)(puVar3 + 0x38) = 0xfffffffe;
          if (uVar10 == 0) goto LAB_01b6af24;
          piVar11 = (int *)(lVar6 + 4);
          while (piVar11[-1] != -0x2765f250) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_01b6af24;
          }
          iVar5 = 0;
          if (*piVar11 != -1) {
            iVar5 = *piVar11;
          }
          *(int *)(puVar3 + 0x38) = iVar5;
          uVar4 = *puVar7;
          if (uVar4 == 0) goto LAB_01b6af24;
        } while( true );
      }
    }
  }
  uVar12 = 0xffffffff;
switchD_01b6ab60_caseD_0:
  return uVar12;
}

