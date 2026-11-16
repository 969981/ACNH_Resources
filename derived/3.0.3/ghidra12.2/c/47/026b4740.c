
bool FUN_026b4740(long param_1,long param_2,int *param_3)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = param_1 + 0x1094c;
  if (param_3 == (int *)0x0) {
    lVar9 = 0x18;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    do {
      uVar4 = FUN_0277d6c4(lVar8);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          uVar5 = FUN_0277d7b4(lVar8,param_2);
          lVar7 = *(long *)puVar2;
          if (((uVar5 & 1) != 0) &&
             (((*(char *)(lVar8 + 3) == *(char *)(param_2 + 3) &&
               (*(int *)(lVar8 + 4) == *(int *)(param_2 + 4))) && (*(char *)(lVar8 + 0x2b) == '\0'))
             )) {
            return true;
          }
        }
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 0x2c;
      lVar10 = lVar7;
    } while (lVar9 != 0);
    uVar5 = 0;
    param_1 = param_1 + 0x10d6c;
    bVar3 = true;
    do {
      uVar4 = FUN_0277d6c4(param_1);
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          uVar6 = FUN_0277d7b4(param_1,param_2);
          lVar8 = *(long *)puVar2;
          if ((((uVar6 & 1) != 0) &&
              ((*(char *)(param_1 + 3) == *(char *)(param_2 + 3) &&
               (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))))) &&
             (*(char *)(param_1 + 0x2b) == '\0')) {
            return bVar3;
          }
        }
      }
      bVar3 = uVar5 < 0x1f;
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 0x2c;
      lVar7 = lVar8;
    } while (uVar5 != 0x20);
  }
  else {
    lVar9 = 0x18;
    do {
      if ((*(int *)(lVar8 + 8) == *param_3) &&
         ((*(long *)(param_3 + 1) == *(long *)(lVar8 + 0xc) &&
          *(long *)(param_3 + 3) == *(long *)(lVar8 + 0x14)) && param_3[5] == *(int *)(lVar8 + 0x1c)
         )) {
        lVar10 = *(long *)puVar2;
        uVar4 = FUN_0277d6c4(lVar8);
        if (*(long *)puVar2 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (((((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
               (uVar5 = FUN_0277d7b4(lVar8,param_2), (uVar5 & 1) != 0)) &&
              ((*(char *)(lVar8 + 3) == *(char *)(param_2 + 3) &&
               (*(int *)(lVar8 + 4) == *(int *)(param_2 + 4))))) &&
             (*(char *)(lVar8 + 0x2b) == '\0')) {
            return true;
          }
        }
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 0x2c;
    } while (lVar9 != 0);
    uVar5 = 0;
    bVar3 = true;
    lVar8 = 0;
    do {
      if ((*(int *)(param_1 + 0x10d74 + lVar8) == *param_3) &&
         (plVar1 = (long *)(param_1 + 0x10d78 + lVar8),
         (*(long *)(param_3 + 1) == *plVar1 && *(long *)(param_3 + 3) == plVar1[1]) &&
         param_3[5] == (int)plVar1[2])) {
        lVar10 = *(long *)puVar2;
        lVar9 = param_1 + 0x10d6c + lVar8;
        uVar4 = FUN_0277d6c4(lVar9);
        if (*(long *)puVar2 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
              (uVar6 = FUN_0277d7b4(lVar9,param_2), (uVar6 & 1) != 0)) &&
             (((*(char *)(param_1 + 0x10d97 + lVar8 + -0x28) == *(char *)(param_2 + 3) &&
               (*(int *)(param_1 + 0x10d70 + lVar8) == *(int *)(param_2 + 4))) &&
              (*(char *)(param_1 + 0x10d97 + lVar8) == '\0')))) {
            return bVar3;
          }
        }
      }
      bVar3 = uVar5 < 0x1f;
      lVar8 = lVar8 + 0x2c;
      uVar5 = uVar5 + 1;
    } while (lVar8 != 0x580);
  }
  return bVar3;
}

