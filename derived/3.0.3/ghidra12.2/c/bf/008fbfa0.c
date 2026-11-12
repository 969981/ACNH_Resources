
void FUN_008fbfa0(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  
  if (((((*(char *)(param_2 + 0x430) == '\0') && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       (uVar2 = *(uint *)(param_2 + 0x274), uVar2 != 0)) &&
      ((plVar7 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar7 != (long *)0x0 &&
       ((*(uint *)(plVar7 + 0x49) >> 1 & 1) == 0)))) && (*(uint *)(plVar7 + 0x46) == uVar2)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32b8);
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      lVar4 = plVar7[0x6fc4];
      *(undefined1 *)(param_1 + 6) = 0;
      *param_1 = (int)lVar4;
      if ((char)plVar7[0x6fc7] != '\0') {
        uVar1 = *(undefined4 *)((long)plVar7 + 0x37e34);
        param_1[4] = (int)plVar7[0x6fc6];
        param_1[5] = uVar1;
        *(undefined **)(param_1 + 2) = PTR_DAT_04bb2010 + 0x10;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      cVar3 = *(char *)((long)plVar7 + 0x37e44);
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      if (cVar3 != '\0') {
        param_1[8] = (int)plVar7[0x6fc8];
        *(undefined1 *)(param_1 + 9) = 1;
      }
      cVar3 = *(char *)((long)plVar7 + 0x37e4c);
      param_1[10] = 0;
      *(undefined1 *)(param_1 + 0xb) = 0;
      if (cVar3 != '\0') {
        param_1[10] = (int)plVar7[0x6fc9];
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
      fVar8 = *(float *)(plVar7 + 0x6fca);
      if (NAN(fVar8)) {
        fVar8 = NAN;
      }
      else {
        lVar4 = plVar7[0x6fcb];
        param_1[0xd] = *(undefined4 *)((long)plVar7 + 0x37e54);
        param_1[0xe] = (int)lVar4;
      }
      goto LAB_008fbfdc;
    }
  }
  *param_1 = 0;
  fVar8 = NAN;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
LAB_008fbfdc:
  param_1[0xc] = fVar8;
  return;
}

