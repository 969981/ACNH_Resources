
/* WARNING: Type propagation algorithm not settling */

void FUN_03650e08(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (*(char *)((long)param_1 + 0xac) != '\0') {
    return;
  }
  uVar5 = *(uint *)(param_1 + 2);
  uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
  uVar6 = uVar4 - 1;
  if (uVar6 == 0) {
    lVar7 = *param_1;
    FUN_03653cb0(lVar7 + 0x2a8,0,*(undefined8 *)(lVar7 + 0x2c0),uVar4 * 0x400,
                 *(int *)(lVar7 + 0x6b8) - 1U &
                 (*(uint *)(param_1 + 10) | (int)param_1[0x10] << 8) * uVar4 * 0x400,
                 *(char *)(lVar7 + 0x2b8) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if (uVar6 < 2) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (1U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)((long)param_1 + 0x54) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if ((uVar6 & 0xfffffffd) == 0) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (2U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)(param_1 + 0xb) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if (uVar6 < 4) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (3U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)((long)param_1 + 0x5c) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if ((uVar6 & 0xfffffffb) == 0) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (4U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)(param_1 + 0xc) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if ((uVar6 & 0xfffffffa) == 0) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (5U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)((long)param_1 + 100) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if ((uVar6 & 0xfffffff9) == 0) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (6U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)(param_1 + 0xd) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = 8 >> (ulong)(uVar5 & 0x1f);
    uVar6 = uVar4 - 1;
  }
  if (uVar6 < 8) {
    iVar2 = uVar4 * 0x400;
    uVar5 = (7U >> (ulong)(3 - uVar5 & 0x1f)) * iVar2;
    lVar1 = *param_1 + 0x2a8;
    uVar3 = (ulong)(uVar5 >> 10);
    lVar7 = lVar1 + uVar3 * 0x10;
    FUN_03653cb0(lVar1,uVar5,*(undefined8 *)(lVar7 + 0x18),iVar2,
                 *(int *)(lVar1 + uVar3 * 4 + 0x410) - 1U &
                 (*(uint *)((long)param_1 + 0x6c) | (int)param_1[0x10] << 8) * iVar2,
                 *(char *)(lVar7 + 0x10) == '\0');
  }
  *(undefined1 *)((long)param_1 + 0xac) = 1;
  return;
}

