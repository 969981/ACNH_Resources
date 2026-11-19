
undefined * FUN_03954f70(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  uint uVar13;
  byte *pbVar14;
  ulong local_60;
  ulong local_58;
  
  if (*(long *)(param_1 + 8) == 0) {
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    return PTR_DAT_04c4b988;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar10 = param_2[1];
  local_60 = 0;
  local_58 = 0;
  nn::os::GetCurrentStackInfo(&local_58,&local_60);
  if ((uVar10 < local_58) || (local_60 + local_58 <= uVar10)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    return (undefined *)param_2[1];
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  lVar9 = DAT_05ae7600;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 != 0) {
    if ((int)uVar7 < 2) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar7 = uVar7 - 1;
      do {
        iVar1 = uVar7 + uVar13;
        if (iVar1 < 0 != SCARRY4(uVar7,uVar13)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        if (uVar2 < *(uint *)(param_1 + 0x10)) {
          plVar12 = *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar2 * 8);
        }
        else {
          plVar12 = (long *)0x0;
        }
        (**(code **)(*plVar12 + 0x18))(plVar12);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        pbVar14 = (byte *)plVar12[1];
        (**(code **)(*param_2 + 0x18))(param_2);
        if (pbVar14 == (byte *)param_2[1]) {
LAB_03955158:
          if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_039551f8;
          plVar12 = *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar2 * 8);
          goto LAB_03955244;
        }
        pbVar14 = (byte *)param_2[1];
        pbVar8 = (byte *)plVar12[1];
        lVar9 = 0x7ffff;
        while( true ) {
          bVar4 = *pbVar8;
          if (bVar4 != *pbVar14) break;
          if (bVar4 == 0) goto LAB_03955158;
          bVar3 = lVar9 == 0;
          pbVar14 = pbVar14 + 1;
          pbVar8 = pbVar8 + 1;
          lVar9 = lVar9 + -1;
          if (bVar3) goto LAB_03955158;
        }
        if (bVar4 < *pbVar14) {
          uVar13 = uVar2 + 1;
        }
        else {
          uVar7 = uVar2;
        }
      } while ((int)uVar13 < (int)uVar7);
      uVar7 = *(uint *)(param_1 + 0x10);
    }
    if (uVar13 < uVar7) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar13 * 8);
    }
    else {
      plVar12 = (long *)0x0;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pbVar14 = (byte *)plVar12[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    if (pbVar14 != (byte *)param_2[1]) {
      pbVar14 = (byte *)param_2[1];
      pbVar8 = (byte *)plVar12[1];
      lVar9 = 0x7ffff;
      do {
        bVar4 = *pbVar8;
        bVar5 = *pbVar14;
        if (bVar4 != bVar5) {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = DAT_05ae7600;
          if (DAT_05ae7600 == 0) {
            plVar12 = malloc(0x18);
          }
          else {
            plVar12 = *(long **)(param_1 + 8);
            if (plVar12 == (long *)0x0) {
              lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar12 = (long *)(lVar9 + 8);
              if (lVar6 != 0) {
                plVar12 = (long *)(lVar6 + 0xa8);
              }
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) {
                plVar12 = (long *)0x0;
                goto LAB_039552f8;
              }
            }
            plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x18,8);
          }
LAB_039552f8:
          FUN_038f1770(plVar12,*(undefined8 *)(param_1 + 8),param_2,8);
          if (bVar4 < bVar5) {
            uVar13 = uVar13 + 1;
          }
          if ((((int)uVar13 < 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 < (int)uVar13)) ||
             (*(int *)(param_1 + 0x14) <= iVar1)) goto LAB_03955244;
          if (iVar1 - uVar13 != 0 && (int)uVar13 <= iVar1) {
            memmove((void *)(*(long *)(param_1 + 0x18) + (ulong)(uVar13 + 1) * 8),
                    (void *)(*(long *)(param_1 + 0x18) + (ulong)uVar13 * 8),
                    (long)(int)((iVar1 - uVar13) * 8));
          }
          *(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar13 * 8) = plVar12;
          goto LAB_03955238;
        }
        if (bVar4 == 0) break;
        bVar3 = lVar9 != 0;
        pbVar14 = pbVar14 + 1;
        pbVar8 = pbVar8 + 1;
        lVar9 = lVar9 + -1;
      } while (bVar3);
    }
    if (uVar13 < *(uint *)(param_1 + 0x10)) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar13 * 8);
    }
    else {
LAB_039551f8:
      plVar12 = (long *)0x0;
    }
    goto LAB_03955244;
  }
  if (DAT_05ae7600 == 0) {
    plVar12 = malloc(0x18);
  }
  else {
    plVar12 = *(long **)(param_1 + 8);
    if (plVar12 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar12 = (long *)(lVar6 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_0395520c;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x18,8);
  }
LAB_0395520c:
  FUN_038f1770(plVar12,*(undefined8 *)(param_1 + 8),param_2,8);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    *(long **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = plVar12;
LAB_03955238:
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_03955244:
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar11 = (undefined *)plVar12[1];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return puVar11;
}

