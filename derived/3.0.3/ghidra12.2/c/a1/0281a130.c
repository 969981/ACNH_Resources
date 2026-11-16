
/* WARNING: Removing unreachable block (ram,0x0281a38c) */
/* WARNING: Removing unreachable block (ram,0x0281a3ac) */

void FUN_0281a130(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  
  lVar3 = DAT_05574040;
  if ((DAT_05574040 != 0) && (iVar1 = *param_1, iVar1 != 0)) {
    lVar6 = *(long *)(param_1 + 2);
    iVar5 = 0;
    do {
      puVar7 = (uint *)(lVar6 + (long)iVar5 * 0x3c + 0x38);
      uVar4 = *puVar7;
      if (uVar4 < 8) {
        if (((((*(int *)(lVar3 + 0x94) == 1) && (*(uint *)(lVar3 + 0x90) == uVar4)) ||
             ((*(int *)(lVar3 + 0x9c) == 1 && (*(uint *)(lVar3 + 0x98) == uVar4)))) ||
            (((*(int *)(lVar3 + 0xa4) == 1 && (*(uint *)(lVar3 + 0xa0) == uVar4)) ||
             ((*(int *)(lVar3 + 0xac) == 1 && (*(uint *)(lVar3 + 0xa8) == uVar4)))))) ||
           ((((*(int *)(lVar3 + 0xb4) == 1 && (*(uint *)(lVar3 + 0xb0) == uVar4)) ||
             ((*(int *)(lVar3 + 0xbc) == 1 && (*(uint *)(lVar3 + 0xb8) == uVar4)))) ||
            (((*(int *)(lVar3 + 0xc4) == 1 && (*(uint *)(lVar3 + 0xc0) == uVar4)) ||
             ((*(int *)(lVar3 + 0xcc) == 1 && (*(uint *)(lVar3 + 200) == uVar4)))))))) {
          FUN_026f0170(lVar3);
          uVar4 = *puVar7;
        }
        if ((((((*(int *)(lVar3 + 0xd4) == 1) && (*(uint *)(lVar3 + 0xd0) == uVar4)) ||
              ((*(int *)(lVar3 + 0xdc) == 1 && (*(uint *)(lVar3 + 0xd8) == uVar4)))) ||
             ((*(int *)(lVar3 + 0xe4) == 1 && (*(uint *)(lVar3 + 0xe0) == uVar4)))) ||
            (((*(int *)(lVar3 + 0xec) == 1 && (*(uint *)(lVar3 + 0xe8) == uVar4)) ||
             ((((*(int *)(lVar3 + 0xf4) == 1 && (*(uint *)(lVar3 + 0xf0) == uVar4)) ||
               ((*(int *)(lVar3 + 0xfc) == 1 && (*(uint *)(lVar3 + 0xf8) == uVar4)))) ||
              ((*(int *)(lVar3 + 0x104) == 1 && (*(uint *)(lVar3 + 0x100) == uVar4)))))))) ||
           ((*(int *)(lVar3 + 0x10c) == 1 && (*(uint *)(lVar3 + 0x108) == uVar4)))) {
          FUN_026f3840(lVar3);
          uVar4 = *puVar7;
        }
        uVar2 = *(uint *)(lVar3 + 0x110);
        if (*(int *)(lVar3 + 0x114) != 1) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 == uVar4) {
          FUN_026f1e90(lVar3);
          uVar4 = *puVar7;
        }
        uVar2 = *(uint *)(lVar3 + 0x118);
        if (*(int *)(lVar3 + 0x11c) != 1) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 == uVar4) {
          FUN_026f2050(lVar3);
        }
        if ((((((*(byte *)(lVar3 + 0x50d) ^ 0xff) & 6) == 0) &&
             (((*(byte *)(lVar3 + 0x50d) ^ 0xff) & 6) == 0)) && (*(int *)(lVar3 + 0x124) == 1)) &&
           (*(uint *)(lVar3 + 0x120) == *puVar7)) {
          FUN_026f2220(lVar3);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return;
}

