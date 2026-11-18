
void FUN_0370d7e0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    iVar10 = *(int *)(DAT_05abff60 + 0x50);
    iVar9 = *(int *)(DAT_05abff60 + 0x54);
    iVar8 = *(int *)(DAT_05abff60 + 0x60);
    iVar7 = *(int *)(DAT_05abff60 + 100);
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if (((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((lVar5 = *(long *)(DAT_05aed670 + 0x330), lVar5 != 0 &&
        (lVar4 = *(long *)(lVar5 + 600), lVar4 != lVar5 + 0x250)))) {
      lVar6 = lVar4 + -0x40;
      do {
        if (*(int *)(lVar4 + -0x40) == -0x6efba09b) {
          *(float *)(lVar6 + 0xc) = ((float)iVar10 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5 + 0.0;
          *(undefined4 *)(lVar6 + 0x10) = 0;
          *(float *)(lVar6 + 0x14) = ((float)iVar9 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5 + 15.0;
          *(undefined4 *)(lVar6 + 0x20) = 0xb4;
          puVar1 = PTR_DAT_04bc39e0;
          *(undefined4 *)(lVar6 + 0x18) = 0x41a00000;
          puVar1[0x9d] = 1;
          return;
        }
        lVar4 = *(long *)(lVar4 + 8);
        lVar6 = lVar4 + -0x40;
      } while (lVar6 != lVar5 + 0x210);
    }
  }
  return;
}

