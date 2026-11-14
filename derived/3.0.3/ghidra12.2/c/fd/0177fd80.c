
void FUN_0177fd80(long param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_60;
  long local_58;
  
  *(uint *)(param_1 + 0x94c) = (param_2 ^ 0xffffffff) & 1;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1150);
    if ((lVar7 != 0) && (plVar5 = *(long **)**(undefined8 **)(lVar7 + 0x38), plVar5 != (long *)0x0))
    {
      iVar4 = (**(code **)(*plVar5 + 0xb8))();
      if (0 < iVar4) {
        uVar9 = 0;
        uVar6 = 0x40;
        if ((param_2 & 1) == 0) {
          uVar6 = 0;
        }
        do {
          plVar5 = *(long **)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x38)
          ;
          (**(code **)(*plVar5 + 200))(&local_60,plVar5,uVar9 & 0xffffffff);
          (**(code **)(local_60 + 0x18))(&local_60);
          (**(code **)(local_60 + 0x18))(&local_60);
          lVar7 = local_58;
          (**(code **)(DAT_0528ccd0 + 0x18))(&DAT_0528ccd0);
          if (lVar7 != DAT_0528ccd8) {
            uVar8 = 0;
            bVar3 = true;
            do {
              lVar7 = local_58 + 2 + uVar8;
              cVar2 = *(char *)(lVar7 + -2);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8)) break;
              if (cVar2 == '\0') {
                if (bVar3) goto LAB_0177fe10;
                break;
              }
              cVar2 = *(char *)(lVar7 + -1);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8 + 1)) break;
              if (cVar2 == '\0') goto LAB_0177fe10;
              cVar2 = *(char *)(local_58 + 2 + uVar8);
              if (cVar2 != *(char *)(DAT_0528ccd8 + uVar8 + 2)) break;
              if (cVar2 == '\0') goto LAB_0177fe10;
              bVar3 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1150);
            if (((lVar7 != 0) && (lVar7 = *(long *)**(undefined8 **)(lVar7 + 0x38), lVar7 != 0)) &&
               (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
              puVar1 = (uint *)(*(long *)(lVar7 + 0x10) + uVar9 * 4);
              if ((long)*(int *)(lVar7 + 8) <= (long)uVar9) {
                puVar1 = (uint *)0x0;
              }
              *puVar1 = *puVar1 & 0xffffffbf | uVar6;
            }
          }
LAB_0177fe10:
          uVar9 = uVar9 + 1;
          iVar4 = (**(code **)(**(long **)**(undefined8 **)
                                            (*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x38) +
                              0xb8))();
        } while ((long)uVar9 < (long)iVar4);
      }
      puVar1 = (uint *)(param_1 + 0x248);
      if ((param_2 & 1) == 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 & 0xffffffbf;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 & 0xffffffbf | 0x40;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  return;
}

