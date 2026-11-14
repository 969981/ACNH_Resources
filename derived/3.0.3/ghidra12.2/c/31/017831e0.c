
void FUN_017831e0(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long local_68;
  
  lVar10 = *(long *)(param_1 + 0x1150);
  if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x30))) {
    lVar11 = 0;
    do {
      iVar4 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + lVar11 * 8) + 0xb8)
              )();
      if (0 < iVar4) {
        uVar9 = 0;
        do {
          plVar5 = (long *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
          (**(code **)(*plVar5 + 200))(&local_70,plVar5,uVar9 & 0xffffffff);
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          lVar6 = local_68;
          (**(code **)(DAT_0528ccd0 + 0x18))(&DAT_0528ccd0);
          if (lVar6 == DAT_0528ccd8) {
LAB_01783364:
            lVar6 = *(long *)(param_1 + 0x1150);
            if (lVar6 != 0) {
              lVar7 = **(long **)(*(long *)(lVar6 + 0x38) + (long)(int)lVar11 * 8);
              if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
                puVar1 = (uint *)(*(long *)(lVar7 + 0x10) + uVar9 * 4);
                if ((long)*(int *)(lVar7 + 8) <= (long)uVar9) {
                  puVar1 = (uint *)0x0;
                }
                *puVar1 = *puVar1 & 0xffffffbf;
                lVar6 = *(long *)(param_1 + 0x1150);
                if (lVar6 == 0) goto LAB_01783270;
              }
              lVar6 = **(long **)(*(long *)(lVar6 + 0x38) + (long)(int)lVar11 * 8);
              if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
                lVar7 = uVar9 * 4;
                puVar1 = (uint *)(*(long *)(lVar6 + 0x10) + lVar7);
                if ((long)*(int *)(lVar6 + 8) <= (long)uVar9) {
                  puVar1 = (uint *)0x0;
                }
                *puVar1 = *puVar1 & 0xfffffbff;
                *(uint *)(*(long *)(lVar6 + 0x10) + lVar7) =
                     *(uint *)(*(long *)(lVar6 + 0x10) + lVar7) & 0xfffffeff;
              }
            }
          }
          else {
            uVar8 = 0;
            bVar3 = true;
            do {
              lVar6 = local_68 + 2 + uVar8;
              cVar2 = *(char *)(lVar6 + -2);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8)) break;
              if (cVar2 == '\0') {
                if (bVar3) goto LAB_01783364;
                break;
              }
              cVar2 = *(char *)(lVar6 + -1);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8 + 1)) break;
              if (cVar2 == '\0') goto LAB_01783364;
              cVar2 = *(char *)(local_68 + 2 + uVar8);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8 + 2)) break;
              if (cVar2 == '\0') goto LAB_01783364;
              bVar3 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
          }
LAB_01783270:
          uVar9 = uVar9 + 1;
          iVar4 = (**(code **)(*(long *)**(undefined8 **)(*(long *)(lVar10 + 0x38) + lVar11 * 8) +
                              0xb8))();
        } while ((long)uVar9 < (long)iVar4);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar10 + 0x30));
  }
  return;
}

