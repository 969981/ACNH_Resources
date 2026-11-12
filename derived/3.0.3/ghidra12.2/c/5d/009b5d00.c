
/* WARNING: Removing unreachable block (ram,0x009b5e90) */

void FUN_009b5d00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if (DAT_054ee400 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(*(char *)(DAT_054ee400 + 0x13d4) != '\0' &&
                  *(char *)(DAT_054ee400 + 0x13d6) != '\0');
    if (*(char *)(DAT_054ee400 + 0x27c4) != '\0' && *(char *)(DAT_054ee400 + 0x27c6) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x3bb4) != '\0' && *(char *)(DAT_054ee400 + 0x3bb6) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x4fa4) != '\0' && *(char *)(DAT_054ee400 + 0x4fa6) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x6394) != '\0' && *(char *)(DAT_054ee400 + 0x6396) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x7784) != '\0' && *(char *)(DAT_054ee400 + 0x7786) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x8b74) != '\0' && *(char *)(DAT_054ee400 + 0x8b76) != '\0') {
      uVar3 = uVar3 + 1;
    }
    if (*(char *)(DAT_054ee400 + 0x9f64) != '\0' && *(char *)(DAT_054ee400 + 0x9f66) != '\0') {
      uVar3 = uVar3 + 1;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (3 < uVar3) {
    uVar3 = 4;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)(param_1 + 0xf5b7c) = uVar3;
  if (*(long *)(DAT_05ae7798 + 0x178) != DAT_05ae7798 + 0x170) {
    lVar2 = (long)*(int *)(DAT_05ae7798 + 0x184);
    lVar4 = *(long *)(DAT_05ae7798 + 0x178) - lVar2;
    do {
      if (*(int *)(lVar4 + 0x18) == 0xd) break;
      lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
    } while (lVar4 != (DAT_05ae7798 + 0x170) - lVar2);
  }
  uVar1 = nn::hid::SetSupportedNpadStyleSet(DAT_0410162c);
  FUN_009b5440(uVar1,1);
  *(undefined4 *)(param_1 + 0xf5b5c) = 1;
  return;
}

