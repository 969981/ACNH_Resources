
void FUN_03c3dd30(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar8 = PTR_DAT_04bb29d0;
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb3518 + 0x108);
  do {
    lVar9 = *(long *)(lVar13 + 0x38);
    lVar10 = lVar9 + -0x160;
    bVar7 = *(byte *)(lVar9 + -0x48);
    lVar11 = lVar10;
    if ((uint)bVar7 != *param_1) {
      lVar11 = lVar9;
      do {
        lVar11 = *(long *)(lVar11 + 8);
      } while ((uint)*(byte *)(lVar11 + -0x48) != *param_1);
      lVar11 = lVar11 + -0x160;
    }
    lVar12 = lVar10;
    if ((uint)bVar7 != param_1[1]) {
      lVar12 = lVar9;
      do {
        lVar12 = *(long *)(lVar12 + 8);
      } while ((uint)*(byte *)(lVar12 + -0x48) != param_1[1]);
      lVar12 = lVar12 + -0x160;
    }
    if ((uint)bVar7 != param_1[2]) {
      do {
        lVar9 = *(long *)(lVar9 + 8);
      } while ((uint)*(byte *)(lVar9 + -0x48) != param_1[2]);
      lVar10 = lVar9 + -0x160;
    }
    iVar1 = *(int *)(lVar10 + 0x108);
    cVar4 = *(char *)(lVar10 + 0x11c);
    iVar2 = *(int *)(lVar11 + 0x108);
    cVar5 = *(char *)(lVar11 + 0x11c);
    iVar3 = *(int *)(lVar12 + 0x108);
    cVar6 = *(char *)(lVar12 + 0x11c);
    nn::os::ConvertToTimeSpan(*(long *)puVar8 / 100);
    nn::os::SleepThread();
  } while (((((iVar1 != 0 || cVar4 != '\0') || iVar3 != 0) || cVar6 != '\0') || iVar2 != 0) ||
           cVar5 != '\0');
  return;
}

