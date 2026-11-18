
void FUN_0364c5b8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 6) & *(uint *)(param_1 + 4);
  iVar3 = *(int *)(&DAT_04130bf0 + ((ulong)*(uint *)((long)param_1 + 0x1c) & 0xc));
  if (iVar3 == 2) {
    lVar7 = *param_1;
    uVar2 = ((*(uint *)(param_1 + 5) & 0xe) + uVar2) * 0x4000;
    FUN_03653cb0(lVar7 + 0x2a8,0x8000,*(undefined8 *)(lVar7 + 0x4c0),0x4000,
                 *(int *)(lVar7 + 0x738) - 1U & uVar2,*(char *)(lVar7 + 0x4b8) == '\0');
    lVar7 = *param_1;
    cVar4 = *(char *)(lVar7 + 0x5b8);
    uVar6 = *(undefined8 *)(lVar7 + 0x5c0);
    uVar2 = *(int *)(lVar7 + 0x778) - 1U & uVar2 + 0x4000;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5) & 0xf;
    if (iVar3 == 1) {
      lVar7 = *param_1;
      FUN_03653cb0(lVar7 + 0x2a8,0xc000,*(undefined8 *)(lVar7 + 0x5c0),0x4000,
                   *(int *)(lVar7 + 0x778) - 1U & (uVar1 + uVar2) * 0x4000,
                   *(char *)(lVar7 + 0x5b8) == '\0');
      lVar7 = *param_1;
      uVar5 = 0x8000;
      cVar4 = *(char *)(lVar7 + 0x4b8);
      uVar6 = *(undefined8 *)(lVar7 + 0x4c0);
      uVar2 = *(int *)(lVar7 + 0x738) - 1U & uVar2 << 0xe;
      goto LAB_0364c72c;
    }
    if (iVar3 != 0) {
      return;
    }
    lVar7 = *param_1;
    FUN_03653cb0(lVar7 + 0x2a8,0x8000,*(undefined8 *)(lVar7 + 0x4c0),0x4000,
                 *(int *)(lVar7 + 0x738) - 1U & (uVar1 + uVar2) * 0x4000,
                 *(char *)(lVar7 + 0x4b8) == '\0');
    lVar7 = *param_1;
    cVar4 = *(char *)(lVar7 + 0x5b8);
    uVar6 = *(undefined8 *)(lVar7 + 0x5c0);
    uVar2 = *(int *)(lVar7 + 0x778) - 1U & (*(int *)((long)param_1 + 0x2c) + uVar2) * 0x4000;
  }
  uVar5 = 0xc000;
LAB_0364c72c:
  FUN_03653cb0(lVar7 + 0x2a8,uVar5,uVar6,0x4000,uVar2,cVar4 == '\0');
  return;
}

