
void FUN_00332720(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(uint *)(param_2 + 8) == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar10 = 0;
    piVar13 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      puVar1 = (uint *)(piVar13 + 3);
      if (*piVar13 == 0x4d495250) {
        uVar10 = uVar10 + 1;
      }
      piVar13 = (int *)((long)piVar13 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
    *(uint *)(param_1 + 0x60) = uVar10;
    if (uVar10 != 0) {
      lVar17 = (ulong)uVar10 * 0x98 + 0x20;
      plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                                 (*(long **)(param_1 + 0x440),lVar17,0x80);
      if (plVar6 != (long *)0x0) {
        *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + lVar17;
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
      }
      iVar16 = *(int *)(param_1 + 0x60);
      *(long **)(param_1 + 0x68) = plVar6;
      puVar3 = PTR_DAT_04bceef8;
      if (iVar16 != 0) {
        uVar12 = (long)iVar16 * 0x98 - 0x98;
        uVar10 = ((uint)(uVar12 / 0x98) & 0x1ffffff) + 1;
        uVar9 = (ulong)uVar10 & 3;
        plVar11 = plVar6;
        if ((uVar10 & 3) != 0) {
          puVar2 = PTR_DAT_04bceef8 + 0x10;
          do {
            *plVar11 = (long)puVar2;
            uVar9 = uVar9 - 1;
            *(undefined1 *)(plVar11 + 1) = 0;
            *(undefined8 *)((long)plVar11 + 0xc) = 0;
            *(undefined8 *)((long)plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0x1c) = 0;
            *(undefined8 *)((long)plVar11 + 0x24) = 0;
            *(undefined8 *)((long)plVar11 + 0x2c) = 0;
            *(undefined8 *)((long)plVar11 + 0x34) = 0;
            *(undefined8 *)((long)plVar11 + 0x3c) = 0;
            *(undefined8 *)((long)plVar11 + 0x44) = 0;
            *(undefined8 *)((long)plVar11 + 0x4c) = 0;
            *(undefined4 *)((long)plVar11 + 0x54) = 0;
            plVar11 = plVar11 + 0x13;
          } while (uVar9 != 0);
        }
        if (0x1c7 < uVar12) {
          puVar3 = puVar3 + 0x10;
          do {
            *plVar11 = (long)puVar3;
            *(undefined1 *)(plVar11 + 1) = 0;
            *(undefined8 *)((long)plVar11 + 0xc) = 0;
            *(undefined8 *)((long)plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0x1c) = 0;
            *(undefined8 *)((long)plVar11 + 0x24) = 0;
            *(undefined8 *)((long)plVar11 + 0x2c) = 0;
            *(undefined8 *)((long)plVar11 + 0x34) = 0;
            *(undefined8 *)((long)plVar11 + 0x3c) = 0;
            *(undefined8 *)((long)plVar11 + 0x44) = 0;
            *(undefined8 *)((long)plVar11 + 0x4c) = 0;
            *(undefined4 *)((long)plVar11 + 0x54) = 0;
            plVar11[0x13] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0xa4) = 0;
            *(undefined8 *)((long)plVar11 + 0xac) = 0;
            *(undefined8 *)((long)plVar11 + 0xb4) = 0;
            *(undefined8 *)((long)plVar11 + 0xbc) = 0;
            *(undefined8 *)((long)plVar11 + 0xc4) = 0;
            *(undefined8 *)((long)plVar11 + 0xcc) = 0;
            *(undefined8 *)((long)plVar11 + 0xd4) = 0;
            *(undefined8 *)((long)plVar11 + 0xdc) = 0;
            *(undefined8 *)((long)plVar11 + 0xe4) = 0;
            *(undefined4 *)((long)plVar11 + 0xec) = 0;
            plVar11[0x26] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x27) = 0;
            *(undefined4 *)((long)plVar11 + 0x184) = 0;
            plVar11[0x39] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x3a) = 0;
            *(undefined4 *)((long)plVar11 + 0x21c) = 0;
            plVar4 = plVar11 + 0x4c;
            *(undefined8 *)((long)plVar11 + 0x17c) = 0;
            *(undefined8 *)((long)plVar11 + 0x214) = 0;
            *(undefined8 *)((long)plVar11 + 0x13c) = 0;
            *(undefined8 *)((long)plVar11 + 0x144) = 0;
            *(undefined8 *)((long)plVar11 + 0x14c) = 0;
            *(undefined8 *)((long)plVar11 + 0x154) = 0;
            *(undefined8 *)((long)plVar11 + 0x15c) = 0;
            *(undefined8 *)((long)plVar11 + 0x164) = 0;
            *(undefined8 *)((long)plVar11 + 0x16c) = 0;
            *(undefined8 *)((long)plVar11 + 0x174) = 0;
            *(undefined8 *)((long)plVar11 + 0x1d4) = 0;
            *(undefined8 *)((long)plVar11 + 0x1dc) = 0;
            *(undefined8 *)((long)plVar11 + 0x1e4) = 0;
            *(undefined8 *)((long)plVar11 + 0x1ec) = 0;
            *(undefined8 *)((long)plVar11 + 500) = 0;
            *(undefined8 *)((long)plVar11 + 0x1fc) = 0;
            *(undefined8 *)((long)plVar11 + 0x204) = 0;
            *(undefined8 *)((long)plVar11 + 0x20c) = 0;
            plVar11 = plVar4;
          } while (plVar4 != plVar6 + (long)iVar16 * 0x13);
        }
      }
      *(long **)(param_1 + 0x70) = plVar6;
      if (*(uint *)(param_2 + 8) != 0xffffffff) {
        piVar13 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
        do {
          if (*piVar13 == 0x4d495250) goto LAB_00332950;
          puVar1 = (uint *)(piVar13 + 3);
          piVar13 = (int *)((long)piVar13 + (ulong)*puVar1);
        } while (*puVar1 != 0xffffffff);
      }
      piVar13 = (int *)0x0;
LAB_00332950:
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      local_60 = 0;
      uStack_58 = 0;
      FUN_0034fb50(&local_60);
      local_60 = CONCAT44(4,(undefined4)local_60);
      lVar7 = FUN_00347a58(uVar14,&local_60);
      lVar17 = 0;
      if (piVar13 != (int *)0x0) {
        piVar15 = piVar13;
        do {
          lVar8 = FUN_003345f4(piVar15);
          lVar17 = (lVar7 + -1 + lVar8 & -lVar7) + lVar17;
          puVar1 = (uint *)(piVar15 + 3);
          bVar5 = piVar15 != (int *)0x0;
          piVar15 = (int *)((long)piVar15 + (ulong)*puVar1);
        } while (*puVar1 != 0xffffffff && bVar5);
      }
      lVar7 = param_1 + 0x290;
      uVar9 = FUN_00334414(lVar7,*(undefined8 *)(param_1 + 0x10),param_1 + 0x438,4,lVar17);
      if ((uVar9 & 1) != 0) {
        FUN_00347d1c(lVar7,param_1 + 0x418);
      }
      *(undefined8 *)(param_1 + 0x428) = 0;
      uVar14 = FUN_00347cc4(lVar7);
      *(undefined8 *)(param_1 + 0x430) = uVar14;
      if (piVar13 == (int *)0x0) {
LAB_00332a80:
        FUN_00347cdc(lVar7,0,*(undefined8 *)(param_1 + 0x400));
        FUN_00347cd8(lVar7);
        return;
      }
      lVar17 = 0;
      iVar16 = 0;
      uVar9 = FUN_0033466c(*(undefined8 *)(param_1 + 0x70),lVar7,piVar13);
      if ((uVar9 & 1) == 0) goto LAB_00332a40;
      do {
        *(ulong *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + (ulong)(uint)piVar13[1];
        uVar10 = piVar13[3];
        while( true ) {
          if (uVar10 == 0xffffffff) goto LAB_00332a80;
          piVar13 = (int *)((long)piVar13 + (ulong)uVar10);
          iVar16 = iVar16 + 1;
          lVar17 = lVar17 + 0x98;
          uVar9 = FUN_0033466c(*(long *)(param_1 + 0x70) + lVar17,lVar7,piVar13);
          if ((uVar9 & 1) != 0) break;
LAB_00332a40:
          FUN_0032c410("Faild to initialize primitive: Index %d \n",iVar16);
          uVar10 = piVar13[3];
        }
      } while( true );
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}

