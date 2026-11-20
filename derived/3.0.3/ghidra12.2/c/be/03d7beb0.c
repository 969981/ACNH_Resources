
void FUN_03d7beb0(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined *local_70;
  ushort *local_68;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = (ushort *)param_2[1];
  uVar5 = *puVar7;
  if (uVar5 != 0) {
    lVar9 = 0;
    puVar1 = PTR_DAT_04bb8610 + 0x10;
    do {
      while ((uVar5 & 0xfffe) == 0xe) {
        if (uVar5 == 0xf) {
          puVar7 = puVar7 + 3;
        }
        else if (uVar5 == 0xe) {
          puVar7 = (ushort *)((long)puVar7 + (ulong)puVar7[3] + 8);
        }
        uVar5 = *puVar7;
        if (uVar5 == 0) goto LAB_03d7c000;
      }
      lVar4 = param_1[1];
      local_70 = puVar1;
      local_68 = puVar7;
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar10 = 0;
      do {
        if (*(short *)(param_1[1] + lVar10 * 2) == 0) goto LAB_03d7bfa0;
        lVar3 = param_1[1] + lVar10 * 2;
        if (*(short *)(lVar3 + 2) == 0) {
          lVar10 = lVar10 + 1;
          goto LAB_03d7bfa0;
        }
        if (*(short *)(lVar3 + 4) == 0) {
          lVar10 = lVar10 + 2;
          goto LAB_03d7bfa0;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_03d7bfa0:
      uVar8 = (uint)lVar9;
      uVar2 = (int)param_1[2] + ~uVar8;
      if (1 < (int)((int)param_1[2] - uVar8)) {
        uVar2 = 1;
      }
      if (0 < (int)uVar2) {
        (**(code **)(local_70 + 0x18))(&local_70);
        memcpy((void *)(lVar4 + lVar9 * 2),local_68,(ulong)uVar2 << 1);
        if ((int)lVar10 < (int)(uVar2 + uVar8)) {
          *(undefined2 *)(lVar4 + (long)(int)(uVar2 + uVar8) * 2) = 0;
        }
      }
      puVar7 = puVar7 + 1;
      uVar5 = *puVar7;
      lVar9 = lVar9 + 1;
    } while (uVar5 != 0);
  }
LAB_03d7c000:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = param_1[1];
  uVar6 = 0;
  do {
    if (*(short *)(lVar9 + uVar6 * 2) == 0) goto LAB_03d7c05c;
    lVar10 = lVar9 + uVar6 * 2;
    if (*(short *)(lVar10 + 2) == 0) {
      uVar6 = uVar6 + 1;
      goto LAB_03d7c05c;
    }
    if (*(short *)(lVar10 + 4) == 0) {
      uVar6 = uVar6 + 2;
      goto LAB_03d7c05c;
    }
    uVar6 = uVar6 + 3;
  } while (uVar6 != 0x80001);
  uVar6 = 0;
LAB_03d7c05c:
  if ((int)uVar6 < (int)param_1[2] + -1) {
    *(undefined4 *)(lVar9 + (-(uVar6 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar6 & 0xffffffff) << 1))
         = 0;
  }
  return;
}

