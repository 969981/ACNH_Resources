
long * FUN_03ca21a0(long *param_1,undefined8 param_2,uint param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *local_90;
  undefined *local_88;
  char local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_7a = '\0';
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_90,param_2,0xffffffff,0);
  puVar2 = PTR_LAB_04bd1da8;
  plVar12 = (long *)0x0;
  if ((int)param_1[1] == 1) {
    plVar10 = (long *)(*param_1 + 8);
    if ((long *)*plVar10 != plVar10) {
      lVar14 = (long)*(int *)(*param_1 + 0x1c);
      plVar13 = (long *)(*plVar10 - lVar14);
      do {
        uVar7 = (**(code **)(*plVar13 + 0x18))(plVar13,&local_90);
        if ((uVar7 & 1) != 0) {
          plVar12 = plVar13;
          if ((int)plVar13[0x15] != 0) {
            lVar11 = plVar13[0x13];
            if ((int)plVar13[0x15] < 1) {
              lVar11 = 0;
            }
            plVar12 = (long *)0x0;
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 - *(int *)((long)plVar13 + 0xac));
            }
          }
          iVar9 = (int)plVar12[3];
          if (iVar9 == 0) {
            if ((long *)plVar12[4] == param_1) goto joined_r0x03ca2688;
            *(undefined4 *)(plVar12 + 3) = 1;
            plVar6 = (long *)(**(code **)(*plVar12 + 0x20))(plVar12);
            (**(code **)(*plVar6 + 0x18))(plVar6,puVar2,0);
            iVar9 = (int)plVar12[3];
          }
          if (iVar9 == 1) {
            lVar14 = *(long *)PTR_DAT_04bb2698;
            if (lVar14 == 0) goto LAB_03ca2548;
            goto LAB_03ca2348;
          }
        }
        plVar13 = (long *)(*(long *)((long)plVar13 + lVar14) - lVar14);
      } while (plVar13 != (long *)((long)plVar10 - lVar14));
    }
    puVar2 = PTR_DAT_04bb2698;
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      plVar12 = malloc(0xd8);
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd8,8);
      }
    }
    FUN_03ca3de4(plVar12,param_1);
    FUN_03ca4210(plVar12,param_2,param_3 & 1,*(undefined1 *)*param_1);
    puVar3 = PTR_LAB_04bd1da8;
    if ((char)plVar12[0x1a] == '\0') {
      plVar10 = (long *)(*param_1 + 0x20);
      if ((long *)*plVar10 != plVar10) {
        lVar14 = (long)*(int *)(*param_1 + 0x34);
        plVar13 = (long *)(*plVar10 - lVar14);
        do {
          uVar7 = (**(code **)(*plVar13 + 0x18))(plVar13,&local_90);
          if ((uVar7 & 1) != 0) {
            plVar6 = plVar13;
            if ((int)plVar13[0x15] != 0) {
              lVar11 = plVar13[0x13];
              if ((int)plVar13[0x15] < 1) {
                lVar11 = 0;
              }
              plVar6 = (long *)0x0;
              if (lVar11 != 0) {
                plVar6 = (long *)(lVar11 - *(int *)((long)plVar13 + 0xac));
              }
            }
            iVar9 = (int)plVar6[3];
            if (iVar9 == 0) {
              if ((long *)plVar6[4] == param_1) {
                FUN_03ca28d4(plVar12);
                plVar12 = plVar6;
                break;
              }
              *(undefined4 *)(plVar6 + 3) = 1;
              plVar8 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6);
              (**(code **)(*plVar8 + 0x18))(plVar8,puVar3,0);
              iVar9 = (int)plVar6[3];
            }
            if (iVar9 == 1) {
              local_78 = *(undefined8 *)(*(long *)(plVar12[4] + 0x28) + 0x40);
              uStack_70 = 0;
              pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
              nn::os::LockMutex(pMVar1);
              puVar3 = PTR_DAT_04bd44c8;
              local_68 = *(undefined8 *)PTR_DAT_04bd44c8;
              *(undefined8 **)PTR_DAT_04bd44c8 = &local_78;
              puVar5 = PTR_LAB_04bd44e0;
              puVar4 = PTR_LAB_04bd44d8;
              FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
              (**(code **)(*plVar12 + 0x10))(plVar12);
              (**(code **)(*plVar12 + 8))(plVar12);
              *(undefined8 *)puVar3 = local_68;
              FUN_00367a40(puVar4,puVar5,0);
              nn::os::UnlockMutex(pMVar1);
              lVar14 = *(long *)puVar2;
              if (lVar14 == 0) {
LAB_03ca2548:
                plVar12 = malloc(0x98);
              }
              else {
LAB_03ca2348:
                lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar12 = (long *)(lVar14 + 8);
                if (lVar11 != 0) {
                  plVar12 = (long *)(lVar11 + 0xa8);
                }
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) {
                  plVar12 = (long *)0x0;
                }
                else {
                  plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x98,8);
                }
              }
              *(undefined4 *)(plVar12 + 3) = 0;
              plVar12[2] = 0;
              plVar12[6] = (long)(plVar12 + 5);
              plVar12[7] = 0;
              plVar12[4] = (long)param_1;
              plVar12[5] = (long)(plVar12 + 5);
              *plVar12 = (long)(PTR_DAT_04bd44f0 + 0x10);
              plVar12[1] = 0;
              lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 8);
              FUN_00385350(plVar12 + 8);
              plVar12[10] = lVar14;
              plVar12[0xb] = (long)(plVar12 + 0xb);
              plVar12[0xc] = (long)(plVar12 + 0xb);
              plVar12[0xd] = (long)(plVar12 + 0xd);
              plVar12[0xe] = (long)(plVar12 + 0xd);
              plVar12[0xf] = (long)(plVar12 + 0xf);
              puVar2 = PTR_DAT_04bd44f8 + 0x10;
              plVar12[0x10] = (long)(plVar12 + 0xf);
              plVar12[0x11] = (long)plVar12;
              plVar12[8] = (long)puVar2;
              plVar12[9] = 0;
              puVar2 = PTR_DAT_04bd4500 + 0x10;
              plVar12[0x12] = (long)plVar13;
              *plVar12 = (long)puVar2;
              plVar6 = plVar13 + 0x13;
              lVar14 = *plVar6;
              plVar10 = (long *)((long)*(int *)((long)plVar13 + 0xac) + (long)plVar12);
              *plVar6 = (long)plVar10;
              *plVar10 = lVar14;
              plVar10[1] = (long)plVar6;
              if (lVar14 != 0) {
                *(long **)(lVar14 + 8) = plVar10;
              }
              *(int *)(plVar13 + 0x15) = (int)plVar13[0x15] + 1;
              break;
            }
          }
          plVar13 = (long *)(*(long *)((long)plVar13 + lVar14) - lVar14);
        } while (plVar13 != (long *)((long)plVar10 - lVar14));
      }
    }
  }
joined_r0x03ca2688:
  if (local_7a != '\0') {
    (**(code **)(local_90 + 0x18))(&local_90);
    puVar2 = local_88;
    if (local_88 != (undefined *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_88);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_88);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,puVar2);
        }
      }
    }
  }
  return plVar12;
}

