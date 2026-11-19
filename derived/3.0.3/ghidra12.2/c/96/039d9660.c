
void FUN_039d9660(long *param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint local_68 [2];
  undefined **local_60;
  byte *pbStack_58;
  
  if (*(long *)(param_2 + 0x168) == 0) {
LAB_039d99e8:
    bVar2 = *(byte *)(param_2 + 2);
  }
  else {
    if ((long *)param_1[0x61] == param_1 + 0x60) {
LAB_039d97a0:
      if ((long *)param_1[100] == param_1 + 99) {
LAB_039d98b0:
        if ((long *)param_1[0x67] == param_1 + 0x66) goto LAB_039d99e8;
        lVar7 = (long)*(int *)((long)param_1 + 0x344);
        lVar9 = param_1[0x67] - lVar7;
        plVar5 = (long *)(lVar9 + lVar7);
        if (*(long *)(lVar9 + 0x298) != param_2) {
          do {
            plVar5 = (long *)plVar5[1];
            lVar9 = (long)plVar5 - lVar7;
            if (lVar9 == (long)(param_1 + 0x66) - lVar7) goto LAB_039d99e8;
          } while (*(long *)(lVar9 + 0x298) != param_2);
          plVar5 = (long *)(lVar9 + lVar7);
        }
        if (*plVar5 != 0) {
          *(long *)(*plVar5 + 8) = plVar5[1];
        }
        if ((long *)plVar5[1] != (long *)0x0) {
          *(long *)plVar5[1] = *plVar5;
        }
        *plVar5 = 0;
        plVar5[1] = 0;
        *(int *)(param_1 + 0x68) = (int)param_1[0x68] + -1;
        plVar5 = *(long **)(lVar9 + 0x2c8);
        lVar7 = *(long *)(lVar9 + 0x298);
        puVar11 = *(undefined8 **)(lVar9 + 0x2c0);
        FUN_038f4ad0(lVar9 + 0x138);
        *(undefined **)(lVar9 + 0x138) = PTR_DAT_04bb2cd0 + 0x10;
        FUN_038f4940(lVar9 + 0x138);
        FUN_003490c0(lVar9 + 0x18);
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar9);
        if (puVar11 != (undefined8 *)0x0) {
          lVar7 = *(long *)(lVar7 + 0xa8);
          pbStack_58 = (byte *)(lVar7 + 2);
          uVar4 = (uint)*(byte *)(lVar7 + 2);
          local_68[0] = 0;
          if (uVar4 != 0) {
            uVar6 = 0xffffffff;
            pbVar10 = (byte *)(lVar7 + 3);
            do {
              uVar6 = crc32b(uVar6,uVar4,0x4c11db7);
              uVar4 = (uint)*pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (uVar4 != 0);
            goto LAB_039d99bc;
          }
          goto LAB_039d99c0;
        }
      }
      else {
        lVar7 = (long)*(int *)((long)param_1 + 0x32c);
        lVar9 = param_1[100] - lVar7;
        plVar5 = (long *)(lVar9 + lVar7);
        if (*(long *)(lVar9 + 0x298) != param_2) {
          do {
            plVar5 = (long *)plVar5[1];
            lVar9 = (long)plVar5 - lVar7;
            if (lVar9 == (long)(param_1 + 99) - lVar7) goto LAB_039d98b0;
          } while (*(long *)(lVar9 + 0x298) != param_2);
          plVar5 = (long *)(lVar9 + lVar7);
        }
        if (*plVar5 != 0) {
          *(long *)(*plVar5 + 8) = plVar5[1];
        }
        if ((long *)plVar5[1] != (long *)0x0) {
          *(long *)plVar5[1] = *plVar5;
        }
        *plVar5 = 0;
        plVar5[1] = 0;
        *(int *)(param_1 + 0x65) = (int)param_1[0x65] + -1;
        plVar5 = *(long **)(lVar9 + 0x2c8);
        lVar7 = *(long *)(lVar9 + 0x298);
        puVar11 = *(undefined8 **)(lVar9 + 0x2c0);
        FUN_038f4ad0(lVar9 + 0x138);
        *(undefined **)(lVar9 + 0x138) = PTR_DAT_04bb2cd0 + 0x10;
        FUN_038f4940(lVar9 + 0x138);
        FUN_003490c0(lVar9 + 0x18);
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar9);
        if (puVar11 != (undefined8 *)0x0) {
          lVar7 = *(long *)(lVar7 + 0xa8);
          pbStack_58 = (byte *)(lVar7 + 2);
          uVar4 = (uint)*(byte *)(lVar7 + 2);
          local_68[0] = 0;
          if (uVar4 != 0) {
            uVar6 = 0xffffffff;
            pbVar10 = (byte *)(lVar7 + 3);
            do {
              uVar6 = crc32b(uVar6,uVar4,0x4c11db7);
              uVar4 = (uint)*pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (uVar4 != 0);
            goto LAB_039d99bc;
          }
          goto LAB_039d99c0;
        }
      }
    }
    else {
      lVar7 = (long)*(int *)((long)param_1 + 0x314);
      lVar9 = param_1[0x61] - lVar7;
      plVar5 = (long *)(lVar9 + lVar7);
      if (*(long *)(lVar9 + 0x298) != param_2) {
        do {
          plVar5 = (long *)plVar5[1];
          lVar9 = (long)plVar5 - lVar7;
          if (lVar9 == (long)(param_1 + 0x60) - lVar7) goto LAB_039d97a0;
        } while (*(long *)(lVar9 + 0x298) != param_2);
        plVar5 = (long *)(lVar9 + lVar7);
      }
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(int *)(param_1 + 0x62) = (int)param_1[0x62] + -1;
      plVar5 = *(long **)(lVar9 + 0x2c8);
      lVar7 = *(long *)(lVar9 + 0x298);
      puVar11 = *(undefined8 **)(lVar9 + 0x2c0);
      FUN_038f4ad0(lVar9 + 0x138);
      *(undefined **)(lVar9 + 0x138) = PTR_DAT_04bb2cd0 + 0x10;
      FUN_038f4940(lVar9 + 0x138);
      FUN_003490c0(lVar9 + 0x18);
      (**(code **)(*plVar5 + 0x38))(plVar5,lVar9);
      if (puVar11 != (undefined8 *)0x0) {
        lVar7 = *(long *)(lVar7 + 0xa8);
        pbStack_58 = (byte *)(lVar7 + 2);
        local_68[0] = (uint)*(byte *)(lVar7 + 2);
        if (*(byte *)(lVar7 + 2) != 0) {
          uVar6 = 0xffffffff;
          pbVar10 = (byte *)(lVar7 + 3);
          do {
            uVar6 = crc32b(uVar6,local_68[0],0x4c11db7);
            local_68[0] = (uint)*pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (local_68[0] != 0);
LAB_039d99bc:
          local_68[0] = ~uVar6;
        }
LAB_039d99c0:
        local_60 = &PTR_LAB_048f9770;
        (**(code **)*puVar11)(puVar11,local_68,0);
      }
    }
    if (*(long *)(param_2 + 0x168) != lVar9) goto LAB_039d99e8;
    *(undefined8 *)(param_2 + 0x168) = 0;
    bVar2 = *(byte *)(param_2 + 2);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    pbVar10 = (byte *)(*(long *)(param_2 + 0xa8) + 2);
    uVar4 = (uint)*pbVar10;
    if (*pbVar10 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      pbVar8 = (byte *)(*(long *)(param_2 + 0xa8) + 3);
      do {
        uVar6 = crc32b(uVar6,uVar4,0x4c11db7);
        uVar4 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar4 != 0);
      uVar6 = ~uVar6;
    }
    lVar9 = *param_1;
    local_60 = &PTR_LAB_048f9770;
    pbStack_58 = pbVar10;
    local_68[0] = uVar6;
    while (lVar9 != 0) {
      iVar3 = FUN_039dace0(local_68,lVar9 + 0x20);
      if (iVar3 < 0) {
        plVar5 = (long *)(lVar9 + 8);
      }
      else {
        if (iVar3 == 0) {
          local_60 = &PTR_LAB_048f9770;
          local_68[0] = uVar6;
          pbStack_58 = pbVar10;
          lVar9 = FUN_039dae40(*param_1,local_68);
          *param_1 = lVar9;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x18) = 1;
          }
          break;
        }
        plVar5 = (long *)(lVar9 + 0x10);
      }
      lVar9 = *plVar5;
    }
    bVar2 = *(byte *)(param_2 + 2);
  }
  if ((bVar2 & 1) == 0) goto LAB_039d9b4c;
  *(byte *)(param_2 + 2) = bVar2 & 0xfe;
  if ((bVar2 >> 1 & 1) != 0) {
    FUN_038fe2f0(param_2 + 0x48);
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
  }
  plVar5 = (long *)(param_2 + 8);
  if (*plVar5 == 0) goto LAB_039d9b4c;
  lVar9 = *(long *)(param_2 + 0x158);
  puVar11 = *(undefined8 **)(param_2 + 0x160);
  if (lVar9 == 0 && puVar11 == (undefined8 *)0x0) {
    FUN_039dced0(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffff8,plVar5);
    goto LAB_039d9b4c;
  }
  if (lVar9 == 0) {
    puVar1 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar1 = puVar11 + -0x2b;
    }
    FUN_039dd310(puVar1 + 1,*(undefined4 *)(puVar1 + 3));
    lVar9 = *(long *)(param_2 + 0x158);
    puVar11 = *(undefined8 **)(param_2 + 0x160);
    if (lVar9 != 0) goto LAB_039d9b28;
  }
  else {
LAB_039d9b28:
    *(undefined8 **)(lVar9 + 8) = puVar11;
    puVar11 = *(undefined8 **)(param_2 + 0x160);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = *(undefined8 *)(param_2 + 0x158);
  }
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *plVar5 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
LAB_039d9b4c:
  (**(code **)(*(long *)param_1[7] + 0x38))((long *)param_1[7],param_2);
  return;
}

