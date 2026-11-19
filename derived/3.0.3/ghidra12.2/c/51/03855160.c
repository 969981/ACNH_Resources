
undefined8 FUN_03855160(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long local_70;
  long local_68;
  
  if (param_1[0x101] == 1) {
    return 0;
  }
  if (param_1[0x101] == 2) {
    return 1;
  }
  uVar9 = *(uint *)(param_3 + 0x30);
  if ((int)uVar9 < 1) {
    param_1[0x100] = 0;
  }
  else {
    uVar18 = 0;
    uVar17 = 0;
    do {
      plVar13 = (long *)**(undefined8 **)(*(long *)(param_3 + 0x38) + uVar18 * 8);
      iVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
      if (0 < iVar5) {
        iVar14 = 0;
LAB_0385525c:
        (**(code **)(*plVar13 + 0x40))(&local_70,plVar13,iVar14);
        if (*(int *)(param_2 + 0x30) != 0) {
          lVar12 = *(long *)(param_2 + 0x38);
          lVar11 = 0;
          lVar15 = (long)*(int *)(param_2 + 0x30) << 3;
          do {
            plVar7 = (long *)**(undefined8 **)(lVar12 + lVar11 * 8);
            iVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_70);
            if (iVar6 != -1) {
              if ((((uint)lVar11 & 0xffff) != 0xffff) &&
                 (uVar1 = (uint)lVar11 & 0xffff | iVar6 << 0x10, uVar1 < 0xffff0000)) {
                if (**(char **)(param_1 + 0x104) == '\0') goto LAB_0385522c;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                lVar11 = local_68;
                (**(code **)(*(long *)(param_1 + 0x102) + 0x18))(param_1 + 0x102);
                lVar15 = *(long *)(param_1 + 0x104);
                if (lVar11 != lVar15) {
                  uVar10 = 0;
                  bVar4 = true;
                  goto LAB_03855340;
                }
              }
              break;
            }
            lVar11 = lVar11 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        goto LAB_03855250;
      }
LAB_038551e0:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar9);
    param_1[0x100] = (uint)uVar17;
    if (0 < (int)(uint)uVar17) {
      uVar9 = 2;
      uVar8 = 1;
      goto LAB_038553d4;
    }
  }
  uVar9 = 1;
  uVar8 = 0;
LAB_038553d4:
  param_1[0x101] = uVar9;
  return uVar8;
  while( true ) {
    if (cVar3 == '\0') {
      if (bVar4) goto LAB_03855250;
      break;
    }
    cVar3 = *(char *)(lVar11 + -1);
    if (cVar3 != *(char *)(lVar15 + uVar10 + 1)) break;
    if (cVar3 == '\0') goto LAB_03855250;
    cVar3 = *(char *)(local_68 + 2 + uVar10);
    if (cVar3 != *(char *)(lVar15 + uVar10 + 2)) break;
    if (cVar3 == '\0') goto LAB_03855250;
    bVar4 = uVar10 < 0x7fffe;
    uVar10 = uVar10 + 3;
    if (uVar10 == 0x80001) break;
LAB_03855340:
    lVar11 = local_68 + 2 + uVar10;
    cVar3 = *(char *)(lVar11 + -2);
    if (cVar3 != *(char *)(lVar15 + uVar10)) break;
  }
LAB_0385522c:
  lVar11 = uVar17 * 2;
  uVar16 = (uint)uVar17;
  uVar17 = (ulong)(uVar16 + 1);
  puVar2 = param_1 + lVar11;
  if (0x7f < uVar16) {
    puVar2 = param_1;
  }
  *puVar2 = uVar1;
  puVar2[1] = (uint)uVar18 & 0xffff | iVar14 << 0x10;
LAB_03855250:
  iVar14 = iVar14 + 1;
  if (iVar14 == iVar5) goto LAB_038551e0;
  goto LAB_0385525c;
}

