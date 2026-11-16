
void FUN_029a7f40(long param_1,uint param_2,byte param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  uint local_e0;
  int local_d8;
  ulong local_d4 [2];
  int local_c4;
  undefined4 uStack_c0;
  undefined1 local_bc;
  byte bStack_ba;
  undefined1 uStack_b9;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  ulong local_a4;
  ulong local_9c [2];
  int local_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  byte bStack_82;
  undefined1 uStack_81;
  undefined2 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  int local_6c [3];
  
  if ((((DAT_05574040 != 0) && (*(long *)(DAT_05574040 + 0x10) != 0)) &&
      (plVar9 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0xe0), plVar9 != (long *)0x0)) &&
     (lVar10 = (**(code **)(*plVar9 + 0x38))(), lVar10 != 0)) {
    param_3 = param_3 & 1;
    lVar21 = 0;
    uVar22 = 0xf8;
    do {
      lVar2 = lVar10 + 0xdc48;
      if (lVar21 != 6) {
        lVar2 = lVar10 + 0x118 + lVar21 * 0x2488;
      }
      if ((*(long **)(lVar2 + 0x1e90) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar2 + 0x1e90), puVar11 == (undefined8 *)0x0)) {
        local_e0 = 0;
      }
      else {
        local_e0 = (**(code **)*puVar11)();
      }
      uVar6 = uVar22 | 1;
      lVar17 = *(long *)(param_1 + 0xa0);
      if (*(uint *)(param_1 + 0x98) <= uVar6) {
        uVar6 = 0;
      }
      lVar19 = lVar17 + (ulong)uVar6 * 400;
      *(byte *)(lVar19 + 8) =
           *(byte *)(*(long *)(lVar2 + 0x1e78) + *(long *)(lVar2 + 0x1e70) + 3) & 1;
      piVar16 = (int *)(lVar19 + 0x18);
      *piVar16 = (int)*(char *)(*(long *)(lVar2 + 0x1e78) + *(long *)(lVar2 + 0x1e70) + 2);
      local_6c[0] = (int)*(short *)(*(long *)(lVar2 + 0x1e78) + *(long *)(lVar2 + 0x1e70));
      FUN_029a7d90(param_1,lVar19,local_6c);
      puVar20 = (uint *)(lVar19 + 0xc);
      if ((int)*puVar20 < 0) {
        local_9c[0] = 0xfffe;
        FUN_0277d4ac(local_9c);
        puVar12 = local_9c;
      }
      else {
        local_d4[0] = 0xfffe;
        FUN_0277d4ac(local_d4);
        uVar4 = *puVar20;
        uVar5 = 0;
        if (uVar4 != 99999 && -1 < (int)uVar4) {
          uVar5 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar19 = *(long *)(DAT_055f6860 + 0x19f820); lVar19 != 0;
            lVar19 = *(long *)(lVar19 + 8)) {
          while (*(int *)(lVar19 + 0x20) <= (int)uVar5) {
            if ((int)uVar5 <= *(int *)(lVar19 + 0x20)) {
              local_9c[0] = (ulong)(ushort)*(undefined4 *)(lVar19 + 0x2c);
              goto LAB_029a8158;
            }
            lVar19 = *(long *)(lVar19 + 0x10);
            if (lVar19 == 0) goto LAB_029a812c;
          }
        }
LAB_029a812c:
        local_9c[0] = 0xfffe;
LAB_029a8158:
        FUN_0277d4ac(local_9c);
        puVar12 = local_d4;
        local_d4[0] = local_9c[0];
      }
      uVar7 = FUN_0277d6c4(puVar12);
      *(undefined2 *)(lVar17 + (ulong)uVar6 * 400 + 0x122) = uVar7;
      if ((param_2 & 1) != 0) {
        lVar19 = lVar17 + (ulong)uVar6 * 400;
        if (*(long **)(lVar19 + 0x50) != (long *)(lVar19 + 0x48)) {
          lVar14 = lVar17 + (ulong)uVar6 * 400;
          piVar18 = (int *)(lVar14 + 0x58);
          plVar9 = (long *)(lVar14 + 0x60);
          plVar13 = *(long **)(lVar19 + 0x50);
          do {
            plVar3 = (long *)plVar13[1];
            plVar15 = plVar3;
            if (*plVar13 != 0) {
              *(long **)(*plVar13 + 8) = plVar3;
              plVar15 = (long *)plVar13[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar13;
            }
            *plVar13 = 0;
            plVar13[1] = 0;
            *piVar18 = *piVar18 + -1;
            plVar13[-1] = *plVar9;
            *plVar9 = (long)(plVar13 + -1);
            plVar13 = plVar3;
          } while (plVar3 != (long *)(lVar19 + 0x48));
        }
        puVar1 = (undefined4 *)(lVar19 + 0x40);
        *puVar1 = 0xffffffff;
        if (*piVar16 != -1) {
          local_9c[0] = 0xfffe;
          FUN_0277d4ac(local_9c);
          local_9c[1] = 0xfffe;
          FUN_0277d4ac(local_9c + 1);
          uVar8 = 0xffffffff;
          local_7c = 0;
          uStack_74 = 0;
          local_84 = 0;
          bStack_82 = 0;
          uStack_81 = 0;
          local_80 = 0;
          _local_8c = CONCAT44(0xffffffff,*piVar16);
          piVar18 = (int *)(lVar17 + (ulong)uVar6 * 400 + 4);
          if (0xffffffea < *piVar18 - 0xf9U) {
            uVar6 = *piVar18 + 0x1b;
            uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar6 + (char)((uVar6 & 0x80) >> 7)) >> 1 &
                                 0xff,0);
          }
          _local_8c = CONCAT44(uVar8,local_8c);
          local_84 = 1;
          uStack_81 = *piVar18 - 0x109U < 0x2a;
          bStack_82 = param_3;
          FUN_0298b040(puVar1,local_9c);
          local_a4 = 0xfffe;
          FUN_0277d4ac(&local_a4);
          uVar5 = *puVar20;
          uVar6 = 0;
          if (uVar5 != 99999 && -1 < (int)uVar5) {
            uVar6 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar17 = *(long *)(DAT_055f6860 + 0x19f820); lVar17 != 0;
              lVar17 = *(long *)(lVar17 + 8)) {
            while (*(int *)(lVar17 + 0x20) <= (int)uVar6) {
              if ((int)uVar6 <= *(int *)(lVar17 + 0x20)) {
                local_d4[0] = (ulong)(ushort)*(undefined4 *)(lVar17 + 0x2c);
                goto LAB_029a8354;
              }
              lVar17 = *(long *)(lVar17 + 0x10);
              if (lVar17 == 0) goto LAB_029a833c;
            }
          }
LAB_029a833c:
          local_d4[0] = 0xfffe;
LAB_029a8354:
          FUN_0277d4ac(local_d4);
          local_a4 = local_d4[0];
          local_d4[0] = 0xfffe;
          FUN_0277d4ac(local_d4);
          local_d4[1] = 0xfffe;
          FUN_0277d4ac(local_d4 + 1);
          uVar8 = 0xffffffff;
          local_b4 = 0;
          uStack_ac = 0;
          local_bc = 0;
          bStack_ba = 0;
          uStack_b9 = 0;
          local_b8 = 0;
          local_d4[0] = local_a4;
          _local_c4 = CONCAT44(0xffffffff,*piVar16);
          if (0xffffffea < *piVar18 - 0xf9U) {
            uVar6 = *piVar18 + 0x1b;
            uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar6 + (char)((uVar6 & 0x80) >> 7)) >> 1 &
                                 0xff,0);
          }
          _local_c4 = CONCAT44(uVar8,local_c4);
          local_bc = 0;
          uStack_b9 = *piVar18 - 0x109U < 0x2a;
          bStack_ba = param_3;
          FUN_0298b040(puVar1,local_d4);
        }
      }
      if ((((local_e0 & 1) != 0) && (*(long *)(lVar2 + 0x1e90) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar2 + 0x1e90) + 8), puVar11 != (undefined8 *)0x0))
      {
        (**(code **)*puVar11)();
      }
      if ((*(long **)(lVar2 + 0x2210) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar2 + 0x2210), puVar11 == (undefined8 *)0x0)) {
        local_e0 = 0;
      }
      else {
        local_e0 = (**(code **)*puVar11)();
      }
      uVar22 = uVar22 + 2;
      lVar17 = *(long *)(param_1 + 0xa0);
      uVar6 = uVar22;
      if (*(uint *)(param_1 + 0x98) <= uVar22) {
        uVar6 = 0;
      }
      lVar19 = lVar17 + (ulong)uVar6 * 400;
      *(undefined1 *)(lVar19 + 8) = 0;
      piVar16 = (int *)(lVar19 + 0x18);
      *piVar16 = (int)*(char *)(*(long *)(lVar2 + 0x21f8) + *(long *)(lVar2 + 0x21f0) + 2);
      local_d8 = (int)*(short *)(*(long *)(lVar2 + 0x21f8) + *(long *)(lVar2 + 0x21f0));
      FUN_029a7d90(param_1,lVar19,&local_d8);
      puVar20 = (uint *)(lVar19 + 0xc);
      if ((int)*puVar20 < 0) {
        local_9c[0] = 0xfffe;
        FUN_0277d4ac(local_9c);
        puVar12 = local_9c;
      }
      else {
        local_d4[0] = 0xfffe;
        FUN_0277d4ac(local_d4);
        uVar4 = *puVar20;
        uVar5 = 0;
        if (uVar4 != 99999 && -1 < (int)uVar4) {
          uVar5 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar19 = *(long *)(DAT_055f6860 + 0x19f820); lVar19 != 0;
            lVar19 = *(long *)(lVar19 + 8)) {
          while (*(int *)(lVar19 + 0x20) <= (int)uVar5) {
            if ((int)uVar5 <= *(int *)(lVar19 + 0x20)) {
              local_9c[0] = (ulong)(ushort)*(undefined4 *)(lVar19 + 0x2c);
              goto LAB_029a8568;
            }
            lVar19 = *(long *)(lVar19 + 0x10);
            if (lVar19 == 0) goto LAB_029a853c;
          }
        }
LAB_029a853c:
        local_9c[0] = 0xfffe;
LAB_029a8568:
        FUN_0277d4ac(local_9c);
        puVar12 = local_d4;
        local_d4[0] = local_9c[0];
      }
      uVar7 = FUN_0277d6c4(puVar12);
      *(undefined2 *)(lVar17 + (ulong)uVar6 * 400 + 0x122) = uVar7;
      if ((param_2 & 1) != 0) {
        lVar19 = lVar17 + (ulong)uVar6 * 400;
        if (*(long **)(lVar19 + 0x50) != (long *)(lVar19 + 0x48)) {
          lVar14 = lVar17 + (ulong)uVar6 * 400;
          piVar18 = (int *)(lVar14 + 0x58);
          plVar9 = (long *)(lVar14 + 0x60);
          plVar13 = *(long **)(lVar19 + 0x50);
          do {
            plVar3 = (long *)plVar13[1];
            plVar15 = plVar3;
            if (*plVar13 != 0) {
              *(long **)(*plVar13 + 8) = plVar3;
              plVar15 = (long *)plVar13[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar13;
            }
            *plVar13 = 0;
            plVar13[1] = 0;
            *piVar18 = *piVar18 + -1;
            plVar13[-1] = *plVar9;
            *plVar9 = (long)(plVar13 + -1);
            plVar13 = plVar3;
          } while (plVar3 != (long *)(lVar19 + 0x48));
        }
        puVar1 = (undefined4 *)(lVar19 + 0x40);
        *puVar1 = 0xffffffff;
        if (*piVar16 != -1) {
          local_9c[0] = 0xfffe;
          FUN_0277d4ac(local_9c);
          local_9c[1] = 0xfffe;
          FUN_0277d4ac(local_9c + 1);
          uVar8 = 0xffffffff;
          local_7c = 0;
          uStack_74 = 0;
          local_84 = 0;
          bStack_82 = 0;
          uStack_81 = 0;
          local_80 = 0;
          _local_8c = CONCAT44(0xffffffff,*piVar16);
          piVar18 = (int *)(lVar17 + (ulong)uVar6 * 400 + 4);
          if (0xffffffea < *piVar18 - 0xf9U) {
            uVar6 = *piVar18 + 0x1b;
            uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar6 + (char)((uVar6 & 0x80) >> 7)) >> 1 &
                                 0xff,0);
          }
          _local_8c = CONCAT44(uVar8,local_8c);
          local_84 = 1;
          uStack_81 = *piVar18 - 0x109U < 0x2a;
          bStack_82 = param_3;
          FUN_0298b040(puVar1,local_9c);
          local_a4 = 0xfffe;
          FUN_0277d4ac(&local_a4);
          uVar5 = *puVar20;
          uVar6 = 0;
          if (uVar5 != 99999 && -1 < (int)uVar5) {
            uVar6 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar17 = *(long *)(DAT_055f6860 + 0x19f820); lVar17 != 0;
              lVar17 = *(long *)(lVar17 + 8)) {
            while (*(int *)(lVar17 + 0x20) <= (int)uVar6) {
              if ((int)uVar6 <= *(int *)(lVar17 + 0x20)) {
                local_d4[0] = (ulong)(ushort)*(undefined4 *)(lVar17 + 0x2c);
                goto LAB_029a8764;
              }
              lVar17 = *(long *)(lVar17 + 0x10);
              if (lVar17 == 0) goto LAB_029a874c;
            }
          }
LAB_029a874c:
          local_d4[0] = 0xfffe;
LAB_029a8764:
          FUN_0277d4ac(local_d4);
          local_a4 = local_d4[0];
          local_d4[0] = 0xfffe;
          FUN_0277d4ac(local_d4);
          local_d4[1] = 0xfffe;
          FUN_0277d4ac(local_d4 + 1);
          uVar8 = 0xffffffff;
          local_b4 = 0;
          uStack_ac = 0;
          local_bc = 0;
          bStack_ba = 0;
          uStack_b9 = 0;
          local_b8 = 0;
          local_d4[0] = local_a4;
          _local_c4 = CONCAT44(0xffffffff,*piVar16);
          if (0xffffffea < *piVar18 - 0xf9U) {
            uVar6 = *piVar18 + 0x1b;
            uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar6 + (char)((uVar6 & 0x80) >> 7)) >> 1 &
                                 0xff,0);
          }
          _local_c4 = CONCAT44(uVar8,local_c4);
          local_bc = 0;
          uStack_b9 = *piVar18 - 0x109U < 0x2a;
          bStack_ba = param_3;
          FUN_0298b040(puVar1,local_d4);
        }
      }
      if ((((local_e0 & 1) != 0) && (*(long *)(lVar2 + 0x2210) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar2 + 0x2210) + 8), puVar11 != (undefined8 *)0x0))
      {
        (**(code **)*puVar11)();
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 7);
  }
  return;
}

