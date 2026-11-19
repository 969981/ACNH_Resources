
void FUN_038f0aa0(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  void *__ptr;
  byte bVar10;
  long lVar11;
  
  do {
    bVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x18));
    if (bVar2 == 0) {
      if (*(int *)(param_1 + 0x38) < 1) {
        lVar11 = *(long *)(param_1 + 0x28);
        goto LAB_038f0ba4;
      }
      **(undefined1 **)(param_1 + 0x30) = 0;
    }
    else {
      (**(code **)(**(long **)(param_2 + 8) + 0x50))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),(long *)(param_1 + 0x28),
                 (uint)bVar2);
      if ((int)(uint)bVar2 < *(int *)(param_1 + 0x38)) {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + (ulong)bVar2) = 0;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x28);
LAB_038f0ba4:
        (**(code **)(lVar11 + 0x18))(param_1 + 0x28);
      }
    }
    bVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x18));
    if (bVar2 != 0) {
      FUN_038f1db0(param_1,bVar2,param_3);
      bVar10 = 0;
      do {
        uVar6 = (**(code **)**(undefined8 **)(param_2 + 8))
                          (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                           *(undefined4 *)(param_2 + 0x18));
        uVar1 = (uint)uVar6 & 0xff;
        (**(code **)(**(long **)(param_2 + 8) + 0x50))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),param_4,uVar1);
        if ((int)uVar1 < (int)param_4[2]) {
          *(undefined1 *)(param_4[1] + (uVar6 & 0xff)) = 0;
        }
        else {
          (**(code **)(*param_4 + 0x18))(param_4);
        }
        uVar6 = (**(code **)**(undefined8 **)(param_2 + 8))
                          (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                           *(undefined4 *)(param_2 + 0x18));
        uVar1 = (uint)uVar6 & 0xff;
        (**(code **)(**(long **)(param_2 + 8) + 0x50))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),param_5,uVar1);
        if ((int)uVar1 < (int)param_5[2]) {
          *(undefined1 *)(param_5[1] + (uVar6 & 0xff)) = 0;
        }
        else {
          (**(code **)(*param_5 + 0x18))(param_5);
        }
        FUN_038f2500(param_1,param_4,param_5,param_3);
        bVar10 = bVar10 + 1;
      } while (bVar10 < bVar2);
    }
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 8))
                      (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x18));
    if (uVar4 != 0) {
      uVar1 = (uint)uVar4;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar9 = malloc((ulong)(uVar1 + 1));
      }
      else {
        plVar8 = param_3;
        if (param_3 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            pvVar9 = (void *)0x0;
            goto LAB_038f0d60;
          }
        }
        pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)(uVar1 + 1),8);
      }
LAB_038f0d60:
      (**(code **)(**(long **)(param_2 + 8) + 0x58))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),pvVar9,uVar1);
      *(undefined1 *)((long)pvVar9 + (ulong)uVar4) = 0;
      __ptr = *(void **)(param_1 + 0x80);
      if (__ptr != pvVar9) {
        if ((__ptr != (void *)0x0) && (*(char *)(param_1 + 0x8c) != '\0')) {
          if (DAT_05ae7600 == 0) {
            free(__ptr);
          }
          else {
            plVar8 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
            }
          }
        }
        *(void **)(param_1 + 0x80) = pvVar9;
        *(uint *)(param_1 + 0x88) = uVar1;
        *(undefined1 *)(param_1 + 0x8c) = 1;
      }
    }
    uVar3 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x18));
    switch(uVar3) {
    case 1:
      param_1 = FUN_038f3a90(param_1,param_3);
      break;
    case 2:
      uVar5 = FUN_038f3a90(param_1,param_3);
      FUN_038f0aa0(uVar5,param_2,param_3,param_4,param_5);
    case 0:
    case 4:
      param_1 = FUN_038f3940(param_1,param_3);
      if (param_1 == 0) {
switchD_038f0e10_caseD_3:
        return;
      }
      break;
    default:
      goto switchD_038f0e10_caseD_3;
    }
  } while( true );
}

