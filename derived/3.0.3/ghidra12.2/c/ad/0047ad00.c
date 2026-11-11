
undefined8 FUN_0047ad00(long param_1,byte *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_58;
  
  if (param_2 != (byte *)0x0) {
    for (; (*param_2 & 1) == 0; param_2 = *(byte **)(param_2 + 8)) {
    }
  }
  plVar7 = (long *)FUN_0047b110(*(undefined8 *)(param_1 + 0x60),param_2);
  if (plVar7 != (long *)0x0) {
    if (0 < (int)plVar7[1]) {
      lVar15 = 0;
      do {
        while( true ) {
          iVar1 = *(int *)(*plVar7 + lVar15 * 4);
          iVar6 = *(int *)(param_1 + 0x20);
          if (iVar6 <= *(int *)(param_1 + 0x28) * 2) {
            FUN_0047d170((long *)(param_1 + 0x18),iVar6 << 1);
            iVar6 = *(int *)(param_1 + 0x20);
          }
          uVar4 = (iVar1 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar1 * -0x61c8864f & 0xff00ffU) << 8;
          uVar4 = iVar6 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
          lVar11 = *(long *)(param_1 + 0x18);
          piVar12 = (int *)(lVar11 + (long)(int)uVar4 * 4);
          if (*piVar12 == -1) break;
          if (*piVar12 != iVar1) {
            do {
              uVar4 = uVar4 + 1 & iVar6 - 1U;
              iVar2 = *(int *)(lVar11 + (long)(int)uVar4 * 4);
              if (iVar2 == -1) {
                piVar12 = (int *)(lVar11 + (long)(int)uVar4 * 4);
                goto LAB_0047ae00;
              }
            } while (iVar2 != iVar1);
            piVar12 = (int *)(lVar11 + (long)(int)uVar4 * 4);
          }
          *piVar12 = iVar1;
          lVar15 = lVar15 + 1;
          if ((int)plVar7[1] <= lVar15) {
            return 0;
          }
        }
LAB_0047ae00:
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *piVar12 = iVar1;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + (long)iVar1 * 8);
        if (*(char *)(param_1 + 0x78) == '\0') {
          *(bool *)(param_1 + 0x78) = *(char *)(lVar11 + 0x34) == '\0';
          if (*(char *)(param_1 + 0x79) == '\0') goto LAB_0047ae58;
LAB_0047ae38:
          bVar3 = true;
        }
        else {
          *(undefined1 *)(param_1 + 0x78) = 1;
          if (*(char *)(param_1 + 0x79) != '\0') goto LAB_0047ae38;
LAB_0047ae58:
          bVar3 = *(char *)(lVar11 + 0x34) != '\0';
        }
        *(bool *)(param_1 + 0x79) = bVar3;
        *(undefined4 *)(param_1 + 0x58) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)plVar7[1]);
    }
    return 0;
  }
  uVar8 = FUN_00428440(param_2);
  if ((((param_2 != (byte *)0x0) && ((uVar8 & 0x1f) == 7)) &&
      (uVar4 = FUN_004274f0(param_2), (uVar4 >> 5 & 1) == 0)) &&
     (lVar15 = FUN_00426e60(param_2,0x10000000), lVar15 == 0)) {
    iVar6 = (int)param_3[1];
    if (iVar6 <= (int)param_3[2] * 2) {
      FUN_0047d420(param_3,iVar6 << 1);
      iVar6 = (int)param_3[1];
    }
    uVar4 = (int)param_2 * -0x61c8864f;
    uVar10 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar4 = iVar6 - 1U & (uVar4 + (uVar4 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10);
    lVar15 = *param_3;
    puVar13 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8);
    if ((byte *)*puVar13 == (byte *)0xffffffffffffffff) {
LAB_0047af5c:
      *(int *)(param_3 + 2) = (int)param_3[2] + 1;
      *puVar13 = param_2;
      uVar9 = FUN_00427270(param_2);
      local_58 = uVar9;
      if (*(int *)(param_1 + 0x7c) == 0) {
        plVar7 = (long *)(param_1 + 0x30);
        uVar5 = FUN_00427340(param_2);
        uVar4 = FUN_0047d6f0(plVar7,&local_58);
        if (*(uint *)(param_1 + 0x38) == uVar4) {
          uVar10 = uVar4;
          if ((*(uint *)(param_1 + 0x3c) & 0x3fffffff) == uVar4) {
            FUN_00426990(PTR_DAT_048607b8,plVar7,0x10);
            uVar10 = *(uint *)(param_1 + 0x38);
          }
          lVar15 = *(long *)(param_1 + 0x30) + (long)(int)uVar10 * 0x10;
          FUN_0043bce0(lVar15,local_58,0xffffffff);
          *(undefined4 *)(lVar15 + 8) = uVar5;
          *(uint *)(param_1 + 0x38) = uVar10 + 1;
        }
        uVar5 = *(undefined4 *)(*plVar7 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
        uVar9 = local_58;
      }
      else {
        uVar5 = FUN_00427340(param_2);
      }
      FUN_004297c0(&local_78,uVar9);
      FUN_0047b210(param_1,&local_78,uVar5);
      FUN_00427c30(&local_78,param_2,0);
      do {
        if (local_78 + 1 < puStack_70) {
          local_78 = local_78 + 1;
          uVar4 = FUN_004290b0();
        }
        else {
          uVar8 = FUN_00427c40(&local_78);
          if ((uVar8 & 1) == 0) {
            if ((*(long *)(param_2 + 8) == 0) ||
               (iVar6 = FUN_0047ad00(param_1,*(long *)(param_2 + 8),param_3), -1 < iVar6))
            goto LAB_0047b0c8;
            break;
          }
          uVar4 = FUN_004290b0(local_78);
        }
      } while (((uVar4 >> 5 & 1) == 0) ||
              (iVar6 = FUN_0047ad00(param_1,*local_78,param_3), -1 < iVar6));
      uVar9 = 0x80040200;
      goto LAB_0047b0cc;
    }
    if ((byte *)*puVar13 != param_2) {
      do {
        uVar4 = uVar4 + 1 & iVar6 - 1U;
        pbVar14 = *(byte **)(lVar15 + (long)(int)uVar4 * 8);
        if (pbVar14 == (byte *)0xffffffffffffffff) {
          puVar13 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8);
          goto LAB_0047af5c;
        }
      } while (pbVar14 != param_2);
      puVar13 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8);
    }
    *puVar13 = param_2;
  }
LAB_0047b0c8:
  uVar9 = 0;
LAB_0047b0cc:
  *(int *)(*(long *)(param_1 + 0x60) + 0x50) = *(int *)(*(long *)(param_1 + 0x60) + 0x50) + -1;
  return uVar9;
}

