
undefined8 FUN_03f42970(long *param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong local_f8 [19];
  
  (**(code **)(*param_1 + 0x20))();
  lVar10 = *(long *)(param_2 + 8);
  if ((lVar10 == 0) ||
     (plVar8 = (long *)(*(int *)((long)param_1 + 0x24) + lVar10), plVar8[1] != 0 || *plVar8 != 0)) {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = 0;
  }
  else {
    lVar14 = param_1[4];
    uVar11 = *(byte *)(param_1 + 5) - 1 & 0xff;
    uVar12 = (uint)*param_2;
    if (uVar11 <= *param_2) {
      uVar12 = uVar11;
    }
    *(char *)(lVar10 + 8) = (char)uVar12;
    uVar11 = uVar12;
    do {
      uVar11 = uVar11 - 1;
      if (uVar11 == 0xffffffff) {
        plVar8 = (long *)((long)*(int *)((long)param_1 + 0x24) + *(long *)(param_2 + 8));
        lVar10 = param_1[2];
        param_1[2] = (long)plVar8;
        *plVar8 = lVar10;
        plVar8[1] = (long)(param_1 + 2);
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar8;
        }
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        uVar11 = uVar12;
        if (*(uint *)(param_1 + 5) <= uVar12) {
          uVar11 = 0;
        }
        nn::os::ClearLightEvent((LightEventType *)(param_1[6] + (ulong)uVar11 * 0x40 + 0x30));
        goto LAB_03f42aac;
      }
      uVar13 = uVar11;
      if (*(uint *)(param_1 + 5) <= uVar11) {
        uVar13 = 0;
      }
      lVar10 = *(long *)(param_1[6] + (ulong)uVar13 * 0x40 + 8);
    } while (lVar10 == 0);
    plVar8 = (long *)(*(int *)((long)param_1 + 0x24) + lVar10);
    plVar1 = (long *)((long)*(int *)((long)param_1 + 0x24) + *(long *)(param_2 + 8));
    lVar10 = *plVar8;
    *plVar8 = (long)plVar1;
    *plVar1 = lVar10;
    plVar1[1] = (long)plVar8;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar1;
    }
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
LAB_03f42aac:
    if (*(uint *)(param_1 + 5) <= uVar12) {
      uVar12 = 0;
    }
    plVar8 = (long *)(param_1[6] + (ulong)uVar12 * 0x40 + 8);
    if (*plVar8 == 0) {
      *plVar8 = *(long *)(param_2 + 8);
    }
    *(undefined4 *)(*(long *)(param_2 + 8) + 0x40) = 2;
    if ((int)lVar14 == 0) {
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0xb));
    }
    (**(code **)(*param_1 + 0x28))(param_1);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    uVar12 = 0;
    uVar11 = 0;
    bVar2 = *(byte *)(param_1 + 1);
    while( true ) {
      if ((bVar2 & 1) != 0) {
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      if ((int)param_1[0xd] == 0) {
        uVar13 = 1;
      }
      else {
        lVar15 = param_1[0xe];
        lVar14 = 0;
        lVar16 = (long)(int)param_1[0xd] << 3;
        uVar13 = 1;
        do {
          lVar9 = *(long *)(lVar15 + lVar14 * 8);
          if (((((lVar9 != lVar10) && ((*(byte *)(lVar9 + 0x104) >> 6 & 1) == 0)) &&
               ((uVar6 = nn::os::TryPeekMessageQueue(local_f8,(MessageQueueType *)(lVar9 + 0x30)),
                (uVar6 & 1) == 0 || (local_f8[0] != 1)))) &&
              ((uVar6 = nn::os::TryPeekMessageQueue
                                  (local_f8,(MessageQueueType *)
                                            (*(long *)(lVar15 + lVar14 * 8) + 0x30)),
               (uVar6 & 1) == 0 || (local_f8[0] != 2)))) &&
             ((uVar6 = nn::os::TryPeekMessageQueue
                                 (local_f8,(MessageQueueType *)
                                           (*(long *)(lVar15 + lVar14 * 8) + 0x30)),
              (uVar6 & 1) == 0 || (local_f8[0] != 3)))) {
            lVar9 = *(long *)(lVar15 + lVar14 * 8);
            uVar17 = *(ulong *)(lVar9 + 0xc0);
            uVar7 = nn::os::TryPeekMessageQueue(local_f8,(MessageQueueType *)(lVar9 + 0x30));
            uVar6 = local_f8[0];
            if ((uVar7 & 1) == 0) {
              uVar6 = 0;
            }
            if ((uVar6 != uVar17) &&
               (uVar3 = 1 << (ulong)((uint)lVar14 & 0x1f), (uVar3 & uVar12) == 0)) {
              plVar8 = *(long **)(lVar15 + lVar14 * 8);
              uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,1,1);
              uVar13 = uVar4 & uVar13;
              if ((uVar4 & 1) == 0) {
                uVar3 = 0;
              }
              uVar12 = uVar3 | uVar12;
            }
          }
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + -8;
        } while (lVar16 != 0);
      }
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      if (uVar13 != 0) break;
      uVar11 = uVar11 + 1;
      nn::os::YieldThread();
      bVar2 = *(byte *)(param_1 + 1);
    }
    if (1 < uVar11) {
      FUN_0074fda4(local_f8,&DAT_040a385c,uVar11);
    }
    uVar5 = 1;
  }
  return uVar5;
}

