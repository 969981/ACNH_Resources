
void FUN_03f1770c(float param_1,float param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_3[1])) {
    fVar5 = 0.0;
    if (0.0 <= param_2) {
      fVar5 = param_2;
    }
    *(ushort *)(lVar4 + 0x98) = *(ushort *)(lVar4 + 0x98) | 1;
    *(float *)(lVar4 + 0x9c) = fVar5;
    *(ushort *)(lVar4 + 0x9a) = *(ushort *)(lVar4 + 0x9a) | 1;
    lVar4 = *param_3;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_3[1])) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10;
      if ((*(long *)(lVar4 + 0x28) != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar4 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar4 + 0x58) + 0x38))(*(long **)(lVar4 + 0x58),(int)param_1);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  if (param_3[0x12] != 0) {
    FUN_03f164d0(*(long *)(*(long *)(param_4 + 8) + 8) + 0x20);
    param_3[0x12] = 0;
  }
  lVar4 = param_3[5];
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0x3f80000000000000;
  puVar2 = PTR_DAT_04bd1e70;
  puVar1 = PTR_DAT_04bb29d0;
  if (*(char *)(lVar4 + 0x15) == '\0') {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar4 = (long)(*(long *)PTR_DAT_04bb29d0 *
                   (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                   (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 +
            *(long *)(lVar4 + 0x18);
  }
  param_3[4] = lVar4;
  lVar4 = param_3[0x10];
  param_3[0xe] = 0;
  if (*(char *)(lVar4 + 0x15) == '\0') {
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar4 = (long)(*(long *)puVar1 *
                   (*(long *)(*(long *)puVar2 + 8) + (ulong)*(uint *)(*(long *)puVar2 + 4)) * 5) /
            1000 + *(long *)(lVar4 + 0x18);
  }
  param_3[0xf] = lVar4;
  *(undefined4 *)(param_3 + 0x11) = 0;
  *(undefined1 *)((long)param_3 + 0x8c) = 0;
  return;
}

