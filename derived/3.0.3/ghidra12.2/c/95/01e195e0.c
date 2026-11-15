
void FUN_01e195e0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  undefined *local_70;
  long lStack_68;
  
  if (param_2 != 0) {
    lVar9 = param_1[1];
    puVar1 = param_3 + param_2;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar22 = (long *)*param_3;
      piVar10 = (int *)*param_1;
      if ((*plVar22 == *(long *)(piVar10 + 4)) &&
         ((iVar16 = *piVar10, iVar16 == 3 || (*piVar10 == 4)))) {
        lVar8 = 0xfb8;
        if (iVar16 != 3) {
          lVar8 = 0xfc8;
        }
        pvVar18 = *(void **)((long)plVar22 + lVar8);
        lVar3 = (long)plVar22 + 0x68c;
        plVar5 = plVar22 + 0x1f7;
        if (iVar16 != 3) {
          lVar3 = (long)plVar22 + 0x98c;
          plVar5 = plVar22 + 0x1f9;
        }
        if (pvVar18 != (void *)0x0) {
          if (DAT_05ae7600 == 0) {
            free(pvVar18);
          }
          else {
            plVar6 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar18);
            }
          }
          *(undefined1 *)(plVar5 + 1) = 0;
          *(undefined8 *)((long)plVar22 + lVar8) = 0;
          piVar10 = (int *)*param_1;
        }
        puVar23 = *(uint **)(*(long *)(piVar10 + 0x3ee) + 0x10);
        uVar21 = (ulong)*(uint *)(*(long *)(piVar10 + 0x3ee) + 0x18);
        if ((puVar23 != (uint *)0x0 && uVar21 != 0) && (puVar23[1] == 2)) {
          uVar13 = uVar21 - 4;
          uVar20 = 0x3f89a3a2;
          uVar12 = (uint)uVar13;
          if (3 < uVar12) {
            uVar17 = 0;
            do {
              iVar16 = *(int *)((long)puVar23 + uVar17 + 4);
              uVar20 = (iVar16 * 0x16a88000 | (uint)(iVar16 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar20;
              iVar16 = (int)uVar17;
              uVar17 = (ulong)(iVar16 + 4);
              uVar20 = (uVar20 >> 0x13 | uVar20 << 0xd) * 5 + 0xe6546b64;
            } while (iVar16 + 8U <= uVar12);
          }
          uVar14 = uVar12 & 3;
          if ((uVar13 & 3) != 0) {
            puVar15 = (ushort *)((long)puVar23 + (((uVar13 & 0xffffffff) + 4) - (uVar21 & 3)));
            if (uVar14 == 1) {
              uVar14 = (uint)(byte)*puVar15;
            }
            else if (uVar14 == 2) {
              uVar14 = (uint)*puVar15;
            }
            else if (uVar14 == 3) {
              uVar14 = (uint)(byte)puVar15[1] << 0x10 | (uint)*(byte *)((long)puVar15 + 1) << 8 |
                       (uint)(byte)*puVar15;
            }
            else {
              uVar14 = 0;
            }
            uVar20 = (uVar14 * 0x16a88000 | uVar14 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar20;
          }
          uVar20 = (uVar20 ^ uVar12 ^ (uVar20 ^ uVar12) >> 0x10) * -0x7a143595;
          uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
          if (*puVar23 == (uVar20 ^ uVar20 >> 0x10)) {
            lVar19 = *(long *)(lVar9 + 0x68);
            if (lVar19 == 0) {
              lVar11 = 1;
            }
            else {
              lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              lVar11 = *(long *)(lVar7 + 0xa8);
              *(long *)(lVar7 + 0xa8) = lVar19;
            }
            lVar19 = DAT_05ae7600;
            if (DAT_05ae7600 == 0) {
              pvVar18 = malloc(0x19400);
            }
            else {
              lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              puVar4 = (undefined8 *)(lVar19 + 8);
              if (lVar7 != 0) {
                puVar4 = (undefined8 *)(lVar7 + 0xa8);
              }
              pvVar18 = (void *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x19400,8);
            }
            memset(pvVar18,0,0x19400);
            *(undefined4 *)((long)pvVar18 + 0x30) = 1;
            *(undefined4 *)((long)pvVar18 + 0x38) = 0xffffffff;
            memcpy((void *)((long)pvVar18 + 0x400),puVar23 + 2,uVar21 - 8);
            uVar20 = (uint)(uVar21 - 8);
            if (0x18fff < uVar20) {
              uVar20 = 0x19000;
            }
            *(uint *)((long)pvVar18 + 0x34) = uVar20;
            *(undefined2 *)(plVar5 + 1) = 0x101;
            *(void **)((long)plVar22 + lVar8) = pvVar18;
            lVar8 = *(long *)(lVar9 + 0xc0);
            if (lVar8 != 0) {
              local_70 = puVar2;
              lStack_68 = lVar3;
              FUN_01e199e0(lVar8,&local_70,plVar22 + 0xe,pvVar18);
            }
            if (lVar11 != 1) {
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              *(long *)(lVar8 + 0xa8) = lVar11;
            }
            goto LAB_01e19658;
          }
        }
        *(undefined2 *)(plVar5 + 1) = 1;
      }
LAB_01e19658:
      param_3 = param_3 + 1;
    } while (param_3 != puVar1);
  }
  return;
}

