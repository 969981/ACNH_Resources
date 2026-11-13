
/* WARNING: Removing unreachable block (ram,0x013545e4) */
/* WARNING: Removing unreachable block (ram,0x013547f8) */
/* WARNING: Removing unreachable block (ram,0x01354604) */
/* WARNING: Removing unreachable block (ram,0x013544f4) */
/* WARNING: Removing unreachable block (ram,0x01354624) */
/* WARNING: Removing unreachable block (ram,0x013547b4) */
/* WARNING: Removing unreachable block (ram,0x013547dc) */
/* WARNING: Removing unreachable block (ram,0x0135451c) */
/* WARNING: Removing unreachable block (ram,0x01354838) */
/* WARNING: Removing unreachable block (ram,0x0135463c) */
/* WARNING: Removing unreachable block (ram,0x01354818) */
/* WARNING: Removing unreachable block (ram,0x01354850) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff96 : 0x01354858 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01354430(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  short *psVar12;
  long lVar13;
  uint *puVar14;
  char cVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  
  puVar9 = PTR_DAT_04bbbde0;
  if (((*param_1 != 0) && (lVar18 = *(long *)(*param_1 + 0xa8), lVar18 != 0)) &&
     (uVar5 = *(uint *)(param_1 + 1), uVar5 != 0)) {
    uVar19 = 0;
    puVar1 = (undefined8 *)(lVar18 + 0x38);
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    do {
      uVar20 = 0;
      do {
        plVar11 = (long *)(**(code **)*puVar1)(puVar1);
        uVar10 = (**(code **)(*plVar11 + 0x18))();
        if (uVar20 < uVar10) {
          plVar11 = (long *)(**(code **)*puVar1)(puVar1);
          uVar10 = (**(code **)(*plVar11 + 0x20))();
          if (uVar19 < uVar10) {
            local_64 = 0;
            local_6c = 0xffff0000;
            local_70 = 0xffff;
            psVar12 = (short *)(**(code **)*param_2)(param_2,uVar20 + uVar19 * uVar5);
            if (*psVar12 == -1) {
              local_70 = (uint)local_70._2_2_ << 0x10;
            }
            else {
              local_70 = CONCAT22(local_70._2_2_,*psVar12);
            }
            lVar13 = *(long *)PTR_DAT_04bb27a8;
            uVar10 = (local_70 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x408);
            if (((uVar10 < *(uint *)(lVar13 + 1000)) &&
                (puVar14 = *(uint **)(*(long *)(lVar13 + 0x3f0) + (long)(int)uVar10 * 8),
                puVar14 != (uint *)0x0)) && (uVar10 = *puVar14, uVar10 != 0)) {
              cVar15 = *PTR_DAT_04bbbdd8;
              do {
                puVar8 = PTR_DAT_04bbbdd8;
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                  uVar10 = *puVar14;
                }
                else if ((-1 < *(int *)(puVar9 + 0x20)) || (*(int *)(puVar9 + 0x20) != -1)) break;
                puVar6 = (uint *)(ulong)uVar10;
                if ((puVar6 == (uint *)0x0) || (puVar14 == puVar6)) break;
                lVar4 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar6)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar14 + (lVar4 - (long)puVar6);
                if (lVar4 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar6));
                *(undefined4 *)(puVar9 + 0x20) = 0xfffffffe;
                if (uVar16 == 0) break;
                piVar17 = (int *)(lVar4 + 4);
                while (piVar17[-1] != -0x38cc5589) {
                  piVar17 = piVar17 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_0135477c;
                }
                iVar3 = 0;
                if (*piVar17 != -1) {
                  iVar3 = *piVar17;
                }
                *(int *)(puVar9 + 0x20) = iVar3;
                uVar10 = *puVar14;
                if (uVar10 == 0) break;
              } while( true );
            }
LAB_0135477c:
            sVar7 = psVar12[2];
            local_74 = 1;
            uVar10 = (uint)local_6c._2_2_ - (uint)*(ushort *)(lVar13 + 0x408);
            if (((uVar10 < *(uint *)(lVar13 + 1000)) &&
                (puVar14 = *(uint **)(*(long *)(lVar13 + 0x3f0) + (long)(int)uVar10 * 8),
                puVar14 != (uint *)0x0)) && (uVar10 = *puVar14, uVar10 != 0)) {
              cVar15 = *PTR_DAT_04bbbdd8;
              do {
                puVar8 = PTR_DAT_04bbbdd8;
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                  uVar10 = *puVar14;
                }
                else if ((-1 < *(int *)(puVar9 + 0x20)) || (*(int *)(puVar9 + 0x20) != -1)) break;
                puVar6 = (uint *)(ulong)uVar10;
                if ((puVar6 == (uint *)0x0) || (puVar14 == puVar6)) break;
                lVar13 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar6)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar14 + (lVar13 - (long)puVar6);
                if (lVar13 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar6));
                *(undefined4 *)(puVar9 + 0x20) = 0xfffffffe;
                if (uVar16 == 0) break;
                piVar17 = (int *)(lVar13 + 4);
                while (piVar17[-1] != -0x38cc5589) {
                  piVar17 = piVar17 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_0135497c;
                }
                iVar3 = 0;
                if (*piVar17 != -1) {
                  iVar3 = *piVar17;
                }
                *(int *)(puVar9 + 0x20) = iVar3;
                uVar10 = *puVar14;
                if (uVar10 == 0) break;
              } while( true );
            }
LAB_0135497c:
            local_6c = (ulong)CONCAT11((char)psVar12[5],(char)sVar7);
            local_64 = (undefined1)psVar12[6];
            local_80 = *(int *)(lVar18 + 0x18) + uVar20;
            iStack_7c = *(int *)(lVar18 + 0x1c) + uVar19;
            local_88 = puVar2;
            FUN_01309ff0(lVar18,&local_70,&local_88);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar5);
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar5);
  }
  return;
}

