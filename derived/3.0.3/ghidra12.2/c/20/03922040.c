
int FUN_03922040(long param_1,uint param_2,long *param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar2 = param_2;
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    uVar2 = 0;
  }
  puVar1 = (ushort *)(*(long *)(param_1 + 0x20) + (long)(int)uVar2 * 4);
  uVar4 = *puVar1;
  uVar2 = (uint)puVar1[1] + (uint)uVar4;
  uVar10 = uVar3;
  if (uVar4 <= uVar3) {
    uVar10 = (uint)uVar4;
  }
  uVar12 = (ulong)uVar10;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  if (uVar3 != uVar10) {
    lVar8 = *(long *)(param_1 + 0x30);
    uVar13 = (ulong)uVar10;
    do {
      plVar7 = *(long **)(lVar8 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x80))();
        (**(code **)(*plVar7 + 0x18))();
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar14 = plVar7[1];
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar9 = param_3[1];
        if (lVar14 == lVar9) {
LAB_039221ac:
          if ((int)uVar13 < 0) {
            return -1;
          }
          if (*(uint *)(param_1 + 0x18) <= param_2) {
            param_2 = 0;
          }
          return (int)uVar13 -
                 (uint)*(ushort *)
                        (*(long *)(param_1 + 0x20) +
                        (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
        }
        uVar11 = 0;
        bVar6 = true;
        do {
          lVar14 = plVar7[1] + 2 + uVar11;
          cVar5 = *(char *)(lVar14 + -2);
          if (cVar5 != *(char *)(lVar9 + uVar11)) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_039221ac;
            break;
          }
          cVar5 = *(char *)(lVar14 + -1);
          if (cVar5 != *(char *)(lVar9 + uVar11 + 1)) break;
          if (cVar5 == '\0') goto LAB_039221ac;
          cVar5 = *(char *)(plVar7[1] + 2 + uVar11);
          if (cVar5 != *(char *)(lVar9 + uVar11 + 2)) break;
          if (cVar5 == '\0') goto LAB_039221ac;
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
      }
      uVar13 = uVar12 + 1;
      uVar12 = uVar13 & 0xffffffff;
    } while (uVar3 != (uint)uVar13);
  }
  return -1;
}

