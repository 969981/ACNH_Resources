
void FUN_03578ba0(int *param_1)

{
  long *plVar1;
  short *psVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04bb37e0;
  if ((param_1 != (int *)0x0) && (1 < *param_1)) {
    lVar6 = *(long *)(param_1 + 2);
    uVar8 = 0;
    uVar11 = *param_1 - 1;
    do {
      if ((int)uVar11 <= (int)uVar8) {
        return;
      }
      uVar7 = (ulong)uVar8;
      uVar9 = (ulong)uVar11;
      uVar10 = uVar7;
      uVar11 = uVar8;
      do {
        plVar1 = (long *)(lVar6 + uVar10 * 8);
        lVar5 = plVar1[1];
        psVar2 = (short *)puVar3;
        if (*(short *)(*plVar1 + 8) != -2) {
          psVar2 = (short *)(*plVar1 + 8);
        }
        local_68 = *(undefined4 *)psVar2;
        uStack_64 = *(undefined4 *)(psVar2 + 2);
        iVar4 = FUN_0277d6c4(&local_68);
        if (iVar4 != 0x1c2b) {
          psVar2 = (short *)puVar3;
          if (*(short *)(lVar5 + 8) != -2) {
            psVar2 = (short *)(lVar5 + 8);
          }
          local_68 = *(undefined4 *)psVar2;
          uStack_64 = *(undefined4 *)(psVar2 + 2);
          iVar4 = FUN_0277d6c4(&local_68);
          if (iVar4 == 0x1c2b) {
            lVar5 = plVar1[1];
            uVar11 = (uint)uVar10;
            plVar1[1] = *(long *)(lVar6 + uVar10 * 8);
            *(long *)(lVar6 + uVar10 * 8) = lVar5;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      if ((int)uVar11 <= (int)uVar8) {
        return;
      }
      uVar10 = (ulong)uVar11;
      uVar8 = uVar11;
      do {
        plVar1 = (long *)(lVar6 + uVar10 * 8);
        lVar5 = plVar1[-1];
        psVar2 = (short *)puVar3;
        if (*(short *)(*plVar1 + 8) != -2) {
          psVar2 = (short *)(*plVar1 + 8);
        }
        local_68 = *(undefined4 *)psVar2;
        uStack_64 = *(undefined4 *)(psVar2 + 2);
        iVar4 = FUN_0277d6c4(&local_68);
        if (iVar4 == 0x1c2b) {
LAB_03578ca4:
          lVar5 = plVar1[-1];
          uVar8 = (uint)uVar10;
          plVar1[-1] = *(long *)(lVar6 + uVar10 * 8);
          *(long *)(lVar6 + uVar10 * 8) = lVar5;
        }
        else {
          psVar2 = (short *)puVar3;
          if (*(short *)(lVar5 + 8) != -2) {
            psVar2 = (short *)(lVar5 + 8);
          }
          local_68 = *(undefined4 *)psVar2;
          uStack_64 = *(undefined4 *)(psVar2 + 2);
          iVar4 = FUN_0277d6c4(&local_68);
          if (iVar4 != 0x1c2b) goto LAB_03578ca4;
        }
        uVar10 = uVar10 - 1;
      } while ((long)uVar7 < (long)uVar10);
    } while (uVar8 != uVar11);
  }
  return;
}

