
undefined8 FUN_01af7b00(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  char cVar12;
  undefined *local_70;
  char *pcStack_68;
  
  if (((DAT_0532ac78 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0532ac78), iVar5 != 0)) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "CookingIcon";
    FUN_00772610(&DAT_0532ac40,&local_70);
    __cxa_guard_release(&DAT_0532ac78);
  }
  (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
  uVar3 = DAT_0532a998;
  (**(code **)(DAT_0532ac40 + 0x18))(&DAT_0532ac40);
  uVar4 = DAT_0532ac48;
  __s = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    lVar6 = *(long *)(PTR_PTR_04bb2238 + 8);
  }
  else {
    if (*puVar11 != 0) {
      cVar12 = *PTR_DAT_04bbfe88;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *puVar2 = 1;
          memset(__s,0xff,0x1ac);
        }
        else {
          uVar1 = *(uint *)(__s + 0x18c);
          if (-1 < (int)uVar1) {
            lVar8 = (ulong)uVar1 + (long)puVar11;
            goto LAB_01af7c5c;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar11;
        lVar8 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_01af7c5c;
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + (lVar6 - (long)puVar9);
        if (lVar6 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
        *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
        lVar8 = 0;
        if (uVar7 == 0) goto LAB_01af7c5c;
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != 0x3febc642) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            lVar8 = 0;
            goto LAB_01af7c5c;
          }
        }
        iVar5 = 0;
        if (*piVar10 != -1) {
          iVar5 = *piVar10;
        }
        *(int *)(__s + 0x18c) = iVar5;
      } while (*puVar11 != 0);
    }
    lVar8 = 0;
LAB_01af7c5c:
    lVar6 = *(long *)PTR_PTR_04bc0008;
    if (lVar8 != 0) {
      lVar6 = lVar8;
    }
  }
  FUN_038d1270(param_2,uVar3,uVar4,lVar6);
  return 1;
}

