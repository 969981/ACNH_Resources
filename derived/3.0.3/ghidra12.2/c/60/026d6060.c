
undefined8 FUN_026d6060(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + (long)iVar2 * 0x230) == '\0') {
      return 1;
    }
    lVar4 = param_1 + (long)iVar2 * 0x230;
    iVar3 = *(int *)(lVar4 + 0x1e4);
    if (*(int *)(lVar4 + 0x200) == 0 || iVar3 == 0) {
      return 1;
    }
    if ((*(int *)(lVar4 + 0x200) == param_2[7]) &&
       (lVar7 = param_1 + (long)iVar2 * 0x230,
       (*(long *)(param_2 + 8) == *(long *)(lVar7 + 0x204) &&
       *(long *)(param_2 + 10) == *(long *)(lVar7 + 0x20c)) &&
       param_2[0xc] == *(int *)(lVar7 + 0x214))) {
      if ((*(short *)(lVar4 + 0x1e8) == 0) || ((short)param_2[1] == 0)) {
        if (iVar3 == *param_2) {
          return 0;
        }
      }
      else if (iVar3 == *param_2) {
        uVar6 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)(lVar4 + 0x1e8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(lVar4 + 0x1e8) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 == uVar6) {
          uVar6 = (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar6 = (*(ulong *)(lVar4 + 0x1f0) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(lVar4 + 0x1f0) & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          if (uVar5 == uVar6) {
            uVar1 = (param_2[5] & 0xff00ff00U) >> 8 | (param_2[5] & 0xff00ffU) << 8;
            uVar5 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            uVar1 = (*(uint *)(lVar4 + 0x1f8) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar4 + 0x1f8) & 0xff00ff) << 8;
            uVar6 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            if (uVar5 == uVar6) {
              return 0;
            }
          }
        }
        iVar3 = 1;
        if (uVar5 < uVar6) {
          iVar3 = -1;
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 8) {
      return 0;
    }
  } while( true );
}

