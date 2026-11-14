
void FUN_01dc00f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  
  puVar8 = *(undefined8 **)*param_1;
  *(undefined1 *)(param_2 + 0x11e) = 0;
  if (*(byte *)(param_2 + 0x120) < 2) {
    return;
  }
  iVar10 = *(int *)(*(long *)(DAT_05aec400 + 0x3d8) + 0x10);
  if (iVar10 == 2) {
    lVar5 = FUN_00241210(*(undefined8 *)*puVar8);
  }
  else if (iVar10 == 0) {
    lVar5 = FUN_0030a3ac();
  }
  else {
    lVar5 = 0;
  }
  uVar3 = *(uint *)(DAT_05379880 + 0x28);
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(DAT_05379880 + 8) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(DAT_05379880 + 0x10) + (long)(int)uVar3 * 0x40;
    if ((*(char *)(lVar1 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar1 + 0x20))) {
      uVar9 = 0;
      uVar7 = (ulong)*(uint *)(lVar1 + 0x20);
      while ((uint)uVar9 < *(uint *)(lVar1 + 0x10) && *(long *)(lVar1 + 0x18) != 0) {
        lVar6 = nn::friends::Friend::GetAccountId();
        if (lVar6 == lVar5) {
          uVar7 = nn::friends::Friend::IsFavorite();
          bVar4 = *(byte *)(param_2 + 0x11e);
          *(byte *)(param_2 + 0x11e) = bVar4 | 1;
          if ((uVar7 & 1) == 0) {
            return;
          }
          *(byte *)(param_2 + 0x11e) = bVar4 | 3;
          return;
        }
        uVar2 = (uVar7 & 0xffffffff00000000) + 0x100000000;
        uVar9 = uVar2 >> 0x20;
        iVar10 = (int)uVar7;
        uVar7 = uVar2 | uVar7 & 0xffffffff;
        if (iVar10 <= (int)(uVar2 >> 0x20)) {
          return;
        }
      }
    }
  }
  return;
}

