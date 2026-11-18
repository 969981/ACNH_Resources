
void FUN_032e01b0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  long lVar9;
  ushort *__src;
  long lVar10;
  undefined *local_70;
  ushort *local_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (ushort *)param_3[1];
  uVar7 = *__src;
  if (uVar7 != 0) {
    lVar10 = 0;
    puVar1 = PTR_DAT_04bb8610 + 0x10;
    do {
      while ((uVar7 & 0xfffe) == 0xe) {
        puVar8 = __src;
        if (uVar7 == 0xf) {
          puVar6 = __src + 3;
          uVar7 = __src[1];
        }
        else if (uVar7 == 0xe) {
          puVar6 = (ushort *)((long)__src + (ulong)__src[3] + 8);
          uVar7 = __src[1];
        }
        else {
          puVar8 = (ushort *)0x0;
          puVar6 = __src;
          uVar7 = uRam0000000000000002;
        }
        __src = puVar6;
        if ((uVar7 == 0) && (puVar8[2] == 0)) {
          uVar7 = puVar8[5];
          local_68 = puVar8 + 6;
          lVar5 = param_2[1];
          local_70 = puVar1;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = 0;
          do {
            if (*(short *)(param_2[1] + lVar9 * 2) == 0) goto LAB_032e02ec;
            lVar2 = param_2[1] + lVar9 * 2;
            if (*(short *)(lVar2 + 2) == 0) {
              lVar9 = lVar9 + 1;
              goto LAB_032e02ec;
            }
            if (*(short *)(lVar2 + 4) == 0) {
              lVar9 = lVar9 + 2;
              goto LAB_032e02ec;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_032e02ec:
          uVar3 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
          uVar4 = (uint)(uVar7 >> 1);
          if ((int)((int)param_2[2] - uVar3) <= (int)(uint)(uVar7 >> 1)) {
            uVar4 = (int)param_2[2] + ~uVar3;
          }
          if (0 < (int)uVar4) {
            (**(code **)(local_70 + 0x18))(&local_70);
            memcpy((void *)(lVar5 + (ulong)uVar3 * 2),local_68,(ulong)uVar4 << 1);
            *(undefined2 *)(lVar5 + (ulong)(uVar4 + uVar3) * 2) = 0;
          }
        }
        uVar7 = *__src;
        if (uVar7 == 0) {
          return;
        }
      }
      uVar3 = *(int *)(param_1 + 0x10) + ~(uint)lVar10;
      if (1 < (int)(*(int *)(param_1 + 0x10) - (uint)lVar10)) {
        uVar3 = 1;
      }
      if (0 < (int)uVar3) {
        lVar9 = *(long *)(param_1 + 8);
        memcpy((void *)(lVar9 + lVar10 * 2),__src,(ulong)uVar3 << 1);
        *(undefined2 *)(lVar9 + (lVar10 + (ulong)uVar3) * 2) = 0;
      }
      __src = __src + 1;
      uVar7 = *__src;
      lVar10 = lVar10 + 1;
    } while (uVar7 != 0);
  }
  return;
}

