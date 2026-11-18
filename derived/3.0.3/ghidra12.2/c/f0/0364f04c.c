
void FUN_0364f04c(long *param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = *(int *)((long)param_1 + 0xc);
  if (iVar5 == 3) {
    lVar7 = *param_1;
    if (*(char *)((long)param_1 + 0x4c) == '\0') {
      cVar2 = *(char *)(lVar7 + 0x438);
      uVar4 = *(undefined8 *)(lVar7 + 0x440);
      iVar5 = *(int *)(lVar7 + 0x718);
    }
    else {
      cVar2 = *(char *)(lVar7 + 0x4b8);
      uVar4 = *(undefined8 *)(lVar7 + 0x4c0);
      iVar5 = *(int *)(lVar7 + 0x738);
    }
    FUN_03653cb0(lVar7 + 0x2a8,0x8000,uVar4,0x2000,
                 iVar5 - 1U & *(int *)((long)param_1 + 0x3c) << 0xd,cVar2 == '\0');
    iVar5 = *(int *)((long)param_1 + 0xc);
  }
  if (iVar5 - 1U < 2) {
    uVar3 = 0x8000;
    iVar5 = 0x4000;
    uVar6 = *(uint *)(param_1 + 8) >> 1;
  }
  else {
    if (iVar5 == 0) goto LAB_0364f164;
    if (iVar5 == 3) {
      uVar6 = *(uint *)(param_1 + 8);
      uVar3 = 0xa000;
      iVar5 = 0x2000;
    }
    else {
      uVar6 = 0;
      iVar5 = 0;
      uVar3 = 0;
    }
  }
  lVar8 = *param_1;
  lVar7 = lVar8 + 0x2a8;
  if (*(char *)((long)param_1 + 0x4d) == '\0') {
    cVar2 = *(char *)(lVar8 + 0x438);
    iVar1 = *(int *)(lVar8 + 0x718);
    uVar4 = *(undefined8 *)(lVar8 + 0x440);
  }
  else {
    lVar8 = lVar7 + (uVar3 >> 10) * 0x10;
    cVar2 = *(char *)(lVar8 + 0x10);
    iVar1 = *(int *)(lVar7 + (uVar3 >> 10) * 4 + 0x410);
    uVar4 = *(undefined8 *)(lVar8 + 0x18);
  }
  FUN_03653cb0(lVar7,uVar3,uVar4,iVar5,iVar1 - 1U & iVar5 * uVar6,cVar2 == '\0');
LAB_0364f164:
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if ((uVar6 & 0xfffffffe) == 2) {
    lVar7 = *param_1;
    if (*(char *)((long)param_1 + 0x4e) == '\0') {
      cVar2 = *(char *)(lVar7 + 0x438);
      uVar4 = *(undefined8 *)(lVar7 + 0x440);
      iVar5 = *(int *)(lVar7 + 0x718);
    }
    else {
      cVar2 = *(char *)(lVar7 + 0x5b8);
      uVar4 = *(undefined8 *)(lVar7 + 0x5c0);
      iVar5 = *(int *)(lVar7 + 0x778);
    }
    FUN_03653cb0(lVar7 + 0x2a8,0xc000,uVar4,0x2000,
                 iVar5 - 1U & *(int *)((long)param_1 + 0x44) << 0xd,cVar2 == '\0');
    uVar6 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar6 == 1) {
    uVar3 = 0xc000;
    iVar5 = 0x4000;
    uVar6 = *(uint *)(param_1 + 9) >> 1;
  }
  else if (uVar6 == 0) {
    iVar5 = 0x8000;
    uVar3 = 0x8000;
    uVar6 = *(uint *)(param_1 + 9) >> 2;
  }
  else {
    uVar6 = *(uint *)(param_1 + 9);
    uVar3 = 0xe000;
    iVar5 = 0x2000;
  }
  lVar8 = *param_1 + 0x2a8;
  lVar7 = lVar8 + (uVar3 >> 10) * 0x10;
  FUN_03653cb0(lVar8,uVar3,*(undefined8 *)(lVar7 + 0x18),iVar5,
               *(int *)(lVar8 + (uVar3 >> 10) * 4 + 0x410) - 1U & iVar5 * uVar6,
               *(char *)(lVar7 + 0x10) == '\0');
  return;
}

