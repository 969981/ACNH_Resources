
void FUN_016cd510(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  iVar3 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar3 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      iVar3 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar3 = 0, DAT_05aed670 != 0)) {
        iVar3 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar3 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292434 == iVar3) {
    if (DAT_05292338 == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)(uint)(*(int *)(DAT_05292338 + 0xf68) << 1);
    }
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      if ((iVar3 == 0x758f7eaf) &&
         (((DAT_05aed670 != 0 && (lVar6 = *(long *)(DAT_05aed670 + 0x330), lVar6 != 0)) &&
          (lVar5 = *(long *)(lVar6 + 600), lVar5 != lVar6 + 0x250)))) {
        lVar7 = lVar5 + -0x40;
        do {
          if (*(int *)(lVar5 + -0x40) == 0x3ee08254) {
            *(float *)(lVar7 + 0x14) = fVar8 * 5.0 + 205.0;
            *(undefined8 *)(lVar7 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar7 + 0x20) = 0xb4;
            puVar1 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar7 + 0x18) = 0x41a00000;
            puVar1[0x9d] = 1;
            return;
          }
          lVar5 = *(long *)(lVar5 + 8);
          lVar7 = lVar5 + -0x40;
        } while (lVar7 != lVar6 + 0x210);
      }
    }
  }
  return;
}

