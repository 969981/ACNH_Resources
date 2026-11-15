
void FUN_02118490(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  long *plVar13;
  undefined *local_70;
  undefined1 *local_68;
  
  if (*(int *)(param_1 + 0x1e8) != 0) {
    uVar12 = 3;
    plVar13 = *(long **)(param_1 + 0x1f0);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    plVar4 = plVar13 + *(int *)(param_1 + 0x1e8);
    do {
      lVar10 = *plVar13;
      if (*(int *)(lVar10 + 0xe8) != 0) {
        lVar2 = lVar10 + 0xf8;
        local_68 = &DAT_040aaf55;
        local_70 = puVar1;
        (**(code **)(*(long *)(lVar10 + 0xf8) + 0x18))(lVar2);
        (**(code **)(*(long *)(lVar10 + 0xf8) + 0x18))(lVar2);
        puVar11 = *(undefined1 **)(lVar10 + 0x100);
        (**(code **)(local_70 + 0x18))(&local_70);
        if (puVar11 == local_68) {
LAB_021184f0:
          *(undefined4 *)(DAT_053e0208 + 0xa20) = *(undefined4 *)(lVar10 + 0xe8);
        }
        else {
          uVar9 = 0;
          bVar8 = true;
          lVar3 = *(long *)(lVar10 + 0x100) + 2;
          do {
            lVar5 = lVar3 + uVar9;
            cVar7 = *(char *)(lVar5 + -2);
            if (cVar7 != local_68[uVar9]) break;
            if (cVar7 == '\0') {
              if (bVar8) goto LAB_021184f0;
              break;
            }
            cVar7 = *(char *)(lVar5 + -1);
            if (cVar7 != local_68[uVar9 + 1]) break;
            if (cVar7 == '\0') goto LAB_021184f0;
            cVar7 = *(char *)(lVar3 + uVar9);
            if (cVar7 != local_68[uVar9 + 2]) break;
            if (cVar7 == '\0') goto LAB_021184f0;
            bVar8 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          local_70 = PTR_DAT_04bb2020 + 0x10;
          local_68 = &DAT_040716fb;
          (**(code **)(*(long *)(lVar10 + 0xf8) + 0x18))(lVar2);
          (**(code **)(*(long *)(lVar10 + 0xf8) + 0x18))(lVar2);
          puVar11 = *(undefined1 **)(lVar10 + 0x100);
          (**(code **)(local_70 + 0x18))(&local_70);
          if (puVar11 == local_68) {
LAB_021186a0:
            *(undefined4 *)(DAT_053e0208 + 0xa24) = *(undefined4 *)(lVar10 + 0xe8);
          }
          else {
            uVar9 = 0;
            bVar8 = true;
            lVar2 = *(long *)(lVar10 + 0x100) + 2;
            do {
              lVar3 = lVar2 + uVar9;
              cVar7 = *(char *)(lVar3 + -2);
              if (cVar7 != local_68[uVar9]) break;
              if (cVar7 == '\0') {
                if (bVar8) goto LAB_021186a0;
                break;
              }
              cVar7 = *(char *)(lVar3 + -1);
              if (cVar7 != local_68[uVar9 + 1]) break;
              if (cVar7 == '\0') goto LAB_021186a0;
              cVar7 = *(char *)(lVar2 + uVar9);
              if (cVar7 != local_68[uVar9 + 2]) break;
              if (cVar7 == '\0') goto LAB_021186a0;
              bVar8 = uVar9 < 0x7fffe;
              uVar9 = uVar9 + 3;
            } while (uVar9 != 0x80001);
            bVar8 = 0x11 < uVar12;
            uVar9 = (ulong)uVar12;
            uVar12 = uVar12 + 1;
            puVar6 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20) + uVar9;
            if (bVar8) {
              puVar6 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
            }
            *puVar6 = *(undefined4 *)(lVar10 + 0xe8);
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar4);
  }
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (*(int *)(DAT_053e0208 + 0xa28) = *(int *)(param_1 + 0xf0), DAT_055cb230 != 0)) {
    *(undefined4 *)(DAT_055cb230 + 0x550) = *(undefined4 *)(param_1 + 0xf0);
  }
  return;
}

