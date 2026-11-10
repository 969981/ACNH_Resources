
int FUN_001327f0(long param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  short local_1a0;
  short local_19e;
  short local_19c;
  int local_198;
  short local_194;
  short local_192;
  short local_190;
  
  if (param_1 == 0) {
    iVar6 = -0x5149;
  }
  else if (param_2 == (int *)0x0) {
    iVar6 = -0x4149;
  }
  else if ((char)param_2[0x5c] == -1) {
    puVar5 = *(uint **)(param_1 + 0x6f4f0);
    if (puVar5 == (uint *)0x0) {
      iVar6 = -0x3d49;
    }
    else {
      uVar2 = (puVar5[4] & 0xff00ff00) >> 8 | (puVar5[4] & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      iVar6 = -0x3a49;
      if ((3 < (int)uVar2) &&
         (uVar3 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8,
         (uVar3 >> 0x10 | uVar3 << 0x10) == 0x434f4e4a)) {
        local_1ac = 0;
        iVar6 = 1;
        do {
          iVar4 = FUN_00131e40(param_1,iVar6,param_2,&local_1a8,&local_1ac);
          if (0 < iVar4) {
            if (local_1ac == 2) {
              if (((((short)param_2[2] == local_1a0) &&
                   (*(short *)((long)param_2 + 10) == local_19e)) && (*param_2 == local_1a8)) &&
                 ((param_2[1] == local_1a4 && ((short)param_2[3] == local_19c)))) goto LAB_001328c0;
            }
            else if (local_1ac == 1) {
LAB_001328c0:
              if ((((short)param_2[5] == local_194) &&
                  (*(short *)((long)param_2 + 0x16) == local_192)) &&
                 ((param_2[4] == local_198 && ((short)param_2[6] == local_190)))) {
                return iVar6;
              }
            }
          }
          bVar1 = iVar6 < (int)uVar2;
          iVar6 = iVar6 + 1;
        } while (bVar1);
        iVar6 = 0;
      }
    }
  }
  else {
    iVar6 = -0x3f49;
  }
  return iVar6;
}

