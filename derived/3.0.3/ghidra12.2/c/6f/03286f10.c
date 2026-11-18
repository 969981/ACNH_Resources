
void FUN_03286f10(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *__ptr;
  long *plVar13;
  long local_68;
  byte *local_60;
  
  if (param_1[4] != 0) {
    if (*(char *)((long)param_1 + 0x57e) != '\0') {
      *(undefined1 *)((long)param_1 + 0x57f) = 0;
      *(undefined2 *)((long)param_1 + 0x57d) = 0;
      FUN_006d8678(&local_68,"ButtonEx:%p",param_1);
      puVar6 = PTR_DAT_04bc8f40;
      plVar13 = *(long **)PTR_DAT_04bc8f40;
      (**(code **)(local_68 + 0x18))(&local_68);
      if (local_60 == (byte *)0x0) {
        if ((int)plVar13[3] != 0) {
LAB_03286fc4:
          uVar12 = *(undefined8 *)puVar6;
          (**(code **)(local_68 + 0x18))(&local_68);
          FUN_032ad5a0(uVar12,local_60);
        }
      }
      else {
        lVar10 = 0;
        do {
          if (local_60[lVar10] == 0) {
LAB_03286fec:
            uVar8 = (uint)lVar10;
joined_r0x03286fec:
            if (uVar8 != 0) {
              uVar2 = uVar8 & 3;
              pbVar7 = local_60;
              if (uVar8 < 4) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar8 = uVar8 & 0xfffffffc;
                uVar9 = 0xffffffff;
                do {
                  uVar8 = uVar8 - 4;
                  uVar3 = crc32b(uVar9,(uint)*pbVar7,0x4c11db7);
                  uVar3 = crc32b(uVar3,(uint)pbVar7[1],0x4c11db7);
                  uVar3 = crc32b(uVar3,(uint)pbVar7[2],0x4c11db7);
                  pbVar1 = pbVar7 + 3;
                  pbVar7 = pbVar7 + 4;
                  uVar9 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
                } while (uVar8 != 0);
              }
              while (uVar2 != 0) {
                uVar2 = uVar2 - 1;
                uVar9 = crc32b(uVar9,(uint)*pbVar7,0x4c11db7);
                pbVar7 = pbVar7 + 1;
              }
              uVar9 = ~uVar9;
              lVar10 = *plVar13;
              goto joined_r0x0328706c;
            }
            break;
          }
          if (local_60[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_03286fec;
          }
          if (local_60[lVar10 + 2] == 0) {
            uVar8 = (int)lVar10 + 2;
            goto joined_r0x03286fec;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        uVar9 = 0;
        lVar10 = *plVar13;
joined_r0x0328706c:
        if (lVar10 != 0) {
          if (uVar9 < *(uint *)(lVar10 + 0x20)) {
            lVar10 = *(long *)(lVar10 + 8);
          }
          else {
            if (uVar9 <= *(uint *)(lVar10 + 0x20)) goto LAB_03286fc4;
            lVar10 = *(long *)(lVar10 + 0x10);
          }
          goto joined_r0x0328706c;
        }
      }
    }
    plVar13 = DAT_0572baa0;
    plVar11 = param_1 + 1;
    if (*plVar11 != 0) {
      lVar10 = param_1[2];
      lVar5 = param_1[3];
      param_1[3] = 0;
      *plVar11 = 0;
      param_1[2] = 0;
      if ((long *)*plVar13 == plVar11) {
        *plVar13 = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar5;
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1);
    puVar4 = (undefined1 *)0x0;
    if (param_1[0xae] != 0) {
      puVar4 = &LAB_0328ba6c;
    }
    if (puVar4 != (undefined1 *)0x0) {
      FUN_032c6840(param_1[0xae] + 8);
      plVar13 = (long *)param_1[0xae];
      param_1[0xae] = 0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    puVar4 = (undefined1 *)0x0;
    if (param_1[0xb1] != 0) {
      puVar4 = &LAB_0328ba70;
    }
    if (puVar4 != (undefined1 *)0x0) {
      FUN_032c6840();
      __ptr = (undefined8 *)param_1[0xb1];
      param_1[0xb1] = 0;
      if (__ptr != (undefined8 *)0x0) {
        FUN_032c6840(__ptr);
        plVar13 = (long *)*__ptr;
        __ptr[4] = 0;
        __ptr[5] = 0;
        __ptr[3] = 0;
        if (plVar13 != (long *)0x0) {
          lVar10 = __ptr[1];
          lVar5 = __ptr[2];
          __ptr[2] = 0;
          *__ptr = 0;
          __ptr[1] = 0;
          if ((undefined8 *)*plVar13 == __ptr) {
            *plVar13 = lVar5;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 8) = lVar10;
          }
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x10) = lVar5;
          }
        }
        __ptr[1] = 0;
        __ptr[2] = 0;
        *__ptr = 0;
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(__ptr);
        }
        else {
          plVar13 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x38))(plVar13,__ptr);
          }
        }
      }
    }
    FUN_032c6840(param_1 + 0x91);
    FUN_032c6840(param_1 + 0x86);
    plVar13 = DAT_0572ba48;
    plVar11 = (long *)param_1[0x84];
    if ((plVar11 != (long *)0x0) && (*plVar11 != 0)) {
      lVar10 = plVar11[1];
      lVar5 = plVar11[2];
      plVar11[2] = 0;
      *plVar11 = 0;
      plVar11[1] = 0;
      if ((long *)*plVar13 == plVar11) {
        *plVar13 = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar5;
      }
    }
    plVar13 = (long *)param_1[0x85];
    param_1[0x85] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))();
    }
    lVar10 = param_1[0x84];
    param_1[0x84] = 0;
    if (lVar10 != 0) {
      FUN_0328b958();
    }
    FUN_032c1bf0(param_1 + 0x40);
    FUN_03289bec(param_1 + 0x40);
    FUN_032ae1e0(param_1 + 6);
    if ((long *)param_1[0x10] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x10] + 8))();
      param_1[0x10] = 0;
    }
    if ((long *)param_1[0x16] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x16] + 8))();
      param_1[0x16] = 0;
    }
    if ((long *)param_1[0x1c] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1c] + 8))();
      param_1[0x1c] = 0;
    }
    if ((long *)param_1[0x22] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x22] + 8))();
      param_1[0x22] = 0;
    }
    if ((long *)param_1[0x28] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x28] + 8))();
      param_1[0x28] = 0;
    }
    if ((long *)param_1[0x2e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x2e] + 8))();
      param_1[0x2e] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((long *)param_1[0x9d] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x9d] + 8))();
      param_1[0x9d] = 0;
    }
    if ((long *)param_1[0xa3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xa3] + 8))();
      param_1[0xa3] = 0;
    }
    if ((long *)param_1[0xa9] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xa9] + 8))();
      param_1[0xa9] = 0;
    }
  }
  return;
}

