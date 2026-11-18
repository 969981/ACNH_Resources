
undefined8 FUN_037385c0(long param_1,int *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined2 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  local_65 = 0;
  local_70 = 8;
  local_78 = local_6c;
  local_6c[0] = 0;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  if (DAT_05ab5ea8 != 0) {
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar11 = *(long *)(DAT_05ab7608 + 8), lVar11 == 0)) {
      uVar9 = *(undefined2 *)(DAT_05ab5ea8 + 0x2a);
    }
    else if ((*(long **)(lVar11 + 0x60) == (long *)0x0) ||
            (puVar4 = (undefined8 *)**(long **)(lVar11 + 0x60), puVar4 == (undefined8 *)0x0)) {
      uVar9 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar9 = *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar11 + 0x60) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar11 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    uVar5 = FUN_0376b510(&local_80,uVar9);
    if ((uVar5 & 1) != 0) {
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      puVar13 = local_78;
      (**(code **)(*param_3 + 0x18))(param_3);
      if (puVar13 == (undefined1 *)param_3[1]) {
LAB_03738740:
        iVar10 = 0;
LAB_03738744:
        *param_2 = iVar10;
        return 1;
      }
      uVar5 = 0;
      bVar3 = true;
      do {
        if (local_78[uVar5] != ((undefined1 *)param_3[1])[uVar5]) break;
        if (local_78[uVar5] == '\0') {
          if (bVar3) goto LAB_03738740;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar12 = *(long **)(param_1 + 0xe8);
    iVar10 = 1;
    plVar1 = plVar12 + *(int *)(param_1 + 0xe0);
    do {
      lVar11 = *plVar12;
      if ((*(ushort *)(lVar11 + 0x114) >> 8 & 1) != 0) {
        plVar7 = (long *)(lVar11 + 0x10);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        puVar13 = *(undefined1 **)(lVar11 + 0x18);
        (**(code **)(local_80 + 0x18))(&local_80);
        if (puVar13 != local_78) {
          uVar5 = 0;
          bVar3 = true;
          lVar6 = *(long *)(lVar11 + 0x18) + 2;
          do {
            lVar8 = lVar6 + uVar5;
            cVar2 = *(char *)(lVar8 + -2);
            if (cVar2 != local_78[uVar5]) break;
            if (cVar2 == '\0') {
              if (bVar3) goto LAB_03738780;
              break;
            }
            cVar2 = *(char *)(lVar8 + -1);
            if (cVar2 != local_78[uVar5 + 1]) break;
            if (cVar2 == '\0') goto LAB_03738780;
            cVar2 = *(char *)(lVar6 + uVar5);
            if (cVar2 != local_78[uVar5 + 2]) break;
            if (cVar2 == '\0') goto LAB_03738780;
            bVar3 = uVar5 < 0x7fffe;
            uVar5 = uVar5 + 3;
          } while (uVar5 != 0x80001);
          (**(code **)(*(long *)(lVar11 + 0x10) + 0x18))(plVar7);
          (**(code **)(*(long *)(lVar11 + 0x10) + 0x18))(plVar7);
          lVar8 = *(long *)(lVar11 + 0x18);
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = param_3[1];
          if (lVar8 == lVar6) goto LAB_03738744;
          uVar5 = 0;
          bVar3 = true;
          lVar11 = *(long *)(lVar11 + 0x18) + 2;
          do {
            lVar8 = lVar11 + uVar5;
            cVar2 = *(char *)(lVar8 + -2);
            if (cVar2 != *(char *)(lVar6 + uVar5)) break;
            if (cVar2 == '\0') {
              if (bVar3) goto LAB_03738744;
              break;
            }
            cVar2 = *(char *)(lVar8 + -1);
            if (cVar2 != *(char *)(lVar6 + uVar5 + 1)) break;
            if (cVar2 == '\0') goto LAB_03738744;
            cVar2 = *(char *)(lVar11 + uVar5);
            if (cVar2 != *(char *)(lVar6 + uVar5 + 2)) break;
            if (cVar2 == '\0') goto LAB_03738744;
            bVar3 = uVar5 < 0x7fffe;
            uVar5 = uVar5 + 3;
          } while (uVar5 != 0x80001);
          iVar10 = iVar10 + 1;
        }
      }
LAB_03738780:
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  return 0;
}

