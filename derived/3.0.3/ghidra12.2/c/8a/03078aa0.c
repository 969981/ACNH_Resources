
void FUN_03078aa0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  
  if ((*(long *)(param_1 + 0x1670) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590), lVar9 != 0)) {
    iVar2 = *(int *)(param_1 + 0x23fc);
    lVar4 = FUN_033d0598(&DAT_0548e140);
    if (iVar2 == 0) {
      uVar8 = *(uint *)(param_1 + 0x1578);
      uVar7 = 0xff;
      if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1560))) {
        lVar6 = param_1 + 0x1550;
        uVar1 = uVar8 + 1 & 3;
        if (2 < uVar8) {
          uVar8 = uVar8 + 1 & 0xfffffffc;
          do {
            uVar8 = uVar8 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar8 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
        uVar7 = 0xff;
        if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1564), lVar6 != 0)) {
          uVar7 = (undefined1)*(undefined4 *)(lVar6 + 0x270);
        }
      }
      *(undefined1 *)(lVar4 + 0xdd) = uVar7;
      if (param_2 == 0x53) {
        cVar5 = '\0';
        cVar3 = (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x430);
        if (*(uint *)(lVar9 + 0x298) < 2) {
          cVar3 = '\0';
        }
        *(char *)(lVar4 + 0xdc) = cVar3;
        if (1 < *(uint *)(lVar9 + 0x298)) {
          cVar5 = (char)*(undefined4 *)(lVar9 + 0x444) +
                  (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x440);
        }
        *(char *)(lVar4 + 0xdb) = cVar5;
      }
      else if (param_2 == 0x52) {
        cVar5 = '\0';
        cVar3 = (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x430);
        if (*(uint *)(lVar9 + 0x298) < 2) {
          cVar3 = '\0';
        }
        *(char *)(lVar4 + 0xda) = cVar3;
        if (1 < *(uint *)(lVar9 + 0x298)) {
          cVar5 = (char)*(undefined4 *)(lVar9 + 0x444) +
                  (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x440);
        }
        *(char *)(lVar4 + 0xd9) = cVar5;
      }
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x1578);
      uVar7 = 0xff;
      if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1560))) {
        lVar6 = param_1 + 0x1550;
        uVar1 = uVar8 + 1 & 3;
        if (2 < uVar8) {
          uVar8 = uVar8 + 1 & 0xfffffffc;
          do {
            uVar8 = uVar8 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar8 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
        uVar7 = 0xff;
        if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1564), lVar6 != 0)) {
          uVar7 = (undefined1)*(undefined4 *)(lVar6 + 0x270);
        }
      }
      *(undefined1 *)(lVar4 + 0xe2) = uVar7;
      if (param_2 == 0x53) {
        cVar5 = '\0';
        cVar3 = (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x430);
        if (*(uint *)(lVar9 + 0x298) < 2) {
          cVar3 = '\0';
        }
        *(char *)(lVar4 + 0xe1) = cVar3;
        if (1 < *(uint *)(lVar9 + 0x298)) {
          cVar5 = (char)*(undefined4 *)(lVar9 + 0x444) +
                  (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x440);
        }
        *(char *)(lVar4 + 0xe0) = cVar5;
      }
      else if (param_2 == 0x52) {
        cVar5 = '\0';
        cVar3 = (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x430);
        if (*(uint *)(lVar9 + 0x298) < 2) {
          cVar3 = '\0';
        }
        *(char *)(lVar4 + 0xdf) = cVar3;
        if (1 < *(uint *)(lVar9 + 0x298)) {
          cVar5 = (char)*(undefined4 *)(lVar9 + 0x444) +
                  (char)*(undefined4 *)(lVar9 + 0x2e8) * (char)*(undefined4 *)(lVar9 + 0x440);
        }
        *(char *)(lVar4 + 0xde) = cVar5;
      }
    }
  }
  return;
}

