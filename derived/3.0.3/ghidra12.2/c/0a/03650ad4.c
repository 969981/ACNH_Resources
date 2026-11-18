
void FUN_03650ad4(long *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(char *)((long)param_1 + 0xac) == '\0') {
    return;
  }
  uVar10 = *(uint *)(param_1 + 2);
  uVar9 = 8 >> (ulong)(uVar10 & 0x1f);
  uVar6 = (int)param_1[0x10] << 8;
  uVar7 = uVar9 - 1;
  iVar11 = uVar9 * 0x400;
  if ((uVar7 & 0xfffffff7) == 0) {
    lVar8 = *param_1;
    uVar6 = (*(uint *)(param_1 + 0xe) | uVar6) * iVar11;
    FUN_03653cb0(lVar8 + 0x2a8,0,*(undefined8 *)(lVar8 + 0x2c0),iVar11,
                 *(int *)(lVar8 + 0x6b8) - 1U & uVar6,*(char *)(lVar8 + 0x2b8) == '\0');
    lVar8 = *param_1;
    FUN_03653cb0(lVar8 + 0x2a8,0x1000,*(undefined8 *)(lVar8 + 0x300),iVar11,
                 *(int *)(lVar8 + 0x6c8) - 1U & uVar6,*(char *)(lVar8 + 0x2f8) == '\0');
    uVar10 = *(uint *)(param_1 + 2);
    uVar9 = 8 >> (ulong)(uVar10 & 0x1f);
    uVar6 = (int)param_1[0x10] << 8;
    uVar7 = uVar9 - 1;
    iVar11 = uVar9 << 10;
  }
  uVar9 = 3 - uVar10;
  if ((uVar7 & 0xfffffff6) == 0) {
    uVar10 = (1U >> (ulong)(uVar9 & 0x1f)) * iVar11;
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + (ulong)(uVar10 >> 10) * 0x10;
    uVar6 = (*(uint *)((long)param_1 + 0x74) | uVar6) * iVar11;
    FUN_03653cb0(lVar4,uVar10,*(undefined8 *)(lVar8 + 0x18),iVar11,
                 *(int *)(lVar4 + (ulong)(uVar10 >> 10) * 4 + 0x410) - 1U & uVar6,
                 *(char *)(lVar8 + 0x10) == '\0');
    uVar3 = (ulong)((uVar10 | 0x1000) >> 10);
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + uVar3 * 0x10;
    FUN_03653cb0(lVar4,uVar10 | 0x1000,*(undefined8 *)(lVar8 + 0x18),iVar11,
                 *(int *)(lVar4 + uVar3 * 4 + 0x410) - 1U & uVar6,*(char *)(lVar8 + 0x10) == '\0');
    uVar10 = *(uint *)(param_1 + 2);
    uVar2 = 8 >> (ulong)(uVar10 & 0x1f);
    uVar6 = (int)param_1[0x10] << 8;
    uVar9 = 3 - uVar10;
    uVar7 = uVar2 - 1;
    iVar11 = uVar2 << 10;
  }
  if ((uVar7 & 0xfffffff5) == 0) {
    uVar10 = (2U >> (ulong)(uVar9 & 0x1f)) * iVar11;
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + (ulong)(uVar10 >> 10) * 0x10;
    uVar6 = (*(uint *)(param_1 + 0xf) | uVar6) * iVar11;
    FUN_03653cb0(lVar4,uVar10,*(undefined8 *)(lVar8 + 0x18),iVar11,
                 *(int *)(lVar4 + (ulong)(uVar10 >> 10) * 4 + 0x410) - 1U & uVar6,
                 *(char *)(lVar8 + 0x10) == '\0');
    uVar3 = (ulong)((uVar10 | 0x1000) >> 10);
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + uVar3 * 0x10;
    FUN_03653cb0(lVar4,uVar10 | 0x1000,*(undefined8 *)(lVar8 + 0x18),iVar11,
                 *(int *)(lVar4 + uVar3 * 4 + 0x410) - 1U & uVar6,*(char *)(lVar8 + 0x10) == '\0');
    uVar10 = *(uint *)(param_1 + 2);
    uVar2 = 8 >> (ulong)(uVar10 & 0x1f);
    uVar6 = (int)param_1[0x10] << 8;
    uVar9 = 3 - uVar10;
    uVar7 = uVar2 - 1;
    iVar11 = uVar2 << 10;
  }
  uVar6 = *(uint *)((long)param_1 + 0x7c) | uVar6;
  if ((uVar7 & 0xfffffff4) == 0) {
    uVar6 = uVar6 * iVar11;
    uVar10 = (3U >> (ulong)(uVar9 & 0x1f)) * iVar11;
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + (ulong)(uVar10 >> 10) * 0x10;
    FUN_03653cb0(lVar4,uVar10,*(undefined8 *)(lVar8 + 0x18),iVar11,
                 *(int *)(lVar4 + (ulong)(uVar10 >> 10) * 4 + 0x410) - 1U & uVar6,
                 *(char *)(lVar8 + 0x10) == '\0');
    uVar10 = uVar10 | 0x1000;
    lVar4 = *param_1 + 0x2a8;
    lVar8 = lVar4 + (ulong)(uVar10 >> 10) * 0x10;
    cVar1 = *(char *)(lVar8 + 0x10);
    uVar5 = *(undefined8 *)(lVar8 + 0x18);
    uVar6 = *(int *)(lVar4 + (ulong)(uVar10 >> 10) * 4 + 0x410) - 1U & uVar6;
  }
  else {
    if (uVar10 != 0) goto LAB_03650df0;
    lVar8 = *param_1;
    uVar10 = 0;
    cVar1 = *(char *)(lVar8 + 0x2b8);
    uVar5 = *(undefined8 *)(lVar8 + 0x2c0);
    lVar4 = lVar8 + 0x2a8;
    uVar6 = *(int *)(lVar8 + 0x6b8) - 1U & uVar6 * iVar11;
  }
  FUN_03653cb0(lVar4,uVar10,uVar5,iVar11,uVar6,cVar1 == '\0');
LAB_03650df0:
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  return;
}

