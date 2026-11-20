
undefined1  [16] FUN_03f22ef8(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if (*param_1 == 2) {
    lVar2 = *(long *)(param_1 + 4);
    if (*(char *)(lVar2 + 0x15) == '\0') {
      lVar2 = *(long *)(lVar2 + 0x18);
    }
    else {
      lVar2 = (long)(*(long *)PTR_DAT_04bb29d0 *
                     (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000
              + *(long *)(lVar2 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 6) + (lVar2 - *(long *)(param_1 + 2));
    if (lVar2 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar3 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar3 = (lVar2 * 1000) / *(long *)PTR_DAT_04bb29d0;
      }
    }
    else {
      lVar3 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar3 = lVar2 / *(long *)PTR_DAT_04bb29d0;
      }
      lVar3 = lVar3 * 1000;
    }
    dVar7 = (double)lVar3 / 1000.0 + -0.10000000149011612;
    dVar6 = dVar7;
    if ((0.0 <= (double)lVar3 / 1000.0) && (dVar6 = 0.0, 0.0 <= dVar7)) {
      dVar6 = dVar7;
    }
  }
  else {
    dVar6 = -1.0;
    if (*param_1 == 1) {
      if ((*(long *)(param_1 + 6) != 0) && (param_1[8] == *(int *)(*(long *)(param_1 + 6) + 0x10)))
      {
        iVar1 = FUN_03b46270(0xbff0000000000000);
        dVar6 = 0.0;
        if (-1 < iVar1) {
          lVar2 = *(long *)(param_1 + 6);
          if ((lVar2 != 0) && (param_1[8] == *(int *)(lVar2 + 0x10))) {
            lVar2 = *(long *)(*(long *)(lVar2 + 0x120) + 8);
            if (DAT_05aebc00 == '\0') {
              puVar4 = *(undefined8 **)(lVar2 + 0x38);
              if (puVar4 == (undefined8 *)0x0) goto LAB_03f23080;
            }
            else {
              puVar4 = (undefined8 *)(lVar2 + 0x70);
            }
            if (((((puVar4[1] != 0) && (*(char *)(puVar4[1] + 0x30) != '\0')) &&
                 (piVar5 = (int *)*puVar4, piVar5 != (int *)0x0)) &&
                ((*piVar5 == 0x56415742 &&
                 (((char)(*(ushort *)(piVar5 + 1) >> 8) != -1 ||
                  ((*(ushort *)(piVar5 + 1) & 0xff) != 0xfe)))))) &&
               ((*(short *)((long)piVar5 + 6) == 1 && (*(short *)((long)piVar5 + 0xe) != 0)))) {
              dVar6 = (double)NEON_ucvtf((ulong)(uint)piVar5[5]);
            }
            dVar6 = (double)iVar1 / dVar6;
          }
        }
      }
    }
  }
LAB_03f23080:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar6;
  return auVar8;
}

