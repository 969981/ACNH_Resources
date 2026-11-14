
void FUN_018a9e30(long param_1,byte param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long local_78;
  uint local_70;
  uint uStack_6c;
  undefined4 local_68;
  
  *(byte *)(param_1 + 0x790) = (param_2 ^ 0xff) & 1;
  if ((~param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x38d) = 0;
    FUN_0194a710(&local_78,2);
    puVar9 = PTR_DAT_04bb3ff0;
    puVar8 = PTR_DAT_04bb3fe8;
    puVar7 = PTR_DAT_04bb3350;
    puVar6 = PTR_DAT_04bb27c0;
    puVar1 = PTR_DAT_04bb3fd0 + 0x10;
    do {
      switch(local_68) {
      case 0:
        uVar15 = local_70;
        if (*(uint *)(local_78 + 0x288) <= local_70) {
          uVar15 = 0;
        }
        lVar13 = *(long *)(local_78 + 0x290) + (long)(int)uVar15 * 0x30;
        uVar15 = uStack_6c;
        if (*(uint *)(lVar13 + 0x10) <= uStack_6c) {
          uVar15 = 0;
        }
        puVar2 = (uint *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar15 * 4);
        lVar13 = *(long *)puVar6;
        break;
      case 1:
        puVar2 = (uint *)(local_78 + 2000);
        lVar13 = *(long *)puVar6;
        break;
      case 2:
        puVar2 = (uint *)(local_78 + 0x860);
        lVar13 = *(long *)puVar6;
        break;
      case 3:
        puVar2 = (uint *)(local_78 + 0x8c4);
        lVar13 = *(long *)puVar6;
        break;
      case 4:
        puVar2 = (uint *)(local_78 + 0x8c8);
        lVar13 = *(long *)puVar6;
        break;
      case 5:
        goto switchD_018a9ed4_caseD_5;
      default:
        lVar13 = *(long *)puVar6;
        puVar2 = (uint *)PTR_DAT_04bb3238;
      }
      if (lVar13 != 0) {
        uVar15 = *puVar2;
        if ((((uVar15 == 0) ||
             (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                  ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
            ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
          plVar14 = (long *)0x0;
        }
        if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar13 = *(long *)puVar6;
          iVar10 = (**(code **)(*plVar11 + 0x60))();
          if (iVar10 < 0x11) {
            uVar15 = 1;
          }
          else {
            if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_018aa2c0;
            uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_018aa2c0:
          uVar15 = 0;
        }
        if (plVar14 != (long *)0x0) {
          lVar13 = plVar14[0x2a];
          if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
            *(undefined **)puVar8 = puVar1;
            __cxa_guard_release(puVar9);
          }
          uVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar8);
          uVar3 = 0;
          if ((int)lVar13 == 1) {
            uVar3 = uVar15;
          }
          if (((((uVar12 & 1) != 0) && (uVar3 != 0)) &&
              ((puVar2 = (uint *)(plVar14 + 0x49), (*puVar2 >> 9 & 1) == 0 &&
               ((((*puVar2 >> 8 & 1) == 0 && ((*puVar2 >> 9 & 1) == 0)) && ((*puVar2 >> 1 & 1) == 0)
                ))))) && ((*puVar2 >> 8 & 1) == 0)) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 & 0xfffffdff | 0x200;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((long *)plVar14[0x16] != plVar14 + 0x15) {
              lVar13 = (long)*(int *)((long)plVar14 + 0xbc);
              plVar11 = (long *)(plVar14[0x16] - lVar13);
              do {
                (**(code **)(*plVar11 + 0xb0))(plVar11);
                plVar11 = (long *)(*(long *)((long)plVar11 + lVar13 + 8) - lVar13);
              } while (plVar11 != (long *)((long)(plVar14 + 0x15) - lVar13));
            }
          }
        }
      }
      FUN_0194afc0(&local_78);
    } while( true );
  }
  *(undefined1 *)(param_1 + 0x38d) = 1;
  FUN_0194a710(&local_78,2);
  puVar9 = PTR_DAT_04bb3ff0;
  puVar8 = PTR_DAT_04bb3fe8;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  puVar1 = PTR_DAT_04bb3fd0 + 0x10;
  do {
    switch(local_68) {
    case 0:
      uVar15 = local_70;
      if (*(uint *)(local_78 + 0x288) <= local_70) {
        uVar15 = 0;
      }
      lVar13 = *(long *)(local_78 + 0x290) + (long)(int)uVar15 * 0x30;
      uVar15 = uStack_6c;
      if (*(uint *)(lVar13 + 0x10) <= uStack_6c) {
        uVar15 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar15 * 4);
      lVar13 = *(long *)puVar6;
      break;
    case 1:
      puVar2 = (uint *)(local_78 + 2000);
      lVar13 = *(long *)puVar6;
      break;
    case 2:
      puVar2 = (uint *)(local_78 + 0x860);
      lVar13 = *(long *)puVar6;
      break;
    case 3:
      puVar2 = (uint *)(local_78 + 0x8c4);
      lVar13 = *(long *)puVar6;
      break;
    case 4:
      puVar2 = (uint *)(local_78 + 0x8c8);
      lVar13 = *(long *)puVar6;
      break;
    case 5:
switchD_018a9ed4_caseD_5:
      return;
    default:
      lVar13 = *(long *)puVar6;
      puVar2 = (uint *)PTR_DAT_04bb3238;
    }
    if (lVar13 != 0) {
      uVar15 = *puVar2;
      if (((uVar15 == 0) ||
          (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                               ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
         (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar15)))) {
        plVar14 = (long *)0x0;
      }
      if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
        lVar13 = *(long *)puVar6;
        iVar10 = (**(code **)(*plVar11 + 0x60))();
        if (iVar10 < 0x11) {
          uVar15 = 1;
        }
        else {
          if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_018aa010;
          uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_018aa010:
        uVar15 = 0;
      }
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[0x2a];
        if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
          *(undefined **)puVar8 = puVar1;
          __cxa_guard_release(puVar9);
        }
        uVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar8);
        uVar3 = 0;
        if ((int)lVar13 == 1) {
          uVar3 = uVar15;
        }
        if (((((uVar12 & 1) != 0) && (uVar3 != 0)) &&
            ((puVar2 = (uint *)(plVar14 + 0x49), (*puVar2 >> 9 & 1) != 0 ||
             ((*puVar2 >> 8 & 1) != 0)))) &&
           ((((*puVar2 >> 10 & 1) == 0 && ((*puVar2 >> 1 & 1) == 0)) &&
            (((*puVar2 >> 9 & 1) != 0 || ((*puVar2 >> 8 & 1) != 0)))))) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 & 0xfffffbff | 0x400;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long *)plVar14[0x16] != plVar14 + 0x15) {
            lVar13 = (long)*(int *)((long)plVar14 + 0xbc);
            plVar11 = (long *)(plVar14[0x16] - lVar13);
            do {
              (**(code **)(*plVar11 + 0xb8))(plVar11);
              plVar11 = (long *)(*(long *)((long)plVar11 + lVar13 + 8) - lVar13);
            } while (plVar11 != (long *)((long)(plVar14 + 0x15) - lVar13));
          }
        }
      }
    }
    FUN_0194afc0(&local_78);
  } while( true );
}

