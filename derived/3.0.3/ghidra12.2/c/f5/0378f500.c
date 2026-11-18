
void FUN_0378f500(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar12 = *param_1;
  if ((lVar12 != 0) && (uVar3 = *(uint *)(param_1 + 1), 0 < (int)uVar3)) {
    uVar13 = 0;
    do {
      uVar11 = uVar13;
      if (*(uint *)(param_1 + 1) <= uVar13) {
        uVar11 = 0;
      }
      plVar1 = (long *)(param_1[2] + uVar11 * 0x10);
      uVar4 = *(uint *)(plVar1 + 1);
      if ((0 < (int)uVar4) && (lVar14 = param_1[3], lVar14 != 0)) {
        uVar11 = 0;
        do {
          if (lVar14 != 0) {
            uVar5 = (uint)uVar13 & 0xffff | (int)uVar11 << 0x10;
            do {
              if (uVar5 < *(uint *)(lVar14 + 0x20)) {
                plVar9 = (long *)(lVar14 + 8);
              }
              else {
                if (uVar5 <= *(uint *)(lVar14 + 0x20)) {
                  lVar10 = *plVar1;
                  if (lVar10 == 0) {
                    plVar9 = (long *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + uVar13 * 8);
                    (**(code **)(*plVar9 + 0x70))(plVar9,&local_90,uVar11 & 0xffffffff);
                    *(int *)(lVar14 + 0x30) = (int)local_90;
                    *(int *)(lVar14 + 0x34) = (int)uStack_80;
                    *(int *)(lVar14 + 0x38) = (int)local_70;
                    *(undefined4 *)(lVar14 + 0x3c) = 0;
                    *(undefined4 *)(lVar14 + 0x50) = uStack_88;
                    *(int *)(lVar14 + 0x54) = (int)uStack_78;
                    *(int *)(lVar14 + 0x58) = (int)uStack_68;
                    *(undefined4 *)(lVar14 + 0x5c) = 0;
                    *(ulong *)(lVar14 + 0x48) = local_70 >> 0x20;
                    *(ulong *)(lVar14 + 0x40) =
                         CONCAT44((int)((ulong)uStack_80 >> 0x20),(int)((ulong)local_90 >> 0x20));
                    *(ulong *)(lVar14 + 0x68) = uStack_68 >> 0x20;
                    *(ulong *)(lVar14 + 0x60) = CONCAT44((int)((ulong)uStack_78 >> 0x20),uStack_84);
                  }
                  else {
                    puVar2 = (undefined8 *)(lVar10 + uVar11 * 0x40);
                    uVar6 = *puVar2;
                    uVar16 = puVar2[3];
                    uVar15 = puVar2[2];
                    uVar18 = puVar2[5];
                    uVar17 = puVar2[4];
                    uVar8 = puVar2[7];
                    uVar7 = puVar2[6];
                    *(undefined8 *)(lVar14 + 0x38) = puVar2[1];
                    *(undefined8 *)(lVar14 + 0x30) = uVar6;
                    *(undefined8 *)(lVar14 + 0x48) = uVar16;
                    *(undefined8 *)(lVar14 + 0x40) = uVar15;
                    *(undefined8 *)(lVar14 + 0x58) = uVar18;
                    *(undefined8 *)(lVar14 + 0x50) = uVar17;
                    *(undefined8 *)(lVar14 + 0x68) = uVar8;
                    *(undefined8 *)(lVar14 + 0x60) = uVar7;
                  }
                  break;
                }
                plVar9 = (long *)(lVar14 + 0x10);
              }
              lVar14 = *plVar9;
            } while (lVar14 != 0);
          }
          uVar11 = uVar11 + 1;
          if (uVar11 == uVar4) break;
          lVar14 = param_1[3];
        } while( true );
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  return;
}

