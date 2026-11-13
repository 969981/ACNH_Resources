
void FUN_011eeb10(long param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  if ((DAT_0537d558 != 0) && (*(int *)(DAT_0537d558 + 0x80) == 3)) {
    lVar6 = *(long *)PTR_DAT_04bb2720;
    if (lVar6 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(lVar6 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
        iVar4 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    lVar6 = DAT_05150358;
    uVar7 = 0;
    do {
      uVar5 = (uint)uVar7;
      piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar7 * 4);
      if (0x38 < uVar5) {
        piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar2 == *(int *)(puVar9 + 7)) goto LAB_011eebfc;
      uVar8 = 0x39;
      if ((int)uVar5 < 0x39) {
        uVar8 = uVar5 + 1;
      }
      uVar7 = (ulong)uVar8;
    } while (uVar8 != 0x39);
    uVar5 = 0;
LAB_011eebfc:
    if ((((uVar5 == 0x32) && (DAT_05150358 != 0)) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         (*(long *)(DAT_05150358 + 0x488) != 0)) &&
        ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
         ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))))) {
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        uVar7 = 0;
        do {
          if (*(int *)(param_1 + 8 + (-(uVar7 >> 0x1f) & 0xffffffc000000000 | uVar7 << 6)) == 0) {
            puVar1 = (undefined4 *)(param_1 + 8 + (long)(int)uVar7 * 0x40);
            *(undefined2 *)(puVar1 + 1) = *param_2;
            *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)(param_2 + 1);
            *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)((long)param_2 + 3);
            puVar1[2] = *(undefined4 *)(param_2 + 2);
            iVar4 = *(int *)(param_2 + 8);
            iVar3 = *(int *)(param_2 + 10);
            puVar1[4] = 0;
            puVar1[3] = ((float)iVar4 * 5.0 + (float)(iVar4 + 1) * 5.0 + 5.0) * 0.5;
            puVar1[5] = ((float)iVar3 * 5.0 + (float)(iVar3 + 1) * 5.0 + 5.0) * 0.5;
            lVar6 = *(long *)PTR_DAT_04bb27c8;
            if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) ||
               (*(char *)(lVar6 + 0x11c8) != '\0')) {
              uVar10 = 0xc3fa0000;
            }
            else {
              uVar10 = FUN_0093a950(lVar6 + 0x28,puVar1 + 3,0);
            }
            puVar1[4] = uVar10;
            *puVar1 = 1;
            return;
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar5;
        } while (uVar5 != 0x2d);
      }
    }
  }
  return;
}

